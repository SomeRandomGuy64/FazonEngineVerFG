# Fazon/CMakeLists.txt
add_library(Fazon STATIC
	src/Fazon.h
    src/Fazon/Core.h
	
    src/Fazon/Application.cpp
    src/Fazon/Application.h

    src/Fazon/Log.cpp
    src/Fazon/Log.h

    src/Fazon/EntryPoint.cpp
    src/Fazon/EntryPoint.h
)

source_group("Fazon" FILES
	src/Fazon.h
    src/Fazon/Core.h
	
    src/Fazon/Application.cpp
    src/Fazon/Application.h

    src/Fazon/Log.cpp
    src/Fazon/Log.h

    src/Fazon/EntryPoint.cpp
    src/Fazon/EntryPoint.h
)

# Include project-wide compiler options function
include(${CMAKE_SOURCE_DIR}/cmake/compiler_options.cmake)
set_compiler_flags(Fazon)

# Include directories
target_include_directories(Fazon PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Compiler features and definitions
target_compile_features(Fazon PRIVATE cxx_std_23)
target_compile_definitions(Fazon PRIVATE 
    FAZON_VERSION="0.01"
)

# Vendor dependencies
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(vendor/NexusLogger)

target_link_libraries(Fazon PUBLIC NexusLogger)

# Hide CMake generated files
set_target_properties(Fazon PROPERTIES 
    VS_JUST_MY_CODE_DEBUGGING ON
    EXCLUDE_FROM_ALL_BOM TRUE
)

source_group("CMake Generated Files" FILES 
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/Debug/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/Release/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/Dist/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Fazon.dir/cmake_pch.cxx"
)