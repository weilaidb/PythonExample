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
AAC_RENAME(void);
AAC_RENAME(PSContext *ps);
AAC_RENAME(AVCodecContext *avctx, GetBitContext *gb, PSContext *ps, int bits_left);
AAC_RENAME(AVCodecContext *avctx, PSContext *ps, INTFLOAT L[2][38][64], INTFLOAT R[2][38][64], int top);
