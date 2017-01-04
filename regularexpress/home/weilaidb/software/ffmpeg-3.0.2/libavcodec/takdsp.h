#define AVCODEC_TAKDSP_H
typedef struct TAKDSPContext  TAKDSPContext;
void ff_takdsp_init(TAKDSPContext *c);
void ff_takdsp_init_x86(TAKDSPContext *c);
