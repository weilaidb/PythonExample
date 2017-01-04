#define AVCODEC_MSMPEG4DATA_H
typedef struct MVTable  MVTable;
extern VLC ff_msmp4_mb_i_vlc;
extern VLC ff_msmp4_dc_luma_vlc[2];
extern VLC ff_msmp4_dc_chroma_vlc[2];
extern const uint16_t ff_msmp4_mb_i_table[64][2];
#define WMV1_SCANTABLE_COUNT 4
extern const uint8_t ff_wmv1_scantable[WMV1_SCANTABLE_COUNT][64];
#define NB_RL_TABLES  6
extern RLTable ff_rl_table[NB_RL_TABLES];
extern uint8_t ff_static_rl_table_store[NB_RL_TABLES][2][2 * MAX_RUN + MAX_LEVEL + 3];
extern uint32_t ff_v2_dc_lum_table[512][2];
extern uint32_t ff_v2_dc_chroma_table[512][2];
extern const uint8_t ff_wmv1_y_dc_scale_table[32];
extern const uint8_t ff_wmv1_c_dc_scale_table[32];
extern const uint8_t ff_old_ff_y_dc_scale_table[32];
extern MVTable ff_mv_tables[2];
extern const uint8_t ff_v2_mb_type[8][2];
extern const uint8_t ff_v2_intra_cbpc[4][2];
extern const uint32_t ff_table_mb_non_intra[128][2];
extern const uint8_t  ff_table_inter_intra[4][2];
extern const uint32_t ff_table0_dc_lum[120][2];
extern const uint32_t ff_table1_dc_lum[120][2];
extern const uint32_t ff_table0_dc_chroma[120][2];
extern const uint32_t ff_table1_dc_chroma[120][2];
#define WMV2_INTER_CBP_TABLE_COUNT 4
extern const uint32_t (* const ff_wmv2_inter_table[WMV2_INTER_CBP_TABLE_COUNT])[2];
