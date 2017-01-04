#define AVFILTER_NOISE_H
#define MAX_NOISE 5120
#define MAX_SHIFT 1024
#define MAX_RES (MAX_NOISE-MAX_SHIFT)
#define NOISE_UNIFORM  1
#define NOISE_TEMPORAL 2
#define NOISE_AVERAGED 8
#define NOISE_PATTERN  16
typedef struct  FilterParams;
typedef struct  NoiseContext;
void ff_line_noise_c(uint8_t *dst, const uint8_t *src, const int8_t *noise, int len, int shift);
void ff_line_noise_avg_c(uint8_t *dst, const uint8_t *src, int len, const int8_t * const *shift);
void ff_noise_init_x86(NoiseContext *n);
