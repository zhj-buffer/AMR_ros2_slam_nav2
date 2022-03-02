# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_drive_package_msg:msg/IoCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IoCmd(type):
    """Metaclass of message 'IoCmd'."""

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
                'ros2_drive_package_msg.msg.IoCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__io_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__io_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__io_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__io_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__io_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IoCmd(metaclass=Metaclass_IoCmd):
    """Message class 'IoCmd'."""

    __slots__ = [
        '_io_cmd_lamp_ctrl',
        '_io_cmd_unlock',
        '_io_cmd_lower_beam_headlamp',
        '_io_cmd_upper_beam_headlamp',
        '_io_cmd_turn_lamp',
        '_io_cmd_braking_lamp',
        '_io_cmd_clearance_lamp',
        '_io_cmd_fog_lamp',
        '_io_cmd_speaker',
    ]

    _fields_and_field_types = {
        'io_cmd_lamp_ctrl': 'boolean',
        'io_cmd_unlock': 'boolean',
        'io_cmd_lower_beam_headlamp': 'boolean',
        'io_cmd_upper_beam_headlamp': 'boolean',
        'io_cmd_turn_lamp': 'uint8',
        'io_cmd_braking_lamp': 'boolean',
        'io_cmd_clearance_lamp': 'boolean',
        'io_cmd_fog_lamp': 'boolean',
        'io_cmd_speaker': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.io_cmd_lamp_ctrl = kwargs.get('io_cmd_lamp_ctrl', bool())
        self.io_cmd_unlock = kwargs.get('io_cmd_unlock', bool())
        self.io_cmd_lower_beam_headlamp = kwargs.get('io_cmd_lower_beam_headlamp', bool())
        self.io_cmd_upper_beam_headlamp = kwargs.get('io_cmd_upper_beam_headlamp', bool())
        self.io_cmd_turn_lamp = kwargs.get('io_cmd_turn_lamp', int())
        self.io_cmd_braking_lamp = kwargs.get('io_cmd_braking_lamp', bool())
        self.io_cmd_clearance_lamp = kwargs.get('io_cmd_clearance_lamp', bool())
        self.io_cmd_fog_lamp = kwargs.get('io_cmd_fog_lamp', bool())
        self.io_cmd_speaker = kwargs.get('io_cmd_speaker', bool())

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
        if self.io_cmd_lamp_ctrl != other.io_cmd_lamp_ctrl:
            return False
        if self.io_cmd_unlock != other.io_cmd_unlock:
            return False
        if self.io_cmd_lower_beam_headlamp != other.io_cmd_lower_beam_headlamp:
            return False
        if self.io_cmd_upper_beam_headlamp != other.io_cmd_upper_beam_headlamp:
            return False
        if self.io_cmd_turn_lamp != other.io_cmd_turn_lamp:
            return False
        if self.io_cmd_braking_lamp != other.io_cmd_braking_lamp:
            return False
        if self.io_cmd_clearance_lamp != other.io_cmd_clearance_lamp:
            return False
        if self.io_cmd_fog_lamp != other.io_cmd_fog_lamp:
            return False
        if self.io_cmd_speaker != other.io_cmd_speaker:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def io_cmd_lamp_ctrl(self):
        """Message field 'io_cmd_lamp_ctrl'."""
        return self._io_cmd_lamp_ctrl

    @io_cmd_lamp_ctrl.setter
    def io_cmd_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_lamp_ctrl' field must be of type 'bool'"
        self._io_cmd_lamp_ctrl = value

    @property
    def io_cmd_unlock(self):
        """Message field 'io_cmd_unlock'."""
        return self._io_cmd_unlock

    @io_cmd_unlock.setter
    def io_cmd_unlock(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_unlock' field must be of type 'bool'"
        self._io_cmd_unlock = value

    @property
    def io_cmd_lower_beam_headlamp(self):
        """Message field 'io_cmd_lower_beam_headlamp'."""
        return self._io_cmd_lower_beam_headlamp

    @io_cmd_lower_beam_headlamp.setter
    def io_cmd_lower_beam_headlamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_lower_beam_headlamp' field must be of type 'bool'"
        self._io_cmd_lower_beam_headlamp = value

    @property
    def io_cmd_upper_beam_headlamp(self):
        """Message field 'io_cmd_upper_beam_headlamp'."""
        return self._io_cmd_upper_beam_headlamp

    @io_cmd_upper_beam_headlamp.setter
    def io_cmd_upper_beam_headlamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_upper_beam_headlamp' field must be of type 'bool'"
        self._io_cmd_upper_beam_headlamp = value

    @property
    def io_cmd_turn_lamp(self):
        """Message field 'io_cmd_turn_lamp'."""
        return self._io_cmd_turn_lamp

    @io_cmd_turn_lamp.setter
    def io_cmd_turn_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'io_cmd_turn_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'io_cmd_turn_lamp' field must be an unsigned integer in [0, 255]"
        self._io_cmd_turn_lamp = value

    @property
    def io_cmd_braking_lamp(self):
        """Message field 'io_cmd_braking_lamp'."""
        return self._io_cmd_braking_lamp

    @io_cmd_braking_lamp.setter
    def io_cmd_braking_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_braking_lamp' field must be of type 'bool'"
        self._io_cmd_braking_lamp = value

    @property
    def io_cmd_clearance_lamp(self):
        """Message field 'io_cmd_clearance_lamp'."""
        return self._io_cmd_clearance_lamp

    @io_cmd_clearance_lamp.setter
    def io_cmd_clearance_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_clearance_lamp' field must be of type 'bool'"
        self._io_cmd_clearance_lamp = value

    @property
    def io_cmd_fog_lamp(self):
        """Message field 'io_cmd_fog_lamp'."""
        return self._io_cmd_fog_lamp

    @io_cmd_fog_lamp.setter
    def io_cmd_fog_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_fog_lamp' field must be of type 'bool'"
        self._io_cmd_fog_lamp = value

    @property
    def io_cmd_speaker(self):
        """Message field 'io_cmd_speaker'."""
        return self._io_cmd_speaker

    @io_cmd_speaker.setter
    def io_cmd_speaker(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_cmd_speaker' field must be of type 'bool'"
        self._io_cmd_speaker = value
