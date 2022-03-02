# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LandmarkEntry(type):
    """Metaclass of message 'LandmarkEntry'."""

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
                'cartographer_ros_msgs.msg.LandmarkEntry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__landmark_entry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__landmark_entry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__landmark_entry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__landmark_entry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__landmark_entry

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


class LandmarkEntry(metaclass=Metaclass_LandmarkEntry):
    """Message class 'LandmarkEntry'."""

    __slots__ = [
        '_id',
        '_tracking_from_landmark_transform',
        '_translation_weight',
        '_rotation_weight',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'tracking_from_landmark_transform': 'geometry_msgs/Pose',
        'translation_weight': 'double',
        'rotation_weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        from geometry_msgs.msg import Pose
        self.tracking_from_landmark_transform = kwargs.get('tracking_from_landmark_transform', Pose())
        self.translation_weight = kwargs.get('translation_weight', float())
        self.rotation_weight = kwargs.get('rotation_weight', float())

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
        if self.id != other.id:
            return False
        if self.tracking_from_landmark_transform != other.tracking_from_landmark_transform:
            return False
        if self.translation_weight != other.translation_weight:
            return False
        if self.rotation_weight != other.rotation_weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def tracking_from_landmark_transform(self):
        """Message field 'tracking_from_landmark_transform'."""
        return self._tracking_from_landmark_transform

    @tracking_from_landmark_transform.setter
    def tracking_from_landmark_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'tracking_from_landmark_transform' field must be a sub message of type 'Pose'"
        self._tracking_from_landmark_transform = value

    @property
    def translation_weight(self):
        """Message field 'translation_weight'."""
        return self._translation_weight

    @translation_weight.setter
    def translation_weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'translation_weight' field must be of type 'float'"
        self._translation_weight = value

    @property
    def rotation_weight(self):
        """Message field 'rotation_weight'."""
        return self._rotation_weight

    @rotation_weight.setter
    def rotation_weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_weight' field must be of type 'float'"
        self._rotation_weight = value
