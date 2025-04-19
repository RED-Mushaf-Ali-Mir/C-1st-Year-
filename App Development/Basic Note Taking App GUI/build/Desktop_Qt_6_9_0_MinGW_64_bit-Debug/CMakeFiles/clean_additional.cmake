# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Creating_Menus_In_Qt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Creating_Menus_In_Qt_autogen.dir\\ParseCache.txt"
  "Creating_Menus_In_Qt_autogen"
  )
endif()
