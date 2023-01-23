cmake_minimum_required (VERSION 2.8.11)
project (kaleidoscope)


# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    main.cpp
    src/parser.cpp
    src/scanner.cpp
)

# Add an executable with the above sources
add_executable(kaleidoscope ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(kaleidoscope
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)