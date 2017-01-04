#define AVCODEC_LAGARITHRAC_H
typedef struct lag_rac  lag_rac;
void ff_lag_rac_init(lag_rac *l, GetBitContext *gb, int length);
static inline void lag_rac_refill(lag_rac *l)
static inline uint8_t lag_get_rac(lag_rac *l)
