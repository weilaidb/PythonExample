#define AVCODEC_GSMDEC_DATA_H
typedef struct GSMContext  GSMContext;
extern const uint16_t ff_gsm_long_term_gain_tab[4];
extern const int16_t ff_gsm_dequant_tab[64][8];
extern const int* const ff_gsm_apcm_bits[][4];
