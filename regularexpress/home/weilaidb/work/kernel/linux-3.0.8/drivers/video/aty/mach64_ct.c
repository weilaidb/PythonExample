#undef DEBUG
static int aty_valid_pll_ct (const struct fb_info *info, u32 vclk_per, struct pll_ct *pll);
static int aty_dsp_gt       (const struct fb_info *info, u32 bpp, struct pll_ct *pll);
static int aty_var_to_pll_ct(const struct fb_info *info, u32 vclk_per, u32 bpp, union aty_pll *pll);
static u32 aty_pll_to_var_ct(const struct fb_info *info, const union aty_pll *pll);
u8 aty_ld_pll_ct(int offset, const struct atyfb_par *par)
static void aty_st_pll_ct(int offset, u8 val, const struct atyfb_par *par)
#define Maximum_DSP_PRECISION 7
static u8 postdividers[] = ;
static int aty_dsp_gt(const struct fb_info *info, u32 bpp, struct pll_ct *pll)
static int aty_valid_pll_ct(const struct fb_info *info, u32 vclk_per, struct pll_ct *pll)
static int aty_var_to_pll_ct(const struct fb_info *info, u32 vclk_per, u32 bpp, union aty_pll *pll)
static u32 aty_pll_to_var_ct(const struct fb_info *info, const union aty_pll *pll)
void aty_set_pll_ct(const struct fb_info *info, const union aty_pll *pll)
static void __devinit aty_get_pll_ct(const struct fb_info *info,
union aty_pll *pll)
static int __devinit aty_init_pll_ct(const struct fb_info *info,
union aty_pll *pll)
static void aty_resume_pll_ct(const struct fb_info *info,
union aty_pll *pll)
static int dummy(void)
const struct aty_dac_ops aty_dac_ct = ;
const struct aty_pll_ops aty_pll_ct = ;
