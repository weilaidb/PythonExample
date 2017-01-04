#define _SDL_coreaudio_h
#if !defined(__IPHONEOS__)
#define MACOSX_COREAUDIO 1
#if MACOSX_COREAUDIO
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIApplication.h>
#define _THIS   SDL_AudioDevice *this
struct SDL_PrivateAudioData
;
