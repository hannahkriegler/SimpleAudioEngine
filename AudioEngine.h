#pragma once

#ifndef _AUDIO_ENGINE_H_
#define _AUDIO_ENGINE_H_

#include "fmod_studio.hpp"
#include "fmod.hpp"
#include <string>
#include <map>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Implementation {
    Implementation();
    ~Implementation();

    void Update();

    FMOD::Studio::System* mpStudioSystem;
    FMOD::System* mpSystem;

    int mnNextChannelId;

    typedef map<string, FMOD::Sound*> SoundMap;
    typedef map<int, FMOD::Channel*> ChannelMap;
    typedef map<string, FMOD::Studio::EventInstance*> EventMap;
    typedef map<string, FMOD::Studio::Bank*> BankMap;

    BankMap mBanks;
    EventMap mEvents;
    SoundMap mSounds;
    ChannelMap mChannels;
};



#endif



