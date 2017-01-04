#define AVCODEC_AACPS_H
#define PS_MAX_NUM_ENV 5
#define PS_MAX_NR_IIDICC 34
#define PS_MAX_NR_IPDOPD 17
#define PS_MAX_SSB 91
#define PS_MAX_AP_BANDS 50
#define PS_QMF_TIME_SLOTS 32
#define PS_MAX_DELAY 14
#define PS_AP_LINKS 3
#define PS_MAX_AP_DELAY 5
typedef struct PSContext  PSContext;
void AAC_RENAME(ff_ps_init)(void);
void AAC_RENAME(ff_ps_ctx_init)(PSContext *ps);
int AAC_RENAME(ff_ps_read_data)(AVCodecContext *avctx, GetBitContext *gb, PSContext *ps, int bits_left);
int AAC_RENAME(ff_ps_apply)(AVCodecContext *avctx, PSContext *ps, INTFLOAT L[2][38][64], INTFLOAT R[2][38][64], int top);
