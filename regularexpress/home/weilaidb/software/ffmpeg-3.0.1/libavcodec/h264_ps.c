#define MAX_LOG2_MAX_FRAME_NUM    (12 + 4)
#define MIN_LOG2_MAX_FRAME_NUM    4
#define QP(qP, depth) ((qP) + 6 * ((depth) - 8))
#define CHROMA_QP_TABLE_END(d)                                          \
QP(0,  d), QP(1,  d), QP(2,  d), QP(3,  d), QP(4,  d), QP(5,  d),   \
QP(6,  d), QP(7,  d), QP(8,  d), QP(9,  d), QP(10, d), QP(11, d),   \
QP(12, d), QP(13, d), QP(14, d), QP(15, d), QP(16, d), QP(17, d),   \
QP(18, d), QP(19, d), QP(20, d), QP(21, d), QP(22, d), QP(23, d),   \
QP(24, d), QP(25, d), QP(26, d), QP(27, d), QP(28, d), QP(29, d),   \
QP(29, d), QP(30, d), QP(31, d), QP(32, d), QP(32, d), QP(33, d),   \
QP(34, d), QP(34, d), QP(35, d), QP(35, d), QP(36, d), QP(36, d),   \
QP(37, d), QP(37, d), QP(37, d), QP(38, d), QP(38, d), QP(38, d),   \
QP(39, d), QP(39, d), QP(39, d), QP(39, d)
const uint8_t ff_h264_chroma_qp[7][QP_MAX_NUM + 1] = ;
static const uint8_t default_scaling4[2][16] = ;
static const uint8_t default_scaling8[2][64] = ;
static const int level_max_dpb_mbs[][2] = ;
static inline int decode_hrd_parameters(H264Context *h, SPS *sps)
static inline int decode_vui_parameters(H264Context *h, SPS *sps)
static void decode_scaling_list(H264Context *h, uint8_t *factors, int size,
const uint8_t *jvt_list,
const uint8_t *fallback_list)
static void decode_scaling_matrices(H264Context *h, SPS *sps,
PPS *pps, int is_sps,
uint8_t(*scaling_matrix4)[16],
uint8_t(*scaling_matrix8)[64])
int ff_h264_decode_seq_parameter_set(H264Context *h, int ignore_truncation)
static void build_qp_table(PPS *pps, int t, int index, const int depth)
static int more_rbsp_data_in_pps(H264Context *h, PPS *pps)
int ff_h264_decode_picture_parameter_set(H264Context *h, int bit_length)
