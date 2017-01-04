#define AVCODEC_ATRAC_H
typedef struct AtracGainInfo  AtracGainInfo;
typedef struct AtracGCContext  AtracGCContext;
extern float ff_atrac_sf_table[64];
void ff_atrac_generate_tables(void);
void ff_atrac_init_gain_compensation(AtracGCContext *gctx, int id2exp_offset,
int loc_scale);
void ff_atrac_gain_compensation(AtracGCContext *gctx, float *in, float *prev,
AtracGainInfo *gc_now, AtracGainInfo *gc_next,
int num_samples, float *out);
void ff_atrac_iqmf(float *inlo, float *inhi, unsigned int nIn, float *pOut,
float *delayBuf, float *temp);
