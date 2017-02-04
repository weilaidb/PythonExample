#define AVCODEC_ATRAC_H
typedef struct AtracGainInfo  AtracGainInfo;
typedef struct AtracGCContext  AtracGCContext;
extern float ff_atrac_sf_table[64];
ff_atrac_generate_tables;
ff_atrac_init_gain_compensation;
ff_atrac_gain_compensation;
ff_atrac_iqmf;
