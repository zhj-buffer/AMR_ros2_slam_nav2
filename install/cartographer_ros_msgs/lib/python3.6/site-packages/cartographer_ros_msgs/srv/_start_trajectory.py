# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:srv/StartTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StartTrajectory_Request(type):
    """Metaclass of message 'StartTrajectory_Request'."""

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
                'cartographer_ros_msgs.srv.StartTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_trajectory__request

            from cartographer_ros_msgs.msg import SensorTopics
            if SensorTopics.__class__._TYPE_SUPPORT is None:
                SensorTopics.__class__.__import_type_support__()

            from cartographer_ros_msgs.msg import TrajectoryOptions
            if TrajectoryOptions.__class__._TYPE_SUPPORT is None:
                TrajectoryOptions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartTrajectory_Request(metaclass=Metaclass_StartTrajectory_Request):
    """Message class 'StartTrajectory_Request'."""

    __slots__ = [
        '_options',
        '_topics',
    ]

    _fields_and_field_types = {
        'options': 'cartographer_ros_msgs/TrajectoryOptions',
        'topics': 'cartographer_ros_msgs/SensorTopics',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'TrajectoryOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'SensorTopics'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cartographer_ros_msgs.msg import TrajectoryOptions
        self.options = kwargs.get('options', TrajectoryOptions())
        from cartographer_ros_msgs.msg import SensorTopics
        self.topics = kwargs.get('topics', SensorTopics())

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
        if self.options != other.options:
            return False
        if self.topics != other.topics:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def options(self):
        """Message field 'options'."""
        return self._options

    @options.setter
    def options(self, value):
        if __debug__:
            from cartographer_ros_msgs.msg import TrajectoryOptions
            assert \
                isinstance(value, TrajectoryOptions), \
                "The 'options' field must be a sub message of type 'TrajectoryOptions'"
        self._options = value

    @property
    def topics(self):
        """Message field 'topics'."""
        return self._topics

    @topics.setter
    def topics(self, value):
        if __debug__:
            from cartographer_ros_msgs.msg import SensorTopics
            assert \
                isinstance(value, SensorTopics), \
                "The 'topics' field must be a sub message of type 'SensorTopics'"
        self._topics = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_StartTrajectory_Response(type):
    """Metaclass of message 'StartTrajectory_Response'."""

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
                'cartographer_ros_msgs.srv.StartTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_trajectory__response

            from cartographer_ros_msgs.msg import StatusResponse
            if StatusResponse.__class__._TYPE_SUPPORT is None:
                StatusResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartTrajectory_Response(metaclass=Metaclass_StartTrajectory_Response):
    """Message class 'StartTrajectory_Response'."""

    __slots__ = [
        '_status',
        '_trajectory_id',
    ]

    _fields_and_field_types = {
        'status': 'cartographer_ros_msgs/StatusResponse',
        'trajectory_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'StatusResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cartographer_ros_msgs.msg import StatusResponse
        self.status = kwargs.get('status', StatusResponse())
        self.trajectory_id = kwargs.get('trajectory_id', int())

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
        if self.status != other.status:
            return False
        if self.trajectory_id != other.trajectory_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from cartographer_ros_msgs.msg import StatusResponse
            assert \
                isinstance(value, StatusResponse), \
                "The 'status' field must be a sub message of type 'StatusResponse'"
        self._status = value

    @property
    def trajectory_id(self):
        """Message field 'trajectory_id'."""
        return self._trajectory_id

    @trajectory_id.setter
    def trajectory_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trajectory_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trajectory_id' field must be an integer in [-2147483648, 2147483647]"
        self._trajectory_id = value


class Metaclass_StartTrajectory(type):
    """Metaclass of service 'StartTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartographer_ros_msgs.srv.StartTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__start_trajectory

            from cartographer_ros_msgs.srv import _start_trajectory
            if _start_trajectory.Metaclass_StartTrajectory_Request._TYPE_SUPPORT is None:
                _start_trajectory.Metaclass_StartTrajectory_Request.__import_type_support__()
            if _start_trajectory.Metaclass_StartTrajectory_Response._TYPE_SUPPORT is None:
                _start_trajectory.Metaclass_StartTrajectory_Response.__import_type_support__()


class StartTrajectory(metaclass=Metaclass_StartTrajectory):
    from cartographer_ros_msgs.srv._start_trajectory import StartTrajectory_Request as Request
    from cartographer_ros_msgs.srv._start_trajectory import StartTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
