static unsigned int core_debug;
module_param(core_debug, int, 0644);
MODULE_PARM_DESC(core_debug, "enable debug messages [core]");
#define cx231xx_coredbg(fmt, arg...) do  while (0)
static unsigned int reg_debug;
module_param(reg_debug, int, 0644);
MODULE_PARM_DESC(reg_debug, "enable debug messages [URB reg]");
static int alt = CX231XX_PINOUT;
module_param(alt, int, 0644);
MODULE_PARM_DESC(alt, "alternate setting to use for video endpoint");
#define cx231xx_isocdbg(fmt, arg...) do  while (0)
LIST_HEAD(cx231xx_devlist);
static DEFINE_MUTEX(cx231xx_devlist_mutex);
void cx231xx_remove_from_devlist(struct cx231xx *dev)
;
void cx231xx_add_into_devlist(struct cx231xx *dev)
;
static LIST_HEAD(cx231xx_extension_devlist);
int cx231xx_register_extension(struct cx231xx_ops *ops)
EXPORT_SYMBOL(cx231xx_register_extension);
void cx231xx_unregister_extension(struct cx231xx_ops *ops)
EXPORT_SYMBOL(cx231xx_unregister_extension);
void cx231xx_init_extension(struct cx231xx *dev)
void cx231xx_close_extension(struct cx231xx *dev)
int cx231xx_send_usb_command(struct cx231xx_i2c *i2c_bus,
struct cx231xx_i2c_xfer_data *req_data)
EXPORT_SYMBOL_GPL(cx231xx_send_usb_command);
static int __usb_control_msg(struct cx231xx *dev, unsigned int pipe,
__u8 request, __u8 requesttype, __u16 value, __u16 index,
void *data, __u16 size, int timeout)
int cx231xx_read_ctrl_reg(struct cx231xx *dev, u8 req, u16 reg,
char *buf, int len)
int cx231xx_send_vendor_cmd(struct cx231xx *dev,
struct VENDOR_REQUEST_IN *ven_req)
int cx231xx_write_ctrl_reg(struct cx231xx *dev, u8 req, u16 reg, char *buf,
int len)
int cx231xx_set_video_alternate(struct cx231xx *dev)
int cx231xx_set_alt_setting(struct cx231xx *dev, u8 index, u8 alt)
EXPORT_SYMBOL_GPL(cx231xx_set_alt_setting);
int cx231xx_gpio_set(struct cx231xx *dev, struct cx231xx_reg_seq *gpio)
int cx231xx_demod_reset(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_demod_reset);
int is_fw_load(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(is_fw_load);
int cx231xx_set_mode(struct cx231xx *dev, enum cx231xx_mode set_mode)
EXPORT_SYMBOL_GPL(cx231xx_set_mode);
int cx231xx_ep5_bulkout(struct cx231xx *dev, u8 *firmware, u16 size)
static void cx231xx_isoc_irq_callback(struct urb *urb)
static void cx231xx_bulk_irq_callback(struct urb *urb)
void cx231xx_uninit_isoc(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_uninit_isoc);
void cx231xx_uninit_bulk(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_uninit_bulk);
int cx231xx_init_isoc(struct cx231xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*isoc_copy) (struct cx231xx *dev, struct urb *urb))
EXPORT_SYMBOL_GPL(cx231xx_init_isoc);
int cx231xx_init_bulk(struct cx231xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*bulk_copy) (struct cx231xx *dev, struct urb *urb))
EXPORT_SYMBOL_GPL(cx231xx_init_bulk);
void cx231xx_stop_TS1(struct cx231xx *dev)
void cx231xx_start_TS1(struct cx231xx *dev)
int cx231xx_dev_init(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_dev_init);
void cx231xx_dev_uninit(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_dev_uninit);
int cx231xx_send_gpio_cmd(struct cx231xx *dev, u32 gpio_bit, u8 *gpio_val,
u8 len, u8 request, u8 direction)
EXPORT_SYMBOL_GPL(cx231xx_send_gpio_cmd);
int cx231xx_mode_register(struct cx231xx *dev, u16 address, u32 mode)
int cx231xx_read_i2c_master(struct cx231xx *dev, u8 dev_addr, u16 saddr,
u8 saddr_len, u32 *data, u8 data_len, int master)
int cx231xx_write_i2c_master(struct cx231xx *dev, u8 dev_addr, u16 saddr,
u8 saddr_len, u32 data, u8 data_len, int master)
int cx231xx_read_i2c_data(struct cx231xx *dev, u8 dev_addr, u16 saddr,
u8 saddr_len, u32 *data, u8 data_len)
int cx231xx_write_i2c_data(struct cx231xx *dev, u8 dev_addr, u16 saddr,
u8 saddr_len, u32 data, u8 data_len)
int cx231xx_reg_mask_write(struct cx231xx *dev, u8 dev_addr, u8 size,
u16 register_address, u8 bit_start, u8 bit_end,
u32 value)
int cx231xx_read_modify_write_i2c_dword(struct cx231xx *dev, u8 dev_addr,
u16 saddr, u32 mask, u32 value)
u32 cx231xx_set_field(u32 field_mask, u32 data)
