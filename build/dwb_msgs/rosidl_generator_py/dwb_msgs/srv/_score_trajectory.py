# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:srv/ScoreTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScoreTrajectory_Request(type):
    """Metaclass of message 'ScoreTrajectory_Request'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__score_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__score_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__score_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__score_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__score_trajectory__request

            from dwb_msgs.msg import Trajectory2D
            if Trajectory2D.__class__._TYPE_SUPPORT is None:
                Trajectory2D.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Path2D
            if Path2D.__class__._TYPE_SUPPORT is None:
                Path2D.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Pose2DStamped
            if Pose2DStamped.__class__._TYPE_SUPPORT is None:
                Pose2DStamped.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Twist2D
            if Twist2D.__class__._TYPE_SUPPORT is None:
                Twist2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScoreTrajectory_Request(metaclass=Metaclass_ScoreTrajectory_Request):
    """Message class 'ScoreTrajectory_Request'."""

    __slots__ = [
        '_pose',
        '_velocity',
        '_global_plan',
        '_traj',
    ]

    _fields_and_field_types = {
        'pose': 'nav_2d_msgs/Pose2DStamped',
        'velocity': 'nav_2d_msgs/Twist2D',
        'global_plan': 'nav_2d_msgs/Path2D',
        'traj': 'dwb_msgs/Trajectory2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Pose2DStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Path2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'Trajectory2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_2d_msgs.msg import Pose2DStamped
        self.pose = kwargs.get('pose', Pose2DStamped())
        from nav_2d_msgs.msg import Twist2D
        self.velocity = kwargs.get('velocity', Twist2D())
        from nav_2d_msgs.msg import Path2D
        self.global_plan = kwargs.get('global_plan', Path2D())
        from dwb_msgs.msg import Trajectory2D
        self.traj = kwargs.get('traj', Trajectory2D())

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
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.global_plan != other.global_plan:
            return False
        if self.traj != other.traj:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Pose2DStamped
            assert \
                isinstance(value, Pose2DStamped), \
                "The 'pose' field must be a sub message of type 'Pose2DStamped'"
        self._pose = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'velocity' field must be a sub message of type 'Twist2D'"
        self._velocity = value

    @property
    def global_plan(self):
        """Message field 'global_plan'."""
        return self._global_plan

    @global_plan.setter
    def global_plan(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Path2D
            assert \
                isinstance(value, Path2D), \
                "The 'global_plan' field must be a sub message of type 'Path2D'"
        self._global_plan = value

    @property
    def traj(self):
        """Message field 'traj'."""
        return self._traj

    @traj.setter
    def traj(self, value):
        if __debug__:
            from dwb_msgs.msg import Trajectory2D
            assert \
                isinstance(value, Trajectory2D), \
                "The 'traj' field must be a sub message of type 'Trajectory2D'"
        self._traj = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ScoreTrajectory_Response(type):
    """Metaclass of message 'ScoreTrajectory_Response'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__score_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__score_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__score_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__score_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__score_trajectory__response

            from dwb_msgs.msg import TrajectoryScore
            if TrajectoryScore.__class__._TYPE_SUPPORT is None:
                TrajectoryScore.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScoreTrajectory_Response(metaclass=Metaclass_ScoreTrajectory_Response):
    """Message class 'ScoreTrajectory_Response'."""

    __slots__ = [
        '_score',
    ]

    _fields_and_field_types = {
        'score': 'dwb_msgs/TrajectoryScore',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'TrajectoryScore'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from dwb_msgs.msg import TrajectoryScore
        self.score = kwargs.get('score', TrajectoryScore())

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
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            from dwb_msgs.msg import TrajectoryScore
            assert \
                isinstance(value, TrajectoryScore), \
                "The 'score' field must be a sub message of type 'TrajectoryScore'"
        self._score = value


class Metaclass_ScoreTrajectory(type):
    """Metaclass of service 'ScoreTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__score_trajectory

            from dwb_msgs.srv import _score_trajectory
            if _score_trajectory.Metaclass_ScoreTrajectory_Request._TYPE_SUPPORT is None:
                _score_trajectory.Metaclass_ScoreTrajectory_Request.__import_type_support__()
            if _score_trajectory.Metaclass_ScoreTrajectory_Response._TYPE_SUPPORT is None:
                _score_trajectory.Metaclass_ScoreTrajectory_Response.__import_type_support__()


class ScoreTrajectory(metaclass=Metaclass_ScoreTrajectory):
    from dwb_msgs.srv._score_trajectory import ScoreTrajectory_Request as Request
    from dwb_msgs.srv._score_trajectory import ScoreTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
