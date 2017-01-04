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
static av_cold int mss4_init_vlc(VLC *vlc, const uint8_t *lens,
const uint8_t *syms, int num_syms)
static av_cold int mss4_init_vlcs(MSS4Context *ctx)
static av_cold void mss4_free_vlcs(MSS4Context *ctx)
static av_always_inline int get_coeff_bits(GetBitContext *gb, int nbits)
static inline int get_coeff(GetBitContext *gb, VLC *vlc)
static int mss4_decode_dct(GetBitContext *gb, VLC *dc_vlc, VLC *ac_vlc,
int *block, int *dc_cache,
int bx, int by, uint16_t *quant_mat)
static int mss4_decode_dct_block(MSS4Context *c, GetBitContext *gb,
uint8_t *dst[3], int mb_x, int mb_y)
static void read_vec_pos(GetBitContext *gb, int *vec_pos, int *sel_flag,
int *sel_len, int *prev)
static int get_value_cached(GetBitContext *gb, int vec_pos, uint8_t *vec,
int vec_size, int component, int shift, int *prev)
#define MKVAL(vals)  ((vals)[0] | ((vals)[1] << 3) | ((vals)[2] << 6))
static int mss4_decode_image_block(MSS4Context *ctx, GetBitContext *gb,
uint8_t *picdst[3], int mb_x, int mb_y)
static inline void mss4_update_dc_cache(MSS4Context *c, int mb_x)
static int mss4_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int mss4_decode_end(AVCodecContext *avctx)
static av_cold int mss4_decode_init(AVCodecContext *avctx)
AVCodec ff_mts2_decoder = ;
