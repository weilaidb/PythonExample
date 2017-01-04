#define MDP_SCALE_COEFF_NUM      32
#define MDP_SCALE_0P2_TO_0P4_INDEX 0
#define MDP_SCALE_0P4_TO_0P6_INDEX 32
#define MDP_SCALE_0P6_TO_0P8_INDEX 64
#define MDP_SCALE_0P8_TO_8P0_INDEX 96
#define MDP_SCALE_COEFF_MASK 0x3ff
#define MDP_SCALE_PR  0
#define MDP_SCALE_FIR 1
static uint32 mdp_scale_0p8_to_8p0_mode;
static uint32 mdp_scale_0p6_to_0p8_mode;
static uint32 mdp_scale_0p4_to_0p6_mode;
static uint32 mdp_scale_0p2_to_0p4_mode;
static int16 mdp_scale_pixel_repeat_C0[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_pixel_repeat_C1[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_pixel_repeat_C2[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_pixel_repeat_C3[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p8_to_8p0_C0[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p8_to_8p0_C1[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p8_to_8p0_C2[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p8_to_8p0_C3[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p6_to_0p8_C0[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p6_to_0p8_C1[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p6_to_0p8_C2[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p6_to_0p8_C3[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p4_to_0p6_C0[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p4_to_0p6_C1[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p4_to_0p6_C2[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p4_to_0p6_C3[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p2_to_0p4_C0[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p2_to_0p4_C1[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p2_to_0p4_C2[MDP_SCALE_COEFF_NUM] = ;
static int16 mdp_scale_0p2_to_0p4_C3[MDP_SCALE_COEFF_NUM] = ;
static void mdp_update_scale_table(int index, int16 *c0, int16 *c1,
int16 *c2, int16 *c3)
void mdp_init_scale_table(void)
static long long mdp_do_div(long long num, long long den)
#define SCALER_PHASE_BITS 29
#define HAL_MDP_PHASE_STEP_2P50    0x50000000
#define HAL_MDP_PHASE_STEP_1P66    0x35555555
#define HAL_MDP_PHASE_STEP_1P25    0x28000000
struct phase_val ;
static void mdp_calc_scaleInitPhase_3p1(uint32 in_w,
uint32 in_h,
uint32 out_w,
uint32 out_h,
boolean is_rotate,
boolean is_pp_x,
boolean is_pp_y, struct phase_val *pval)
void mdp_set_scale(MDPIBUF *iBuf,
uint32 dst_roi_width,
uint32 dst_roi_height,
boolean inputRGB, boolean outputRGB, uint32 *pppop_reg_ptr)
void mdp_adjust_start_addr(uint8 **src0,
uint8 **src1,
int v_slice,
int h_slice,
int x,
int y,
uint32 width,
uint32 height, int bpp, MDPIBUF *iBuf, int layer)
void mdp_set_blend_attr(MDPIBUF *iBuf,
uint32 *alpha,
uint32 *tpVal,
uint32 perPixelAlpha, uint32 *pppop_reg_ptr)
