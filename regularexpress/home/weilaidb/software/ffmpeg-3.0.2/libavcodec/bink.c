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
#define GET_HUFF(gb, tree)  (tree).syms[get_vlc2(gb, bink_trees[(tree).vlc_num].table,\
bink_trees[(tree).vlc_num].bits, 1)]
typedef struct Bundle  Bundle;
typedef struct BinkContext  BinkContext;
enum BlockTypes ;
static void init_lengths(BinkContext *c, int width, int bw)
static av_cold int init_bundles(BinkContext *c)
static av_cold void free_bundles(BinkContext *c)
static void merge(GetBitContext *gb, uint8_t *dst, uint8_t *src, int size)
static void read_tree(GetBitContext *gb, Tree *tree)
static void read_bundle(GetBitContext *gb, BinkContext *c, int bundle_num)
#define CHECK_READ_VAL(gb, b, t) \
if (!b->cur_dec || (b->cur_dec > b->cur_ptr)) \
return 0; \
t = get_bits(gb, b->len); \
if (!t)  \
static int read_runs(AVCodecContext *avctx, GetBitContext *gb, Bundle *b)
static int read_motion_values(AVCodecContext *avctx, GetBitContext *gb, Bundle *b)
static const uint8_t bink_rlelens[4] = ;
static int read_block_types(AVCodecContext *avctx, GetBitContext *gb, Bundle *b)
static int read_patterns(AVCodecContext *avctx, GetBitContext *gb, Bundle *b)
static int read_colors(GetBitContext *gb, Bundle *b, BinkContext *c)
#define DC_START_BITS 11
static int read_dcs(AVCodecContext *avctx, GetBitContext *gb, Bundle *b,
int start_bits, int has_sign)
static inline int get_value(BinkContext *c, int bundle)
static av_cold void binkb_init_bundle(BinkContext *c, int bundle_num)
static av_cold void binkb_init_bundles(BinkContext *c)
static int binkb_read_bundle(BinkContext *c, GetBitContext *gb, int bundle_num)
static inline int binkb_get_value(BinkContext *c, int bundle_num)
static int read_dct_coeffs(GetBitContext *gb, int32_t block[64], const uint8_t *scan,
const int32_t quant_matrices[16][64], int q)
static int read_residue(GetBitContext *gb, int16_t block[64], int masks_count)
static inline void put_pixels8x8_overlapped(uint8_t *dst, uint8_t *src, int stride)
static int binkb_decode_plane(BinkContext *c, AVFrame *frame, GetBitContext *gb,
int plane_idx, int is_key, int is_chroma)
static int bink_put_pixels(BinkContext *c,
uint8_t *dst, uint8_t *prev, int stride,
uint8_t *ref_start,
uint8_t *ref_end)
static int bink_decode_plane(BinkContext *c, AVFrame *frame, GetBitContext *gb,
int plane_idx, int is_chroma)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *pkt)
static av_cold void binkb_calc_quant(void)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
static void flush(AVCodecContext *avctx)
AVCodec ff_bink_decoder = ;
