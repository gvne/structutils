include(FetchContent)

FetchContent_Declare(googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()
