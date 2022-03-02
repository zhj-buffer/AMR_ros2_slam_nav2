# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_drive_package_msg:msg/BmsFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsFb(type):
    """Metaclass of message 'BmsFb'."""

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
            module = import_type_support('ros2_drive_package_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_drive_package_msg.msg.BmsFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsFb(metaclass=Metaclass_BmsFb):
    """Message class 'BmsFb'."""

    __slots__ = [
        '_bms_fb_voltage',
        '_bms_fb_current',
        '_bms_fb_remaining_capacity',
    ]

    _fields_and_field_types = {
        'bms_fb_voltage': 'float',
        'bms_fb_current': 'float',
        'bms_fb_remaining_capacity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bms_fb_voltage = kwargs.get('bms_fb_voltage', float())
        self.bms_fb_current = kwargs.get('bms_fb_current', float())
        self.bms_fb_remaining_capacity = kwargs.get('bms_fb_remaining_capacity', float())

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
        if self.bms_fb_voltage != other.bms_fb_voltage:
            return False
        if self.bms_fb_current != other.bms_fb_current:
            return False
        if self.bms_fb_remaining_capacity != other.bms_fb_remaining_capacity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bms_fb_voltage(self):
        """Message field 'bms_fb_voltage'."""
        return self._bms_fb_voltage

    @bms_fb_voltage.setter
    def bms_fb_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bms_fb_voltage' field must be of type 'float'"
        self._bms_fb_voltage = value

    @property
    def bms_fb_current(self):
        """Message field 'bms_fb_current'."""
        return self._bms_fb_current

    @bms_fb_current.setter
    def bms_fb_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bms_fb_current' field must be of type 'float'"
        self._bms_fb_current = value

    @property
    def bms_fb_remaining_capacity(self):
        """Message field 'bms_fb_remaining_capacity'."""
        return self._bms_fb_remaining_capacity

    @bms_fb_remaining_capacity.setter
    def bms_fb_remaining_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bms_fb_remaining_capacity' field must be of type 'float'"
        self._bms_fb_remaining_capacity = value
