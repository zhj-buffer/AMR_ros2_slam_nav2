# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:srv/FinishTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FinishTrajectory_Request(type):
    """Metaclass of message 'FinishTrajectory_Request'."""

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
                'cartographer_ros_msgs.srv.FinishTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__finish_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__finish_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__finish_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__finish_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__finish_trajectory__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FinishTrajectory_Request(metaclass=Metaclass_FinishTrajectory_Request):
    """Message class 'FinishTrajectory_Request'."""

    __slots__ = [
        '_trajectory_id',
    ]

    _fields_and_field_types = {
        'trajectory_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.trajectory_id != other.trajectory_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FinishTrajectory_Response(type):
    """Metaclass of message 'FinishTrajectory_Response'."""

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
                'cartographer_ros_msgs.srv.FinishTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__finish_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__finish_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__finish_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__finish_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__finish_trajectory__response

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


class FinishTrajectory_Response(metaclass=Metaclass_FinishTrajectory_Response):
    """Message class 'FinishTrajectory_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'cartographer_ros_msgs/StatusResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'StatusResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cartographer_ros_msgs.msg import StatusResponse
        self.status = kwargs.get('status', StatusResponse())

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


class Metaclass_FinishTrajectory(type):
    """Metaclass of service 'FinishTrajectory'."""

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
                'cartographer_ros_msgs.srv.FinishTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__finish_trajectory

            from cartographer_ros_msgs.srv import _finish_trajectory
            if _finish_trajectory.Metaclass_FinishTrajectory_Request._TYPE_SUPPORT is None:
                _finish_trajectory.Metaclass_FinishTrajectory_Request.__import_type_support__()
            if _finish_trajectory.Metaclass_FinishTrajectory_Response._TYPE_SUPPORT is None:
                _finish_trajectory.Metaclass_FinishTrajectory_Response.__import_type_support__()


class FinishTrajectory(metaclass=Metaclass_FinishTrajectory):
    from cartographer_ros_msgs.srv._finish_trajectory import FinishTrajectory_Request as Request
    from cartographer_ros_msgs.srv._finish_trajectory import FinishTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
