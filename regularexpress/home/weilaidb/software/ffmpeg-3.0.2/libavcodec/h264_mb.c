static inline int get_lowest_part_list_y(H264SliceContext *sl,
int n, int height, int y_offset, int list)
static inline void get_lowest_part_y(const H264Context *h, H264SliceContext *sl,
int16_t refs[2][48], int n,
int height, int y_offset, int list0,
int list1, int *nrefs)
static void await_references(const H264Context *h, H264SliceContext *sl)
static av_always_inline void mc_dir_part(const H264Context *h, H264SliceContext *sl,
H264Ref *pic,
int n, int square, int height,
int delta, int list,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr,
int src_x_offset, int src_y_offset,
const qpel_mc_func *qpix_op,
h264_chroma_mc_func chroma_op,
int pixel_shift, int chroma_idc)
static av_always_inline void mc_part_std(const H264Context *h, H264SliceContext *sl,
int n, int square,
int height, int delta,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr,
int x_offset, int y_offset,
const qpel_mc_func *qpix_put,
h264_chroma_mc_func chroma_put,
const qpel_mc_func *qpix_avg,
h264_chroma_mc_func chroma_avg,
int list0, int list1,
int pixel_shift, int chroma_idc)
static av_always_inline void mc_part_weighted(const H264Context *h, H264SliceContext *sl,
int n, int square,
int height, int delta,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr,
int x_offset, int y_offset,
const qpel_mc_func *qpix_put,
h264_chroma_mc_func chroma_put,
h264_weight_func luma_weight_op,
h264_weight_func chroma_weight_op,
h264_biweight_func luma_weight_avg,
h264_biweight_func chroma_weight_avg,
int list0, int list1,
int pixel_shift, int chroma_idc)
static av_always_inline void prefetch_motion(const H264Context *h, H264SliceContext *sl,
int list, int pixel_shift,
int chroma_idc)
static av_always_inline void xchg_mb_border(const H264Context *h, H264SliceContext *sl,
uint8_t *src_y,
uint8_t *src_cb, uint8_t *src_cr,
int linesize, int uvlinesize,
int xchg, int chroma444,
int simple, int pixel_shift)
static av_always_inline int dctcoef_get(int16_t *mb, int high_bit_depth,
int index)
static av_always_inline void dctcoef_set(int16_t *mb, int high_bit_depth,
int index, int value)
static av_always_inline void hl_decode_mb_predict_luma(const H264Context *h,
H264SliceContext *sl,
int mb_type, int is_h264,
int simple,
int transform_bypass,
int pixel_shift,
const int *block_offset,
int linesize,
uint8_t *dest_y, int p)
static av_always_inline void hl_decode_mb_idct_luma(const H264Context *h, H264SliceContext *sl,
int mb_type,
int is_h264, int simple,
int transform_bypass,
int pixel_shift,
const int *block_offset,
int linesize,
uint8_t *dest_y, int p)
#define BITS   8
#define SIMPLE 1
#undef  BITS
#define BITS   16
#undef  SIMPLE
#define SIMPLE 0
void ff_h264_hl_decode_mb(const H264Context *h, H264SliceContext *sl)
