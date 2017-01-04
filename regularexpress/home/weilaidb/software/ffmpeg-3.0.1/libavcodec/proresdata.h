#define AVCODEC_PRORESDATA_H
#define FRAME_ID MKBETAG('i', 'c', 'p', 'f')
extern const uint8_t ff_prores_progressive_scan[64];
extern const uint8_t ff_prores_interlaced_scan[64];
#define FIRST_DC_CB 0xB8
extern const uint8_t ff_prores_dc_codebook[4];
extern const uint8_t ff_prores_ac_codebook[7];
extern const uint8_t ff_prores_run_to_cb_index[16];
extern const uint8_t ff_prores_lev_to_cb_index[10];
