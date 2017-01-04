static av_always_inline void predict_slice_buffered(SnowContext *s, slice_buffer * sb, IDWTELEM * old_buffer, int plane_index, int add, int mb_y)
static inline void decode_subband_slice_buffered(SnowContext *s, SubBand *b, slice_buffer * sb, int start_y, int h, int save_state[1])
static int decode_q_branch(SnowContext *s, int level, int x, int y)
static void dequantize_slice_buffered(SnowContext *s, slice_buffer * sb, SubBand *b, IDWTELEM *src, int stride, int start_y, int end_y)
static void correlate_slice_buffered(SnowContext *s, slice_buffer * sb, SubBand *b, IDWTELEM *src, int stride, int inverse, int use_median, int start_y, int end_y)
static void decode_qlogs(SnowContext *s)
#define GET_S(dst, check) \
tmp= get_symbol(&s->c, s->header_state, 0);\
if(!(check))\
dst= tmp;
static int decode_header(SnowContext *s)
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_blocks(SnowContext *s)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_snow_decoder = ;
