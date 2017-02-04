#define FLAC_SUBFRAME_CONSTANT  0
#define FLAC_SUBFRAME_VERBATIM  1
#define FLAC_SUBFRAME_FIXED     8
#define FLAC_SUBFRAME_LPC      32
#define MAX_FIXED_ORDER     4
#define MAX_PARTITION_ORDER 8
#define MAX_PARTITIONS     (1 << MAX_PARTITION_ORDER)
#define MAX_LPC_PRECISION  15
#define MIN_LPC_SHIFT       0
#define MAX_LPC_SHIFT      15
enum CodingMode ;
typedef struct CompressionOptions  CompressionOptions;
typedef struct RiceContext  RiceContext;
typedef struct FlacSubframe  FlacSubframe;
typedef struct FlacFrame  FlacFrame;
typedef struct FlacEncodeContext  FlacEncodeContext;
write_streaminfo
select_blocksize
dprint_compression_options
flac_encode_init
init_frame
copy_samples
rice_count_exact
subframe_count_exact
rice_encode_count (((n)*((k)+1))+((sum-(n>>1))>>(k)))
find_optimal_param
find_optimal_param_exact
calc_optimal_rice_params
calc_sum_top
calc_sum_next
calc_rice_params
get_max_p_order
find_subframe_rice_params
encode_residual_fixed
encode_residual_ch
count_frame_header
encode_frame
remove_wasted_bits
estimate_stereo_mode
channel_decorrelation
write_utf8
write_frame_header
write_subframes
write_frame_footer
write_frame
update_md5_sum
flac_encode_frame
{
FlacEncodeContext *s;
int frame_bytes, out_bytes, ret;
s = avctx->priv_data;
if (!frame)
flac_encode_close
#define FLAGS AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption options[] = ;
static const AVClass flac_encoder_class = ;
AVCodec ff_flac_encoder = ;
