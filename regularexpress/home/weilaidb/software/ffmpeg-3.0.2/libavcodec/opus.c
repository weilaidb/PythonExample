static const uint16_t opus_frame_duration[32] = ;
static inline int xiph_lacing_16bit(const uint8_t **ptr, const uint8_t *end)
static inline int xiph_lacing_full(const uint8_t **ptr, const uint8_t *end)
int ff_opus_parse_packet(OpusPacket *pkt, const uint8_t *buf, int buf_size,
int self_delimiting)
static int channel_reorder_vorbis(int nb_channels, int channel_idx)
static int channel_reorder_unknown(int nb_channels, int channel_idx)
av_cold int ff_opus_parse_extradata(AVCodecContext *avctx,
OpusContext *s)
