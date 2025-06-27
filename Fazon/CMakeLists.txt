# Fazon/CMakeLists.txt
add_library(Fazon STATIC
    src/Fazon/Application.cpp
    src/Fazon/Application.h
    src/Fazon/Core.h
    src/Fazon/EntryPoint.h
)

source_group("Fazon" FILES
    src/Fazon/Application.cpp
    src/Fazon/Application.h
    src/Fazon/Core.h
    src/Fazon/EntryPoint.h
)

source_group("CMake Generated Files" FILES 
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/Debug/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/Release/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/Dist/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/cmake_pch.cxx"
)