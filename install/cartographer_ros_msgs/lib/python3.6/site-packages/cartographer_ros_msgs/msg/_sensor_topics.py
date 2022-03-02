# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/SensorTopics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorTopics(type):
    """Metaclass of message 'SensorTopics'."""

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
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartographer_ros_msgs.msg.SensorTopics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_topics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_topics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_topics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_topics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_topics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorTopics(metaclass=Metaclass_SensorTopics):
    """Message class 'SensorTopics'."""

    __slots__ = [
        '_laser_scan_topic',
        '_multi_echo_laser_scan_topic',
        '_point_cloud2_topic',
        '_imu_topic',
        '_odometry_topic',
        '_nav_sat_fix_topic',
        '_landmark_topic',
    ]

    _fields_and_field_types = {
        'laser_scan_topic': 'string',
        'multi_echo_laser_scan_topic': 'string',
        'point_cloud2_topic': 'string',
        'imu_topic': 'string',
        'odometry_topic': 'string',
        'nav_sat_fix_topic': 'string',
        'landmark_topic': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.laser_scan_topic = kwargs.get('laser_scan_topic', str())
        self.multi_echo_laser_scan_topic = kwargs.get('multi_echo_laser_scan_topic', str())
        self.point_cloud2_topic = kwargs.get('point_cloud2_topic', str())
        self.imu_topic = kwargs.get('imu_topic', str())
        self.odometry_topic = kwargs.get('odometry_topic', str())
        self.nav_sat_fix_topic = kwargs.get('nav_sat_fix_topic', str())
        self.landmark_topic = kwargs.get('landmark_topic', str())

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
        if self.laser_scan_topic != other.laser_scan_topic:
            return False
        if self.multi_echo_laser_scan_topic != other.multi_echo_laser_scan_topic:
            return False
        if self.point_cloud2_topic != other.point_cloud2_topic:
            return False
        if self.imu_topic != other.imu_topic:
            return False
        if self.odometry_topic != other.odometry_topic:
            return False
        if self.nav_sat_fix_topic != other.nav_sat_fix_topic:
            return False
        if self.landmark_topic != other.landmark_topic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def laser_scan_topic(self):
        """Message field 'laser_scan_topic'."""
        return self._laser_scan_topic

    @laser_scan_topic.setter
    def laser_scan_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'laser_scan_topic' field must be of type 'str'"
        self._laser_scan_topic = value

    @property
    def multi_echo_laser_scan_topic(self):
        """Message field 'multi_echo_laser_scan_topic'."""
        return self._multi_echo_laser_scan_topic

    @multi_echo_laser_scan_topic.setter
    def multi_echo_laser_scan_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'multi_echo_laser_scan_topic' field must be of type 'str'"
        self._multi_echo_laser_scan_topic = value

    @property
    def point_cloud2_topic(self):
        """Message field 'point_cloud2_topic'."""
        return self._point_cloud2_topic

    @point_cloud2_topic.setter
    def point_cloud2_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'point_cloud2_topic' field must be of type 'str'"
        self._point_cloud2_topic = value

    @property
    def imu_topic(self):
        """Message field 'imu_topic'."""
        return self._imu_topic

    @imu_topic.setter
    def imu_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'imu_topic' field must be of type 'str'"
        self._imu_topic = value

    @property
    def odometry_topic(self):
        """Message field 'odometry_topic'."""
        return self._odometry_topic

    @odometry_topic.setter
    def odometry_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'odometry_topic' field must be of type 'str'"
        self._odometry_topic = value

    @property
    def nav_sat_fix_topic(self):
        """Message field 'nav_sat_fix_topic'."""
        return self._nav_sat_fix_topic

    @nav_sat_fix_topic.setter
    def nav_sat_fix_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nav_sat_fix_topic' field must be of type 'str'"
        self._nav_sat_fix_topic = value

    @property
    def landmark_topic(self):
        """Message field 'landmark_topic'."""
        return self._landmark_topic

    @landmark_topic.setter
    def landmark_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'landmark_topic' field must be of type 'str'"
        self._landmark_topic = value
