#define AVCODEC_V210ENC_H
typedef struct V210EncContext  V210EncContext;
void ff_v210enc_init(V210EncContext *s);
void ff_v210enc_init_x86(V210EncContext *s);
