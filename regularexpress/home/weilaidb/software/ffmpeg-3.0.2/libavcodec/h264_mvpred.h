#define AVCODEC_H264_MVPRED_H
static av_always_inline int fetch_diagonal_mv(const H264Context *h, H264SliceContext *sl,
const int16_t **C,
int i, int list, int part_width)
static av_always_inline void pred_motion(const H264Context *const h,
H264SliceContext *sl,
int n,
int part_width, int list, int ref,
int *const mx, int *const my)
static av_always_inline void pred_16x8_motion(const H264Context *const h,
H264SliceContext *sl,
int n, int list, int ref,
int *const mx, int *const my)
static av_always_inline void pred_8x16_motion(const H264Context *const h,
H264SliceContext *sl,
int n, int list, int ref,
int *const mx, int *const my)
#define FIX_MV_MBAFF(type, refn, mvn, idx)      \
if (FRAME_MBAFF(h))
static av_always_inline void pred_pskip_motion(const H264Context *const h,
H264SliceContext *sl)
static void fill_decode_neighbors(const H264Context *h, H264SliceContext *sl, int mb_type)
static void fill_decode_caches(const H264Context *h, H264SliceContext *sl, int mb_type)
static void av_unused decode_mb_skip(const H264Context *h, H264SliceContext *sl)
