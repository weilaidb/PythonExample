void ff_vp56_init_dequant(VP56Context *s, int quantizer)
static int vp56_get_vectors_predictors(VP56Context *s, int row, int col,
VP56Frame ref_frame)
static void vp56_parse_mb_type_models(VP56Context *s)
static VP56mb vp56_parse_mb_type(VP56Context *s,
VP56mb prev_type, int ctx)
static void vp56_decode_4mv(VP56Context *s, int row, int col)
static VP56mb vp56_decode_mv(VP56Context *s, int row, int col)
static void vp56_add_predictors_dc(VP56Context *s, VP56Frame ref_frame)
static void vp56_deblock_filter(VP56Context *s, uint8_t *yuv,
ptrdiff_t stride, int dx, int dy)
static void vp56_mc(VP56Context *s, int b, int plane, uint8_t *src,
ptrdiff_t stride, int x, int y)
static void vp56_decode_mb(VP56Context *s, int row, int col, int is_alpha)
static int vp56_size_changed(VP56Context *s)
static int ff_vp56_decode_mbs(AVCodecContext *avctx, void *, int, int);
int ff_vp56_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static int ff_vp56_decode_mbs(AVCodecContext *avctx, void *data,
int jobnr, int threadnr)
av_cold int ff_vp56_init(AVCodecContext *avctx, int flip, int has_alpha)
av_cold int ff_vp56_init_context(AVCodecContext *avctx, VP56Context *s,
int flip, int has_alpha)
av_cold int ff_vp56_free(AVCodecContext *avctx)
av_cold int ff_vp56_free_context(VP56Context *s)
