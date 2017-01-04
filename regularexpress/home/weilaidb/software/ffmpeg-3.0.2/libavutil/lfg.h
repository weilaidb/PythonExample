#define AVUTIL_LFG_H
typedef struct AVLFG  AVLFG;
void av_lfg_init(AVLFG *c, unsigned int seed);
static inline unsigned int av_lfg_get(AVLFG *c)
static inline unsigned int av_mlfg_get(AVLFG *c)
void av_bmg_get(AVLFG *lfg, double out[2]);
