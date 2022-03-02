# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_drive_package_msg:msg/CtrlFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CtrlFb(type):
    """Metaclass of message 'CtrlFb'."""

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
                'ros2_drive_package_msg.msg.CtrlFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ctrl_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ctrl_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ctrl_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ctrl_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ctrl_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CtrlFb(metaclass=Metaclass_CtrlFb):
    """Message class 'CtrlFb'."""

    __slots__ = [
        '_ctrl_fb_target_gear',
        '_ctrl_fb_linear',
        '_ctrl_fb_angular',
    ]

    _fields_and_field_types = {
        'ctrl_fb_target_gear': 'uint8',
        'ctrl_fb_linear': 'float',
        'ctrl_fb_angular': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ctrl_fb_target_gear = kwargs.get('ctrl_fb_target_gear', int())
        self.ctrl_fb_linear = kwargs.get('ctrl_fb_linear', float())
        self.ctrl_fb_angular = kwargs.get('ctrl_fb_angular', float())

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
        if self.ctrl_fb_target_gear != other.ctrl_fb_target_gear:
            return False
        if self.ctrl_fb_linear != other.ctrl_fb_linear:
            return False
        if self.ctrl_fb_angular != other.ctrl_fb_angular:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ctrl_fb_target_gear(self):
        """Message field 'ctrl_fb_target_gear'."""
        return self._ctrl_fb_target_gear

    @ctrl_fb_target_gear.setter
    def ctrl_fb_target_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctrl_fb_target_gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ctrl_fb_target_gear' field must be an unsigned integer in [0, 255]"
        self._ctrl_fb_target_gear = value

    @property
    def ctrl_fb_linear(self):
        """Message field 'ctrl_fb_linear'."""
        return self._ctrl_fb_linear

    @ctrl_fb_linear.setter
    def ctrl_fb_linear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ctrl_fb_linear' field must be of type 'float'"
        self._ctrl_fb_linear = value

    @property
    def ctrl_fb_angular(self):
        """Message field 'ctrl_fb_angular'."""
        return self._ctrl_fb_angular

    @ctrl_fb_angular.setter
    def ctrl_fb_angular(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ctrl_fb_angular' field must be of type 'float'"
        self._ctrl_fb_angular = value
