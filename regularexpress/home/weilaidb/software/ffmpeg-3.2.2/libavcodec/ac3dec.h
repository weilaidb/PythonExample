#define AVCODEC_AC3DEC_H
#define AC3_OUTPUT_LFEON  8
#define SPX_MAX_BANDS    17
#define AC3_FRAME_BUFFER_SIZE 32768
typedef struct AC3DecodeContext  AC3DecodeContext;
static int ff_eac3_parse_header(AC3DecodeContext *s);
static void ff_eac3_decode_transform_coeffs_aht_ch(AC3DecodeContext *s, int ch);
static void ff_eac3_apply_spectral_extension(AC3DecodeContext *s);
#if (!USE_FIXED)
extern float ff_ac3_heavy_dynamic_range_tab[256];
