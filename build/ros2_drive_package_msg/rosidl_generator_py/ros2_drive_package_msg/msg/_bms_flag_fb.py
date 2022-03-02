# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsFlagFb(type):
    """Metaclass of message 'BmsFlagFb'."""

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
                'ros2_drive_package_msg.msg.BmsFlagFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_flag_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_flag_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_flag_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_flag_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_flag_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsFlagFb(metaclass=Metaclass_BmsFlagFb):
    """Message class 'BmsFlagFb'."""

    __slots__ = [
        '_bms_flag_fb_soc',
        '_bms_flag_fb_single_ov',
        '_bms_flag_fb_single_uv',
        '_bms_flag_fb_ov',
        '_bms_flag_fb_uv',
        '_bms_flag_fb_charge_ot',
        '_bms_flag_fb_charge_ut',
        '_bms_flag_fb_discharge_ot',
        '_bms_flag_fb_discharge_ut',
        '_bms_flag_fb_charge_oc',
        '_bms_flag_fb_discharge_oc',
        '_bms_flag_fb_short',
        '_bms_flag_fb_ic_error',
        '_bms_flag_fb_lock_mos',
        '_bms_flag_fb_charge_flag',
        '_bms_flag_fb_hight_temperature',
        '_bms_flag_fb_low_temperature',
    ]

    _fields_and_field_types = {
        'bms_flag_fb_soc': 'uint8',
        'bms_flag_fb_single_ov': 'boolean',
        'bms_flag_fb_single_uv': 'boolean',
        'bms_flag_fb_ov': 'boolean',
        'bms_flag_fb_uv': 'boolean',
        'bms_flag_fb_charge_ot': 'boolean',
        'bms_flag_fb_charge_ut': 'boolean',
        'bms_flag_fb_discharge_ot': 'boolean',
        'bms_flag_fb_discharge_ut': 'boolean',
        'bms_flag_fb_charge_oc': 'boolean',
        'bms_flag_fb_discharge_oc': 'boolean',
        'bms_flag_fb_short': 'boolean',
        'bms_flag_fb_ic_error': 'boolean',
        'bms_flag_fb_lock_mos': 'boolean',
        'bms_flag_fb_charge_flag': 'boolean',
        'bms_flag_fb_hight_temperature': 'float',
        'bms_flag_fb_low_temperature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bms_flag_fb_soc = kwargs.get('bms_flag_fb_soc', int())
        self.bms_flag_fb_single_ov = kwargs.get('bms_flag_fb_single_ov', bool())
        self.bms_flag_fb_single_uv = kwargs.get('bms_flag_fb_single_uv', bool())
        self.bms_flag_fb_ov = kwargs.get('bms_flag_fb_ov', bool())
        self.bms_flag_fb_uv = kwargs.get('bms_flag_fb_uv', bool())
        self.bms_flag_fb_charge_ot = kwargs.get('bms_flag_fb_charge_ot', bool())
        self.bms_flag_fb_charge_ut = kwargs.get('bms_flag_fb_charge_ut', bool())
        self.bms_flag_fb_discharge_ot = kwargs.get('bms_flag_fb_discharge_ot', bool())
        self.bms_flag_fb_discharge_ut = kwargs.get('bms_flag_fb_discharge_ut', bool())
        self.bms_flag_fb_charge_oc = kwargs.get('bms_flag_fb_charge_oc', bool())
        self.bms_flag_fb_discharge_oc = kwargs.get('bms_flag_fb_discharge_oc', bool())
        self.bms_flag_fb_short = kwargs.get('bms_flag_fb_short', bool())
        self.bms_flag_fb_ic_error = kwargs.get('bms_flag_fb_ic_error', bool())
        self.bms_flag_fb_lock_mos = kwargs.get('bms_flag_fb_lock_mos', bool())
        self.bms_flag_fb_charge_flag = kwargs.get('bms_flag_fb_charge_flag', bool())
        self.bms_flag_fb_hight_temperature = kwargs.get('bms_flag_fb_hight_temperature', float())
        self.bms_flag_fb_low_temperature = kwargs.get('bms_flag_fb_low_temperature', float())

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
        if self.bms_flag_fb_soc != other.bms_flag_fb_soc:
            return False
        if self.bms_flag_fb_single_ov != other.bms_flag_fb_single_ov:
            return False
        if self.bms_flag_fb_single_uv != other.bms_flag_fb_single_uv:
            return False
        if self.bms_flag_fb_ov != other.bms_flag_fb_ov:
            return False
        if self.bms_flag_fb_uv != other.bms_flag_fb_uv:
            return False
        if self.bms_flag_fb_charge_ot != other.bms_flag_fb_charge_ot:
            return False
        if self.bms_flag_fb_charge_ut != other.bms_flag_fb_charge_ut:
            return False
        if self.bms_flag_fb_discharge_ot != other.bms_flag_fb_discharge_ot:
            return False
        if self.bms_flag_fb_discharge_ut != other.bms_flag_fb_discharge_ut:
            return False
        if self.bms_flag_fb_charge_oc != other.bms_flag_fb_charge_oc:
            return False
        if self.bms_flag_fb_discharge_oc != other.bms_flag_fb_discharge_oc:
            return False
        if self.bms_flag_fb_short != other.bms_flag_fb_short:
            return False
        if self.bms_flag_fb_ic_error != other.bms_flag_fb_ic_error:
            return False
        if self.bms_flag_fb_lock_mos != other.bms_flag_fb_lock_mos:
            return False
        if self.bms_flag_fb_charge_flag != other.bms_flag_fb_charge_flag:
            return False
        if self.bms_flag_fb_hight_temperature != other.bms_flag_fb_hight_temperature:
            return False
        if self.bms_flag_fb_low_temperature != other.bms_flag_fb_low_temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bms_flag_fb_soc(self):
        """Message field 'bms_flag_fb_soc'."""
        return self._bms_flag_fb_soc

    @bms_flag_fb_soc.setter
    def bms_flag_fb_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_flag_fb_soc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_flag_fb_soc' field must be an unsigned integer in [0, 255]"
        self._bms_flag_fb_soc = value

    @property
    def bms_flag_fb_single_ov(self):
        """Message field 'bms_flag_fb_single_ov'."""
        return self._bms_flag_fb_single_ov

    @bms_flag_fb_single_ov.setter
    def bms_flag_fb_single_ov(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_single_ov' field must be of type 'bool'"
        self._bms_flag_fb_single_ov = value

    @property
    def bms_flag_fb_single_uv(self):
        """Message field 'bms_flag_fb_single_uv'."""
        return self._bms_flag_fb_single_uv

    @bms_flag_fb_single_uv.setter
    def bms_flag_fb_single_uv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_single_uv' field must be of type 'bool'"
        self._bms_flag_fb_single_uv = value

    @property
    def bms_flag_fb_ov(self):
        """Message field 'bms_flag_fb_ov'."""
        return self._bms_flag_fb_ov

    @bms_flag_fb_ov.setter
    def bms_flag_fb_ov(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_ov' field must be of type 'bool'"
        self._bms_flag_fb_ov = value

    @property
    def bms_flag_fb_uv(self):
        """Message field 'bms_flag_fb_uv'."""
        return self._bms_flag_fb_uv

    @bms_flag_fb_uv.setter
    def bms_flag_fb_uv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_uv' field must be of type 'bool'"
        self._bms_flag_fb_uv = value

    @property
    def bms_flag_fb_charge_ot(self):
        """Message field 'bms_flag_fb_charge_ot'."""
        return self._bms_flag_fb_charge_ot

    @bms_flag_fb_charge_ot.setter
    def bms_flag_fb_charge_ot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_charge_ot' field must be of type 'bool'"
        self._bms_flag_fb_charge_ot = value

    @property
    def bms_flag_fb_charge_ut(self):
        """Message field 'bms_flag_fb_charge_ut'."""
        return self._bms_flag_fb_charge_ut

    @bms_flag_fb_charge_ut.setter
    def bms_flag_fb_charge_ut(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_charge_ut' field must be of type 'bool'"
        self._bms_flag_fb_charge_ut = value

    @property
    def bms_flag_fb_discharge_ot(self):
        """Message field 'bms_flag_fb_discharge_ot'."""
        return self._bms_flag_fb_discharge_ot

    @bms_flag_fb_discharge_ot.setter
    def bms_flag_fb_discharge_ot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_discharge_ot' field must be of type 'bool'"
        self._bms_flag_fb_discharge_ot = value

    @property
    def bms_flag_fb_discharge_ut(self):
        """Message field 'bms_flag_fb_discharge_ut'."""
        return self._bms_flag_fb_discharge_ut

    @bms_flag_fb_discharge_ut.setter
    def bms_flag_fb_discharge_ut(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_discharge_ut' field must be of type 'bool'"
        self._bms_flag_fb_discharge_ut = value

    @property
    def bms_flag_fb_charge_oc(self):
        """Message field 'bms_flag_fb_charge_oc'."""
        return self._bms_flag_fb_charge_oc

    @bms_flag_fb_charge_oc.setter
    def bms_flag_fb_charge_oc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_charge_oc' field must be of type 'bool'"
        self._bms_flag_fb_charge_oc = value

    @property
    def bms_flag_fb_discharge_oc(self):
        """Message field 'bms_flag_fb_discharge_oc'."""
        return self._bms_flag_fb_discharge_oc

    @bms_flag_fb_discharge_oc.setter
    def bms_flag_fb_discharge_oc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_discharge_oc' field must be of type 'bool'"
        self._bms_flag_fb_discharge_oc = value

    @property
    def bms_flag_fb_short(self):
        """Message field 'bms_flag_fb_short'."""
        return self._bms_flag_fb_short

    @bms_flag_fb_short.setter
    def bms_flag_fb_short(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_short' field must be of type 'bool'"
        self._bms_flag_fb_short = value

    @property
    def bms_flag_fb_ic_error(self):
        """Message field 'bms_flag_fb_ic_error'."""
        return self._bms_flag_fb_ic_error

    @bms_flag_fb_ic_error.setter
    def bms_flag_fb_ic_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_ic_error' field must be of type 'bool'"
        self._bms_flag_fb_ic_error = value

    @property
    def bms_flag_fb_lock_mos(self):
        """Message field 'bms_flag_fb_lock_mos'."""
        return self._bms_flag_fb_lock_mos

    @bms_flag_fb_lock_mos.setter
    def bms_flag_fb_lock_mos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_lock_mos' field must be of type 'bool'"
        self._bms_flag_fb_lock_mos = value

    @property
    def bms_flag_fb_charge_flag(self):
        """Message field 'bms_flag_fb_charge_flag'."""
        return self._bms_flag_fb_charge_flag

    @bms_flag_fb_charge_flag.setter
    def bms_flag_fb_charge_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_flag_fb_charge_flag' field must be of type 'bool'"
        self._bms_flag_fb_charge_flag = value

    @property
    def bms_flag_fb_hight_temperature(self):
        """Message field 'bms_flag_fb_hight_temperature'."""
        return self._bms_flag_fb_hight_temperature

    @bms_flag_fb_hight_temperature.setter
    def bms_flag_fb_hight_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bms_flag_fb_hight_temperature' field must be of type 'float'"
        self._bms_flag_fb_hight_temperature = value

    @property
    def bms_flag_fb_low_temperature(self):
        """Message field 'bms_flag_fb_low_temperature'."""
        return self._bms_flag_fb_low_temperature

    @bms_flag_fb_low_temperature.setter
    def bms_flag_fb_low_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bms_flag_fb_low_temperature' field must be of type 'float'"
        self._bms_flag_fb_low_temperature = value
