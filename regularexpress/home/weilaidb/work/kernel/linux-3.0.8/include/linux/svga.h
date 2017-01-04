#define _LINUX_SVGA_H
#define VGA_REGSET_END_VAL	0xFF
#define VGA_REGSET_END
struct vga_regset ;
#define SVGA_FORMAT_END_VAL	0xFFFF
#define SVGA_FORMAT_END
struct svga_fb_format ;
struct svga_timing_regs ;
struct svga_pll ;
static inline void svga_wattr(void __iomem *regbase, u8 index, u8 data)
static inline void svga_wseq_mask(void __iomem *regbase, u8 index, u8 data, u8 mask)
static inline void svga_wcrt_mask(void __iomem *regbase, u8 index, u8 data, u8 mask)
static inline int svga_primary_device(struct pci_dev *dev)
void svga_wcrt_multi(void __iomem *regbase, const struct vga_regset *regset, u32 value);
void svga_wseq_multi(void __iomem *regbase, const struct vga_regset *regset, u32 value);
void svga_set_default_gfx_regs(void __iomem *regbase);
void svga_set_default_atc_regs(void __iomem *regbase);
void svga_set_default_seq_regs(void __iomem *regbase);
void svga_set_default_crt_regs(void __iomem *regbase);
void svga_set_textmode_vga_regs(void __iomem *regbase);
void svga_settile(struct fb_info *info, struct fb_tilemap *map);
void svga_tilecopy(struct fb_info *info, struct fb_tilearea *area);
void svga_tilefill(struct fb_info *info, struct fb_tilerect *rect);
void svga_tileblit(struct fb_info *info, struct fb_tileblit *blit);
void svga_tilecursor(void __iomem *regbase, struct fb_info *info, struct fb_tilecursor *cursor);
int svga_get_tilemax(struct fb_info *info);
void svga_get_caps(struct fb_info *info, struct fb_blit_caps *caps,
struct fb_var_screeninfo *var);
int svga_compute_pll(const struct svga_pll *pll, u32 f_wanted, u16 *m, u16 *n, u16 *r, int node);
int svga_check_timings(const struct svga_timing_regs *tm, struct fb_var_screeninfo *var, int node);
void svga_set_timings(void __iomem *regbase, const struct svga_timing_regs *tm, struct fb_var_screeninfo *var, u32 hmul, u32 hdiv, u32 vmul, u32 vdiv, u32 hborder, int node);
int svga_match_format(const struct svga_fb_format *frm, struct fb_var_screeninfo *var, struct fb_fix_screeninfo *fix);
