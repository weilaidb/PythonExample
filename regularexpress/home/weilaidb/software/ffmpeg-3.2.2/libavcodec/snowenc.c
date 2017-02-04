#define FF_ME_ITER 50
encode_init
pix_sum
pix_norm1
get_penalty_factor
#define P_LEFT P[1]
#define P_TOP P[2]
#define P_TOPRIGHT P[3]
#define P_MEDIAN P[4]
#define P_MV1 P[9]
#define FLAG_QPEL   1
encode_q_branch
encode_q_branch2
get_dc
get_block_bits
get_block_rd[MB_SIZE * 2])
get_4block_rd
encode_subband_c0run
encode_subband
check_block[MB_SIZE * 2], int *best_rd)
check_block_inter[MB_SIZE * 2], int *best_rd)
check_4block_inter
iterative_me
encode_blocks
quantize
dequantize
decorrelate
correlate
encode_qlogs
encode_header
update_last_header_values
qscale2qlog
ratecontrol_1pass
calculate_visual_weight
encode_frame
encode_end
OFFSET offsetof(SnowContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass snowenc_class = ;
AVCodec ff_snow_encoder = ;
