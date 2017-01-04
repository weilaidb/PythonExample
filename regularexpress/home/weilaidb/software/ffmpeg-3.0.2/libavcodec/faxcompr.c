#define CCITT_SYMS 104
static const uint16_t ccitt_syms[CCITT_SYMS] = ;
static const uint8_t ccitt_codes_bits[2][CCITT_SYMS] =
;
static const uint8_t ccitt_codes_lens[2][CCITT_SYMS] =
;
static const uint8_t ccitt_group3_2d_bits[11] = ;
static const uint8_t ccitt_group3_2d_lens[11] = ;
static VLC ccitt_vlc[2], ccitt_group3_2d_vlc;
av_cold void ff_ccitt_unpack_init(void)
static int decode_uncompressed(AVCodecContext *avctx, GetBitContext *gb,
unsigned int *pix_left, int **runs,
const int *runend, int *mode)
static int decode_group3_1d_line(AVCodecContext *avctx, GetBitContext *gb,
unsigned int pix_left, int *runs,
const int *runend)
static int decode_group3_2d_line(AVCodecContext *avctx, GetBitContext *gb,
unsigned int width, int *runs,
const int *runend, const int *ref)
static void put_line(uint8_t *dst, int size, int width, const int *runs)
static int find_group3_syncmarker(GetBitContext *gb, int srcsize)
int ff_ccitt_unpack(AVCodecContext *avctx, const uint8_t *src, int srcsize,
uint8_t *dst, int height, int stride,
enum TiffCompr compr, int opts)
