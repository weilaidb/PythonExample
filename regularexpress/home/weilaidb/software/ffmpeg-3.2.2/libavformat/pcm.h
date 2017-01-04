#define AVFORMAT_PCM_H
int ff_pcm_read_packet(AVFormatContext *s, AVPacket *pkt);
int ff_pcm_read_seek(AVFormatContext *s,
int stream_index, int64_t timestamp, int flags);
