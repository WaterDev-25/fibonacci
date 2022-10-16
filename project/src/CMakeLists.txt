include_directories(${CMAKE_SOURCE_DIR}/project/include)

file(GLOB_RECURSE FIBONACCI_SOURCES *.cpp *.c)
file(GLOB_RECURSE FIBONACCI_HEADERS *.hpp *.h *.inl)

add_executable(fibonacci ${FIBONACCI_SOURCES} ${FIBONACCI_HEADERS})
