# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryOptions(type):
    """Metaclass of message 'TrajectoryOptions'."""

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
                'cartographer_ros_msgs.msg.TrajectoryOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_options

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryOptions(metaclass=Metaclass_TrajectoryOptions):
    """Message class 'TrajectoryOptions'."""

    __slots__ = [
        '_tracking_frame',
        '_published_frame',
        '_odom_frame',
        '_provide_odom_frame',
        '_use_odometry',
        '_use_nav_sat',
        '_use_landmarks',
        '_publish_frame_projected_to_2d',
        '_num_laser_scans',
        '_num_multi_echo_laser_scans',
        '_num_subdivisions_per_laser_scan',
        '_num_point_clouds',
        '_rangefinder_sampling_ratio',
        '_odometry_sampling_ratio',
        '_fixed_frame_pose_sampling_ratio',
        '_imu_sampling_ratio',
        '_landmarks_sampling_ratio',
        '_trajectory_builder_options_proto',
    ]

    _fields_and_field_types = {
        'tracking_frame': 'string',
        'published_frame': 'string',
        'odom_frame': 'string',
        'provide_odom_frame': 'boolean',
        'use_odometry': 'boolean',
        'use_nav_sat': 'boolean',
        'use_landmarks': 'boolean',
        'publish_frame_projected_to_2d': 'boolean',
        'num_laser_scans': 'int32',
        'num_multi_echo_laser_scans': 'int32',
        'num_subdivisions_per_laser_scan': 'int32',
        'num_point_clouds': 'int32',
        'rangefinder_sampling_ratio': 'double',
        'odometry_sampling_ratio': 'double',
        'fixed_frame_pose_sampling_ratio': 'double',
        'imu_sampling_ratio': 'double',
        'landmarks_sampling_ratio': 'double',
        'trajectory_builder_options_proto': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tracking_frame = kwargs.get('tracking_frame', str())
        self.published_frame = kwargs.get('published_frame', str())
        self.odom_frame = kwargs.get('odom_frame', str())
        self.provide_odom_frame = kwargs.get('provide_odom_frame', bool())
        self.use_odometry = kwargs.get('use_odometry', bool())
        self.use_nav_sat = kwargs.get('use_nav_sat', bool())
        self.use_landmarks = kwargs.get('use_landmarks', bool())
        self.publish_frame_projected_to_2d = kwargs.get('publish_frame_projected_to_2d', bool())
        self.num_laser_scans = kwargs.get('num_laser_scans', int())
        self.num_multi_echo_laser_scans = kwargs.get('num_multi_echo_laser_scans', int())
        self.num_subdivisions_per_laser_scan = kwargs.get('num_subdivisions_per_laser_scan', int())
        self.num_point_clouds = kwargs.get('num_point_clouds', int())
        self.rangefinder_sampling_ratio = kwargs.get('rangefinder_sampling_ratio', float())
        self.odometry_sampling_ratio = kwargs.get('odometry_sampling_ratio', float())
        self.fixed_frame_pose_sampling_ratio = kwargs.get('fixed_frame_pose_sampling_ratio', float())
        self.imu_sampling_ratio = kwargs.get('imu_sampling_ratio', float())
        self.landmarks_sampling_ratio = kwargs.get('landmarks_sampling_ratio', float())
        self.trajectory_builder_options_proto = kwargs.get('trajectory_builder_options_proto', str())

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
        if self.tracking_frame != other.tracking_frame:
            return False
        if self.published_frame != other.published_frame:
            return False
        if self.odom_frame != other.odom_frame:
            return False
        if self.provide_odom_frame != other.provide_odom_frame:
            return False
        if self.use_odometry != other.use_odometry:
            return False
        if self.use_nav_sat != other.use_nav_sat:
            return False
        if self.use_landmarks != other.use_landmarks:
            return False
        if self.publish_frame_projected_to_2d != other.publish_frame_projected_to_2d:
            return False
        if self.num_laser_scans != other.num_laser_scans:
            return False
        if self.num_multi_echo_laser_scans != other.num_multi_echo_laser_scans:
            return False
        if self.num_subdivisions_per_laser_scan != other.num_subdivisions_per_laser_scan:
            return False
        if self.num_point_clouds != other.num_point_clouds:
            return False
        if self.rangefinder_sampling_ratio != other.rangefinder_sampling_ratio:
            return False
        if self.odometry_sampling_ratio != other.odometry_sampling_ratio:
            return False
        if self.fixed_frame_pose_sampling_ratio != other.fixed_frame_pose_sampling_ratio:
            return False
        if self.imu_sampling_ratio != other.imu_sampling_ratio:
            return False
        if self.landmarks_sampling_ratio != other.landmarks_sampling_ratio:
            return False
        if self.trajectory_builder_options_proto != other.trajectory_builder_options_proto:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def tracking_frame(self):
        """Message field 'tracking_frame'."""
        return self._tracking_frame

    @tracking_frame.setter
    def tracking_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tracking_frame' field must be of type 'str'"
        self._tracking_frame = value

    @property
    def published_frame(self):
        """Message field 'published_frame'."""
        return self._published_frame

    @published_frame.setter
    def published_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'published_frame' field must be of type 'str'"
        self._published_frame = value

    @property
    def odom_frame(self):
        """Message field 'odom_frame'."""
        return self._odom_frame

    @odom_frame.setter
    def odom_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'odom_frame' field must be of type 'str'"
        self._odom_frame = value

    @property
    def provide_odom_frame(self):
        """Message field 'provide_odom_frame'."""
        return self._provide_odom_frame

    @provide_odom_frame.setter
    def provide_odom_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'provide_odom_frame' field must be of type 'bool'"
        self._provide_odom_frame = value

    @property
    def use_odometry(self):
        """Message field 'use_odometry'."""
        return self._use_odometry

    @use_odometry.setter
    def use_odometry(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_odometry' field must be of type 'bool'"
        self._use_odometry = value

    @property
    def use_nav_sat(self):
        """Message field 'use_nav_sat'."""
        return self._use_nav_sat

    @use_nav_sat.setter
    def use_nav_sat(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_nav_sat' field must be of type 'bool'"
        self._use_nav_sat = value

    @property
    def use_landmarks(self):
        """Message field 'use_landmarks'."""
        return self._use_landmarks

    @use_landmarks.setter
    def use_landmarks(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_landmarks' field must be of type 'bool'"
        self._use_landmarks = value

    @property
    def publish_frame_projected_to_2d(self):
        """Message field 'publish_frame_projected_to_2d'."""
        return self._publish_frame_projected_to_2d

    @publish_frame_projected_to_2d.setter
    def publish_frame_projected_to_2d(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'publish_frame_projected_to_2d' field must be of type 'bool'"
        self._publish_frame_projected_to_2d = value

    @property
    def num_laser_scans(self):
        """Message field 'num_laser_scans'."""
        return self._num_laser_scans

    @num_laser_scans.setter
    def num_laser_scans(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_laser_scans' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_laser_scans' field must be an integer in [-2147483648, 2147483647]"
        self._num_laser_scans = value

    @property
    def num_multi_echo_laser_scans(self):
        """Message field 'num_multi_echo_laser_scans'."""
        return self._num_multi_echo_laser_scans

    @num_multi_echo_laser_scans.setter
    def num_multi_echo_laser_scans(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_multi_echo_laser_scans' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_multi_echo_laser_scans' field must be an integer in [-2147483648, 2147483647]"
        self._num_multi_echo_laser_scans = value

    @property
    def num_subdivisions_per_laser_scan(self):
        """Message field 'num_subdivisions_per_laser_scan'."""
        return self._num_subdivisions_per_laser_scan

    @num_subdivisions_per_laser_scan.setter
    def num_subdivisions_per_laser_scan(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_subdivisions_per_laser_scan' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_subdivisions_per_laser_scan' field must be an integer in [-2147483648, 2147483647]"
        self._num_subdivisions_per_laser_scan = value

    @property
    def num_point_clouds(self):
        """Message field 'num_point_clouds'."""
        return self._num_point_clouds

    @num_point_clouds.setter
    def num_point_clouds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_point_clouds' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_point_clouds' field must be an integer in [-2147483648, 2147483647]"
        self._num_point_clouds = value

    @property
    def rangefinder_sampling_ratio(self):
        """Message field 'rangefinder_sampling_ratio'."""
        return self._rangefinder_sampling_ratio

    @rangefinder_sampling_ratio.setter
    def rangefinder_sampling_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rangefinder_sampling_ratio' field must be of type 'float'"
        self._rangefinder_sampling_ratio = value

    @property
    def odometry_sampling_ratio(self):
        """Message field 'odometry_sampling_ratio'."""
        return self._odometry_sampling_ratio

    @odometry_sampling_ratio.setter
    def odometry_sampling_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odometry_sampling_ratio' field must be of type 'float'"
        self._odometry_sampling_ratio = value

    @property
    def fixed_frame_pose_sampling_ratio(self):
        """Message field 'fixed_frame_pose_sampling_ratio'."""
        return self._fixed_frame_pose_sampling_ratio

    @fixed_frame_pose_sampling_ratio.setter
    def fixed_frame_pose_sampling_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fixed_frame_pose_sampling_ratio' field must be of type 'float'"
        self._fixed_frame_pose_sampling_ratio = value

    @property
    def imu_sampling_ratio(self):
        """Message field 'imu_sampling_ratio'."""
        return self._imu_sampling_ratio

    @imu_sampling_ratio.setter
    def imu_sampling_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_sampling_ratio' field must be of type 'float'"
        self._imu_sampling_ratio = value

    @property
    def landmarks_sampling_ratio(self):
        """Message field 'landmarks_sampling_ratio'."""
        return self._landmarks_sampling_ratio

    @landmarks_sampling_ratio.setter
    def landmarks_sampling_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'landmarks_sampling_ratio' field must be of type 'float'"
        self._landmarks_sampling_ratio = value

    @property
    def trajectory_builder_options_proto(self):
        """Message field 'trajectory_builder_options_proto'."""
        return self._trajectory_builder_options_proto

    @trajectory_builder_options_proto.setter
    def trajectory_builder_options_proto(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'trajectory_builder_options_proto' field must be of type 'str'"
        self._trajectory_builder_options_proto = value
