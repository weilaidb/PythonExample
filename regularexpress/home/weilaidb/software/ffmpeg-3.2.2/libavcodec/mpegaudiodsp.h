#define AVCODEC_MPEGAUDIODSP_H
typedef struct MPADSPContext  MPADSPContext;
void ff_mpadsp_init(MPADSPContext *s);
extern int32_t ff_mpa_synth_window_fixed[];
extern float   ff_mpa_synth_window_float[];
extern const int32_t ff_mpa_enwindow[257];
void ff_mpa_synth_filter_fixed(MPADSPContext *s,
int32_t *synth_buf_ptr, int *synth_buf_offset,
int32_t *window, int *dither_state,
int16_t *samples, int incr,
int32_t *sb_samples);
void ff_mpa_synth_filter_float(MPADSPContext *s,
float *synth_buf_ptr, int *synth_buf_offset,
float *window, int *dither_state,
float *samples, int incr,
float *sb_samples);
void ff_mpadsp_init_aarch64(MPADSPContext *s);
void ff_mpadsp_init_arm(MPADSPContext *s);
void ff_mpadsp_init_ppc(MPADSPContext *s);
void ff_mpadsp_init_x86(MPADSPContext *s);
void ff_mpadsp_init_mipsfpu(MPADSPContext *s);
void ff_mpadsp_init_mipsdsp(MPADSPContext *s);
void ff_mpa_synth_init_float(float *window);
void ff_mpa_synth_init_fixed(int32_t *window);
void ff_mpadsp_apply_window_float(float *synth_buf, float *window,
int *dither_state, float *samples,
int incr);
void ff_mpadsp_apply_window_fixed(int32_t *synth_buf, int32_t *window,
int *dither_state, int16_t *samples,
int incr);
void ff_imdct36_blocks_float(float *out, float *buf, float *in,
int count, int switch_point, int block_type);
void ff_imdct36_blocks_fixed(int *out, int *buf, int *in,
int count, int switch_point, int block_type);
void ff_init_mpadsp_tabs_float(void);
void ff_init_mpadsp_tabs_fixed(void);
#define MDCT_BUF_SIZE FFALIGN(36, 2*4)
extern int ff_mdct_win_fixed[8][MDCT_BUF_SIZE];
extern float ff_mdct_win_float[8][MDCT_BUF_SIZE];
