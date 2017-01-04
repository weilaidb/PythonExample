#define AVCODEC_VP56DATA_H
extern const uint8_t ff_vp56_b2p[];
extern const uint8_t ff_vp56_b6to4[];
extern const uint8_t ff_vp56_coeff_parse_table[6][11];
extern const uint8_t ff_vp56_def_mb_types_stats[3][10][2];
extern const VP56Tree ff_vp56_pva_tree[];
extern const VP56Tree ff_vp56_pc_tree[];
extern const uint8_t ff_vp56_coeff_bias[];
extern const uint8_t ff_vp56_coeff_bit_length[];
extern const VP56Frame ff_vp56_reference_frame[];
extern const uint8_t ff_vp56_ac_dequant[64];
extern const uint8_t ff_vp56_dc_dequant[64];
extern const uint8_t ff_vp56_pre_def_mb_type_stats[16][3][10][2];
extern const uint8_t ff_vp56_filter_threshold[];
extern const uint8_t ff_vp56_mb_type_model_model[];
extern const VP56Tree ff_vp56_pmbtm_tree[];
extern const VP56Tree ff_vp56_pmbt_tree[];
extern const int8_t ff_vp56_candidate_predictor_pos[12][2];
