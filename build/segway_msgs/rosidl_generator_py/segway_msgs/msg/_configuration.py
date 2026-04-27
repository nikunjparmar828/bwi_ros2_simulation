# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/Configuration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Configuration(type):
    """Metaclass of message 'Configuration'."""

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
                'segway_msgs.msg.Configuration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__configuration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__configuration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__configuration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__configuration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__configuration

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


class Configuration(metaclass=Metaclass_Configuration):
    """Message class 'Configuration'."""

    __slots__ = [
        '_header',
        '_teleop_vel_limit_mps',
        '_teleop_accel_limit_mps2',
        '_teleop_yaw_rate_limit_rps',
        '_teleop_yaw_accel_limit_rps2',
        '_vel_limit_mps',
        '_accel_limit_mps2',
        '_decel_limit_mps2',
        '_dtz_decel_limit_mps2',
        '_lateral_accel_limit_mps2',
        '_yaw_rate_limit_rps',
        '_yaw_accel_limit_rps2',
        '_tire_diameter_m',
        '_wheelbase_length_m',
        '_wheel_track_width_m',
        '_gear_ratio',
        '_config_bitmap',
        '_eth_ip_address',
        '_eth_port_number',
        '_eth_subnet_mask',
        '_eth_gateway',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'teleop_vel_limit_mps': 'float',
        'teleop_accel_limit_mps2': 'float',
        'teleop_yaw_rate_limit_rps': 'float',
        'teleop_yaw_accel_limit_rps2': 'float',
        'vel_limit_mps': 'float',
        'accel_limit_mps2': 'float',
        'decel_limit_mps2': 'float',
        'dtz_decel_limit_mps2': 'float',
        'lateral_accel_limit_mps2': 'float',
        'yaw_rate_limit_rps': 'float',
        'yaw_accel_limit_rps2': 'float',
        'tire_diameter_m': 'float',
        'wheelbase_length_m': 'float',
        'wheel_track_width_m': 'float',
        'gear_ratio': 'float',
        'config_bitmap': 'uint32',
        'eth_ip_address': 'string',
        'eth_port_number': 'uint32',
        'eth_subnet_mask': 'string',
        'eth_gateway': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.teleop_vel_limit_mps = kwargs.get('teleop_vel_limit_mps', float())
        self.teleop_accel_limit_mps2 = kwargs.get('teleop_accel_limit_mps2', float())
        self.teleop_yaw_rate_limit_rps = kwargs.get('teleop_yaw_rate_limit_rps', float())
        self.teleop_yaw_accel_limit_rps2 = kwargs.get('teleop_yaw_accel_limit_rps2', float())
        self.vel_limit_mps = kwargs.get('vel_limit_mps', float())
        self.accel_limit_mps2 = kwargs.get('accel_limit_mps2', float())
        self.decel_limit_mps2 = kwargs.get('decel_limit_mps2', float())
        self.dtz_decel_limit_mps2 = kwargs.get('dtz_decel_limit_mps2', float())
        self.lateral_accel_limit_mps2 = kwargs.get('lateral_accel_limit_mps2', float())
        self.yaw_rate_limit_rps = kwargs.get('yaw_rate_limit_rps', float())
        self.yaw_accel_limit_rps2 = kwargs.get('yaw_accel_limit_rps2', float())
        self.tire_diameter_m = kwargs.get('tire_diameter_m', float())
        self.wheelbase_length_m = kwargs.get('wheelbase_length_m', float())
        self.wheel_track_width_m = kwargs.get('wheel_track_width_m', float())
        self.gear_ratio = kwargs.get('gear_ratio', float())
        self.config_bitmap = kwargs.get('config_bitmap', int())
        self.eth_ip_address = kwargs.get('eth_ip_address', str())
        self.eth_port_number = kwargs.get('eth_port_number', int())
        self.eth_subnet_mask = kwargs.get('eth_subnet_mask', str())
        self.eth_gateway = kwargs.get('eth_gateway', str())

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
        if self.teleop_vel_limit_mps != other.teleop_vel_limit_mps:
            return False
        if self.teleop_accel_limit_mps2 != other.teleop_accel_limit_mps2:
            return False
        if self.teleop_yaw_rate_limit_rps != other.teleop_yaw_rate_limit_rps:
            return False
        if self.teleop_yaw_accel_limit_rps2 != other.teleop_yaw_accel_limit_rps2:
            return False
        if self.vel_limit_mps != other.vel_limit_mps:
            return False
        if self.accel_limit_mps2 != other.accel_limit_mps2:
            return False
        if self.decel_limit_mps2 != other.decel_limit_mps2:
            return False
        if self.dtz_decel_limit_mps2 != other.dtz_decel_limit_mps2:
            return False
        if self.lateral_accel_limit_mps2 != other.lateral_accel_limit_mps2:
            return False
        if self.yaw_rate_limit_rps != other.yaw_rate_limit_rps:
            return False
        if self.yaw_accel_limit_rps2 != other.yaw_accel_limit_rps2:
            return False
        if self.tire_diameter_m != other.tire_diameter_m:
            return False
        if self.wheelbase_length_m != other.wheelbase_length_m:
            return False
        if self.wheel_track_width_m != other.wheel_track_width_m:
            return False
        if self.gear_ratio != other.gear_ratio:
            return False
        if self.config_bitmap != other.config_bitmap:
            return False
        if self.eth_ip_address != other.eth_ip_address:
            return False
        if self.eth_port_number != other.eth_port_number:
            return False
        if self.eth_subnet_mask != other.eth_subnet_mask:
            return False
        if self.eth_gateway != other.eth_gateway:
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
    def teleop_vel_limit_mps(self):
        """Message field 'teleop_vel_limit_mps'."""
        return self._teleop_vel_limit_mps

    @teleop_vel_limit_mps.setter
    def teleop_vel_limit_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'teleop_vel_limit_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'teleop_vel_limit_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._teleop_vel_limit_mps = value

    @builtins.property
    def teleop_accel_limit_mps2(self):
        """Message field 'teleop_accel_limit_mps2'."""
        return self._teleop_accel_limit_mps2

    @teleop_accel_limit_mps2.setter
    def teleop_accel_limit_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'teleop_accel_limit_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'teleop_accel_limit_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._teleop_accel_limit_mps2 = value

    @builtins.property
    def teleop_yaw_rate_limit_rps(self):
        """Message field 'teleop_yaw_rate_limit_rps'."""
        return self._teleop_yaw_rate_limit_rps

    @teleop_yaw_rate_limit_rps.setter
    def teleop_yaw_rate_limit_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'teleop_yaw_rate_limit_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'teleop_yaw_rate_limit_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._teleop_yaw_rate_limit_rps = value

    @builtins.property
    def teleop_yaw_accel_limit_rps2(self):
        """Message field 'teleop_yaw_accel_limit_rps2'."""
        return self._teleop_yaw_accel_limit_rps2

    @teleop_yaw_accel_limit_rps2.setter
    def teleop_yaw_accel_limit_rps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'teleop_yaw_accel_limit_rps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'teleop_yaw_accel_limit_rps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._teleop_yaw_accel_limit_rps2 = value

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
    def accel_limit_mps2(self):
        """Message field 'accel_limit_mps2'."""
        return self._accel_limit_mps2

    @accel_limit_mps2.setter
    def accel_limit_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_limit_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_limit_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_limit_mps2 = value

    @builtins.property
    def decel_limit_mps2(self):
        """Message field 'decel_limit_mps2'."""
        return self._decel_limit_mps2

    @decel_limit_mps2.setter
    def decel_limit_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'decel_limit_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decel_limit_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decel_limit_mps2 = value

    @builtins.property
    def dtz_decel_limit_mps2(self):
        """Message field 'dtz_decel_limit_mps2'."""
        return self._dtz_decel_limit_mps2

    @dtz_decel_limit_mps2.setter
    def dtz_decel_limit_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dtz_decel_limit_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dtz_decel_limit_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dtz_decel_limit_mps2 = value

    @builtins.property
    def lateral_accel_limit_mps2(self):
        """Message field 'lateral_accel_limit_mps2'."""
        return self._lateral_accel_limit_mps2

    @lateral_accel_limit_mps2.setter
    def lateral_accel_limit_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_accel_limit_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral_accel_limit_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral_accel_limit_mps2 = value

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
    def yaw_accel_limit_rps2(self):
        """Message field 'yaw_accel_limit_rps2'."""
        return self._yaw_accel_limit_rps2

    @yaw_accel_limit_rps2.setter
    def yaw_accel_limit_rps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_accel_limit_rps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_accel_limit_rps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_accel_limit_rps2 = value

    @builtins.property
    def tire_diameter_m(self):
        """Message field 'tire_diameter_m'."""
        return self._tire_diameter_m

    @tire_diameter_m.setter
    def tire_diameter_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tire_diameter_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tire_diameter_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tire_diameter_m = value

    @builtins.property
    def wheelbase_length_m(self):
        """Message field 'wheelbase_length_m'."""
        return self._wheelbase_length_m

    @wheelbase_length_m.setter
    def wheelbase_length_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelbase_length_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheelbase_length_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheelbase_length_m = value

    @builtins.property
    def wheel_track_width_m(self):
        """Message field 'wheel_track_width_m'."""
        return self._wheel_track_width_m

    @wheel_track_width_m.setter
    def wheel_track_width_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_track_width_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_track_width_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_track_width_m = value

    @builtins.property
    def gear_ratio(self):
        """Message field 'gear_ratio'."""
        return self._gear_ratio

    @gear_ratio.setter
    def gear_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gear_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gear_ratio = value

    @builtins.property
    def config_bitmap(self):
        """Message field 'config_bitmap'."""
        return self._config_bitmap

    @config_bitmap.setter
    def config_bitmap(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'config_bitmap' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'config_bitmap' field must be an unsigned integer in [0, 4294967295]"
        self._config_bitmap = value

    @builtins.property
    def eth_ip_address(self):
        """Message field 'eth_ip_address'."""
        return self._eth_ip_address

    @eth_ip_address.setter
    def eth_ip_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eth_ip_address' field must be of type 'str'"
        self._eth_ip_address = value

    @builtins.property
    def eth_port_number(self):
        """Message field 'eth_port_number'."""
        return self._eth_port_number

    @eth_port_number.setter
    def eth_port_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eth_port_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'eth_port_number' field must be an unsigned integer in [0, 4294967295]"
        self._eth_port_number = value

    @builtins.property
    def eth_subnet_mask(self):
        """Message field 'eth_subnet_mask'."""
        return self._eth_subnet_mask

    @eth_subnet_mask.setter
    def eth_subnet_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eth_subnet_mask' field must be of type 'str'"
        self._eth_subnet_mask = value

    @builtins.property
    def eth_gateway(self):
        """Message field 'eth_gateway'."""
        return self._eth_gateway

    @eth_gateway.setter
    def eth_gateway(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eth_gateway' field must be of type 'str'"
        self._eth_gateway = value
