cmake_minimum_required(VERSION 2.8.3)
project(odev3)


find_package( REQUIRED COMPONENTS)

include_directories(
    # include
    )

add_executable(singleton singleton.cpp)
target_link_libraries(singleton ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})

add_executable(thread-safe thread-safe.cpp)
target_link_libraries(thread-safe ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})
