static MDP_SCALE_MODE mdp_curr_up_scale_xy;
static MDP_SCALE_MODE mdp_curr_down_scale_x;
static MDP_SCALE_MODE mdp_curr_down_scale_y;
static long long mdp_do_div(long long num, long long den)
struct mdp_table_entry mdp_gaussian_blur_table[] = ;
static void load_scale_table(
struct mdp_table_entry *table, int len)
static void mdp_load_pr_upscale_table(void)
static void mdp_load_pr_downscale_table_x_point2TOpoint4(void)
static void mdp_load_pr_downscale_table_y_point2TOpoint4(void)
static void mdp_load_pr_downscale_table_x_point4TOpoint6(void)
static void mdp_load_pr_downscale_table_y_point4TOpoint6(void)
static void mdp_load_pr_downscale_table_x_point6TOpoint8(void)
static void mdp_load_pr_downscale_table_y_point6TOpoint8(void)
static void mdp_load_pr_downscale_table_x_point8TO1(void)
static void mdp_load_pr_downscale_table_y_point8TO1(void)
static void mdp_load_bc_upscale_table(void)
static void mdp_load_bc_downscale_table_x_point2TOpoint4(void)
static void mdp_load_bc_downscale_table_y_point2TOpoint4(void)
static void mdp_load_bc_downscale_table_x_point4TOpoint6(void)
static void mdp_load_bc_downscale_table_y_point4TOpoint6(void)
static void mdp_load_bc_downscale_table_x_point6TOpoint8(void)
static void mdp_load_bc_downscale_table_y_point6TOpoint8(void)
static void mdp_load_bc_downscale_table_x_point8TO1(void)
static void mdp_load_bc_downscale_table_y_point8TO1(void)
static int mdp_get_edge_cond(MDPIBUF *iBuf, uint32 *dup, uint32 *dup2)
#define ADJUST_IP
static int mdp_calc_scale_params(
uint32 org,
uint32 dim_in,
uint32 dim_out,
boolean is_W,
int32 *phase_init_ptr,
uint32 *phase_step_ptr,
uint32 *num_repl_beg_ptr,
uint32 *num_repl_end_ptr)
static uint8 *mdp_adjust_rot_addr(MDPIBUF *iBuf, uint8 *addr, uint32 uv)
void mdp_set_scale(MDPIBUF *iBuf,
uint32 dst_roi_width,
uint32 dst_roi_height,
boolean inputRGB, boolean outputRGB, uint32 *pppop_reg_ptr)
void mdp_init_scale_table(void)
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
