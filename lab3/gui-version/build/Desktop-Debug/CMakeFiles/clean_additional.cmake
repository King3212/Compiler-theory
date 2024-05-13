# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/gui-version_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/gui-version_autogen.dir/ParseCache.txt"
  "gui-version_autogen"
  )
endif()
