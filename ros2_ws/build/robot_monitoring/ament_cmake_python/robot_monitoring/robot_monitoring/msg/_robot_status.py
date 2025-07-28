# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_monitoring:msg/RobotStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

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
            module = import_type_support('robot_monitoring')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_monitoring.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """Message class 'RobotStatus'."""

    __slots__ = [
        '_left_speed',
        '_right_speed',
        '_trash_full',
        '_emergency',
        '_left_encoder',
        '_right_encoder',
        '_acc_x',
        '_acc_y',
        '_acc_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'left_speed': 'int32',
        'right_speed': 'int32',
        'trash_full': 'boolean',
        'emergency': 'boolean',
        'left_encoder': 'int32',
        'right_encoder': 'int32',
        'acc_x': 'int32',
        'acc_y': 'int32',
        'acc_z': 'int32',
        'gyro_x': 'int32',
        'gyro_y': 'int32',
        'gyro_z': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_speed = kwargs.get('left_speed', int())
        self.right_speed = kwargs.get('right_speed', int())
        self.trash_full = kwargs.get('trash_full', bool())
        self.emergency = kwargs.get('emergency', bool())
        self.left_encoder = kwargs.get('left_encoder', int())
        self.right_encoder = kwargs.get('right_encoder', int())
        self.acc_x = kwargs.get('acc_x', int())
        self.acc_y = kwargs.get('acc_y', int())
        self.acc_z = kwargs.get('acc_z', int())
        self.gyro_x = kwargs.get('gyro_x', int())
        self.gyro_y = kwargs.get('gyro_y', int())
        self.gyro_z = kwargs.get('gyro_z', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_speed != other.left_speed:
            return False
        if self.right_speed != other.right_speed:
            return False
        if self.trash_full != other.trash_full:
            return False
        if self.emergency != other.emergency:
            return False
        if self.left_encoder != other.left_encoder:
            return False
        if self.right_encoder != other.right_encoder:
            return False
        if self.acc_x != other.acc_x:
            return False
        if self.acc_y != other.acc_y:
            return False
        if self.acc_z != other.acc_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_speed(self):
        """Message field 'left_speed'."""
        return self._left_speed

    @left_speed.setter
    def left_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_speed' field must be an integer in [-2147483648, 2147483647]"
        self._left_speed = value

    @builtins.property
    def right_speed(self):
        """Message field 'right_speed'."""
        return self._right_speed

    @right_speed.setter
    def right_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'right_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_speed' field must be an integer in [-2147483648, 2147483647]"
        self._right_speed = value

    @builtins.property
    def trash_full(self):
        """Message field 'trash_full'."""
        return self._trash_full

    @trash_full.setter
    def trash_full(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'trash_full' field must be of type 'bool'"
        self._trash_full = value

    @builtins.property
    def emergency(self):
        """Message field 'emergency'."""
        return self._emergency

    @emergency.setter
    def emergency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency' field must be of type 'bool'"
        self._emergency = value

    @builtins.property
    def left_encoder(self):
        """Message field 'left_encoder'."""
        return self._left_encoder

    @left_encoder.setter
    def left_encoder(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_encoder' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_encoder' field must be an integer in [-2147483648, 2147483647]"
        self._left_encoder = value

    @builtins.property
    def right_encoder(self):
        """Message field 'right_encoder'."""
        return self._right_encoder

    @right_encoder.setter
    def right_encoder(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'right_encoder' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_encoder' field must be an integer in [-2147483648, 2147483647]"
        self._right_encoder = value

    @builtins.property
    def acc_x(self):
        """Message field 'acc_x'."""
        return self._acc_x

    @acc_x.setter
    def acc_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'acc_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acc_x' field must be an integer in [-2147483648, 2147483647]"
        self._acc_x = value

    @builtins.property
    def acc_y(self):
        """Message field 'acc_y'."""
        return self._acc_y

    @acc_y.setter
    def acc_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'acc_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acc_y' field must be an integer in [-2147483648, 2147483647]"
        self._acc_y = value

    @builtins.property
    def acc_z(self):
        """Message field 'acc_z'."""
        return self._acc_z

    @acc_z.setter
    def acc_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'acc_z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acc_z' field must be an integer in [-2147483648, 2147483647]"
        self._acc_z = value

    @builtins.property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gyro_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gyro_x' field must be an integer in [-2147483648, 2147483647]"
        self._gyro_x = value

    @builtins.property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gyro_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gyro_y' field must be an integer in [-2147483648, 2147483647]"
        self._gyro_y = value

    @builtins.property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gyro_z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gyro_z' field must be an integer in [-2147483648, 2147483647]"
        self._gyro_z = value
