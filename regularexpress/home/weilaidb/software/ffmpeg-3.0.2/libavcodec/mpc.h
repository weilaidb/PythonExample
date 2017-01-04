#define AVCODEC_MPC_H
#define BANDS            32
#define SAMPLES_PER_BAND 36
#define MPC_FRAME_SIZE   (BANDS * SAMPLES_PER_BAND)
typedef struct Band Band;
typedef struct MPCContext  MPCContext;
void ff_mpc_init(void);
void ff_mpc_dequantize_and_synth(MPCContext *c, int maxband, int16_t **out, int channels);
