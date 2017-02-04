#if CONFIG_ZLIB
typedef struct SVQ3Frame  SVQ3Frame;
typedef struct SVQ3Context  SVQ3Context;
#define FULLPEL_MODE  1
#define HALFPEL_MODE  2
#define THIRDPEL_MODE 3
#define PREDICT_MODE  4
static const uint8_t svq3_scan[16] = ;
static const uint8_t luma_dc_zigzag_scan[16] = ;
static const uint8_t svq3_pred_0[25][2] = ;
static const int8_t svq3_pred_1[6][6][5] = ;
static const struct  svq3_dct_tables[2][16] = ;
static const uint32_t svq3_dequant_coeff[32] = ;
svq3_decode_end;
svq3_luma_dc_dequant_idct_c
#undef stride
svq3_add_idct_c
svq3_decode_block
svq3_fetch_diagonal_mv
svq3_pred_motion
svq3_mc_dir_part
svq3_mc_dir
hl_decode_mb_idct_luma
dctcoef_get
hl_decode_mb_predict_luma
hl_decode_mb
svq3_decode_mb
svq3_decode_slice_header
init_dequant4_coeff_table
svq3_decode_init
free_picture
get_buffer
svq3_decode_frame
svq3_decode_end
AVCodec ff_svq3_decoder = ;
