#define CFACTOR_Y422 2
#define CFACTOR_Y444 3
#define MAX_MBS_PER_SLICE 8
#define MAX_PLANES 4
enum ;
enum ;
static const uint8_t prores_quant_matrices[][64] = ;
#define NUM_MB_LIMITS 4
static const int prores_mb_limits[NUM_MB_LIMITS] = ;
static const struct prores_profile  prores_profile_info[5] = ;
#define TRELLIS_WIDTH 16
#define SCORE_LIMIT   INT_MAX / 2
struct TrellisNode ;
#define MAX_STORED_Q 16
typedef struct ProresThreadData  ProresThreadData;
typedef struct ProresContext  ProresContext;
get_slice_data
get_alpha_data
encode_vlc_codeword
GET_SIGN  ((x) >> 31)
MAKE_CODE (((x) << 1) ^ GET_SIGN(x))
encode_dcs
encode_acs
encode_slice_plane
put_alpha_diff
put_alpha_run
encode_alpha_plane
encode_slice
estimate_vlc
estimate_dcs
estimate_acs
estimate_slice_plane
est_alpha_diff
estimate_alpha_plane
find_slice_quant
find_quant_thread
encode_frame
encode_close
prores_fdct
encode_init
OFFSET offsetof(ProresContext, x)
#define VE     AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass proresenc_class = ;
AVCodec ff_prores_ks_encoder = ;
