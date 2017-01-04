static const uint8_t alpha_table[52*3] = ;
static const uint8_t beta_table[52*3] = ;
static const uint8_t tc0_table[52*3][4] = ;
static av_always_inline void filter_mb_edgev(uint8_t *pix, int stride,
const int16_t bS[4],
unsigned int qp, int a, int b,
const H264Context *h, int intra)
static av_always_inline void filter_mb_edgecv(uint8_t *pix, int stride,
const int16_t bS[4],
unsigned int qp, int a, int b,
const H264Context *h, int intra)
static av_always_inline void filter_mb_mbaff_edgev(const H264Context *h, uint8_t *pix,
int stride,
const int16_t bS[7], int bsi,
int qp, int a, int b,
int intra)
static av_always_inline void filter_mb_mbaff_edgecv(const H264Context *h,
uint8_t *pix, int stride,
const int16_t bS[7],
int bsi, int qp, int a,
int b, int intra)
static av_always_inline void filter_mb_edgeh(uint8_t *pix, int stride,
const int16_t bS[4],
unsigned int qp, int a, int b,
const H264Context *h, int intra)
static av_always_inline void filter_mb_edgech(uint8_t *pix, int stride,
const int16_t bS[4],
unsigned int qp, int a, int b,
const H264Context *h, int intra)
static av_always_inline void h264_filter_mb_fast_internal(const H264Context *h,
H264SliceContext *sl,
int mb_x, int mb_y,
uint8_t *img_y,
uint8_t *img_cb,
uint8_t *img_cr,
unsigned int linesize,
unsigned int uvlinesize,
int pixel_shift)
void ff_h264_filter_mb_fast(const H264Context *h, H264SliceContext *sl,
int mb_x, int mb_y, uint8_t *img_y,
uint8_t *img_cb, uint8_t *img_cr,
unsigned int linesize, unsigned int uvlinesize)
static int check_mv(H264SliceContext *sl, long b_idx, long bn_idx, int mvy_limit)
static av_always_inline void filter_mb_dir(const H264Context *h, H264SliceContext *sl,
int mb_x, int mb_y,
uint8_t *img_y, uint8_t *img_cb, uint8_t *img_cr,
unsigned int linesize, unsigned int uvlinesize,
int mb_xy, int mb_type, int mvy_limit,
int first_vertical_edge_done, int a, int b,
int chroma, int dir)
void ff_h264_filter_mb(const H264Context *h, H264SliceContext *sl,
int mb_x, int mb_y,
uint8_t *img_y, uint8_t *img_cb, uint8_t *img_cr,
unsigned int linesize, unsigned int uvlinesize)
