// TEST CODE FOR FMOD
// 06-08-2021

#include <stdlib.h>
#include "fmod/api/lowlevel/inc/fmod.h"

#define SOUND_FILE_PATH "C:/" //make sure to use forward slash

int main(void){
    FMOD_SYSTEM* system;
    FMOD_RESULT err = FMOD_System_Create(&system);
    if (err != 0) {
        exit(err);
    }

    err = FMOD_System_Init(system,32, FMOD_INIT_NORMAL,0);
    if (err != 0) {
        exit(err);
    }

    FMOD_SOUND * sound;
    err = FMOD_System_CreateSound(system, SOUND_FILE_PATH, FMOD_HARDWARE,0, &sound);
    if (err != 0) {
        exit(err);
    }

    FMOD_CHANNEL *channel;
    FMOD_System_PlaySound(system,sound,0,0,&channel
    );

    FMOD_BOOL isPlaying = 1;
    while (isPlaying) {
        FMOD_Channel_IsPlaying(channel, &isPlaying);
    }

    err = FMOD_Sound_Release(sound);
    if (err != 0) {
        exit(err);
    }

    err = FMOD_System_Close(system);
    if (err != 0) {
        exit(err);
    }
    err = FMOD_System_Release(system);
    if (err != 0) {
        exit(err);
    }
}

