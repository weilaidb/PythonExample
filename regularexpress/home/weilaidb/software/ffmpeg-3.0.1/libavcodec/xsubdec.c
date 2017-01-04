static av_cold int decode_init(AVCodecContext *avctx)
static const uint8_t tc_offsets[9] = ;
static const uint8_t tc_muls[9] = ;
static int64_t parse_timecode(const uint8_t *buf, int64_t packet_time)
static int decode_frame(AVCodecContext *avctx, void *data, int *data_size,
AVPacket *avpkt)
AVCodec ff_xsub_decoder = ;
