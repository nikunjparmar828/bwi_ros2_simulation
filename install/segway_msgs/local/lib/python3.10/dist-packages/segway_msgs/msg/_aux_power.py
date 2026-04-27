# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/AuxPower.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'aux_soc'
# Member 'aux_voltage'
# Member 'aux_current'
# Member 'aux_temp_deg'
# Member 'aux_sys_status'
# Member 'aux_bcu_status'
# Member 'aux_bcu_faults'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AuxPower(type):
    """Metaclass of message 'AuxPower'."""

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
                'segway_msgs.msg.AuxPower')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aux_power
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aux_power
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aux_power
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aux_power
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aux_power

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


class AuxPower(metaclass=Metaclass_AuxPower):
    """Message class 'AuxPower'."""

    __slots__ = [
        '_header',
        '_aux_soc',
        '_aux_voltage',
        '_aux_current',
        '_aux_temp_deg',
        '_aux_sys_status',
        '_aux_bcu_status',
        '_aux_bcu_faults',
        '_startup_7p2v_batt_voltage',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'aux_soc': 'sequence<float>',
        'aux_voltage': 'sequence<float>',
        'aux_current': 'sequence<float>',
        'aux_temp_deg': 'sequence<float>',
        'aux_sys_status': 'sequence<uint32>',
        'aux_bcu_status': 'sequence<uint32>',
        'aux_bcu_faults': 'sequence<uint32>',
        'startup_7p2v_batt_voltage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.aux_soc = array.array('f', kwargs.get('aux_soc', []))
        self.aux_voltage = array.array('f', kwargs.get('aux_voltage', []))
        self.aux_current = array.array('f', kwargs.get('aux_current', []))
        self.aux_temp_deg = array.array('f', kwargs.get('aux_temp_deg', []))
        self.aux_sys_status = array.array('I', kwargs.get('aux_sys_status', []))
        self.aux_bcu_status = array.array('I', kwargs.get('aux_bcu_status', []))
        self.aux_bcu_faults = array.array('I', kwargs.get('aux_bcu_faults', []))
        self.startup_7p2v_batt_voltage = kwargs.get('startup_7p2v_batt_voltage', float())

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
        if self.aux_soc != other.aux_soc:
            return False
        if self.aux_voltage != other.aux_voltage:
            return False
        if self.aux_current != other.aux_current:
            return False
        if self.aux_temp_deg != other.aux_temp_deg:
            return False
        if self.aux_sys_status != other.aux_sys_status:
            return False
        if self.aux_bcu_status != other.aux_bcu_status:
            return False
        if self.aux_bcu_faults != other.aux_bcu_faults:
            return False
        if self.startup_7p2v_batt_voltage != other.startup_7p2v_batt_voltage:
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
    def aux_soc(self):
        """Message field 'aux_soc'."""
        return self._aux_soc

    @aux_soc.setter
    def aux_soc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'aux_soc' array.array() must have the type code of 'f'"
            self._aux_soc = value
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
                "The 'aux_soc' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._aux_soc = array.array('f', value)

    @builtins.property
    def aux_voltage(self):
        """Message field 'aux_voltage'."""
        return self._aux_voltage

    @aux_voltage.setter
    def aux_voltage(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'aux_voltage' array.array() must have the type code of 'f'"
            self._aux_voltage = value
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
                "The 'aux_voltage' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._aux_voltage = array.array('f', value)

    @builtins.property
    def aux_current(self):
        """Message field 'aux_current'."""
        return self._aux_current

    @aux_current.setter
    def aux_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'aux_current' array.array() must have the type code of 'f'"
            self._aux_current = value
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
                "The 'aux_current' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._aux_current = array.array('f', value)

    @builtins.property
    def aux_temp_deg(self):
        """Message field 'aux_temp_deg'."""
        return self._aux_temp_deg

    @aux_temp_deg.setter
    def aux_temp_deg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'aux_temp_deg' array.array() must have the type code of 'f'"
            self._aux_temp_deg = value
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
                "The 'aux_temp_deg' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._aux_temp_deg = array.array('f', value)

    @builtins.property
    def aux_sys_status(self):
        """Message field 'aux_sys_status'."""
        return self._aux_sys_status

    @aux_sys_status.setter
    def aux_sys_status(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'aux_sys_status' array.array() must have the type code of 'I'"
            self._aux_sys_status = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'aux_sys_status' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._aux_sys_status = array.array('I', value)

    @builtins.property
    def aux_bcu_status(self):
        """Message field 'aux_bcu_status'."""
        return self._aux_bcu_status

    @aux_bcu_status.setter
    def aux_bcu_status(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'aux_bcu_status' array.array() must have the type code of 'I'"
            self._aux_bcu_status = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'aux_bcu_status' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._aux_bcu_status = array.array('I', value)

    @builtins.property
    def aux_bcu_faults(self):
        """Message field 'aux_bcu_faults'."""
        return self._aux_bcu_faults

    @aux_bcu_faults.setter
    def aux_bcu_faults(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'aux_bcu_faults' array.array() must have the type code of 'I'"
            self._aux_bcu_faults = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'aux_bcu_faults' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._aux_bcu_faults = array.array('I', value)

    @builtins.property
    def startup_7p2v_batt_voltage(self):
        """Message field 'startup_7p2v_batt_voltage'."""
        return self._startup_7p2v_batt_voltage

    @startup_7p2v_batt_voltage.setter
    def startup_7p2v_batt_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'startup_7p2v_batt_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'startup_7p2v_batt_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._startup_7p2v_batt_voltage = value
