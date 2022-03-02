# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/SubmapEntry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SubmapEntry(type):
    """Metaclass of message 'SubmapEntry'."""

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
                'cartographer_ros_msgs.msg.SubmapEntry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__submap_entry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__submap_entry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__submap_entry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__submap_entry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__submap_entry

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SubmapEntry(metaclass=Metaclass_SubmapEntry):
    """Message class 'SubmapEntry'."""

    __slots__ = [
        '_trajectory_id',
        '_submap_index',
        '_submap_version',
        '_pose',
    ]

    _fields_and_field_types = {
        'trajectory_id': 'int32',
        'submap_index': 'int32',
        'submap_version': 'int32',
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trajectory_id = kwargs.get('trajectory_id', int())
        self.submap_index = kwargs.get('submap_index', int())
        self.submap_version = kwargs.get('submap_version', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.submap_version != other.submap_version:
            return False
        if self.pose != other.pose:
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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value
