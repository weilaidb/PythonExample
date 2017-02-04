#define HEADER_SIZE 8
enum FrameType ;
enum BlockType ;
enum CachePos ;
static const uint8_t mss4_dc_vlc_lens[2][16] = ;
static const uint8_t mss4_ac_vlc_lens[2][16] = ;
static const uint8_t mss4_ac_vlc_syms[2][162] = ;
static const uint8_t vec_len_syms[2][4] = ;
static const uint8_t mss4_vec_entry_vlc_lens[2][16] = ;
static const uint8_t mss4_vec_entry_vlc_syms[2][9] = ;
#define MAX_ENTRIES  162
typedef struct MSS4Context  MSS4Context;
mss4_init_vlc
mss4_init_vlcs
mss4_free_vlcs
get_coeff_bits
get_coeff
mss4_decode_dct
mss4_decode_dct_block
read_vec_pos
get_value_cached
MKVAL  ((vals)[0] | ((vals)[1] << 3) | ((vals)[2] << 6))
mss4_decode_image_block
mss4_update_dc_cache
mss4_decode_frame
mss4_decode_end
mss4_decode_init
AVCodec ff_mts2_decoder = ;
