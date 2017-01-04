enum SplitMode ;
static const int sec_order_sizes[4] = ;
enum ContextDirection ;
static int model_calc_threshold(Model *m)
static void model_reset(Model *m)
static av_cold void model_init(Model *m, int num_syms, int thr_weight)
static void model_rescale_weights(Model *m)
void ff_mss12_model_update(Model *m, int val)
static void pixctx_reset(PixContext *ctx)
static av_cold void pixctx_init(PixContext *ctx, int cache_size,
int full_model_syms, int special_initial_cache)
static av_always_inline int decode_pixel(ArithCoder *acoder, PixContext *pctx,
uint8_t *ngb, int num_ngb, int any_ngb)
static int decode_pixel_in_context(ArithCoder *acoder, PixContext *pctx,
uint8_t *src, int stride, int x, int y,
int has_right)
static int decode_region(ArithCoder *acoder, uint8_t *dst, uint8_t *rgb_pic,
int x, int y, int width, int height, int stride,
int rgb_stride, PixContext *pctx, const uint32_t *pal)
static void copy_rectangles(MSS12Context const *c,
int x, int y, int width, int height)
static int motion_compensation(MSS12Context const *c,
int x, int y, int width, int height)
static int decode_region_masked(MSS12Context const *c, ArithCoder *acoder,
uint8_t *dst, int stride, uint8_t *mask,
int mask_stride, int x, int y,
int width, int height,
PixContext *pctx)
static av_cold void slicecontext_init(SliceContext *sc,
int version, int full_model_syms)
void ff_mss12_slicecontext_reset(SliceContext *sc)
static int decode_pivot(SliceContext *sc, ArithCoder *acoder, int base)
static int decode_region_intra(SliceContext *sc, ArithCoder *acoder,
int x, int y, int width, int height)
static int decode_region_inter(SliceContext *sc, ArithCoder *acoder,
int x, int y, int width, int height)
int ff_mss12_decode_rect(SliceContext *sc, ArithCoder *acoder,
int x, int y, int width, int height)
av_cold int ff_mss12_decode_init(MSS12Context *c, int version,
SliceContext* sc1, SliceContext *sc2)
av_cold int ff_mss12_decode_end(MSS12Context *c)
