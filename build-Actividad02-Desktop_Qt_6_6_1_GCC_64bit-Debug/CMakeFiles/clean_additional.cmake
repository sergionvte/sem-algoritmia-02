# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Actividad02_autogen"
  "CMakeFiles/Actividad02_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Actividad02_autogen.dir/ParseCache.txt"
  )
endif()
