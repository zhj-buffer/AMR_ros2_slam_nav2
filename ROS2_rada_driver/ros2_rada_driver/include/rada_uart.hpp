#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

//#ifdef __cplusplus
extern "C" {
//#endif // __cplusplus

#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

 int uart_close(int Uart_fd);
 int uart_read(int Uart_fd, unsigned char *pData, int max_size);
 int uart_write(int Uart_fd, unsigned char *pData, int max_size);
 int uart_setup(int Uart_fd, int baud_rate);
 int uart_open(const char *pDevPath);

 int uart_close(int Uart_fd)
 {
	 if(Uart_fd > 0)
	 {
		 /* Clear the data in FIFO */
		 tcflush(Uart_fd, TCIFLUSH);
		 close(Uart_fd);
		 Uart_fd = 0;
	 }

	 return Uart_fd;
 }

 int uart_read(int Uart_fd, unsigned char *pData, int max_size)
 {
	 int ret = 0;

	 if(Uart_fd > 0)
	 {
		 ret = read(Uart_fd, pData, max_size);

		 if (ret < 0)
		 {
			 printf("Failed(%d:%s) to read from uart\n", errno, strerror(errno));
		 }
	 }
	 return ret;
 }

 int uart_write(int Uart_fd, unsigned char *pData, int max_size)
 {
	 int ret = 0;
	 if (Uart_fd > 0) {
		 ret = write(Uart_fd, pData, max_size);
		 if (ret < 0)
			 perror("write data");
		 else
			 printf("Write %d bytes done.\n", max_size);
	 }
	 return ret;
 }
 int uart_setup(int Uart_fd, int baud_rate)
 {
	 int    ret = 0;
	 struct termios termios_now;
	 struct termios termios_new;
	 struct termios termios_chk;

	 if( Uart_fd > 0 )
	 {
		 memset( &termios_now, 0x0, sizeof(struct termios));
		 memset( &termios_new, 0x0, sizeof(struct termios));
		 memset( &termios_chk, 0x0, sizeof(struct termios));
	 }

	 tcflush(Uart_fd, TCIOFLUSH);
	 tcgetattr(Uart_fd, &termios_new);
	 termios_new.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL | IXON);
	 termios_new.c_oflag &= ~OPOST;
	 termios_new.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);
	 termios_new.c_cflag &= ~(CSIZE | PARENB);
	 termios_new.c_cflag |= CS8;
	 termios_new.c_cflag &= ~CRTSCTS;
	 termios_new.c_cc[VTIME] = 0; /* Over than VTIME*0.1 second(s), read operation will return from blocked */
	 termios_new.c_cc[VMIN]  = 1; /* Over than VMIN bytes received, read operation will return from blocked */
	 tcsetattr(Uart_fd, TCSANOW, &termios_new);
	 tcflush(Uart_fd, TCIOFLUSH);
	 tcsetattr(Uart_fd, TCSANOW, &termios_new);
	 tcflush(Uart_fd, TCIOFLUSH);
	 tcflush(Uart_fd, TCIOFLUSH);
	 cfsetospeed(&termios_new, baud_rate);
	 cfsetispeed(&termios_new, baud_rate);
	 tcsetattr(Uart_fd, TCSANOW, &termios_new);

	 if ( ret == 0 )
	 {
		 /* Write back finished, so read the settings again to check the content */
		 ret = tcgetattr( Uart_fd, &termios_chk );
		 if( ret == 0 )
		 {
			 if( termios_new.c_cflag != termios_chk.c_cflag )
			 {
				 printf("Failed to set the parameters of termios\n");
			 } else
			 {
				 printf("Set the paremeters successfully\n");
				 ret = 0;
			 }
		 }
	 }
	 return ret;
 }
 int uart_open(const char *pDevPath)
 {
	
	int  Uart_fd = open( pDevPath, O_RDWR);
	 if ( Uart_fd < 0 )
	 {
		 printf("Failed(%d:%s) to open uart(%s).\n", errno, strerror(errno), pDevPath);
		 return -1;
	 }
	 return Uart_fd;
 }


//#ifdef __cplusplus
}
//#endif // __cplusplus

#endif // UART_H_INCLUDED
