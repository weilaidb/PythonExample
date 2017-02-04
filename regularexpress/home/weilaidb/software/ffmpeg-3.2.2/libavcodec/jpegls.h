#define AVCODEC_JPEGLS_H
typedef struct JpeglsContext  JpeglsContext;
typedef struct JLSState  JLSState;
ff_jpegls_init_state;
ff_jpegls_quantize
ff_jpegls_reset_coding_parameters;
ff_jpegls_downscale_state
ff_jpegls_update_state_regular
R    (bits == 8 ?  ((uint8_t *)(a))[i]      :  ((uint16_t *)(a))[i])
W (bits == 8 ? (((uint8_t *)(a))[i] = v) : (((uint16_t *)(a))[i] = v))
