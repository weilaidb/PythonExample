#define AVCODEC_MPC_H
#define BANDS            32
#define SAMPLES_PER_BAND 36
#define MPC_FRAME_SIZE   (BANDS * SAMPLES_PER_BAND)
typedef struct Band Band;
typedef struct MPCContext  MPCContext;
ff_mpc_init;
ff_mpc_dequantize_and_synth;
