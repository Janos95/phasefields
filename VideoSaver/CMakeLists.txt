
add_library(VideoSaver VideoSaver.cpp VideoSaver.h)

target_include_directories(VideoSaver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
add_library(Phasefield::VideoSaver ALIAS VideoSaver)

target_link_libraries(VideoSaver
        PUBLIC
        PkgConfig::libavcodec
        PkgConfig::libavutil
        PkgConfig::libswscale
        Corrade::Containers
        Phasefield::Utilities
        )

