#define WMALL_MAX_CHANNELS      8
#define MAX_SUBFRAMES          32
#define MAX_BANDS              29
#define MAX_FRAMESIZE       32768
#define MAX_ORDER             256
#define WMALL_BLOCK_MIN_BITS    6
#define WMALL_BLOCK_MAX_BITS   14
#define WMALL_BLOCK_MAX_SIZE (1 << WMALL_BLOCK_MAX_BITS)
#define WMALL_BLOCK_SIZES    (WMALL_BLOCK_MAX_BITS - WMALL_BLOCK_MIN_BITS + 1)
#define WMALL_COEFF_PAD_SIZE   16
typedef struct WmallChannelCtx  WmallChannelCtx;
typedef struct WmallDecodeCtx  WmallDecodeCtx;
WMASIGN (((x) > 0) - ((x) < 0))
decode_init
decode_subframe_length
decode_tilehdr
decode_ac_filter
decode_mclms
decode_cdlms
decode_channel_residues
decode_lpc
clear_codec_buffers
reset_codec
mclms_update
mclms_predict
revert_mclms
use_high_update_speed
use_normal_update_speed
CD_LMS \
static void lms_update ## bits (WmallDecodeCtx *s, int ich, int ilms, int input) \
\
\
static void revert_cdlms ## bits (WmallDecodeCtx *s, int ch, \
int coef_begin, int coef_end) \
CD_LMS(16, WMALL_COEFF_PAD_SIZE)
CD_LMS(32, 8)
revert_inter_ch_decorr
revert_acfilter
decode_subframe
decode_frame
remaining_bits
save_bits
decode_packet
flush
decode_close
AVCodec ff_wmalossless_decoder = ;
