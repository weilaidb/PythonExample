static const int8_t parcor_rice_table[3][20][2] = ;
static const int16_t parcor_scaled_values[] = ;
static const uint8_t ltp_gain_values [4][4] = ;
static const int16_t mcc_weightings[] = ;
static const uint8_t tail_code[16][6] = ;
enum RA_Flag ;
typedef struct ALSSpecificConfig  ALSSpecificConfig;
typedef struct ALSChannelData  ALSChannelData;
typedef struct ALSDecContext  ALSDecContext;
typedef struct ALSBlockData  ALSBlockData;
dprint_specific_config
read_specific_config
check_specific_config
parse_bs_info
decode_rice
parcor_to_lpc
get_block_sizes
read_const_block_data
decode_const_block_data
read_var_block_data
decode_var_block_data
read_block
decode_block
read_decode_block
zero_remaining
decode_blocks_ind
decode_blocks
als_weighting
read_channel_data
revert_channel_correlation
multiply
read_diff_float_data
read_frame_data
decode_frame
decode_end
decode_init
flush
AVCodec ff_als_decoder = ;
