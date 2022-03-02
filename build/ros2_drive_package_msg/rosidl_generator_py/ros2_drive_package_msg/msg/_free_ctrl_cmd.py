# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_drive_package_msg:msg/FreeCtrlCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FreeCtrlCmd(type):
    """Metaclass of message 'FreeCtrlCmd'."""

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
                'ros2_drive_package_msg.msg.FreeCtrlCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__free_ctrl_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__free_ctrl_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__free_ctrl_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__free_ctrl_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__free_ctrl_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FreeCtrlCmd(metaclass=Metaclass_FreeCtrlCmd):
    """Message class 'FreeCtrlCmd'."""

    __slots__ = [
        '_ctrl_cmd_gear',
        '_free_ctrl_cmd_velocity_l',
        '_free_ctrl_cmd_velocity_r',
    ]

    _fields_and_field_types = {
        'ctrl_cmd_gear': 'uint8',
        'free_ctrl_cmd_velocity_l': 'float',
        'free_ctrl_cmd_velocity_r': 'float',
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
        self.ctrl_cmd_gear = kwargs.get('ctrl_cmd_gear', int())
        self.free_ctrl_cmd_velocity_l = kwargs.get('free_ctrl_cmd_velocity_l', float())
        self.free_ctrl_cmd_velocity_r = kwargs.get('free_ctrl_cmd_velocity_r', float())

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
        if self.ctrl_cmd_gear != other.ctrl_cmd_gear:
            return False
        if self.free_ctrl_cmd_velocity_l != other.free_ctrl_cmd_velocity_l:
            return False
        if self.free_ctrl_cmd_velocity_r != other.free_ctrl_cmd_velocity_r:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ctrl_cmd_gear(self):
        """Message field 'ctrl_cmd_gear'."""
        return self._ctrl_cmd_gear

    @ctrl_cmd_gear.setter
    def ctrl_cmd_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctrl_cmd_gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ctrl_cmd_gear' field must be an unsigned integer in [0, 255]"
        self._ctrl_cmd_gear = value

    @property
    def free_ctrl_cmd_velocity_l(self):
        """Message field 'free_ctrl_cmd_velocity_l'."""
        return self._free_ctrl_cmd_velocity_l

    @free_ctrl_cmd_velocity_l.setter
    def free_ctrl_cmd_velocity_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'free_ctrl_cmd_velocity_l' field must be of type 'float'"
        self._free_ctrl_cmd_velocity_l = value

    @property
    def free_ctrl_cmd_velocity_r(self):
        """Message field 'free_ctrl_cmd_velocity_r'."""
        return self._free_ctrl_cmd_velocity_r

    @free_ctrl_cmd_velocity_r.setter
    def free_ctrl_cmd_velocity_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'free_ctrl_cmd_velocity_r' field must be of type 'float'"
        self._free_ctrl_cmd_velocity_r = value
