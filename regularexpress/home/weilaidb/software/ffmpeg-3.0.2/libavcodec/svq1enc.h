#define AVCODEC_SVQ1ENC_H
typedef struct SVQ1EncContext  SVQ1EncContext;
void ff_svq1enc_init_ppc(SVQ1EncContext *c);
void ff_svq1enc_init_x86(SVQ1EncContext *c);
