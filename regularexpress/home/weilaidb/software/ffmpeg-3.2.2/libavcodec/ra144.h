#define AVCODEC_RA144_H
#define NBLOCKS         4
#define BLOCKSIZE       40
#define BUFFERSIZE      146
#define FIXED_CB_SIZE   128
#define FRAME_SIZE      20
#define LPC_ORDER       10
typedef struct RA144Context  RA144Context;
ff_copy_and_dup;
ff_eval_refl;
ff_eval_coefs;
ff_int_to_int16;
ff_t_sqrt;
ff_rms;
ff_interp;
ff_rescale_rms;
ff_irms;
ff_subblock_synthesis;
extern const int16_t ff_gain_val_tab[256][3];
extern const uint8_t ff_gain_exp_tab[256];
extern const int8_t ff_cb1_vects[128][40];
extern const int8_t ff_cb2_vects[128][40];
extern const uint16_t ff_cb1_base[128];
extern const uint16_t ff_cb2_base[128];
extern const int16_t ff_energy_tab[32];
extern const int16_t * const ff_lpc_refl_cb[10];
