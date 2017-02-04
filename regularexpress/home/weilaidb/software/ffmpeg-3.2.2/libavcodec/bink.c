#define BITSTREAM_READER_LE
#define BINK_FLAG_ALPHA 0x00100000
#define BINK_FLAG_GRAY  0x00020000
static VLC bink_trees[16];
enum OldSources ;
static const int binkb_bundle_sizes[BINKB_NB_SRC] = ;
static const int binkb_bundle_signed[BINKB_NB_SRC] = ;
static int32_t binkb_intra_quant[16][64];
static int32_t binkb_inter_quant[16][64];
enum Sources ;
typedef struct Tree  Tree;
GET_HUFF  (tree).syms[get_vlc2(gb, bink_trees[(tree).vlc_num].table,\
bink_trees[(tree).vlc_num].bits, 1)]
typedef struct Bundle  Bundle;
typedef struct BinkContext  BinkContext;
enum BlockTypes ;
init_lengths
init_bundles
free_bundles
merge
read_tree
read_bundle
CHECK_READ_VAL \
if (!b->cur_dec || (b->cur_dec > b->cur_ptr)) \
return 0; \
t = get_bits(gb, b->len); \
if (!t)  \
read_runs
read_motion_values
static const uint8_t bink_rlelens[4] = ;
read_block_types
read_patterns
read_colors
#define DC_START_BITS 11
read_dcs
get_value
binkb_init_bundle
binkb_init_bundles
binkb_read_bundle
binkb_get_value
read_dct_coeffs
read_residue
put_pixels8x8_overlapped
binkb_decode_plane
bink_put_pixels
bink_decode_plane
decode_frame
binkb_calc_quant
decode_init
decode_end
flush
AVCodec ff_bink_decoder = ;
