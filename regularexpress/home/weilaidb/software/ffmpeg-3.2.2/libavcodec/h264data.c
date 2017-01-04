const uint8_t ff_h264_golomb_to_pict_type[5] = ;
const uint8_t ff_h264_golomb_to_intra4x4_cbp[48] = ;
const uint8_t ff_h264_golomb_to_inter_cbp[48] = ;
const uint8_t ff_h264_chroma_dc_scan[4] = ;
const uint8_t ff_h264_chroma422_dc_scan[8] = ;
const IMbInfo ff_h264_i_mb_type_info[26] = ;
const PMbInfo ff_h264_p_mb_type_info[5] = ;
const PMbInfo ff_h264_p_sub_mb_type_info[4] = ;
const PMbInfo ff_h264_b_mb_type_info[23] = ;
const PMbInfo ff_h264_b_sub_mb_type_info[13] = ;
const uint8_t ff_h264_dequant4_coeff_init[6][3] = ;
const uint8_t ff_h264_dequant8_coeff_init_scan[16] = ;
const uint8_t ff_h264_dequant8_coeff_init[6][6] = ;
const uint8_t ff_h264_quant_rem6[QP_MAX_NUM + 1] = ;
const uint8_t ff_h264_quant_div6[QP_MAX_NUM + 1] = ;
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
