#define AVCODEC_RA144_H
#define NBLOCKS         4
#define BLOCKSIZE       40
#define BUFFERSIZE      146
#define FIXED_CB_SIZE   128
#define FRAME_SIZE      20
#define LPC_ORDER       10
typedef struct RA144Context  RA144Context;
void ff_copy_and_dup(int16_t *target, const int16_t *source, int offset);
int ff_eval_refl(int *refl, const int16_t *coefs, AVCodecContext *avctx);
void ff_eval_coefs(int *coefs, const int *refl);
void ff_int_to_int16(int16_t *out, const int *inp);
int ff_t_sqrt(unsigned int x);
unsigned int ff_rms(const int *data);
int ff_interp(RA144Context *ractx, int16_t *out, int a, int copyold,
int energy);
unsigned int ff_rescale_rms(unsigned int rms, unsigned int energy);
int ff_irms(AudioDSPContext *adsp, const int16_t *data);
void ff_subblock_synthesis(RA144Context *ractx, const int16_t *lpc_coefs,
int cba_idx, int cb1_idx, int cb2_idx,
int gval, int gain);
extern const int16_t ff_gain_val_tab[256][3];
extern const uint8_t ff_gain_exp_tab[256];
extern const int8_t ff_cb1_vects[128][40];
extern const int8_t ff_cb2_vects[128][40];
extern const uint16_t ff_cb1_base[128];
extern const uint16_t ff_cb2_base[128];
extern const int16_t ff_energy_tab[32];
extern const int16_t * const ff_lpc_refl_cb[10];
