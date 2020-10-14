project(ObjectBoxExample)

add_executable(${PROJECT_NAME}
        main.cpp
        tasklist.obx.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE objectbox)
target_include_directories(${PROJECT_NAME} PRIVATE flatbuffers objectbox)