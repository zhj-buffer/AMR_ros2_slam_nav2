# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:srv/SubmapQuery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SubmapQuery_Request(type):
    """Metaclass of message 'SubmapQuery_Request'."""

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
                'cartographer_ros_msgs.srv.SubmapQuery_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__submap_query__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__submap_query__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__submap_query__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__submap_query__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__submap_query__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SubmapQuery_Request(metaclass=Metaclass_SubmapQuery_Request):
    """Message class 'SubmapQuery_Request'."""

    __slots__ = [
        '_trajectory_id',
        '_submap_index',
    ]

    _fields_and_field_types = {
        'trajectory_id': 'int32',
        'submap_index': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trajectory_id = kwargs.get('trajectory_id', int())
        self.submap_index = kwargs.get('submap_index', int())

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
        if self.submap_index != other.submap_index:
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

    @property
    def submap_index(self):
        """Message field 'submap_index'."""
        return self._submap_index

    @submap_index.setter
    def submap_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'submap_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'submap_index' field must be an integer in [-2147483648, 2147483647]"
        self._submap_index = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SubmapQuery_Response(type):
    """Metaclass of message 'SubmapQuery_Response'."""

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
                'cartographer_ros_msgs.srv.SubmapQuery_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__submap_query__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__submap_query__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__submap_query__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__submap_query__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__submap_query__response

            from cartographer_ros_msgs.msg import StatusResponse
            if StatusResponse.__class__._TYPE_SUPPORT is None:
                StatusResponse.__class__.__import_type_support__()

            from cartographer_ros_msgs.msg import SubmapTexture
            if SubmapTexture.__class__._TYPE_SUPPORT is None:
                SubmapTexture.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SubmapQuery_Response(metaclass=Metaclass_SubmapQuery_Response):
    """Message class 'SubmapQuery_Response'."""

    __slots__ = [
        '_status',
        '_submap_version',
        '_textures',
    ]

    _fields_and_field_types = {
        'status': 'cartographer_ros_msgs/StatusResponse',
        'submap_version': 'int32',
        'textures': 'sequence<cartographer_ros_msgs/SubmapTexture>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'StatusResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'SubmapTexture')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cartographer_ros_msgs.msg import StatusResponse
        self.status = kwargs.get('status', StatusResponse())
        self.submap_version = kwargs.get('submap_version', int())
        self.textures = kwargs.get('textures', [])

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
        if self.submap_version != other.submap_version:
            return False
        if self.textures != other.textures:
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
    def submap_version(self):
        """Message field 'submap_version'."""
        return self._submap_version

    @submap_version.setter
    def submap_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'submap_version' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'submap_version' field must be an integer in [-2147483648, 2147483647]"
        self._submap_version = value

    @property
    def textures(self):
        """Message field 'textures'."""
        return self._textures

    @textures.setter
    def textures(self, value):
        if __debug__:
            from cartographer_ros_msgs.msg import SubmapTexture
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, SubmapTexture) for v in value) and
                 True), \
                "The 'textures' field must be a set or sequence and each value of type 'SubmapTexture'"
        self._textures = value


class Metaclass_SubmapQuery(type):
    """Metaclass of service 'SubmapQuery'."""

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
                'cartographer_ros_msgs.srv.SubmapQuery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__submap_query

            from cartographer_ros_msgs.srv import _submap_query
            if _submap_query.Metaclass_SubmapQuery_Request._TYPE_SUPPORT is None:
                _submap_query.Metaclass_SubmapQuery_Request.__import_type_support__()
            if _submap_query.Metaclass_SubmapQuery_Response._TYPE_SUPPORT is None:
                _submap_query.Metaclass_SubmapQuery_Response.__import_type_support__()


class SubmapQuery(metaclass=Metaclass_SubmapQuery):
    from cartographer_ros_msgs.srv._submap_query import SubmapQuery_Request as Request
    from cartographer_ros_msgs.srv._submap_query import SubmapQuery_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
