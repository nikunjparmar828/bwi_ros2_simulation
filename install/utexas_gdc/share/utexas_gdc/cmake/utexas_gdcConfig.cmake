# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_utexas_gdc_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED utexas_gdc_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(utexas_gdc_FOUND FALSE)
  elseif(NOT utexas_gdc_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(utexas_gdc_FOUND FALSE)
  endif()
  return()
endif()
set(_utexas_gdc_CONFIG_INCLUDED TRUE)

# output package information
if(NOT utexas_gdc_FIND_QUIETLY)
  message(STATUS "Found utexas_gdc: 0.0.0 (${utexas_gdc_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'utexas_gdc' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${utexas_gdc_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(utexas_gdc_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${utexas_gdc_DIR}/${_extra}")
endforeach()
