# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/Propulsion.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'mcu_battery_soc'
# Member 'mcu_battery_temp_deg'
# Member 'mcu_inst_power'
# Member 'mcu_total_energy'
# Member 'motor_current'
# Member 'motor_current_limit'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Propulsion(type):
    """Metaclass of message 'Propulsion'."""

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
                'segway_msgs.msg.Propulsion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__propulsion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__propulsion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__propulsion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__propulsion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__propulsion

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


class Propulsion(metaclass=Metaclass_Propulsion):
    """Message class 'Propulsion'."""

    __slots__ = [
        '_header',
        '_min_propulsion_battery_soc',
        '_mcu_battery_soc',
        '_mcu_battery_temp_deg',
        '_mcu_inst_power',
        '_mcu_total_energy',
        '_motor_current',
        '_max_motor_current',
        '_motor_current_limit',
        '_min_motor_current_limit',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'min_propulsion_battery_soc': 'float',
        'mcu_battery_soc': 'sequence<float>',
        'mcu_battery_temp_deg': 'sequence<float>',
        'mcu_inst_power': 'sequence<float>',
        'mcu_total_energy': 'sequence<float>',
        'motor_current': 'sequence<float>',
        'max_motor_current': 'float',
        'motor_current_limit': 'sequence<float>',
        'min_motor_current_limit': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.min_propulsion_battery_soc = kwargs.get('min_propulsion_battery_soc', float())
        self.mcu_battery_soc = array.array('f', kwargs.get('mcu_battery_soc', []))
        self.mcu_battery_temp_deg = array.array('f', kwargs.get('mcu_battery_temp_deg', []))
        self.mcu_inst_power = array.array('f', kwargs.get('mcu_inst_power', []))
        self.mcu_total_energy = array.array('f', kwargs.get('mcu_total_energy', []))
        self.motor_current = array.array('f', kwargs.get('motor_current', []))
        self.max_motor_current = kwargs.get('max_motor_current', float())
        self.motor_current_limit = array.array('f', kwargs.get('motor_current_limit', []))
        self.min_motor_current_limit = kwargs.get('min_motor_current_limit', float())

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
        if self.min_propulsion_battery_soc != other.min_propulsion_battery_soc:
            return False
        if self.mcu_battery_soc != other.mcu_battery_soc:
            return False
        if self.mcu_battery_temp_deg != other.mcu_battery_temp_deg:
            return False
        if self.mcu_inst_power != other.mcu_inst_power:
            return False
        if self.mcu_total_energy != other.mcu_total_energy:
            return False
        if self.motor_current != other.motor_current:
            return False
        if self.max_motor_current != other.max_motor_current:
            return False
        if self.motor_current_limit != other.motor_current_limit:
            return False
        if self.min_motor_current_limit != other.min_motor_current_limit:
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
    def min_propulsion_battery_soc(self):
        """Message field 'min_propulsion_battery_soc'."""
        return self._min_propulsion_battery_soc

    @min_propulsion_battery_soc.setter
    def min_propulsion_battery_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_propulsion_battery_soc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_propulsion_battery_soc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_propulsion_battery_soc = value

    @builtins.property
    def mcu_battery_soc(self):
        """Message field 'mcu_battery_soc'."""
        return self._mcu_battery_soc

    @mcu_battery_soc.setter
    def mcu_battery_soc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'mcu_battery_soc' array.array() must have the type code of 'f'"
            self._mcu_battery_soc = value
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
                "The 'mcu_battery_soc' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mcu_battery_soc = array.array('f', value)

    @builtins.property
    def mcu_battery_temp_deg(self):
        """Message field 'mcu_battery_temp_deg'."""
        return self._mcu_battery_temp_deg

    @mcu_battery_temp_deg.setter
    def mcu_battery_temp_deg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'mcu_battery_temp_deg' array.array() must have the type code of 'f'"
            self._mcu_battery_temp_deg = value
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
                "The 'mcu_battery_temp_deg' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mcu_battery_temp_deg = array.array('f', value)

    @builtins.property
    def mcu_inst_power(self):
        """Message field 'mcu_inst_power'."""
        return self._mcu_inst_power

    @mcu_inst_power.setter
    def mcu_inst_power(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'mcu_inst_power' array.array() must have the type code of 'f'"
            self._mcu_inst_power = value
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
                "The 'mcu_inst_power' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mcu_inst_power = array.array('f', value)

    @builtins.property
    def mcu_total_energy(self):
        """Message field 'mcu_total_energy'."""
        return self._mcu_total_energy

    @mcu_total_energy.setter
    def mcu_total_energy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'mcu_total_energy' array.array() must have the type code of 'f'"
            self._mcu_total_energy = value
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
                "The 'mcu_total_energy' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mcu_total_energy = array.array('f', value)

    @builtins.property
    def motor_current(self):
        """Message field 'motor_current'."""
        return self._motor_current

    @motor_current.setter
    def motor_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'motor_current' array.array() must have the type code of 'f'"
            self._motor_current = value
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
                "The 'motor_current' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._motor_current = array.array('f', value)

    @builtins.property
    def max_motor_current(self):
        """Message field 'max_motor_current'."""
        return self._max_motor_current

    @max_motor_current.setter
    def max_motor_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_motor_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_motor_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_motor_current = value

    @builtins.property
    def motor_current_limit(self):
        """Message field 'motor_current_limit'."""
        return self._motor_current_limit

    @motor_current_limit.setter
    def motor_current_limit(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'motor_current_limit' array.array() must have the type code of 'f'"
            self._motor_current_limit = value
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
                "The 'motor_current_limit' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._motor_current_limit = array.array('f', value)

    @builtins.property
    def min_motor_current_limit(self):
        """Message field 'min_motor_current_limit'."""
        return self._min_motor_current_limit

    @min_motor_current_limit.setter
    def min_motor_current_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_motor_current_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_motor_current_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_motor_current_limit = value
