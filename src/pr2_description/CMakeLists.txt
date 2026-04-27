cmake_minimum_required(VERSION 3.8)
project(pr2_description)

# Find necessary dependencies
find_package(ament_cmake REQUIRED)
find_package(xacro REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(urdf REQUIRED)

# Set up mesh processing commands (adapted for ROS 2, assuming conversion tools are available)
find_program(CONVEX_DECOMPOSITION_CMD convex_decomposition)
#find_program(IVCON_CMD ivcon)

# Define the mesh generation process
file(GLOB pr2_stl_files ${CMAKE_CURRENT_SOURCE_DIR}/meshes/*/*.stl)
set(pr2_gen_files "")

foreach(it ${pr2_stl_files})
  get_filename_component(basepath ${it} PATH)
  get_filename_component(basename ${it} NAME_WE)

  if (NOT ${basename} MATCHES "_convex")
    # Create necessary directories
    file(MAKE_DIRECTORY ${basepath}/convex)
    file(MAKE_DIRECTORY ${basepath}/iv)

    # Convert STL to OBJ
    add_custom_command(
      OUTPUT ${basepath}/convex/${basename}.obj
      #COMMAND ${IVCON_CMD}
      ARGS ${it} ${basepath}/convex/${basename}.obj
      DEPENDS ${it})

    set(pr2_gen_files ${pr2_gen_files} ${basepath}/convex/${basename}.obj)

    # Perform convex decomposition
    add_custom_command(
      OUTPUT ${basepath}/convex/${basename}_convex.obj
      COMMAND ${CONVEX_DECOMPOSITION_CMD}
      ARGS ${basepath}/convex/${basename}.obj -v12 -p10
      DEPENDS ${basepath}/convex/${basename}.obj)

    set(pr2_gen_files ${pr2_gen_files} ${basepath}/convex/${basename}_convex.obj)

    # Convert OBJ back to STL (binary and ASCII) and IV formats
    add_custom_command(
      OUTPUT ${basepath}/convex/${basename}_convex.stlb
      #COMMAND ${IVCON_CMD}
      ARGS ${basepath}/convex/${basename}_convex.obj ${basepath}/convex/${basename}_convex.stlb
      DEPENDS ${basepath}/convex/${basename}_convex.obj)

    set(pr2_gen_files ${pr2_gen_files} ${basepath}/convex/${basename}_convex.stlb)

    add_custom_command(
      OUTPUT ${basepath}/convex/${basename}_convex.stla
      #COMMAND ${IVCON_CMD}
      ARGS ${basepath}/convex/${basename}_convex.obj ${basepath}/convex/${basename}_convex.stla
      DEPENDS ${basepath}/convex/${basename}_convex.obj)

    set(pr2_gen_files ${pr2_gen_files} ${basepath}/convex/${basename}_convex.stla)

    add_custom_command(
      OUTPUT ${basepath}/iv/${basename}.iv
      #COMMAND ${IVCON_CMD}
      ARGS ${it} ${basepath}/iv/${basename}.iv
      DEPENDS ${it})

    set(pr2_gen_files ${pr2_gen_files} ${basepath}/iv/${basename}.iv)
  endif()
endforeach()

# Target for generating media files
add_custom_target(media_files ALL DEPENDS ${pr2_gen_files})

# Install directories
foreach(dir meshes gazebo materials robots urdf)
  install(DIRECTORY ${dir}/
    DESTINATION share/${PROJECT_NAME}/${dir})
endforeach(dir)

ament_package()

