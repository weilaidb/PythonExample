#define AVFORMAT_AUDIOINTERLEAVE_H
typedef struct AudioInterleaveContext  AudioInterleaveContext;
int ff_audio_interleave_init(AVFormatContext *s, const int *samples_per_frame, AVRational time_base);
void ff_audio_interleave_close(AVFormatContext *s);
int ff_audio_rechunk_interleave(AVFormatContext *s, AVPacket *out, AVPacket *pkt, int flush,
int (*get_packet)(AVFormatContext *, AVPacket *, AVPacket *, int),
int (*compare_ts)(AVFormatContext *, AVPacket *, AVPacket *));
