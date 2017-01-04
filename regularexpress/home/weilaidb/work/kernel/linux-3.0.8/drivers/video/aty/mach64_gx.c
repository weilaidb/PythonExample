#define REF_FREQ_2595       1432
#define REF_DIV_2595          46
#define MAX_FREQ_2595      15938
#define MIN_FREQ_2595       8000
#define ABS_MIN_FREQ_2595   1000
#define N_ADJ_2595           257
#define STOP_BITS_2595     0x1800
#define MIN_N_408		2
#define MIN_N_1703		6
#define MIN_M		2
#define MAX_M		30
#define MIN_N		35
#define MAX_N		255-8
static void aty_dac_waste4(const struct atyfb_par *par)
static void aty_StrobeClock(const struct atyfb_par *par)
static void aty_st_514(int offset, u8 val, const struct atyfb_par *par)
static int aty_set_dac_514(const struct fb_info *info,
const union aty_pll *pll, u32 bpp, u32 accel)
static int aty_var_to_pll_514(const struct fb_info *info, u32 vclk_per,
u32 bpp, union aty_pll *pll)
static u32 aty_pll_514_to_var(const struct fb_info *info,
const union aty_pll *pll)
static void aty_set_pll_514(const struct fb_info *info,
const union aty_pll *pll)
const struct aty_dac_ops aty_dac_ibm514 = ;
const struct aty_pll_ops aty_pll_ibm514 = ;
static int aty_set_dac_ATI68860_B(const struct fb_info *info,
const union aty_pll *pll, u32 bpp,
u32 accel)
const struct aty_dac_ops aty_dac_ati68860b = ;
static int aty_set_dac_ATT21C498(const struct fb_info *info,
const union aty_pll *pll, u32 bpp,
u32 accel)
const struct aty_dac_ops aty_dac_att21c498 = ;
static int aty_var_to_pll_18818(const struct fb_info *info, u32 vclk_per,
u32 bpp, union aty_pll *pll)
static u32 aty_pll_18818_to_var(const struct fb_info *info,
const union aty_pll *pll)
static void aty_ICS2595_put1bit(u8 data, const struct atyfb_par *par)
static void aty_set_pll18818(const struct fb_info *info,
const union aty_pll *pll)
const struct aty_pll_ops aty_pll_ati18818_1 = ;
static int aty_var_to_pll_1703(const struct fb_info *info, u32 vclk_per,
u32 bpp, union aty_pll *pll)
static u32 aty_pll_1703_to_var(const struct fb_info *info,
const union aty_pll *pll)
static void aty_set_pll_1703(const struct fb_info *info,
const union aty_pll *pll)
const struct aty_pll_ops aty_pll_stg1703 = ;
static int aty_var_to_pll_8398(const struct fb_info *info, u32 vclk_per,
u32 bpp, union aty_pll *pll)
static u32 aty_pll_8398_to_var(const struct fb_info *info,
const union aty_pll *pll)
static void aty_set_pll_8398(const struct fb_info *info,
const union aty_pll *pll)
const struct aty_pll_ops aty_pll_ch8398 = ;
static int aty_var_to_pll_408(const struct fb_info *info, u32 vclk_per,
u32 bpp, union aty_pll *pll)
static u32 aty_pll_408_to_var(const struct fb_info *info,
const union aty_pll *pll)
static void aty_set_pll_408(const struct fb_info *info,
const union aty_pll *pll)
const struct aty_pll_ops aty_pll_att20c408 = ;
static int aty_set_dac_unsupported(const struct fb_info *info,
const union aty_pll *pll, u32 bpp,
u32 accel)
static int dummy(void)
const struct aty_dac_ops aty_dac_unsupported = ;
const struct aty_pll_ops aty_pll_unsupported = ;
