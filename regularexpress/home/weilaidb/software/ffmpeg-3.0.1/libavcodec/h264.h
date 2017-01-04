#define AVCODEC_H264_H
#define H264_MAX_PICTURE_COUNT 36
#define H264_MAX_THREADS       32
#define MAX_SPS_COUNT          32
#define MAX_PPS_COUNT         256
#define MAX_MMCO_COUNT         66
#define MAX_DELAYED_PIC_COUNT  16
#define MAX_MBPAIR_SIZE (256*1024)
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
#define CABAC(h) (h)->pps.cabac
#define CHROMA(h)    ((h)->sps.chroma_format_idc)
#define CHROMA422(h) ((h)->sps.chroma_format_idc == 2)
#define CHROMA444(h) ((h)->sps.chroma_format_idc == 3)
#define EXTENDED_SAR       255
#define MB_TYPE_REF0       MB_TYPE_ACPRED
#define MB_TYPE_8x8DCT     0x01000000
#define IS_REF0(a)         ((a) & MB_TYPE_REF0)
#define IS_8x8DCT(a)       ((a) & MB_TYPE_8x8DCT)
#define QP_MAX_NUM (51 + 6*6)
enum ;
typedef enum  SEI_Type;
typedef enum  SEI_PicStructType;
typedef enum  SEI_FpaType;
typedef struct SPS  SPS;
typedef struct PPS  PPS;
typedef struct FPA  FPA;
typedef struct GreenMetaData  GreenMetaData;
typedef enum MMCOOpcode  MMCOOpcode;
typedef struct MMCO  MMCO;
typedef struct H264Picture  H264Picture;
typedef struct H264Ref  H264Ref;
typedef struct H264SliceContext  H264SliceContext;
typedef struct H264Context  H264Context;
extern const uint8_t ff_h264_chroma_qp[7][QP_MAX_NUM + 1];
extern const uint16_t ff_h264_mb_sizes[4];
int ff_h264_decode_sei(H264Context *h);
int ff_h264_decode_seq_parameter_set(H264Context *h, int ignore_truncation);
int ff_h264_get_profile(SPS *sps);
int ff_h264_decode_picture_parameter_set(H264Context *h, int bit_length);
const uint8_t *ff_h264_decode_nal(H264Context *h, H264SliceContext *sl, const uint8_t *src,
int *dst_length, int *consumed, int length);
void ff_h264_free_context(H264Context *h);
int ff_h264_get_slice_type(const H264SliceContext *sl);
int ff_h264_alloc_tables(H264Context *h);
int ff_h264_decode_ref_pic_list_reordering(H264Context *h, H264SliceContext *sl);
void ff_h264_fill_mbaff_ref_list(H264Context *h, H264SliceContext *sl);
void ff_h264_remove_all_refs(H264Context *h);
int ff_h264_execute_ref_pic_marking(H264Context *h, MMCO *mmco, int mmco_count);
int ff_h264_decode_ref_pic_marking(H264Context *h, GetBitContext *gb,
int first_slice);
int ff_generate_sliding_window_mmcos(H264Context *h, int first_slice);
int ff_h264_check_intra4x4_pred_mode(const H264Context *h, H264SliceContext *sl);
int ff_h264_check_intra_pred_mode(const H264Context *h, H264SliceContext *sl,
int mode, int is_chroma);
void ff_h264_hl_decode_mb(const H264Context *h, H264SliceContext *sl);
int ff_h264_decode_extradata(H264Context *h, const uint8_t *buf, int size);
int ff_h264_decode_init(AVCodecContext *avctx);
void ff_h264_decode_init_vlc(void);
int ff_h264_decode_mb_cavlc(const H264Context *h, H264SliceContext *sl);
int ff_h264_decode_mb_cabac(const H264Context *h, H264SliceContext *sl);
void ff_h264_init_cabac_states(const H264Context *h, H264SliceContext *sl);
void ff_h264_init_dequant_tables(H264Context *h);
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
void ff_h264_reset_sei(H264Context *h);
const char* ff_h264_sei_stereo_mode(H264Context *h);
#define LUMA_DC_BLOCK_INDEX   48
#define CHROMA_DC_BLOCK_INDEX 49
static const uint8_t scan8[16 * 3 + 3] = ;
static av_always_inline uint32_t pack16to32(unsigned a, unsigned b)
static av_always_inline uint16_t pack8to16(unsigned a, unsigned b)
static av_always_inline int get_chroma_qp(const H264Context *h, int t, int qscale)
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
static inline int get_avc_nalsize(H264Context *h, const uint8_t *buf,
int buf_size, int *buf_index)
int ff_h264_field_end(H264Context *h, H264SliceContext *sl, int in_setup);
int ff_h264_ref_picture(H264Context *h, H264Picture *dst, H264Picture *src);
void ff_h264_unref_picture(H264Context *h, H264Picture *pic);
int ff_h264_slice_context_init(H264Context *h, H264SliceContext *sl);
void ff_h264_draw_horiz_band(const H264Context *h, H264SliceContext *sl, int y, int height);
int ff_init_poc(H264Context *h, int pic_field_poc[2], int *pic_poc);
int ff_pred_weight_table(H264Context *h, H264SliceContext *sl);
int ff_set_ref_count(H264Context *h, H264SliceContext *sl);
int ff_h264_decode_slice_header(H264Context *h, H264SliceContext *sl);
#define SLICE_SINGLETHREAD 1
#define SLICE_SKIPED 2
int ff_h264_execute_decode_slices(H264Context *h, unsigned context_count);
int ff_h264_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src);
void ff_h264_flush_change(H264Context *h);
void ff_h264_free_tables(H264Context *h);
void ff_h264_set_erpic(ERPicture *dst, H264Picture *src);
