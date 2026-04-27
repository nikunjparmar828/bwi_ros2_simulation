# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/Dynamics.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'wheel_vel_mps'
# Member 'wheel_pos_m'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dynamics(type):
    """Metaclass of message 'Dynamics'."""

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
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.msg.Dynamics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamics

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dynamics(metaclass=Metaclass_Dynamics):
    """Message class 'Dynamics'."""

    __slots__ = [
        '_header',
        '_x_vel_target_mps',
        '_y_vel_target_mps',
        '_yaw_rate_target_rps',
        '_vel_limit_mps',
        '_yaw_rate_limit_rps',
        '_wheel_vel_mps',
        '_wheel_pos_m',
        '_x_accel_mps2',
        '_y_accel_mps2',
        '_yaw_accel_mps2',
        '_yaw_angle_rad',
        '_odom_yaw_angle_rad',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'x_vel_target_mps': 'float',
        'y_vel_target_mps': 'float',
        'yaw_rate_target_rps': 'float',
        'vel_limit_mps': 'float',
        'yaw_rate_limit_rps': 'float',
        'wheel_vel_mps': 'sequence<float>',
        'wheel_pos_m': 'sequence<float>',
        'x_accel_mps2': 'float',
        'y_accel_mps2': 'float',
        'yaw_accel_mps2': 'float',
        'yaw_angle_rad': 'float',
        'odom_yaw_angle_rad': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.x_vel_target_mps = kwargs.get('x_vel_target_mps', float())
        self.y_vel_target_mps = kwargs.get('y_vel_target_mps', float())
        self.yaw_rate_target_rps = kwargs.get('yaw_rate_target_rps', float())
        self.vel_limit_mps = kwargs.get('vel_limit_mps', float())
        self.yaw_rate_limit_rps = kwargs.get('yaw_rate_limit_rps', float())
        self.wheel_vel_mps = array.array('f', kwargs.get('wheel_vel_mps', []))
        self.wheel_pos_m = array.array('f', kwargs.get('wheel_pos_m', []))
        self.x_accel_mps2 = kwargs.get('x_accel_mps2', float())
        self.y_accel_mps2 = kwargs.get('y_accel_mps2', float())
        self.yaw_accel_mps2 = kwargs.get('yaw_accel_mps2', float())
        self.yaw_angle_rad = kwargs.get('yaw_angle_rad', float())
        self.odom_yaw_angle_rad = kwargs.get('odom_yaw_angle_rad', float())

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
        if self.header != other.header:
            return False
        if self.x_vel_target_mps != other.x_vel_target_mps:
            return False
        if self.y_vel_target_mps != other.y_vel_target_mps:
            return False
        if self.yaw_rate_target_rps != other.yaw_rate_target_rps:
            return False
        if self.vel_limit_mps != other.vel_limit_mps:
            return False
        if self.yaw_rate_limit_rps != other.yaw_rate_limit_rps:
            return False
        if self.wheel_vel_mps != other.wheel_vel_mps:
            return False
        if self.wheel_pos_m != other.wheel_pos_m:
            return False
        if self.x_accel_mps2 != other.x_accel_mps2:
            return False
        if self.y_accel_mps2 != other.y_accel_mps2:
            return False
        if self.yaw_accel_mps2 != other.yaw_accel_mps2:
            return False
        if self.yaw_angle_rad != other.yaw_angle_rad:
            return False
        if self.odom_yaw_angle_rad != other.odom_yaw_angle_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def x_vel_target_mps(self):
        """Message field 'x_vel_target_mps'."""
        return self._x_vel_target_mps

    @x_vel_target_mps.setter
    def x_vel_target_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_vel_target_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_vel_target_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_vel_target_mps = value

    @builtins.property
    def y_vel_target_mps(self):
        """Message field 'y_vel_target_mps'."""
        return self._y_vel_target_mps

    @y_vel_target_mps.setter
    def y_vel_target_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_vel_target_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_vel_target_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_vel_target_mps = value

    @builtins.property
    def yaw_rate_target_rps(self):
        """Message field 'yaw_rate_target_rps'."""
        return self._yaw_rate_target_rps

    @yaw_rate_target_rps.setter
    def yaw_rate_target_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_target_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate_target_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate_target_rps = value

    @builtins.property
    def vel_limit_mps(self):
        """Message field 'vel_limit_mps'."""
        return self._vel_limit_mps

    @vel_limit_mps.setter
    def vel_limit_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_limit_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_limit_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_limit_mps = value

    @builtins.property
    def yaw_rate_limit_rps(self):
        """Message field 'yaw_rate_limit_rps'."""
        return self._yaw_rate_limit_rps

    @yaw_rate_limit_rps.setter
    def yaw_rate_limit_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_limit_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate_limit_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate_limit_rps = value

    @builtins.property
    def wheel_vel_mps(self):
        """Message field 'wheel_vel_mps'."""
        return self._wheel_vel_mps

    @wheel_vel_mps.setter
    def wheel_vel_mps(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'wheel_vel_mps' array.array() must have the type code of 'f'"
            self._wheel_vel_mps = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'wheel_vel_mps' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._wheel_vel_mps = array.array('f', value)

    @builtins.property
    def wheel_pos_m(self):
        """Message field 'wheel_pos_m'."""
        return self._wheel_pos_m

    @wheel_pos_m.setter
    def wheel_pos_m(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'wheel_pos_m' array.array() must have the type code of 'f'"
            self._wheel_pos_m = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'wheel_pos_m' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._wheel_pos_m = array.array('f', value)

    @builtins.property
    def x_accel_mps2(self):
        """Message field 'x_accel_mps2'."""
        return self._x_accel_mps2

    @x_accel_mps2.setter
    def x_accel_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_accel_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_accel_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_accel_mps2 = value

    @builtins.property
    def y_accel_mps2(self):
        """Message field 'y_accel_mps2'."""
        return self._y_accel_mps2

    @y_accel_mps2.setter
    def y_accel_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_accel_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_accel_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_accel_mps2 = value

    @builtins.property
    def yaw_accel_mps2(self):
        """Message field 'yaw_accel_mps2'."""
        return self._yaw_accel_mps2

    @yaw_accel_mps2.setter
    def yaw_accel_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_accel_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_accel_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_accel_mps2 = value

    @builtins.property
    def yaw_angle_rad(self):
        """Message field 'yaw_angle_rad'."""
        return self._yaw_angle_rad

    @yaw_angle_rad.setter
    def yaw_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_angle_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_angle_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_angle_rad = value

    @builtins.property
    def odom_yaw_angle_rad(self):
        """Message field 'odom_yaw_angle_rad'."""
        return self._odom_yaw_angle_rad

    @odom_yaw_angle_rad.setter
    def odom_yaw_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odom_yaw_angle_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_yaw_angle_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_yaw_angle_rad = value
