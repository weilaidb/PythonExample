static const uint16_t silk_frame_duration_ms[16] = ;
static const int silk_resample_delay[] = ;
static const uint8_t celt_band_end[] = ;
static int get_silk_samplerate(int config)
static int opus_rc_init(OpusRangeCoder *rc, const uint8_t *data, int size)
static void opus_raw_init(OpusRangeCoder *rc, const uint8_t *rightend,
unsigned int bytes)
static void opus_fade(float *out,
const float *in1, const float *in2,
const float *window, int len)
static int opus_flush_resample(OpusStreamContext *s, int nb_samples)
static int opus_init_resample(OpusStreamContext *s)
static int opus_decode_redundancy(OpusStreamContext *s, const uint8_t *data, int size)
static int opus_decode_frame(OpusStreamContext *s, const uint8_t *data, int size)
static int opus_decode_subpacket(OpusStreamContext *s,
const uint8_t *buf, int buf_size,
float **out, int out_size,
int nb_samples)
static int opus_decode_packet(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void opus_decode_flush(AVCodecContext *ctx)
static av_cold int opus_decode_close(AVCodecContext *avctx)
static av_cold int opus_decode_init(AVCodecContext *avctx)
AVCodec ff_opus_decoder = ;
