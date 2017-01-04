#define AVCODEC_LOSSLESS_AUDIODSP_H
typedef struct LLAudDSPContext  LLAudDSPContext;
void ff_llauddsp_init(LLAudDSPContext *c);
void ff_llauddsp_init_arm(LLAudDSPContext *c);
void ff_llauddsp_init_ppc(LLAudDSPContext *c);
void ff_llauddsp_init_x86(LLAudDSPContext *c);
