typedef struct SRTContext SRTContext;
static int srt_write_header(AVFormatContext *avf)
static int srt_write_packet(AVFormatContext *avf, AVPacket *pkt)
AVOutputFormat ff_srt_muxer = ;
