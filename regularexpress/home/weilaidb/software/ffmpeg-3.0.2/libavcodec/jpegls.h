#define AVCODEC_JPEGLS_H
typedef struct JpeglsContext  JpeglsContext;
typedef struct JLSState  JLSState;
void ff_jpegls_init_state(JLSState *state);
static inline int ff_jpegls_quantize(JLSState *s, int v)
void ff_jpegls_reset_coding_parameters(JLSState *s, int reset_all);
static inline void ff_jpegls_downscale_state(JLSState *state, int Q)
static inline int ff_jpegls_update_state_regular(JLSState *state,
int Q, int err)
#define R(a, i)    (bits == 8 ?  ((uint8_t *)(a))[i]      :  ((uint16_t *)(a))[i])
#define W(a, i, v) (bits == 8 ? (((uint8_t *)(a))[i] = v) : (((uint16_t *)(a))[i] = v))
