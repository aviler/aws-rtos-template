cmake_minimum_required(VERSION 3.13)

project(aws-rtos-template)

add_executable(aws-rtos-template src/main.c src/base.c)

# Tell IDF build to link against this target.
set(IDF_PROJECT_EXECUTABLE aws-rtos-template)

# Add some extra components. IDF_EXTRA_COMPONENT_DIRS is an variable used by ESP-IDF
# to collect extra components.
get_filename_component(
    EXTRA_COMPONENT_DIRS
    "components/foo" ABSOLUTE
)
list(APPEND IDF_EXTRA_COMPONENT_DIRS ${EXTRA_COMPONENT_DIRS})

# As of now there's no offical way to redefine config files outside of Amazon FreeRTOS source tree.
# This is a temporary approach to inject an include path so that this takes precedence over the
# config file directory inside Amazon FreeRTOS.
include_directories(BEFORE config)

# Add amazon freertos as an subdirectory. AFR_BOARD tells which board to target.
set(AFR_BOARD espressif.esp32_devkitc CACHE INTERNAL "")
add_subdirectory(components/aws-rtos)

# Link against the mqtt lib so that we can use it.
target_link_libraries(aws-rtos-template PRIVATE AFR::mqtt)
