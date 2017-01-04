static const int8_t quant5_10bit[256] = ;
static const int8_t quant5[256] = ;
static const int8_t quant9_10bit[256] = ;
static const int8_t quant11[256] = ;
static const uint8_t ver2_state[256] = ;
static void find_best_state(uint8_t best_state[256][256],
const uint8_t one_state[256])
static av_always_inline av_flatten void put_symbol_inline(RangeCoder *c,
uint8_t *state, int v,
int is_signed,
uint64_t rc_stat[256][2],
uint64_t rc_stat2[32][2])
static av_noinline void put_symbol(RangeCoder *c, uint8_t *state,
int v, int is_signed)
static inline void put_vlc_symbol(PutBitContext *pb, VlcState *const state,
int v, int bits)
static av_always_inline int encode_line(FFV1Context *s, int w,
int16_t *sample[3],
int plane_index, int bits)
static int encode_plane(FFV1Context *s, uint8_t *src, int w, int h,
int stride, int plane_index, int pixel_stride)
static int encode_rgb_frame(FFV1Context *s, const uint8_t *src[3],
int w, int h, const int stride[3])
static void write_quant_table(RangeCoder *c, int16_t *quant_table)
static void write_quant_tables(RangeCoder *c,
int16_t quant_table[MAX_CONTEXT_INPUTS][256])
static void write_header(FFV1Context *f)
static int write_extradata(FFV1Context *f)
static int sort_stt(FFV1Context *s, uint8_t stt[256])
static av_cold int encode_init(AVCodecContext *avctx)
static void encode_slice_header(FFV1Context *f, FFV1Context *fs)
static void choose_rct_params(FFV1Context *fs, const uint8_t *src[3], const int stride[3], int w, int h)
static int encode_slice(AVCodecContext *c, void *arg)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(FFV1Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ffv1_class = ;
#if FF_API_CODER_TYPE
static const AVCodecDefault ffv1_defaults[] = ;
AVCodec ff_ffv1_encoder = ;
