static DEFINE_SPINLOCK(gx1_conf_reg_lock);
static u8 gx1_read_conf_reg(u8 reg)
unsigned gx1_gx_base(void)
int gx1_frame_buffer_size(void)
static void gx1_set_mode(struct fb_info *info)
static void gx1_set_hw_palette_reg(struct fb_info *info, unsigned regno,
unsigned red, unsigned green, unsigned blue)
struct geode_dc_ops gx1_dc_ops = ;
