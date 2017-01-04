#undef MCFUNC
#if   CHROMA_IDC == 1
#   define MCFUNC(n) FUNC(n ## _420)
#elif CHROMA_IDC == 2
#   define MCFUNC(n) FUNC(n ## _422)
#elif CHROMA_IDC == 3
#   define MCFUNC(n) FUNC(n ## _444)
#undef  mc_part
#define mc_part MCFUNC(mc_part)
static void mc_part(const H264Context *h, H264SliceContext *sl,
int n, int square,
int height, int delta,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr,
int x_offset, int y_offset,
const qpel_mc_func *qpix_put,
h264_chroma_mc_func chroma_put,
const qpel_mc_func *qpix_avg,
h264_chroma_mc_func chroma_avg,
const h264_weight_func *weight_op,
const h264_biweight_func *weight_avg,
int list0, int list1)
static void MCFUNC(hl_motion)(const H264Context *h, H264SliceContext *sl,
uint8_t *dest_y,
uint8_t *dest_cb, uint8_t *dest_cr,
const qpel_mc_func(*qpix_put)[16],
const h264_chroma_mc_func(*chroma_put),
const qpel_mc_func(*qpix_avg)[16],
const h264_chroma_mc_func(*chroma_avg),
const h264_weight_func *weight_op,
const h264_biweight_func *weight_avg)
