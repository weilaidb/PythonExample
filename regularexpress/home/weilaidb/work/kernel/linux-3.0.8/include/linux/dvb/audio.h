#define _DVBAUDIO_H_
typedef enum  audio_stream_source_t;
typedef enum  audio_play_state_t;
typedef enum  audio_channel_select_t;
typedef struct audio_mixer  audio_mixer_t;
typedef struct audio_status  audio_status_t;
typedef
struct audio_karaoke audio_karaoke_t;
typedef __u16 audio_attributes_t;
#define AUDIO_CAP_DTS    1
#define AUDIO_CAP_LPCM   2
#define AUDIO_CAP_MP1    4
#define AUDIO_CAP_MP2    8
#define AUDIO_CAP_MP3   16
#define AUDIO_CAP_AAC   32
#define AUDIO_CAP_OGG   64
#define AUDIO_CAP_SDDS 128
#define AUDIO_CAP_AC3  256
#define AUDIO_STOP                 _IO('o', 1)
#define AUDIO_PLAY                 _IO('o', 2)
#define AUDIO_PAUSE                _IO('o', 3)
#define AUDIO_CONTINUE             _IO('o', 4)
#define AUDIO_SELECT_SOURCE        _IO('o', 5)
#define AUDIO_SET_MUTE             _IO('o', 6)
#define AUDIO_SET_AV_SYNC          _IO('o', 7)
#define AUDIO_SET_BYPASS_MODE      _IO('o', 8)
#define AUDIO_CHANNEL_SELECT       _IO('o', 9)
#define AUDIO_GET_STATUS           _IOR('o', 10, audio_status_t)
#define AUDIO_GET_CAPABILITIES     _IOR('o', 11, unsigned int)
#define AUDIO_CLEAR_BUFFER         _IO('o',  12)
#define AUDIO_SET_ID               _IO('o', 13)
#define AUDIO_SET_MIXER            _IOW('o', 14, audio_mixer_t)
#define AUDIO_SET_STREAMTYPE       _IO('o', 15)
#define AUDIO_SET_EXT_ID           _IO('o', 16)
#define AUDIO_SET_ATTRIBUTES       _IOW('o', 17, audio_attributes_t)
#define AUDIO_SET_KARAOKE          _IOW('o', 18, audio_karaoke_t)
#define AUDIO_GET_PTS              _IOR('o', 19, __u64)
#define AUDIO_BILINGUAL_CHANNEL_SELECT _IO('o', 20)
