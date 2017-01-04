static int rv30_parse_slice_header(RV34DecContext *r, GetBitContext *gb, SliceInfo *si)
static int rv30_decode_intra_types(RV34DecContext *r, GetBitContext *gb, int8_t *dst)
static int rv30_decode_mb_info(RV34DecContext *r)
static inline void rv30_weak_loop_filter(uint8_t *src, const int step,
const int stride, const int lim)
static void rv30_loop_filter(RV34DecContext *r, int row)
static av_cold int rv30_decode_init(AVCodecContext *avctx)
AVCodec ff_rv30_decoder = ;
