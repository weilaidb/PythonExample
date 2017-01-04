void svga_wcrt_multi(void __iomem *regbase, const struct vga_regset *regset, u32 value)
void svga_wseq_multi(void __iomem *regbase, const struct vga_regset *regset, u32 value)
static unsigned int svga_regset_size(const struct vga_regset *regset)
void svga_set_default_gfx_regs(void __iomem *regbase)
void svga_set_default_atc_regs(void __iomem *regbase)
void svga_set_default_seq_regs(void __iomem *regbase)
void svga_set_default_crt_regs(void __iomem *regbase)
void svga_set_textmode_vga_regs(void __iomem *regbase)
void svga_settile(struct fb_info *info, struct fb_tilemap *map)
void svga_tilecopy(struct fb_info *info, struct fb_tilearea *area)
void svga_tilefill(struct fb_info *info, struct fb_tilerect *rect)
void svga_tileblit(struct fb_info *info, struct fb_tileblit *blit)
void svga_tilecursor(void __iomem *regbase, struct fb_info *info, struct fb_tilecursor *cursor)
int svga_get_tilemax(struct fb_info *info)
void svga_get_caps(struct fb_info *info, struct fb_blit_caps *caps,
struct fb_var_screeninfo *var)
EXPORT_SYMBOL(svga_get_caps);
static inline u32 abs_diff(u32 a, u32 b)
int svga_compute_pll(const struct svga_pll *pll, u32 f_wanted, u16 *m, u16 *n, u16 *r, int node)
int svga_check_timings(const struct svga_timing_regs *tm, struct fb_var_screeninfo *var, int node)
void svga_set_timings(void __iomem *regbase, const struct svga_timing_regs *tm,
struct fb_var_screeninfo *var,
u32 hmul, u32 hdiv, u32 vmul, u32 vdiv, u32 hborder, int node)
static inline int match_format(const struct svga_fb_format *frm,
struct fb_var_screeninfo *var)
int svga_match_format(const struct svga_fb_format *frm,
struct fb_var_screeninfo *var,
struct fb_fix_screeninfo *fix)
EXPORT_SYMBOL(svga_wcrt_multi);
EXPORT_SYMBOL(svga_wseq_multi);
EXPORT_SYMBOL(svga_set_default_gfx_regs);
EXPORT_SYMBOL(svga_set_default_atc_regs);
EXPORT_SYMBOL(svga_set_default_seq_regs);
EXPORT_SYMBOL(svga_set_default_crt_regs);
EXPORT_SYMBOL(svga_set_textmode_vga_regs);
EXPORT_SYMBOL(svga_settile);
EXPORT_SYMBOL(svga_tilecopy);
EXPORT_SYMBOL(svga_tilefill);
EXPORT_SYMBOL(svga_tileblit);
EXPORT_SYMBOL(svga_tilecursor);
EXPORT_SYMBOL(svga_get_tilemax);
EXPORT_SYMBOL(svga_compute_pll);
EXPORT_SYMBOL(svga_check_timings);
EXPORT_SYMBOL(svga_set_timings);
EXPORT_SYMBOL(svga_match_format);
MODULE_AUTHOR("Ondrej Zajicek <santiago@crfreenet.org>");
MODULE_DESCRIPTION("Common utility functions for VGA-based graphics cards");
MODULE_LICENSE("GPL");
