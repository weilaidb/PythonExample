#define AVCODEC_H264DEC_H
#define H264_MAX_PICTURE_COUNT 36
#define MAX_MMCO_COUNT         66
#define MAX_DELAYED_PIC_COUNT  16
#define ALLOW_INTERLACE
#define FMO 0
#define MAX_SLICES 32
#define MB_MBAFF(h)    (h)->mb_mbaff
#define MB_FIELD(sl)  (sl)->mb_field_decoding_flag
#define FRAME_MBAFF(h) (h)->mb_aff_frame
#define FIELD_PICTURE(h) ((h)->picture_structure != PICT_FRAME)
#define LEFT_MBS 2
#define LTOP     0
#define LBOT     1
#define LEFT(i)  (i)
#define MB_MBAFF(h)      0
#define MB_FIELD(sl)     0
#define FRAME_MBAFF(h)   0
#define FIELD_PICTURE(h) 0
#undef  IS_INTERLACED
#define IS_INTERLACED(mb_type) 0
#define LEFT_MBS 1
#define LTOP     0
#define LBOT     0
#define LEFT(i)  0
#define FIELD_OR_MBAFF_PICTURE(h) (FRAME_MBAFF(h) || FIELD_PICTURE(h))
#define CABAC(h) (h)->ps.pps->cabac
#define CHROMA(h)    ((h)->ps.sps->chroma_format_idc)
#define CHROMA422(h) ((h)->ps.sps->chroma_format_idc == 2)
#define CHROMA444(h) ((h)->ps.sps->chroma_format_idc == 3)
#define MB_TYPE_REF0       MB_TYPE_ACPRED
#define MB_TYPE_8x8DCT     0x01000000
#define IS_REF0(a)         ((a) & MB_TYPE_REF0)
#define IS_8x8DCT(a)       ((a) & MB_TYPE_8x8DCT)
typedef enum MMCOOpcode  MMCOOpcode;
typedef struct MMCO  MMCO;
typedef struct H264Picture  H264Picture;
typedef struct H264Ref  H264Ref;
typedef struct H264SliceContext  H264SliceContext;
typedef struct H264Context  H264Context;
extern const uint16_t ff_h264_mb_sizes[4];
int ff_h264_get_slice_type(const H264SliceContext *sl);
int ff_h264_alloc_tables(H264Context *h);
int ff_h264_decode_ref_pic_list_reordering(H264SliceContext *sl, void *logctx);
int ff_h264_build_ref_list(H264Context *h, H264SliceContext *sl);
void ff_h264_remove_all_refs(H264Context *h);
int ff_h264_execute_ref_pic_marking(H264Context *h);
int ff_h264_decode_ref_pic_marking(H264SliceContext *sl, GetBitContext *gb,
const H2645NAL *nal, void *logctx);
void ff_h264_hl_decode_mb(const H264Context *h, H264SliceContext *sl);
int ff_h264_decode_init(AVCodecContext *avctx);
void ff_h264_decode_init_vlc(void);
int ff_h264_decode_mb_cavlc(const H264Context *h, H264SliceContext *sl);
int ff_h264_decode_mb_cabac(const H264Context *h, H264SliceContext *sl);
void ff_h264_init_cabac_states(const H264Context *h, H264SliceContext *sl);
void ff_h264_direct_dist_scale_factor(const H264Context *const h, H264SliceContext *sl);
void ff_h264_direct_ref_list_init(const H264Context *const h, H264SliceContext *sl);
void ff_h264_pred_direct_motion(const H264Context *const h, H264SliceContext *sl,
int *mb_type);
void ff_h264_filter_mb_fast(const H264Context *h, H264SliceContext *sl, int mb_x, int mb_y,
uint8_t *img_y, uint8_t *img_cb, uint8_t *img_cr,
unsigned int linesize, unsigned int uvlinesize);
void ff_h264_filter_mb(const H264Context *h, H264SliceContext *sl, int mb_x, int mb_y,
uint8_t *img_y, uint8_t *img_cb, uint8_t *img_cr,
unsigned int linesize, unsigned int uvlinesize);
#define LUMA_DC_BLOCK_INDEX   48
#define CHROMA_DC_BLOCK_INDEX 49
static const uint8_t scan8[16 * 3 + 3] = ;
static av_always_inline uint32_t pack16to32(unsigned a, unsigned b)
static av_always_inline uint16_t pack8to16(unsigned a, unsigned b)
static av_always_inline int get_chroma_qp(const PPS *pps, int t, int qscale)
static av_always_inline int pred_intra_mode(const H264Context *h,
H264SliceContext *sl, int n)
static av_always_inline void write_back_intra_pred_mode(const H264Context *h,
H264SliceContext *sl)
static av_always_inline void write_back_non_zero_count(const H264Context *h,
H264SliceContext *sl)
static av_always_inline void write_back_motion_list(const H264Context *h,
H264SliceContext *sl,
int b_stride,
int b_xy, int b8_xy,
int mb_type, int list)
static av_always_inline void write_back_motion(const H264Context *h,
H264SliceContext *sl,
int mb_type)
static av_always_inline int get_dct8x8_allowed(const H264Context *h, H264SliceContext *sl)
static inline int find_start_code(const uint8_t *buf, int buf_size,
int buf_index, int next_avc)
int ff_h264_field_end(H264Context *h, H264SliceContext *sl, int in_setup);
int ff_h264_ref_picture(H264Context *h, H264Picture *dst, H264Picture *src);
void ff_h264_unref_picture(H264Context *h, H264Picture *pic);
int ff_h264_slice_context_init(H264Context *h, H264SliceContext *sl);
void ff_h264_draw_horiz_band(const H264Context *h, H264SliceContext *sl, int y, int height);
int ff_h264_decode_slice_header(H264Context *h, H264SliceContext *sl,
const H2645NAL *nal);
#define SLICE_SINGLETHREAD 1
#define SLICE_SKIPED 2
int ff_h264_execute_decode_slices(H264Context *h, unsigned context_count);
int ff_h264_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src);
void ff_h264_flush_change(H264Context *h);
void ff_h264_free_tables(H264Context *h);
void ff_h264_set_erpic(ERPicture *dst, H264Picture *src);
