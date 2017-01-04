#define AVCODEC_WMA_H
#define BLOCK_MIN_BITS 7
#define BLOCK_MAX_BITS 11
#define BLOCK_MAX_SIZE (1 << BLOCK_MAX_BITS)
#define BLOCK_NB_SIZES (BLOCK_MAX_BITS - BLOCK_MIN_BITS + 1)
#define HIGH_BAND_MAX_SIZE 16
#define NB_LSP_COEFS 10
#define MAX_CODED_SUPERFRAME_SIZE 32768
#define MAX_CHANNELS 2
#define NOISE_TAB_SIZE 8192
#define LSP_POW_BITS 7
#define VLCBITS 9
#define VLCMAX ((22 + VLCBITS - 1) / VLCBITS)
typedef float WMACoef;
typedef struct CoefVLCTable  CoefVLCTable;
typedef struct WMACodecContext  WMACodecContext;
extern const uint16_t ff_wma_hgain_huffcodes[37];
extern const uint8_t ff_wma_hgain_huffbits[37];
extern const float ff_wma_lsp_codebook[NB_LSP_COEFS][16];
extern const uint32_t ff_aac_scalefactor_code[121];
extern const uint8_t  ff_aac_scalefactor_bits[121];
av_warn_unused_result
int ff_wma_init(AVCodecContext *avctx, int flags2);
int ff_wma_total_gain_to_bits(int total_gain);
int ff_wma_end(AVCodecContext *avctx);
unsigned int ff_wma_get_large_val(GetBitContext *gb);
int ff_wma_run_level_decode(AVCodecContext *avctx, GetBitContext *gb,
VLC *vlc, const float *level_table,
const uint16_t *run_table, int version,
WMACoef *ptr, int offset, int num_coefs,
int block_len, int frame_len_bits,
int coef_nb_bits);
