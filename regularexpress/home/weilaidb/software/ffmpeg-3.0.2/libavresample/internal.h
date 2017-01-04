#define AVRESAMPLE_INTERNAL_H
typedef struct AudioData AudioData;
typedef struct AudioConvert AudioConvert;
typedef struct AudioMix AudioMix;
typedef struct ResampleContext ResampleContext;
enum RemapPoint ;
typedef struct ChannelMapInfo  ChannelMapInfo;
struct AVAudioResampleContext ;
void ff_audio_resample_init_aarch64(ResampleContext *c,
enum AVSampleFormat sample_fmt);
void ff_audio_resample_init_arm(ResampleContext *c,
enum AVSampleFormat sample_fmt);
