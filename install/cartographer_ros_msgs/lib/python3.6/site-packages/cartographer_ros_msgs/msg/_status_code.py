# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/StatusCode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StatusCode(type):
    """Metaclass of message 'StatusCode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'CANCELLED': 1,
        'UNKNOWN': 2,
        'INVALID_ARGUMENT': 3,
        'DEADLINE_EXCEEDED': 4,
        'NOT_FOUND': 5,
        'ALREADY_EXISTS': 6,
        'PERMISSION_DENIED': 7,
        'RESOURCE_EXHAUSTED': 8,
        'FAILED_PRECONDITION': 9,
        'ABORTED': 10,
        'OUT_OF_RANGE': 11,
        'UNIMPLEMENTED': 12,
        'INTERNAL': 13,
        'UNAVAILABLE': 14,
        'DATA_LOSS': 15,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartographer_ros_msgs.msg.StatusCode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status_code
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status_code
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status_code
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status_code
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status_code

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'CANCELLED': cls.__constants['CANCELLED'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'INVALID_ARGUMENT': cls.__constants['INVALID_ARGUMENT'],
            'DEADLINE_EXCEEDED': cls.__constants['DEADLINE_EXCEEDED'],
            'NOT_FOUND': cls.__constants['NOT_FOUND'],
            'ALREADY_EXISTS': cls.__constants['ALREADY_EXISTS'],
            'PERMISSION_DENIED': cls.__constants['PERMISSION_DENIED'],
            'RESOURCE_EXHAUSTED': cls.__constants['RESOURCE_EXHAUSTED'],
            'FAILED_PRECONDITION': cls.__constants['FAILED_PRECONDITION'],
            'ABORTED': cls.__constants['ABORTED'],
            'OUT_OF_RANGE': cls.__constants['OUT_OF_RANGE'],
            'UNIMPLEMENTED': cls.__constants['UNIMPLEMENTED'],
            'INTERNAL': cls.__constants['INTERNAL'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'DATA_LOSS': cls.__constants['DATA_LOSS'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_StatusCode.__constants['OK']

    @property
    def CANCELLED(self):
        """Message constant 'CANCELLED'."""
        return Metaclass_StatusCode.__constants['CANCELLED']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_StatusCode.__constants['UNKNOWN']

    @property
    def INVALID_ARGUMENT(self):
        """Message constant 'INVALID_ARGUMENT'."""
        return Metaclass_StatusCode.__constants['INVALID_ARGUMENT']

    @property
    def DEADLINE_EXCEEDED(self):
        """Message constant 'DEADLINE_EXCEEDED'."""
        return Metaclass_StatusCode.__constants['DEADLINE_EXCEEDED']

    @property
    def NOT_FOUND(self):
        """Message constant 'NOT_FOUND'."""
        return Metaclass_StatusCode.__constants['NOT_FOUND']

    @property
    def ALREADY_EXISTS(self):
        """Message constant 'ALREADY_EXISTS'."""
        return Metaclass_StatusCode.__constants['ALREADY_EXISTS']

    @property
    def PERMISSION_DENIED(self):
        """Message constant 'PERMISSION_DENIED'."""
        return Metaclass_StatusCode.__constants['PERMISSION_DENIED']

    @property
    def RESOURCE_EXHAUSTED(self):
        """Message constant 'RESOURCE_EXHAUSTED'."""
        return Metaclass_StatusCode.__constants['RESOURCE_EXHAUSTED']

    @property
    def FAILED_PRECONDITION(self):
        """Message constant 'FAILED_PRECONDITION'."""
        return Metaclass_StatusCode.__constants['FAILED_PRECONDITION']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass_StatusCode.__constants['ABORTED']

    @property
    def OUT_OF_RANGE(self):
        """Message constant 'OUT_OF_RANGE'."""
        return Metaclass_StatusCode.__constants['OUT_OF_RANGE']

    @property
    def UNIMPLEMENTED(self):
        """Message constant 'UNIMPLEMENTED'."""
        return Metaclass_StatusCode.__constants['UNIMPLEMENTED']

    @property
    def INTERNAL(self):
        """Message constant 'INTERNAL'."""
        return Metaclass_StatusCode.__constants['INTERNAL']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_StatusCode.__constants['UNAVAILABLE']

    @property
    def DATA_LOSS(self):
        """Message constant 'DATA_LOSS'."""
        return Metaclass_StatusCode.__constants['DATA_LOSS']


class StatusCode(metaclass=Metaclass_StatusCode):
    """
    Message class 'StatusCode'.

    Constants:
      OK
      CANCELLED
      UNKNOWN
      INVALID_ARGUMENT
      DEADLINE_EXCEEDED
      NOT_FOUND
      ALREADY_EXISTS
      PERMISSION_DENIED
      RESOURCE_EXHAUSTED
      FAILED_PRECONDITION
      ABORTED
      OUT_OF_RANGE
      UNIMPLEMENTED
      INTERNAL
      UNAVAILABLE
      DATA_LOSS
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
