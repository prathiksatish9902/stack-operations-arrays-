cmake_minimum_required(VERSION 3.16)

project(stack_operation_using_array LANGUAGES C)

add_executable(stack_operation_using_array main.c)

include(GNUInstallDirs)
install(TARGETS stack_operation_using_array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
