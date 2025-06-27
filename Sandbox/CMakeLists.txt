# set binary output path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

# Sandbox/CMakeLists.txt
add_executable(Sandbox
    src/SandboxApp.cpp
)

source_group("Sandbox" FILES
    src/SandboxApp.cpp
)

# Compiler features
target_compile_features(Sandbox PRIVATE cxx_std_23)

# Link Fazon library and spdlog
target_link_libraries(Sandbox PRIVATE
    Fazon
)

# Include directories
target_include_directories(Sandbox PUBLIC 
    ${CMAKE_SOURCE_DIR}/Fazon/src
)

# Hide CMake generated files
set_target_properties(Sandbox PROPERTIES 
    VS_JUST_MY_CODE_DEBUGGING ON
    EXCLUDE_FROM_ALL_BOM TRUE
)

source_group("CMake Generated Files" FILES 
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Sandbox.dir/Debug/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Sandbox.dir/Release/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Sandbox.dir/Dist/cmake_pch.hxx"
    "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/Sandbox.dir/cmake_pch.cxx"
)


target_link_options(Sandbox PRIVATE "/NODEFAULTLIB:MSVCRT")