typedef struct DVAudioContext  DVAudioContext;
static av_cold int decode_init(AVCodecContext *avctx)
static inline uint16_t dv_audio_12to16(uint16_t sample)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *pkt)
AVCodec ff_dvaudio_decoder = ;
