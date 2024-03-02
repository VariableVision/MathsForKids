# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MathsForKids_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MathsForKids_autogen.dir\\ParseCache.txt"
  "MathsForKids_autogen"
  )
endif()
