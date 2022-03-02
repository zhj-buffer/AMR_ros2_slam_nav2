# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_rada_msg:msg/Rada.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rada(type):
    """Metaclass of message 'Rada'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_rada_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_rada_msg.msg.Rada')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rada
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rada
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rada
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rada
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rada

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rada(metaclass=Metaclass_Rada):
    """Message class 'Rada'."""

    __slots__ = [
        '_r1',
        '_r2',
        '_r3',
        '_r4',
        '_crc',
    ]

    _fields_and_field_types = {
        'r1': 'uint32',
        'r2': 'uint32',
        'r3': 'uint32',
        'r4': 'uint32',
        'crc': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.r1 = kwargs.get('r1', int())
        self.r2 = kwargs.get('r2', int())
        self.r3 = kwargs.get('r3', int())
        self.r4 = kwargs.get('r4', int())
        self.crc = kwargs.get('crc', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.r1 != other.r1:
            return False
        if self.r2 != other.r2:
            return False
        if self.r3 != other.r3:
            return False
        if self.r4 != other.r4:
            return False
        if self.crc != other.crc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def r1(self):
        """Message field 'r1'."""
        return self._r1

    @r1.setter
    def r1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'r1' field must be an unsigned integer in [0, 4294967295]"
        self._r1 = value

    @property
    def r2(self):
        """Message field 'r2'."""
        return self._r2

    @r2.setter
    def r2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'r2' field must be an unsigned integer in [0, 4294967295]"
        self._r2 = value

    @property
    def r3(self):
        """Message field 'r3'."""
        return self._r3

    @r3.setter
    def r3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'r3' field must be an unsigned integer in [0, 4294967295]"
        self._r3 = value

    @property
    def r4(self):
        """Message field 'r4'."""
        return self._r4

    @r4.setter
    def r4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'r4' field must be an unsigned integer in [0, 4294967295]"
        self._r4 = value

    @property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'crc' field must be an unsigned integer in [0, 4294967295]"
        self._crc = value
