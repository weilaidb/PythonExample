#define DEFINE_CKSUM_LINE(name, type, conv) \
static void cksum_line_ ## name(unsigned *cksum, void *data, unsigned size) \
DEFINE_CKSUM_LINE(u8,  uint8_t, *p)
DEFINE_CKSUM_LINE(s16, int16_t, *p + 0x8000)
DEFINE_CKSUM_LINE(s32, int32_t, *p + 0x80000000)
DEFINE_CKSUM_LINE(flt, float,   *p * 0x80000000 + 0x80000000)
DEFINE_CKSUM_LINE(dbl, double,  *p * 0x80000000 + 0x80000000)
static void video_frame_cksum(AVBPrint *bp, AVFrame *frame)
static void audio_frame_cksum(AVBPrint *bp, AVFrame *frame)
static int write_frame(struct AVFormatContext *s, int stream_index,
AVFrame **frame, unsigned flags)
static int write_packet(struct AVFormatContext *s, AVPacket *pkt)
AVOutputFormat ff_uncodedframecrc_muxer = ;
