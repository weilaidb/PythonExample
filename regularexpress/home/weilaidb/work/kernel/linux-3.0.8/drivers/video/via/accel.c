static int viafb_set_bpp(void __iomem *engine, u8 bpp)
static int hw_bitblt_1(void __iomem *engine, u8 op, u32 width, u32 height,
u8 dst_bpp, u32 dst_addr, u32 dst_pitch, u32 dst_x, u32 dst_y,
u32 *src_mem, u32 src_addr, u32 src_pitch, u32 src_x, u32 src_y,
u32 fg_color, u32 bg_color, u8 fill_rop)
static int hw_bitblt_2(void __iomem *engine, u8 op, u32 width, u32 height,
u8 dst_bpp, u32 dst_addr, u32 dst_pitch, u32 dst_x, u32 dst_y,
u32 *src_mem, u32 src_addr, u32 src_pitch, u32 src_x, u32 src_y,
u32 fg_color, u32 bg_color, u8 fill_rop)
int viafb_setup_engine(struct fb_info *info)
void viafb_reset_engine(struct viafb_par *viapar)
void viafb_show_hw_cursor(struct fb_info *info, int Status)
void viafb_wait_engine_idle(struct fb_info *info)
