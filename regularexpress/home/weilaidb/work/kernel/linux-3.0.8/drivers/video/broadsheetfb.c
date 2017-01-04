struct panel_info ;
static struct panel_info panel_table[] = ;
#define DPY_W 800
#define DPY_H 600
static struct fb_fix_screeninfo broadsheetfb_fix __devinitdata = ;
static struct fb_var_screeninfo broadsheetfb_var __devinitdata = ;
static void broadsheet_gpio_issue_data(struct broadsheetfb_par *par, u16 data)
static void broadsheet_gpio_issue_cmd(struct broadsheetfb_par *par, u16 data)
static void broadsheet_gpio_send_command(struct broadsheetfb_par *par, u16 data)
static void broadsheet_gpio_send_cmdargs(struct broadsheetfb_par *par, u16 cmd,
int argc, u16 *argv)
static void broadsheet_mmio_send_cmdargs(struct broadsheetfb_par *par, u16 cmd,
int argc, u16 *argv)
static void broadsheet_send_command(struct broadsheetfb_par *par, u16 data)
static void broadsheet_send_cmdargs(struct broadsheetfb_par *par, u16 cmd,
int argc, u16 *argv)
static void broadsheet_gpio_burst_write(struct broadsheetfb_par *par, int size,
u16 *data)
static void broadsheet_mmio_burst_write(struct broadsheetfb_par *par, int size,
u16 *data)
static void broadsheet_burst_write(struct broadsheetfb_par *par, int size,
u16 *data)
static u16 broadsheet_gpio_get_data(struct broadsheetfb_par *par)
static u16 broadsheet_get_data(struct broadsheetfb_par *par)
static void broadsheet_gpio_write_reg(struct broadsheetfb_par *par, u16 reg,
u16 data)
static void broadsheet_mmio_write_reg(struct broadsheetfb_par *par, u16 reg,
u16 data)
static void broadsheet_write_reg(struct broadsheetfb_par *par, u16 reg,
u16 data)
static void broadsheet_write_reg32(struct broadsheetfb_par *par, u16 reg,
u32 data)
static u16 broadsheet_read_reg(struct broadsheetfb_par *par, u16 reg)
static int is_broadsheet_pll_locked(struct broadsheetfb_par *par)
static int broadsheet_setup_plls(struct broadsheetfb_par *par)
static int broadsheet_setup_spi(struct broadsheetfb_par *par)
static int broadsheet_setup_spiflash(struct broadsheetfb_par *par,
u16 *orig_sfmcd)
static int broadsheet_spiflash_wait_for_bit(struct broadsheetfb_par *par,
u16 reg, int bitnum, int val,
int timeout)
static int broadsheet_spiflash_write_byte(struct broadsheetfb_par *par, u8 data)
static int broadsheet_spiflash_read_byte(struct broadsheetfb_par *par, u8 *data)
static int broadsheet_spiflash_wait_for_status(struct broadsheetfb_par *par,
int timeout)
static int broadsheet_spiflash_op_on_address(struct broadsheetfb_par *par,
u8 op, u32 addr)
static int broadsheet_verify_spiflash(struct broadsheetfb_par *par,
int *flash_type)
static int broadsheet_setup_for_wfm_write(struct broadsheetfb_par *par,
u16 *initial_sfmcd, int *flash_type)
static int broadsheet_spiflash_write_control(struct broadsheetfb_par *par,
int mode)
static int broadsheet_spiflash_erase_sector(struct broadsheetfb_par *par,
int addr)
static int broadsheet_spiflash_read_range(struct broadsheetfb_par *par,
int addr, int size, char *data)
#define BS_SPIFLASH_PAGE_SIZE 256
static int broadsheet_spiflash_write_page(struct broadsheetfb_par *par,
int addr, const char *data)
static int broadsheet_spiflash_write_sector(struct broadsheetfb_par *par,
int addr, const char *data, int sector_size)
static int broadsheet_spiflash_rewrite_sector(struct broadsheetfb_par *par,
int sector_size, int data_start_addr,
int data_len, const char *data)
static int broadsheet_write_spiflash(struct broadsheetfb_par *par, u32 wfm_addr,
const u8 *wfm, int bytecount, int flash_type)
static int broadsheet_store_waveform_to_spiflash(struct broadsheetfb_par *par,
const u8 *wfm, size_t wfm_size)
static ssize_t broadsheet_loadstore_waveform(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(loadstore_waveform, S_IWUSR, NULL,
broadsheet_loadstore_waveform);
static void __devinit broadsheet_init_display(struct broadsheetfb_par *par)
static void __devinit broadsheet_identify(struct broadsheetfb_par *par)
static void __devinit broadsheet_init(struct broadsheetfb_par *par)
static void broadsheetfb_dpy_update_pages(struct broadsheetfb_par *par,
u16 y1, u16 y2)
static void broadsheetfb_dpy_update(struct broadsheetfb_par *par)
static void broadsheetfb_dpy_deferred_io(struct fb_info *info,
struct list_head *pagelist)
static void broadsheetfb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void broadsheetfb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void broadsheetfb_imageblit(struct fb_info *info,
const struct fb_image *image)
static ssize_t broadsheetfb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static struct fb_ops broadsheetfb_ops = ;
static struct fb_deferred_io broadsheetfb_defio = ;
static int __devinit broadsheetfb_probe(struct platform_device *dev)
static int __devexit broadsheetfb_remove(struct platform_device *dev)
static struct platform_driver broadsheetfb_driver = ;
static int __init broadsheetfb_init(void)
static void __exit broadsheetfb_exit(void)
module_init(broadsheetfb_init);
module_exit(broadsheetfb_exit);
MODULE_DESCRIPTION("fbdev driver for Broadsheet controller");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
