add_library(astruct INTERFACE)

target_link_libraries(astruct INTERFACE structutils)

target_include_directories(astruct INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
  $<INSTALL_INTERFACE:include>
)
if (MSVC)
  # For MSVC we require Visual Studio 2019 >= 16.5
  # See: https://docs.microsoft.com/en-us/cpp/preprocessor/preprocessor-experimental-overview?view=msvc-160
  target_compile_options(astruct INTERFACE "/Zc:preprocessor")
endif()
