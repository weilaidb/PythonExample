#define MIPID_MODULE_NAME		"lcd_mipid"
#define MIPID_CMD_READ_DISP_ID		0x04
#define MIPID_CMD_READ_RED		0x06
#define MIPID_CMD_READ_GREEN		0x07
#define MIPID_CMD_READ_BLUE		0x08
#define MIPID_CMD_READ_DISP_STATUS	0x09
#define MIPID_CMD_RDDSDR		0x0F
#define MIPID_CMD_SLEEP_IN		0x10
#define MIPID_CMD_SLEEP_OUT		0x11
#define MIPID_CMD_DISP_OFF		0x28
#define MIPID_CMD_DISP_ON		0x29
#define MIPID_ESD_CHECK_PERIOD		msecs_to_jiffies(5000)
#define to_mipid_device(p)		container_of(p, struct mipid_device, \
panel)
struct mipid_device ;
static void mipid_transfer(struct mipid_device *md, int cmd, const u8 *wbuf,
int wlen, u8 *rbuf, int rlen)
static inline void mipid_cmd(struct mipid_device *md, int cmd)
static inline void mipid_write(struct mipid_device *md,
int reg, const u8 *buf, int len)
static inline void mipid_read(struct mipid_device *md,
int reg, u8 *buf, int len)
static void set_data_lines(struct mipid_device *md, int data_lines)
static void send_init_string(struct mipid_device *md)
static void hw_guard_start(struct mipid_device *md, int guard_msec)
static void hw_guard_wait(struct mipid_device *md)
static void set_sleep_mode(struct mipid_device *md, int on)
static void set_display_state(struct mipid_device *md, int enabled)
static int mipid_set_bklight_level(struct lcd_panel *panel, unsigned int level)
static unsigned int mipid_get_bklight_level(struct lcd_panel *panel)
static unsigned int mipid_get_bklight_max(struct lcd_panel *panel)
static unsigned long mipid_get_caps(struct lcd_panel *panel)
static u16 read_first_pixel(struct mipid_device *md)
static int mipid_run_test(struct lcd_panel *panel, int test_num)
static void ls041y3_esd_recover(struct mipid_device *md)
static void ls041y3_esd_check_mode1(struct mipid_device *md)
static void ls041y3_esd_check_mode2(struct mipid_device *md)
static void ls041y3_esd_check(struct mipid_device *md)
static void mipid_esd_start_check(struct mipid_device *md)
static void mipid_esd_stop_check(struct mipid_device *md)
static void mipid_esd_work(struct work_struct *work)
static int mipid_enable(struct lcd_panel *panel)
static void mipid_disable(struct lcd_panel *panel)
static int panel_enabled(struct mipid_device *md)
static int mipid_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void mipid_cleanup(struct lcd_panel *panel)
static struct lcd_panel mipid_panel = ;
static int mipid_detect(struct mipid_device *md)
static int mipid_spi_probe(struct spi_device *spi)
static int mipid_spi_remove(struct spi_device *spi)
static struct spi_driver mipid_spi_driver = ;
static int __init mipid_drv_init(void)
module_init(mipid_drv_init);
static void __exit mipid_drv_cleanup(void)
module_exit(mipid_drv_cleanup);
MODULE_DESCRIPTION("MIPI display driver");
MODULE_LICENSE("GPL");
