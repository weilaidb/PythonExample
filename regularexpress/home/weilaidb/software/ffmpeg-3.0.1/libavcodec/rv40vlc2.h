#define AVCODEC_RV40VLC2_H
#define AIC_TOP_BITS  8
#define AIC_TOP_SIZE 16
static const uint8_t rv40_aic_top_vlc_codes[AIC_TOP_SIZE] = ;
static const uint8_t rv40_aic_top_vlc_bits[AIC_TOP_SIZE] = ;
#define AIC_MODE2_NUM  20
#define AIC_MODE2_SIZE 81
#define AIC_MODE2_BITS  9
static const uint16_t aic_mode2_vlc_codes[AIC_MODE2_NUM][AIC_MODE2_SIZE] = ;
static const uint8_t aic_mode2_vlc_bits[AIC_MODE2_NUM][AIC_MODE2_SIZE] = ;
#define AIC_MODE1_NUM  90
#define AIC_MODE1_SIZE  9
#define AIC_MODE1_BITS  7
static const uint8_t aic_mode1_vlc_codes[AIC_MODE1_NUM][AIC_MODE1_SIZE] = ;
static const uint8_t aic_mode1_vlc_bits[AIC_MODE1_NUM][AIC_MODE1_SIZE] = ;
#define PBTYPE_ESCAPE 0xFF
#define NUM_PTYPE_VLCS 7
#define PTYPE_VLC_SIZE 8
#define PTYPE_VLC_BITS 7
static const uint8_t ptype_vlc_codes[NUM_PTYPE_VLCS][PTYPE_VLC_SIZE] = ;
static const uint8_t ptype_vlc_bits[NUM_PTYPE_VLCS][PTYPE_VLC_SIZE] = ;
static const uint8_t ptype_vlc_syms[PTYPE_VLC_SIZE] = ;
static const uint8_t block_num_to_ptype_vlc_num[12] = ;
#define NUM_BTYPE_VLCS 6
#define BTYPE_VLC_SIZE 7
#define BTYPE_VLC_BITS 6
static const uint8_t btype_vlc_codes[NUM_BTYPE_VLCS][BTYPE_VLC_SIZE] = ;
static const uint8_t btype_vlc_bits[NUM_BTYPE_VLCS][PTYPE_VLC_SIZE] = ;
static const uint8_t btype_vlc_syms[BTYPE_VLC_SIZE] = ;
static const uint8_t block_num_to_btype_vlc_num[12] = ;
