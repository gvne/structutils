add_library(astruct INTERFACE)

target_link_libraries(astruct INTERFACE structutils)

target_include_directories(astruct INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
  $<INSTALL_INTERFACE:include>
)
