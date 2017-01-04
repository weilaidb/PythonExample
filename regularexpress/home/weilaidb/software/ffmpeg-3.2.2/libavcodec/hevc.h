#define AVCODEC_HEVC_H
#define MAX_DPB_SIZE 16
#define MAX_REFS 16
#define MAX_NB_THREADS 16
#define SHIFT_CTB_WPP 2
#define MAX_SUB_LAYERS 7
#define MAX_VPS_COUNT 16
#define MAX_SPS_COUNT 32
#define MAX_PPS_COUNT 256
#define MAX_SHORT_TERM_RPS_COUNT 64
#define MAX_CU_SIZE 128
#define MAX_TRANSFORM_DEPTH 5
#define MAX_TB_SIZE 32
#define MAX_LOG2_CTB_SIZE 6
#define MAX_QP 51
#define DEFAULT_INTRA_TC_OFFSET 2
#define HEVC_CONTEXTS 199
#define MRG_MAX_NUM_CANDS     5
#define L0 0
#define L1 1
#define EPEL_EXTRA_BEFORE 1
#define EPEL_EXTRA_AFTER  2
#define EPEL_EXTRA        3
#define QPEL_EXTRA_BEFORE 3
#define QPEL_EXTRA_AFTER  4
#define QPEL_EXTRA        7
#define EDGE_EMU_BUFFER_STRIDE 80
#define SAMPLE(tab, x, y) ((tab)[(y) * s->sps->width + (x)])
#define SAMPLE_CTB(tab, x, y) ((tab)[(y) * min_cb_width + (x)])
#define IS_IDR(s) ((s)->nal_unit_type == NAL_IDR_W_RADL || (s)->nal_unit_type == NAL_IDR_N_LP)
#define IS_BLA(s) ((s)->nal_unit_type == NAL_BLA_W_RADL || (s)->nal_unit_type == NAL_BLA_W_LP || \
(s)->nal_unit_type == NAL_BLA_N_LP)
#define IS_IRAP(s) ((s)->nal_unit_type >= 16 && (s)->nal_unit_type <= 23)
enum NALUnitType ;
enum RPSType ;
enum SliceType ;
enum SyntaxElement ;
enum PartMode ;
enum PredMode ;
enum InterPredIdc ;
enum PredFlag ;
enum IntraPredMode ;
enum SAOType ;
enum SAOEOClass ;
enum ScanType ;
typedef struct ShortTermRPS  ShortTermRPS;
typedef struct LongTermRPS  LongTermRPS;
typedef struct RefPicList  RefPicList;
typedef struct RefPicListTab  RefPicListTab;
typedef struct HEVCWindow  HEVCWindow;
typedef struct VUI  VUI;
typedef struct PTLCommon  PTLCommon;
typedef struct PTL  PTL;
typedef struct HEVCVPS  HEVCVPS;
typedef struct ScalingList  ScalingList;
typedef struct HEVCSPS  HEVCSPS;
typedef struct HEVCPPS  HEVCPPS;
typedef struct HEVCParamSets  HEVCParamSets;
typedef struct SliceHeader  SliceHeader;
typedef struct CodingUnit  CodingUnit;
typedef struct Mv  Mv;
typedef struct MvField  MvField;
typedef struct NeighbourAvailable  NeighbourAvailable;
typedef struct PredictionUnit  PredictionUnit;
typedef struct TransformUnit  TransformUnit;
typedef struct DBParams  DBParams;
#define HEVC_FRAME_FLAG_OUTPUT    (1 << 0)
#define HEVC_FRAME_FLAG_SHORT_REF (1 << 1)
#define HEVC_FRAME_FLAG_LONG_REF  (1 << 2)
#define HEVC_FRAME_FLAG_BUMPING   (1 << 3)
typedef struct HEVCFrame  HEVCFrame;
typedef struct HEVCLocalContext  HEVCLocalContext;
typedef struct HEVCContext  HEVCContext;
int ff_hevc_decode_short_term_rps(GetBitContext *gb, AVCodecContext *avctx,
ShortTermRPS *rps, const HEVCSPS *sps, int is_slice_header);
int ff_hevc_parse_sps(HEVCSPS *sps, GetBitContext *gb, unsigned int *sps_id,
int apply_defdispwin, AVBufferRef **vps_list, AVCodecContext *avctx);
int ff_hevc_decode_nal_vps(GetBitContext *gb, AVCodecContext *avctx,
HEVCParamSets *ps);
int ff_hevc_decode_nal_sps(GetBitContext *gb, AVCodecContext *avctx,
HEVCParamSets *ps, int apply_defdispwin);
int ff_hevc_decode_nal_pps(GetBitContext *gb, AVCodecContext *avctx,
HEVCParamSets *ps);
int ff_hevc_decode_nal_sei(HEVCContext *s);
void ff_hevc_clear_refs(HEVCContext *s);
void ff_hevc_flush_dpb(HEVCContext *s);
int ff_hevc_compute_poc(HEVCContext *s, int poc_lsb);
RefPicList *ff_hevc_get_ref_list(HEVCContext *s, HEVCFrame *frame,
int x0, int y0);
int ff_hevc_frame_rps(HEVCContext *s);
int ff_hevc_slice_rpl(HEVCContext *s);
void ff_hevc_save_states(HEVCContext *s, int ctb_addr_ts);
void ff_hevc_cabac_init(HEVCContext *s, int ctb_addr_ts);
int ff_hevc_sao_merge_flag_decode(HEVCContext *s);
int ff_hevc_sao_type_idx_decode(HEVCContext *s);
int ff_hevc_sao_band_position_decode(HEVCContext *s);
int ff_hevc_sao_offset_abs_decode(HEVCContext *s);
int ff_hevc_sao_offset_sign_decode(HEVCContext *s);
int ff_hevc_sao_eo_class_decode(HEVCContext *s);
int ff_hevc_end_of_slice_flag_decode(HEVCContext *s);
int ff_hevc_cu_transquant_bypass_flag_decode(HEVCContext *s);
int ff_hevc_skip_flag_decode(HEVCContext *s, int x0, int y0,
int x_cb, int y_cb);
int ff_hevc_pred_mode_decode(HEVCContext *s);
int ff_hevc_split_coding_unit_flag_decode(HEVCContext *s, int ct_depth,
int x0, int y0);
int ff_hevc_part_mode_decode(HEVCContext *s, int log2_cb_size);
int ff_hevc_pcm_flag_decode(HEVCContext *s);
int ff_hevc_prev_intra_luma_pred_flag_decode(HEVCContext *s);
int ff_hevc_mpm_idx_decode(HEVCContext *s);
int ff_hevc_rem_intra_luma_pred_mode_decode(HEVCContext *s);
int ff_hevc_intra_chroma_pred_mode_decode(HEVCContext *s);
int ff_hevc_merge_idx_decode(HEVCContext *s);
int ff_hevc_merge_flag_decode(HEVCContext *s);
int ff_hevc_inter_pred_idc_decode(HEVCContext *s, int nPbW, int nPbH);
int ff_hevc_ref_idx_lx_decode(HEVCContext *s, int num_ref_idx_lx);
int ff_hevc_mvp_lx_flag_decode(HEVCContext *s);
int ff_hevc_no_residual_syntax_flag_decode(HEVCContext *s);
int ff_hevc_split_transform_flag_decode(HEVCContext *s, int log2_trafo_size);
int ff_hevc_cbf_cb_cr_decode(HEVCContext *s, int trafo_depth);
int ff_hevc_cbf_luma_decode(HEVCContext *s, int trafo_depth);
int ff_hevc_log2_res_scale_abs(HEVCContext *s, int idx);
int ff_hevc_res_scale_sign_flag(HEVCContext *s, int idx);
int ff_hevc_frame_nb_refs(HEVCContext *s);
int ff_hevc_set_new_ref(HEVCContext *s, AVFrame **frame, int poc);
int ff_hevc_output_frame(HEVCContext *s, AVFrame *frame, int flush);
void ff_hevc_bump_frame(HEVCContext *s);
void ff_hevc_unref_frame(HEVCContext *s, HEVCFrame *frame, int flags);
void ff_hevc_set_neighbour_available(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH);
void ff_hevc_luma_mv_merge_mode(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH, int log2_cb_size,
int part_idx, int merge_idx, MvField *mv);
void ff_hevc_luma_mv_mvp_mode(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH, int log2_cb_size,
int part_idx, int merge_idx,
MvField *mv, int mvp_lx_flag, int LX);
void ff_hevc_set_qPy(HEVCContext *s, int xBase, int yBase,
int log2_cb_size);
void ff_hevc_deblocking_boundary_strengths(HEVCContext *s, int x0, int y0,
int log2_trafo_size);
int ff_hevc_cu_qp_delta_sign_flag(HEVCContext *s);
int ff_hevc_cu_qp_delta_abs(HEVCContext *s);
int ff_hevc_cu_chroma_qp_offset_flag(HEVCContext *s);
int ff_hevc_cu_chroma_qp_offset_idx(HEVCContext *s);
void ff_hevc_hls_filter(HEVCContext *s, int x, int y, int ctb_size);
void ff_hevc_hls_filters(HEVCContext *s, int x_ctb, int y_ctb, int ctb_size);
void ff_hevc_hls_residual_coding(HEVCContext *s, int x0, int y0,
int log2_trafo_size, enum ScanType scan_idx,
int c_idx);
void ff_hevc_hls_mvd_coding(HEVCContext *s, int x0, int y0, int log2_cb_size);
int ff_hevc_encode_nal_vps(HEVCVPS *vps, unsigned int id,
uint8_t *buf, int buf_size);
void ff_hevc_reset_sei(HEVCContext *s);
extern const uint8_t ff_hevc_qpel_extra_before[4];
extern const uint8_t ff_hevc_qpel_extra_after[4];
extern const uint8_t ff_hevc_qpel_extra[4];
extern const uint8_t ff_hevc_diag_scan4x4_x[16];
extern const uint8_t ff_hevc_diag_scan4x4_y[16];
extern const uint8_t ff_hevc_diag_scan8x8_x[64];
extern const uint8_t ff_hevc_diag_scan8x8_y[64];
