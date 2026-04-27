// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "segway_msgs/msg/detail/configuration__struct.h"
#include "segway_msgs/msg/detail/configuration__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool segway_msgs__msg__configuration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("segway_msgs.msg._configuration.Configuration", full_classname_dest, 44) == 0);
  }
  segway_msgs__msg__Configuration * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // teleop_vel_limit_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "teleop_vel_limit_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->teleop_vel_limit_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // teleop_accel_limit_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "teleop_accel_limit_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->teleop_accel_limit_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // teleop_yaw_rate_limit_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "teleop_yaw_rate_limit_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->teleop_yaw_rate_limit_rps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // teleop_yaw_accel_limit_rps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "teleop_yaw_accel_limit_rps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->teleop_yaw_accel_limit_rps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_limit_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_limit_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_limit_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_limit_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_limit_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_limit_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // decel_limit_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "decel_limit_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->decel_limit_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dtz_decel_limit_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "dtz_decel_limit_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dtz_decel_limit_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_accel_limit_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_accel_limit_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_accel_limit_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_limit_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_limit_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_limit_rps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_accel_limit_rps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_accel_limit_rps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_accel_limit_rps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tire_diameter_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_diameter_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tire_diameter_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelbase_length_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelbase_length_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelbase_length_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_track_width_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_track_width_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_track_width_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // config_bitmap
    PyObject * field = PyObject_GetAttrString(_pymsg, "config_bitmap");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->config_bitmap = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eth_ip_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "eth_ip_address");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eth_ip_address, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eth_port_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "eth_port_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eth_port_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eth_subnet_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "eth_subnet_mask");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eth_subnet_mask, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eth_gateway
    PyObject * field = PyObject_GetAttrString(_pymsg, "eth_gateway");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eth_gateway, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_msgs__msg__configuration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Configuration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_msgs.msg._configuration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Configuration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_msgs__msg__Configuration * ros_message = (segway_msgs__msg__Configuration *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teleop_vel_limit_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->teleop_vel_limit_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teleop_vel_limit_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teleop_accel_limit_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->teleop_accel_limit_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teleop_accel_limit_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teleop_yaw_rate_limit_rps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->teleop_yaw_rate_limit_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teleop_yaw_rate_limit_rps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // teleop_yaw_accel_limit_rps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->teleop_yaw_accel_limit_rps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "teleop_yaw_accel_limit_rps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_limit_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_limit_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_limit_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_limit_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_limit_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_limit_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // decel_limit_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->decel_limit_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decel_limit_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dtz_decel_limit_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dtz_decel_limit_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dtz_decel_limit_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_accel_limit_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_accel_limit_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_accel_limit_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_limit_rps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_limit_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_limit_rps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_accel_limit_rps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_accel_limit_rps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_accel_limit_rps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_diameter_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tire_diameter_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_diameter_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelbase_length_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelbase_length_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelbase_length_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_track_width_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_track_width_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_track_width_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // config_bitmap
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->config_bitmap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "config_bitmap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eth_ip_address
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eth_ip_address.data,
      strlen(ros_message->eth_ip_address.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eth_ip_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eth_port_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eth_port_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eth_port_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eth_subnet_mask
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eth_subnet_mask.data,
      strlen(ros_message->eth_subnet_mask.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eth_subnet_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eth_gateway
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eth_gateway.data,
      strlen(ros_message->eth_gateway.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eth_gateway", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
