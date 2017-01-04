static struct pnx4008_fb_addr  fb_addr[] = ;
static struct dum_data  dum_data;
static u32 nof_pixels_dx(struct dum_ch_setup *ch_setup)
static u32 nof_pixels_dy(struct dum_ch_setup *ch_setup)
static u32 nof_pixels_dxy(struct dum_ch_setup *ch_setup)
static u32 nof_bytes(struct dum_ch_setup *ch_setup)
static u32 build_command(int disp_no, u32 reg, u32 val)
static u32 build_double_index(int disp_no, u32 val)
static void build_disp_window(struct dum_ch_setup * ch_setup, struct disp_window * dw)
static int put_channel(struct dumchannel chan)
static void clear_channel(int channr)
static int put_cmd_string(struct cmdstring cmds)
static u32 dum_ch_setup(int ch_no, struct dum_ch_setup * ch_setup)
static u32 display_open(int ch_no, int auto_update, u32 * dirty_buffer,
u32 * frame_buffer, u32 xpos, u32 ypos, u32 w, u32 h)
static void lcd_reset(void)
static int dum_init(struct platform_device *pdev)
static void dum_chan_init(void)
static void lcd_init(void)
int pnx4008_get_fb_addresses(int fb_type, void **virt_addr,
dma_addr_t *phys_addr, int *fb_length)
EXPORT_SYMBOL(pnx4008_get_fb_addresses);
int pnx4008_alloc_dum_channel(int dev_id)
EXPORT_SYMBOL(pnx4008_alloc_dum_channel);
int pnx4008_free_dum_channel(int channr, int dev_id)
EXPORT_SYMBOL(pnx4008_free_dum_channel);
int pnx4008_put_dum_channel_uf(struct dumchannel_uf chan_uf, int dev_id)
EXPORT_SYMBOL(pnx4008_put_dum_channel_uf);
int pnx4008_set_dum_channel_sync(int channr, int val, int dev_id)
EXPORT_SYMBOL(pnx4008_set_dum_channel_sync);
int pnx4008_set_dum_channel_dirty_detect(int channr, int val, int dev_id)
EXPORT_SYMBOL(pnx4008_set_dum_channel_dirty_detect);
int pnx4008_sdum_mmap(struct fb_info *info, struct vm_area_struct *vma,
struct device *dev)
EXPORT_SYMBOL(pnx4008_sdum_mmap);
int pnx4008_set_dum_exit_notification(int dev_id)
EXPORT_SYMBOL(pnx4008_set_dum_exit_notification);
static int sdum_suspend(struct platform_device *pdev, pm_message_t state)
static int sdum_resume(struct platform_device *pdev)
static int __devinit sdum_probe(struct platform_device *pdev)
static int sdum_remove(struct platform_device *pdev)
static struct platform_driver sdum_driver = ;
int __init sdum_init(void)
static void __exit sdum_exit(void)
;
module_init(sdum_init);
module_exit(sdum_exit);
MODULE_LICENSE("GPL");
