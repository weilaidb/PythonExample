#define DEFAULT_SLICE_MB_WIDTH 8
#define FF_PROFILE_PRORES_PROXY     0
#define FF_PROFILE_PRORES_LT        1
#define FF_PROFILE_PRORES_STANDARD  2
#define FF_PROFILE_PRORES_HQ        3
static const AVProfile profiles[] = ;
static const int qp_start_table[4] = ;
static const int qp_end_table[4]   = ;
static const int bitrate_table[5]  = ;
static const uint8_t progressive_scan[64] = ;
static const uint8_t QMAT_LUMA[4][64] = ;
static const uint8_t QMAT_CHROMA[4][64] = ;
typedef struct  ProresContext;
encode_codeword
QSCALE ((val) / ((qmat)[ind]))
TO_GOLOMB (((val) << 1) ^ ((val) >> 31))
DIFF_SIGN (((val) >> 31) ^ (sign))
IS_NEGATIVE ((((val) >> 31) ^ -1) + 1)
TO_GOLOMB2 ((val)==0 ? 0 : ((val) << 1) + (sign))
get_level
#define FIRST_DC_CB 0xB8
static const uint8_t dc_codebook[7] = ;
encode_dc_coeffs
static const uint8_t run_to_cb[16] = ;
static const uint8_t lev_to_cb[10] = ;
encode_ac_coeffs
get
fdct_get
encode_slice_plane
encode_slice_data
subimage_with_fill
encode_slice
prores_encode_picture
prores_encode_frame
scale_mat
prores_encode_init
prores_encode_close
AVCodec ff_prores_aw_encoder = ;
AVCodec ff_prores_encoder = ;
