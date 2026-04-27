// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from segway_msgs:msg/Dynamics.idl
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
#include "segway_msgs/msg/detail/dynamics__struct.h"
#include "segway_msgs/msg/detail/dynamics__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool segway_msgs__msg__dynamics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("segway_msgs.msg._dynamics.Dynamics", full_classname_dest, 34) == 0);
  }
  segway_msgs__msg__Dynamics * ros_message = _ros_message;
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
  {  // x_vel_target_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_vel_target_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_vel_target_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_vel_target_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_vel_target_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_vel_target_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_target_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_target_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_target_rps = (float)PyFloat_AS_DOUBLE(field);
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
  {  // yaw_rate_limit_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_limit_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_limit_rps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_vel_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_vel_mps");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->wheel_vel_mps), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->wheel_vel_mps.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'wheel_vel_mps'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->wheel_vel_mps), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->wheel_vel_mps.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // wheel_pos_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_pos_m");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->wheel_pos_m), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->wheel_pos_m.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'wheel_pos_m'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->wheel_pos_m), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->wheel_pos_m.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // x_accel_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_accel_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_accel_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_accel_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_accel_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_accel_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_accel_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_accel_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_accel_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_angle_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_angle_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_angle_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_yaw_angle_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_yaw_angle_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_yaw_angle_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_msgs__msg__dynamics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Dynamics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_msgs.msg._dynamics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Dynamics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_msgs__msg__Dynamics * ros_message = (segway_msgs__msg__Dynamics *)raw_ros_message;
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
  {  // x_vel_target_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_vel_target_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_vel_target_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_vel_target_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_vel_target_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_vel_target_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_target_rps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_target_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_target_rps", field);
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
  {  // wheel_vel_mps
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wheel_vel_mps");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->wheel_vel_mps.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->wheel_vel_mps.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->wheel_vel_mps.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // wheel_pos_m
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wheel_pos_m");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->wheel_pos_m.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->wheel_pos_m.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->wheel_pos_m.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // x_accel_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_accel_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_accel_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_accel_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_accel_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_accel_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_accel_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_accel_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_accel_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_angle_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_angle_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_angle_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_yaw_angle_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_yaw_angle_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_yaw_angle_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
