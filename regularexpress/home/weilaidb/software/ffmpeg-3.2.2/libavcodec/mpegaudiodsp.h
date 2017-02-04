#define AVCODEC_MPEGAUDIODSP_H
typedef struct MPADSPContext  MPADSPContext;
ff_mpadsp_init;
extern int32_t ff_mpa_synth_window_fixed[];
extern float   ff_mpa_synth_window_float[];
extern const int32_t ff_mpa_enwindow[257];
ff_mpa_synth_filter_fixed;
ff_mpa_synth_filter_float;
ff_mpadsp_init_aarch64;
ff_mpadsp_init_arm;
ff_mpadsp_init_ppc;
ff_mpadsp_init_x86;
ff_mpadsp_init_mipsfpu;
ff_mpadsp_init_mipsdsp;
ff_mpa_synth_init_float;
ff_mpa_synth_init_fixed;
ff_mpadsp_apply_window_float;
ff_mpadsp_apply_window_fixed;
ff_imdct36_blocks_float;
ff_imdct36_blocks_fixed;
ff_init_mpadsp_tabs_float;
ff_init_mpadsp_tabs_fixed;
FFALIGN
extern int ff_mdct_win_fixed[8][MDCT_BUF_SIZE];
extern float ff_mdct_win_float[8][MDCT_BUF_SIZE];
