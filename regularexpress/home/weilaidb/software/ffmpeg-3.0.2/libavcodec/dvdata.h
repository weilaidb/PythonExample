#define AVCODEC_DVDATA_H
extern const uint8_t ff_dv_zigzag248_direct[64];
extern const uint8_t ff_dv_quant_shifts[22][4];
extern const uint8_t ff_dv_quant_offset[4];
#define NB_DV_VLC 409
extern const uint16_t ff_dv_vlc_bits[NB_DV_VLC];
extern const uint8_t ff_dv_vlc_len[NB_DV_VLC];
extern const uint8_t ff_dv_vlc_run[NB_DV_VLC];
extern const uint8_t ff_dv_vlc_level[NB_DV_VLC];
