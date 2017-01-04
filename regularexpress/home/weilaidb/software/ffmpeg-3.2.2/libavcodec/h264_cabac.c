#define CABAC(h) 1
#define UNCHECKED_BITSTREAM_READER 1
#define INT_BIT (CHAR_BIT * sizeof(int))
#if ARCH_X86
static const int8_t cabac_context_init_I[1024][2] =
;
static const int8_t cabac_context_init_PB[3][1024][2] =
;
void ff_h264_init_cabac_states(const H264Context *h, H264SliceContext *sl)
static int decode_cabac_field_decoding_flag(const H264Context *h, H264SliceContext *sl)
static int decode_cabac_intra_mb_type(H264SliceContext *sl,
int ctx_base, int intra_slice)
static int decode_cabac_mb_skip(const H264Context *h, H264SliceContext *sl,
int mb_x, int mb_y)
static int decode_cabac_mb_intra4x4_pred_mode(H264SliceContext *sl, int pred_mode)
static int decode_cabac_mb_chroma_pre_mode(const H264Context *h, H264SliceContext *sl)
static int decode_cabac_mb_cbp_luma(H264SliceContext *sl)
static int decode_cabac_mb_cbp_chroma(H264SliceContext *sl)
static int decode_cabac_p_mb_sub_type(H264SliceContext *sl)
static int decode_cabac_b_mb_sub_type(H264SliceContext *sl)
static int decode_cabac_mb_ref(H264SliceContext *sl, int list, int n)
static int decode_cabac_mb_mvd(H264SliceContext *sl, int ctxbase, int amvd, int *mvda)
#define DECODE_CABAC_MB_MVD(sl, list,  n )\
static av_always_inline int get_cabac_cbf_ctx(H264SliceContext *sl,
int cat, int idx, int max_coeff,
int is_dc)
static av_always_inline void
decode_cabac_residual_internal(const H264Context *h, H264SliceContext *sl,
int16_t *block,
int cat, int n, const uint8_t *scantable,
const uint32_t *qmul, int max_coeff,
int is_dc, int chroma422)
static av_noinline void decode_cabac_residual_dc_internal(const H264Context *h,
H264SliceContext *sl,
int16_t *block,
int cat, int n,
const uint8_t *scantable,
int max_coeff)
static av_noinline void decode_cabac_residual_dc_internal_422(const H264Context *h,
H264SliceContext *sl,
int16_t *block,
int cat, int n,
const uint8_t *scantable,
int max_coeff)
static av_noinline void decode_cabac_residual_nondc_internal(const H264Context *h,
H264SliceContext *sl,
int16_t *block,
int cat, int n,
const uint8_t *scantable,
const uint32_t *qmul,
int max_coeff)
static av_always_inline void decode_cabac_residual_dc(const H264Context *h,
H264SliceContext *sl,
int16_t *block,
int cat, int n,
const uint8_t *scantable,
int max_coeff)
static av_always_inline void
decode_cabac_residual_dc_422(const H264Context *h, H264SliceContext *sl,
int16_t *block,
int cat, int n, const uint8_t *scantable,
int max_coeff)
static av_always_inline void decode_cabac_residual_nondc(const H264Context *h,
H264SliceContext *sl,
int16_t *block,
int cat, int n,
const uint8_t *scantable,
const uint32_t *qmul,
int max_coeff)
static av_always_inline void decode_cabac_luma_residual(const H264Context *h, H264SliceContext *sl,
const uint8_t *scan, const uint8_t *scan8x8,
int pixel_shift, int mb_type, int cbp, int p)
int ff_h264_decode_mb_cabac(const H264Context *h, H264SliceContext *sl)
