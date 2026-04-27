# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_convex_decomposition_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED convex_decomposition_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(convex_decomposition_FOUND FALSE)
  elseif(NOT convex_decomposition_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(convex_decomposition_FOUND FALSE)
  endif()
  return()
endif()
set(_convex_decomposition_CONFIG_INCLUDED TRUE)

# output package information
if(NOT convex_decomposition_FIND_QUIETLY)
  message(STATUS "Found convex_decomposition: 0.1.12 (${convex_decomposition_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'convex_decomposition' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${convex_decomposition_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(convex_decomposition_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${convex_decomposition_DIR}/${_extra}")
endforeach()
