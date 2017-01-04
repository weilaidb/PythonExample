#define MX3FB_NAME		"mx3_sdc_fb"
#define MX3FB_REG_OFFSET	0xB4
#define SDC_COM_CONF		(0xB4 - MX3FB_REG_OFFSET)
#define SDC_GW_CTRL		(0xB8 - MX3FB_REG_OFFSET)
#define SDC_FG_POS		(0xBC - MX3FB_REG_OFFSET)
#define SDC_BG_POS		(0xC0 - MX3FB_REG_OFFSET)
#define SDC_CUR_POS		(0xC4 - MX3FB_REG_OFFSET)
#define SDC_PWM_CTRL		(0xC8 - MX3FB_REG_OFFSET)
#define SDC_CUR_MAP		(0xCC - MX3FB_REG_OFFSET)
#define SDC_HOR_CONF		(0xD0 - MX3FB_REG_OFFSET)
#define SDC_VER_CONF		(0xD4 - MX3FB_REG_OFFSET)
#define SDC_SHARP_CONF_1	(0xD8 - MX3FB_REG_OFFSET)
#define SDC_SHARP_CONF_2	(0xDC - MX3FB_REG_OFFSET)
#define SDC_COM_TFT_COLOR	0x00000001UL
#define SDC_COM_FG_EN		0x00000010UL
#define SDC_COM_GWSEL		0x00000020UL
#define SDC_COM_GLB_A		0x00000040UL
#define SDC_COM_KEY_COLOR_G	0x00000080UL
#define SDC_COM_BG_EN		0x00000200UL
#define SDC_COM_SHARP		0x00001000UL
#define SDC_V_SYNC_WIDTH_L	0x00000001UL
#define DI_DISP_IF_CONF		(0x0124 - MX3FB_REG_OFFSET)
#define DI_DISP_SIG_POL		(0x0128 - MX3FB_REG_OFFSET)
#define DI_SER_DISP1_CONF	(0x012C - MX3FB_REG_OFFSET)
#define DI_SER_DISP2_CONF	(0x0130 - MX3FB_REG_OFFSET)
#define DI_HSP_CLK_PER		(0x0134 - MX3FB_REG_OFFSET)
#define DI_DISP0_TIME_CONF_1	(0x0138 - MX3FB_REG_OFFSET)
#define DI_DISP0_TIME_CONF_2	(0x013C - MX3FB_REG_OFFSET)
#define DI_DISP0_TIME_CONF_3	(0x0140 - MX3FB_REG_OFFSET)
#define DI_DISP1_TIME_CONF_1	(0x0144 - MX3FB_REG_OFFSET)
#define DI_DISP1_TIME_CONF_2	(0x0148 - MX3FB_REG_OFFSET)
#define DI_DISP1_TIME_CONF_3	(0x014C - MX3FB_REG_OFFSET)
#define DI_DISP2_TIME_CONF_1	(0x0150 - MX3FB_REG_OFFSET)
#define DI_DISP2_TIME_CONF_2	(0x0154 - MX3FB_REG_OFFSET)
#define DI_DISP2_TIME_CONF_3	(0x0158 - MX3FB_REG_OFFSET)
#define DI_DISP3_TIME_CONF	(0x015C - MX3FB_REG_OFFSET)
#define DI_DISP0_DB0_MAP	(0x0160 - MX3FB_REG_OFFSET)
#define DI_DISP0_DB1_MAP	(0x0164 - MX3FB_REG_OFFSET)
#define DI_DISP0_DB2_MAP	(0x0168 - MX3FB_REG_OFFSET)
#define DI_DISP0_CB0_MAP	(0x016C - MX3FB_REG_OFFSET)
#define DI_DISP0_CB1_MAP	(0x0170 - MX3FB_REG_OFFSET)
#define DI_DISP0_CB2_MAP	(0x0174 - MX3FB_REG_OFFSET)
#define DI_DISP1_DB0_MAP	(0x0178 - MX3FB_REG_OFFSET)
#define DI_DISP1_DB1_MAP	(0x017C - MX3FB_REG_OFFSET)
#define DI_DISP1_DB2_MAP	(0x0180 - MX3FB_REG_OFFSET)
#define DI_DISP1_CB0_MAP	(0x0184 - MX3FB_REG_OFFSET)
#define DI_DISP1_CB1_MAP	(0x0188 - MX3FB_REG_OFFSET)
#define DI_DISP1_CB2_MAP	(0x018C - MX3FB_REG_OFFSET)
#define DI_DISP2_DB0_MAP	(0x0190 - MX3FB_REG_OFFSET)
#define DI_DISP2_DB1_MAP	(0x0194 - MX3FB_REG_OFFSET)
#define DI_DISP2_DB2_MAP	(0x0198 - MX3FB_REG_OFFSET)
#define DI_DISP2_CB0_MAP	(0x019C - MX3FB_REG_OFFSET)
#define DI_DISP2_CB1_MAP	(0x01A0 - MX3FB_REG_OFFSET)
#define DI_DISP2_CB2_MAP	(0x01A4 - MX3FB_REG_OFFSET)
#define DI_DISP3_B0_MAP		(0x01A8 - MX3FB_REG_OFFSET)
#define DI_DISP3_B1_MAP		(0x01AC - MX3FB_REG_OFFSET)
#define DI_DISP3_B2_MAP		(0x01B0 - MX3FB_REG_OFFSET)
#define DI_DISP_ACC_CC		(0x01B4 - MX3FB_REG_OFFSET)
#define DI_DISP_LLA_CONF	(0x01B8 - MX3FB_REG_OFFSET)
#define DI_DISP_LLA_DATA	(0x01BC - MX3FB_REG_OFFSET)
#define DI_D3_VSYNC_POL_SHIFT		28
#define DI_D3_HSYNC_POL_SHIFT		27
#define DI_D3_DRDY_SHARP_POL_SHIFT	26
#define DI_D3_CLK_POL_SHIFT		25
#define DI_D3_DATA_POL_SHIFT		24
#define DI_D3_CLK_IDLE_SHIFT		26
#define DI_D3_CLK_SEL_SHIFT		25
#define DI_D3_DATAMSK_SHIFT		24
enum ipu_panel ;
struct ipu_di_signal_cfg ;
static const struct fb_videomode mx3fb_modedb[] = ;
struct mx3fb_data ;
struct dma_chan_request ;
struct mx3fb_info ;
static void mx3fb_dma_done(void *);
static const char *fb_mode;
static unsigned long default_bpp = 16;
static u32 mx3fb_read_reg(struct mx3fb_data *mx3fb, unsigned long reg)
static void mx3fb_write_reg(struct mx3fb_data *mx3fb, u32 value, unsigned long reg)
static const uint32_t di_mappings[] = ;
static void sdc_fb_init(struct mx3fb_info *fbi)
static uint32_t sdc_fb_uninit(struct mx3fb_info *fbi)
static void sdc_enable_channel(struct mx3fb_info *mx3_fbi)
static void sdc_disable_channel(struct mx3fb_info *mx3_fbi)
static int sdc_set_window_pos(struct mx3fb_data *mx3fb, enum ipu_channel channel,
int16_t x_pos, int16_t y_pos)
static int sdc_init_panel(struct mx3fb_data *mx3fb, enum ipu_panel panel,
uint32_t pixel_clk,
uint16_t width, uint16_t height,
enum pixel_fmt pixel_fmt,
uint16_t h_start_width, uint16_t h_sync_width,
uint16_t h_end_width, uint16_t v_start_width,
uint16_t v_sync_width, uint16_t v_end_width,
struct ipu_di_signal_cfg sig)
static int sdc_set_color_key(struct mx3fb_data *mx3fb, enum ipu_channel channel,
bool enable, uint32_t color_key)
static int sdc_set_global_alpha(struct mx3fb_data *mx3fb, bool enable, uint8_t alpha)
static void sdc_set_brightness(struct mx3fb_data *mx3fb, uint8_t value)
static uint32_t bpp_to_pixfmt(int bpp)
static int mx3fb_blank(int blank, struct fb_info *fbi);
static int mx3fb_map_video_memory(struct fb_info *fbi, unsigned int mem_len,
bool lock);
static int mx3fb_unmap_video_memory(struct fb_info *fbi);
static int mx3fb_set_fix(struct fb_info *fbi)
static void mx3fb_dma_done(void *arg)
static int __set_par(struct fb_info *fbi, bool lock)
static int mx3fb_set_par(struct fb_info *fbi)
static int mx3fb_check_var(struct fb_var_screeninfo *var, struct fb_info *fbi)
static u32 chan_to_field(unsigned int chan, struct fb_bitfield *bf)
static int mx3fb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int trans, struct fb_info *fbi)
static void __blank(int blank, struct fb_info *fbi)
static int mx3fb_blank(int blank, struct fb_info *fbi)
static int mx3fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *fbi)
static struct fb_ops mx3fb_ops = ;
static int mx3fb_suspend(struct platform_device *pdev, pm_message_t state)
static int mx3fb_resume(struct platform_device *pdev)
#define mx3fb_suspend   NULL
#define mx3fb_resume    NULL
static int mx3fb_map_video_memory(struct fb_info *fbi, unsigned int mem_len,
bool lock)
static int mx3fb_unmap_video_memory(struct fb_info *fbi)
static struct fb_info *mx3fb_init_fbinfo(struct device *dev, struct fb_ops *ops)
static int init_fb_chan(struct mx3fb_data *mx3fb, struct idmac_channel *ichan)
static bool chan_filter(struct dma_chan *chan, void *arg)
static void release_fbi(struct fb_info *fbi)
static int mx3fb_probe(struct platform_device *pdev)
static int mx3fb_remove(struct platform_device *dev)
static struct platform_driver mx3fb_driver = ;
static int __init mx3fb_setup(void)
static int __init mx3fb_init(void)
static void __exit mx3fb_exit(void)
module_init(mx3fb_init);
module_exit(mx3fb_exit);
MODULE_AUTHOR("Freescale Semiconductor, Inc.");
MODULE_DESCRIPTION("MX3 framebuffer driver");
MODULE_ALIAS("platform:" MX3FB_NAME);
MODULE_LICENSE("GPL v2");
