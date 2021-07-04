add_library(bstruct INTERFACE)

target_link_libraries(bstruct INTERFACE structutils)

target_include_directories(bstruct INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
  $<INSTALL_INTERFACE:include>
)
