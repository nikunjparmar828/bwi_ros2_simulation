# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fault_status_words'
# Member 'mcu_fault_status'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
                'segway_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

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


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_header',
        '_fault_status_words',
        '_mcu_fault_status',
        '_operational_time',
        '_operational_state',
        '_dynamic_response',
        '_machine_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fault_status_words': 'sequence<uint32>',
        'mcu_fault_status': 'sequence<uint32>',
        'operational_time': 'float',
        'operational_state': 'uint32',
        'dynamic_response': 'uint32',
        'machine_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.fault_status_words = array.array('I', kwargs.get('fault_status_words', []))
        self.mcu_fault_status = array.array('I', kwargs.get('mcu_fault_status', []))
        self.operational_time = kwargs.get('operational_time', float())
        self.operational_state = kwargs.get('operational_state', int())
        self.dynamic_response = kwargs.get('dynamic_response', int())
        self.machine_id = kwargs.get('machine_id', int())

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
        if self.fault_status_words != other.fault_status_words:
            return False
        if self.mcu_fault_status != other.mcu_fault_status:
            return False
        if self.operational_time != other.operational_time:
            return False
        if self.operational_state != other.operational_state:
            return False
        if self.dynamic_response != other.dynamic_response:
            return False
        if self.machine_id != other.machine_id:
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
    def fault_status_words(self):
        """Message field 'fault_status_words'."""
        return self._fault_status_words

    @fault_status_words.setter
    def fault_status_words(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'fault_status_words' array.array() must have the type code of 'I'"
            self._fault_status_words = value
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
                "The 'fault_status_words' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._fault_status_words = array.array('I', value)

    @builtins.property
    def mcu_fault_status(self):
        """Message field 'mcu_fault_status'."""
        return self._mcu_fault_status

    @mcu_fault_status.setter
    def mcu_fault_status(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'mcu_fault_status' array.array() must have the type code of 'I'"
            self._mcu_fault_status = value
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
                "The 'mcu_fault_status' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._mcu_fault_status = array.array('I', value)

    @builtins.property
    def operational_time(self):
        """Message field 'operational_time'."""
        return self._operational_time

    @operational_time.setter
    def operational_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'operational_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'operational_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._operational_time = value

    @builtins.property
    def operational_state(self):
        """Message field 'operational_state'."""
        return self._operational_state

    @operational_state.setter
    def operational_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operational_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'operational_state' field must be an unsigned integer in [0, 4294967295]"
        self._operational_state = value

    @builtins.property
    def dynamic_response(self):
        """Message field 'dynamic_response'."""
        return self._dynamic_response

    @dynamic_response.setter
    def dynamic_response(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dynamic_response' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'dynamic_response' field must be an unsigned integer in [0, 4294967295]"
        self._dynamic_response = value

    @builtins.property
    def machine_id(self):
        """Message field 'machine_id'."""
        return self._machine_id

    @machine_id.setter
    def machine_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'machine_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'machine_id' field must be an unsigned integer in [0, 4294967295]"
        self._machine_id = value
