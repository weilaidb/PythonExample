static av_cold int ra144_encode_close(AVCodecContext *avctx)
static av_cold int ra144_encode_init(AVCodecContext * avctx)
static int quantize(int value, const int16_t *table, unsigned int size)
static void orthogonalize(float *v, const float *u)
static void get_match_score(float *work, const float *coefs, float *vect,
const float *ortho1, const float *ortho2,
const float *data, float *score, float *gain)
static void create_adapt_vect(float *vect, const int16_t *cb, int lag)
static int adaptive_cb_search(const int16_t *adapt_cb, float *work,
const float *coefs, float *data)
static void find_best_vect(float *work, const float *coefs,
const int8_t cb[][BLOCKSIZE], const float *ortho1,
const float *ortho2, float *data, int *idx,
float *gain)
static void fixed_cb_search(float *work, const float *coefs, float *data,
int cba_idx, int *cb1_idx, int *cb2_idx)
static void ra144_encode_subblock(RA144Context *ractx,
const int16_t *sblock_data,
const int16_t *lpc_coefs, unsigned int rms,
PutBitContext *pb)
static int ra144_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_ra_144_encoder = ;
