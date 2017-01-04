#if !defined(_FIR_H_)
#define _FIR_H_
struct fir16_state_t ;
struct fir32_state_t ;
struct fir_float_state_t ;
static inline const int16_t *fir16_create(struct fir16_state_t *fir,
const int16_t *coeffs, int taps)
static inline void fir16_flush(struct fir16_state_t *fir)
static inline void fir16_free(struct fir16_state_t *fir)
static inline int32_t dot_asm(short *x, short *y, int len)
static inline int16_t fir16(struct fir16_state_t *fir, int16_t sample)
static inline const int16_t *fir32_create(struct fir32_state_t *fir,
const int32_t *coeffs, int taps)
static inline void fir32_flush(struct fir32_state_t *fir)
static inline void fir32_free(struct fir32_state_t *fir)
static inline int16_t fir32(struct fir32_state_t *fir, int16_t sample)
