#define AVFORMAT_AUDIOINTERLEAVE_H
typedef struct AudioInterleaveContext  AudioInterleaveContext;
ff_audio_interleave_init;
ff_audio_interleave_close;
ff_audio_rechunk_interleave(AVFormatContext *, AVPacket *, AVPacket *, int),
int (*compare_ts)(AVFormatContext *, AVPacket *, AVPacket *));
