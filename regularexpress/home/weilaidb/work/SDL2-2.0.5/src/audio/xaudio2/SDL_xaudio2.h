#define _SDL_XAUDIO2_H
typedef interface IXAudio2 IXAudio2;
typedef interface IXAudio2SourceVoice IXAudio2SourceVoice;
typedef interface IXAudio2MasteringVoice IXAudio2MasteringVoice;
typedef interface IXAudio2EngineCallback IXAudio2EngineCallback;
typedef interface IXAudio2VoiceCallback IXAudio2VoiceCallback;
typedef interface IXAudio2Voice IXAudio2Voice;
typedef interface IXAudio2SubmixVoice IXAudio2SubmixVoice;
typedef enum _AUDIO_STREAM_CATEGORY  AUDIO_STREAM_CATEGORY;
typedef struct XAUDIO2_BUFFER  XAUDIO2_BUFFER;
typedef struct XAUDIO2_BUFFER_WMA  XAUDIO2_BUFFER_WMA;
typedef struct XAUDIO2_SEND_DESCRIPTOR  XAUDIO2_SEND_DESCRIPTOR;
typedef struct XAUDIO2_VOICE_SENDS  XAUDIO2_VOICE_SENDS;
typedef struct XAUDIO2_EFFECT_DESCRIPTOR  XAUDIO2_EFFECT_DESCRIPTOR;
typedef struct XAUDIO2_EFFECT_CHAIN  XAUDIO2_EFFECT_CHAIN;
typedef struct XAUDIO2_PERFORMANCE_DATA  XAUDIO2_PERFORMANCE_DATA;
typedef struct XAUDIO2_DEBUG_CONFIGURATION  XAUDIO2_DEBUG_CONFIGURATION;
typedef struct XAUDIO2_VOICE_DETAILS  XAUDIO2_VOICE_DETAILS;
typedef enum XAUDIO2_FILTER_TYPE  XAUDIO2_FILTER_TYPE;
typedef struct XAUDIO2_FILTER_PARAMETERS  XAUDIO2_FILTER_PARAMETERS;
typedef struct XAUDIO2_VOICE_STATE  XAUDIO2_VOICE_STATE;
typedef UINT32 XAUDIO2_PROCESSOR;
#define Processor1 0x00000001
#define XAUDIO2_DEFAULT_PROCESSOR Processor1
#define XAUDIO2_E_DEVICE_INVALIDATED 0x88960004
#define XAUDIO2_COMMIT_NOW 0
#define XAUDIO2_VOICE_NOSAMPLESPLAYED 0x0100
#define XAUDIO2_DEFAULT_CHANNELS 0
extern HRESULT __stdcall XAudio2Create(
_Out_ IXAudio2          **ppXAudio2,
_In_  UINT32            Flags,
_In_  XAUDIO2_PROCESSOR XAudio2Processor
);
#undef INTERFACE
#define INTERFACE IXAudio2
typedef interface IXAudio2  IXAudio2;
typedef const struct IXAudio2Vtbl IXAudio2Vtbl;
const struct IXAudio2Vtbl
;
#define IXAudio2_Release(A) ((A)->lpVtbl->Release(A))
#define IXAudio2_CreateSourceVoice(A,B,C,D,E,F,G,H) ((A)->lpVtbl->CreateSourceVoice(A,B,C,D,E,F,G,H))
#define IXAudio2_CreateMasteringVoice(A,B,C,D,E,F,G,H) ((A)->lpVtbl->CreateMasteringVoice(A,B,C,D,E,F,G,H))
#define IXAudio2_StartEngine(A) ((A)->lpVtbl->StartEngine(A))
#define IXAudio2_StopEngine(A) ((A)->lpVtbl->StopEngine(A))
#undef INTERFACE
#define INTERFACE IXAudio2SourceVoice
typedef interface IXAudio2SourceVoice  IXAudio2SourceVoice;
typedef const struct IXAudio2SourceVoiceVtbl IXAudio2SourceVoiceVtbl;
const struct IXAudio2SourceVoiceVtbl
;
#define IXAudio2SourceVoice_DestroyVoice(A) ((A)->lpVtbl->DestroyVoice(A))
#define IXAudio2SourceVoice_Start(A,B,C) ((A)->lpVtbl->Start(A,B,C))
#define IXAudio2SourceVoice_Stop(A,B,C) ((A)->lpVtbl->Stop(A,B,C))
#define IXAudio2SourceVoice_SubmitSourceBuffer(A,B,C) ((A)->lpVtbl->SubmitSourceBuffer(A,B,C))
#define IXAudio2SourceVoice_FlushSourceBuffers(A) ((A)->lpVtbl->FlushSourceBuffers(A))
#define IXAudio2SourceVoice_Discontinuity(A) ((A)->lpVtbl->Discontinuity(A))
#define IXAudio2SourceVoice_GetState(A,B,C) ((A)->lpVtbl->GetState(A,B,C))
#undef INTERFACE
#define INTERFACE IXAudio2MasteringVoice
typedef interface IXAudio2MasteringVoice  IXAudio2MasteringVoice;
typedef const struct IXAudio2MasteringVoiceVtbl IXAudio2MasteringVoiceVtbl;
const struct IXAudio2MasteringVoiceVtbl
;
#define IXAudio2MasteringVoice_DestroyVoice(A) ((A)->lpVtbl->DestroyVoice(A))
#undef INTERFACE
#define INTERFACE IXAudio2VoiceCallback
typedef interface IXAudio2VoiceCallback  IXAudio2VoiceCallback;
typedef const struct IXAudio2VoiceCallbackVtbl IXAudio2VoiceCallbackVtbl;
const struct IXAudio2VoiceCallbackVtbl
;
