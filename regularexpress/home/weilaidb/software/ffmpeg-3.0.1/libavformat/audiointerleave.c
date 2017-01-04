void ff_audio_interleave_close(AVFormatContext *s)
int ff_audio_interleave_init(AVFormatContext *s,
const int *samples_per_frame,
AVRational time_base)
static int interleave_new_audio_packet(AVFormatContext *s, AVPacket *pkt,
int stream_index, int flush)
int ff_audio_rechunk_interleave(AVFormatContext *s, AVPacket *out, AVPacket *pkt, int flush,
int (*get_packet)(AVFormatContext *, AVPacket *, AVPacket *, int),
int (*compare_ts)(AVFormatContext *, AVPacket *, AVPacket *))
