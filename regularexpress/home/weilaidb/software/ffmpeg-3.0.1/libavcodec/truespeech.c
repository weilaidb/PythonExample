typedef struct TSContext  TSContext;
static av_cold int truespeech_decode_init(AVCodecContext * avctx)
static void truespeech_read_frame(TSContext *dec, const uint8_t *input)
static void truespeech_correlate_filter(TSContext *dec)
static void truespeech_filters_merge(TSContext *dec)
static void truespeech_apply_twopoint_filter(TSContext *dec, int quart)
static void truespeech_place_pulses(TSContext *dec, int16_t *out, int quart)
static void truespeech_update_filters(TSContext *dec, int16_t *out, int quart)
static void truespeech_synth(TSContext *dec, int16_t *out, int quart)
static void truespeech_save_prevvec(TSContext *c)
static int truespeech_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_truespeech_decoder = ;
