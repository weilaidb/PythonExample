static const int codec_ids[4] = ;
static const char * const pred4x4_modes[4][15] = ;
static const char * const pred8x8_modes[4][11] = ;
static const char * const pred16x16_modes[4][9] = ;
static const uint32_t pixel_mask[3] = ;
#define SIZEOF_PIXEL ((bit_depth + 7) / 8)
#define BUF_SIZE (3 * 16 * 17)
#define check_pred_func(func, name, mode_name)                                    \
(mode_name && ((codec_ids[codec] == AV_CODEC_ID_H264) ?                       \
check_func(func, "pred%s_%s_%d", name, mode_name, bit_depth) : \
check_func(func, "pred%s_%s", name, mode_name)))
#define randomize_buffers()                        \
do  while (0)
#define src0 (buf0 + 4 * 16)
#define src1 (buf1 + 4 * 16)
static void check_pred4x4(H264PredContext *h, uint8_t *buf0, uint8_t *buf1,
int codec, int chroma_format, int bit_depth)
static void check_pred8x8(H264PredContext *h, uint8_t *buf0, uint8_t *buf1,
int codec, int chroma_format, int bit_depth)
static void check_pred16x16(H264PredContext *h, uint8_t *buf0, uint8_t *buf1,
int codec, int chroma_format, int bit_depth)
static void check_pred8x8l(H264PredContext *h, uint8_t *buf0, uint8_t *buf1,
int codec, int chroma_format, int bit_depth)
void checkasm_check_h264pred(void)
