#define MAX_LOG2_MAX_FRAME_NUM    (12 + 4)
#define MIN_LOG2_MAX_FRAME_NUM    4
#define EXTENDED_SAR       255
static const uint8_t default_scaling4[2][16] = ;
static const uint8_t default_scaling8[2][64] = ;
static const int level_max_dpb_mbs[][2] = ;
static void remove_pps(H264ParamSets *s, int id)
static void remove_sps(H264ParamSets *s, int id)
static inline int decode_hrd_parameters(GetBitContext *gb, AVCodecContext *avctx,
SPS *sps)
static inline int decode_vui_parameters(GetBitContext *gb, AVCodecContext *avctx,
SPS *sps)
static void decode_scaling_list(GetBitContext *gb, uint8_t *factors, int size,
const uint8_t *jvt_list,
const uint8_t *fallback_list)
static int decode_scaling_matrices(GetBitContext *gb, const SPS *sps,
const PPS *pps, int is_sps,
uint8_t(*scaling_matrix4)[16],
uint8_t(*scaling_matrix8)[64])
void ff_h264_ps_uninit(H264ParamSets *ps)
int ff_h264_decode_seq_parameter_set(GetBitContext *gb, AVCodecContext *avctx,
H264ParamSets *ps, int ignore_truncation)
static void init_dequant8_coeff_table(PPS *pps, const SPS *sps)
static void init_dequant4_coeff_table(PPS *pps, const SPS *sps)
static void init_dequant_tables(PPS *pps, const SPS *sps)
static void build_qp_table(PPS *pps, int t, int index, const int depth)
static int more_rbsp_data_in_pps(const SPS *sps, void *logctx)
int ff_h264_decode_picture_parameter_set(GetBitContext *gb, AVCodecContext *avctx,
H264ParamSets *ps, int bit_length)
