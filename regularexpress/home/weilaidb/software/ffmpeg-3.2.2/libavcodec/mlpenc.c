#define MAJOR_HEADER_INTERVAL 16
#define MLP_MIN_LPC_ORDER      1
#define MLP_MAX_LPC_ORDER      8
#define MLP_MIN_LPC_SHIFT      8
#define MLP_MAX_LPC_SHIFT     15
typedef struct  RestartHeader;
typedef struct  MatrixParams;
enum ParamFlags ;
typedef struct  DecodingParams;
typedef struct BestOffset  BestOffset;
#define HUFF_OFFSET_MIN    -16384
#define HUFF_OFFSET_MAX     16383
#define NUM_CODEBOOKS       4
typedef struct  MLPEncodeContext;
static ChannelParams   restart_channel_params[MAX_CHANNELS];
static DecodingParams  restart_decoding_params[MAX_SUBSTREAMS];
static BestOffset      restart_best_offset[NUM_CODEBOOKS] = ;
#define SYNC_MAJOR      0xf8726f
#define MAJOR_SYNC_INFO_SIGNATURE   0xB752
#define SYNC_MLP        0xbb
#define SYNC_TRUEHD     0xba
#define FLAGS_DVDA      0x4000
#define FLAGS_CONST     0x8000
#define SUBSTREAM_INFO_MAX_2_CHAN   0x01
#define SUBSTREAM_INFO_HIGH_RATE    0x02
#define SUBSTREAM_INFO_ALWAYS_SET   0x04
#define SUBSTREAM_INFO_2_SUBSTREAMS 0x08
compare_filter_params
compare_matrix_params
compare_decoding_params
copy_filter_params
copy_matrix_params
copy_restart_frame_params
clear_decoding_params
clear_channel_params
default_decoding_params
number_sbits
enum InputBitDepth ;
mlp_peak_bitrate
mlp_encode_init
write_major_sync
write_restart_header
write_matrix_params
write_filter_params
write_decoding_params
write_block_data
*write_substrs
write_frame_headers
write_access_unit
input_data_internal
input_data
input_to_sample_buffer
number_trailing_zeroes
determine_quant_step_size
code_filter_coeffs
set_filter_params
determine_filters
enum MLPChMode ;
estimate_stereo_mode
code_matrix_coeffs
lossless_matrix_coeffs
static const int codebook_extremes[3][2] = ;
no_codebook_bits_offset
no_codebook_bits
codebook_bits_offset
codebook_bits
determine_bits
SAMPLE_MAX ((1 << (bitdepth - 1)) - 1)
SAMPLE_MIN (~SAMPLE_MAX(bitdepth))
MSB_MASK  (-1u << bits)
apply_filter
apply_filters
generate_2_noise_channels
rematrix_channels
typedef struct  PathCounter;
static const char *path_counter_codebook[] = ;
#define ZERO_PATH               '0'
#define CODEBOOK_CHANGE_BITS    21
clear_path_counter
compare_best_offset
best_codebook_path_cost
set_best_codebook
set_major_params
analyze_sample_buffer
process_major_frame
mlp_encode_frame
mlp_encode_close
#if CONFIG_MLP_ENCODER
AVCodec ff_mlp_encoder = ;
#if CONFIG_TRUEHD_ENCODER
AVCodec ff_truehd_encoder = ;
