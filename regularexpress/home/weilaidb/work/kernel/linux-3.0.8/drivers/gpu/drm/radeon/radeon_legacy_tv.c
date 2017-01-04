#define MAX_H_POSITION 5
#define MAX_V_POSITION 5
#define H_POS_UNIT 10
#define H_TABLE_POS1 6
#define H_TABLE_POS2 8
#define MAX_H_SIZE 5
#define NTSC_TV_CLOCK_T 233
#define NTSC_TV_VFTOTAL 1
#define NTSC_TV_LINES_PER_FRAME 525
#define NTSC_TV_ZERO_H_SIZE 479166
#define NTSC_TV_H_SIZE_UNIT 9478
#define PAL_TV_CLOCK_T 188
#define PAL_TV_VFTOTAL 3
#define PAL_TV_LINES_PER_FRAME 625
#define PAL_TV_ZERO_H_SIZE 473200
#define PAL_TV_H_SIZE_UNIT 9360
#define NTSC_TV_PLL_M_27 22
#define NTSC_TV_PLL_N_27 175
#define NTSC_TV_PLL_P_27 5
#define PAL_TV_PLL_M_27 113
#define PAL_TV_PLL_N_27 668
#define PAL_TV_PLL_P_27 3
#define NTSC_TV_PLL_M_14 33
#define NTSC_TV_PLL_N_14 693
#define NTSC_TV_PLL_P_14 7
#define PAL_TV_PLL_M_14 19
#define PAL_TV_PLL_N_14 353
#define PAL_TV_PLL_P_14 5
#define VERT_LEAD_IN_LINES 2
#define FRAC_BITS 0xe
#define FRAC_MASK 0x3fff
struct radeon_tv_mode_constants ;
static const uint16_t hor_timing_NTSC[MAX_H_CODE_TIMING_LEN] = ;
static const uint16_t vert_timing_NTSC[MAX_V_CODE_TIMING_LEN] = ;
static const uint16_t hor_timing_PAL[MAX_H_CODE_TIMING_LEN] = ;
static const uint16_t vert_timing_PAL[MAX_V_CODE_TIMING_LEN] = ;
static const struct radeon_tv_mode_constants available_tv_modes[] = ;
#define N_AVAILABLE_MODES ARRAY_SIZE(available_tv_modes)
static const struct radeon_tv_mode_constants *radeon_legacy_tv_get_std_mode(struct radeon_encoder *radeon_encoder,
uint16_t *pll_ref_freq)
static long YCOEF_value[5] = ;
static long YCOEF_EN_value[5] = ;
static long SLOPE_value[5] = ;
static long SLOPE_limit[5] = ;
static void radeon_wait_pll_lock(struct drm_encoder *encoder, unsigned n_tests,
unsigned n_wait_loops, unsigned cnt_threshold)
static void radeon_legacy_tv_write_fifo(struct radeon_encoder *radeon_encoder,
uint16_t addr, uint32_t value)
static uint16_t radeon_get_htiming_tables_addr(uint32_t tv_uv_adr)
static uint16_t radeon_get_vtiming_tables_addr(uint32_t tv_uv_adr)
static void radeon_restore_tv_timing_tables(struct radeon_encoder *radeon_encoder)
static void radeon_legacy_write_tv_restarts(struct radeon_encoder *radeon_encoder)
static bool radeon_legacy_tv_init_restarts(struct drm_encoder *encoder)
void radeon_legacy_tv_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
void radeon_legacy_tv_adjust_crtc_reg(struct drm_encoder *encoder,
uint32_t *h_total_disp, uint32_t *h_sync_strt_wid,
uint32_t *v_total_disp, uint32_t *v_sync_strt_wid)
static inline int get_post_div(int value)
void radeon_legacy_tv_adjust_pll1(struct drm_encoder *encoder,
uint32_t *htotal_cntl, uint32_t *ppll_ref_div,
uint32_t *ppll_div_3, uint32_t *pixclks_cntl)
void radeon_legacy_tv_adjust_pll2(struct drm_encoder *encoder,
uint32_t *htotal2_cntl, uint32_t *p2pll_ref_div,
uint32_t *p2pll_div_0, uint32_t *pixclks_cntl)
