struct gx_pll_entry ;
#define POSTDIV3 ((u32)MSR_GLCP_SYS_RSTPLL_DOTPOSTDIV3)
#define PREMULT2 ((u32)MSR_GLCP_SYS_RSTPLL_DOTPREMULT2)
#define PREDIV2  ((u32)MSR_GLCP_SYS_RSTPLL_DOTPOSTDIV3)
static const struct gx_pll_entry gx_pll_table_48MHz[] = ;
static const struct gx_pll_entry gx_pll_table_14MHz[] = ;
void gx_set_dclk_frequency(struct fb_info *info)
static void
gx_configure_tft(struct fb_info *info)
void gx_configure_display(struct fb_info *info)
int gx_blank_display(struct fb_info *info, int blank_mode)
