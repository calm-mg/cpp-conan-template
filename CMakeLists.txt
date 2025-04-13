cmake_minimum_required(VERSION 3.15)
project(MyCppProject)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Conan 툴체인 로드
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)
# 기본 설정
set(CMAKE_CXX_STANDARD 20)

# 소스 포함
file(GLOB SOURCES "src/*.cpp")
include_directories(include)

# 타겟 생성
add_executable(MyCppProject ${SOURCES})

# Conan 의존성 포함
find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)
find_package(OpenSSL REQUIRED)

target_link_libraries(MyCppProject
    PRIVATE
    fmt::fmt
    spdlog::spdlog
    OpenSSL::SSL
    OpenSSL::Crypto
)
