cmake_minimum_required(VERSION 3.19)
project(music C)

set(FMOD_DIR "C:/Program Files (x86)/FMOD SoundSystem/FMOD Studio API Windows/api/core/lib/x64")
set(CMAKE_C_STANDARD 99)

set(
        SOURCE_FILES main.c
)

add_executable(https://github.com/dark-r00t/Music/blob/master/CMakeLists.txt
        music ${SOURCE_FILES}
)

include_directories(
        ${FMOD_DIR}
        ${FMOD_DIR}
)

target_link_libraries(music
        "${FMOD_DIR}/fmod_vc.lib"
        "${FMOD_DIR}/fmodL_vc.lib"
)
