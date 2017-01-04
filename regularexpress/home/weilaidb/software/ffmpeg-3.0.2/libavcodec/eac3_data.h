#define AVCODEC_EAC3_DATA_H
extern const uint8_t ff_eac3_bits_vs_hebap[20];
extern const int16_t ff_eac3_gaq_remap_1[12];
extern const int16_t ff_eac3_gaq_remap_2_4_a[9][2];
extern const int16_t ff_eac3_gaq_remap_2_4_b[9][2];
extern const int16_t (* const ff_eac3_mantissa_vq[8])[6];
extern const uint8_t ff_eac3_frm_expstr[32][6];
extern const float   ff_eac3_spx_atten_tab[32][3];
