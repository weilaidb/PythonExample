#if ARCH_ARM
#define VLC_BITS            5
#define VLC_STATIC_SIZE     64
#define VLC_BITS            9
#define VLC_STATIC_SIZE     512
typedef struct SubStream  SubStream;
typedef struct MLPDecodeContext  MLPDecodeContext;
static const uint64_t thd_channel_order[] = ;
thd_channel_layout_extract_channel
static VLC huff_vlc[3];
init_static
calculate_sign_huff
read_huff_channels
mlp_decode_init
read_major_sync
read_restart_header
read_filter_params
read_matrix_params
read_channel_params
read_decoding_params
MSB_MASK  (-1u << (bits))
filter_channel
read_block_data
static const int8_t noise_table[256] = ;
generate_2_noise_channels
fill_noise_buffer
output_data
read_access_unit
#if CONFIG_MLP_DECODER
AVCodec ff_mlp_decoder = ;
#if CONFIG_TRUEHD_DECODER
AVCodec ff_truehd_decoder = ;
