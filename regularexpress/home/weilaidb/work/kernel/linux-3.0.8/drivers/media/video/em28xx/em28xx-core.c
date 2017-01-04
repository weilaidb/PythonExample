static unsigned int core_debug;
module_param(core_debug, int, 0644);
MODULE_PARM_DESC(core_debug, "enable debug messages [core]");
#define em28xx_coredbg(fmt, arg...) do  while (0)
static unsigned int reg_debug;
module_param(reg_debug, int, 0644);
MODULE_PARM_DESC(reg_debug, "enable debug messages [URB reg]");
#define em28xx_regdbg(fmt, arg...) do  while (0)
static int alt;
module_param(alt, int, 0644);
MODULE_PARM_DESC(alt, "alternate setting to use for video endpoint");
static unsigned int disable_vbi;
module_param(disable_vbi, int, 0644);
MODULE_PARM_DESC(disable_vbi, "disable vbi support");
#define em28xx_isocdbg(fmt, arg...) do  while (0)
int em28xx_read_reg_req_len(struct em28xx *dev, u8 req, u16 reg,
char *buf, int len)
int em28xx_read_reg_req(struct em28xx *dev, u8 req, u16 reg)
int em28xx_read_reg(struct em28xx *dev, u16 reg)
int em28xx_write_regs_req(struct em28xx *dev, u8 req, u16 reg, char *buf,
int len)
int em28xx_write_regs(struct em28xx *dev, u16 reg, char *buf, int len)
int em28xx_write_reg(struct em28xx *dev, u16 reg, u8 val)
int em28xx_write_reg_bits(struct em28xx *dev, u16 reg, u8 val,
u8 bitmask)
static int em28xx_is_ac97_ready(struct em28xx *dev)
int em28xx_read_ac97(struct em28xx *dev, u8 reg)
int em28xx_write_ac97(struct em28xx *dev, u8 reg, u16 val)
struct em28xx_vol_table ;
static struct em28xx_vol_table inputs[] = ;
static int set_ac97_input(struct em28xx *dev)
static int em28xx_set_audio_source(struct em28xx *dev)
static const struct em28xx_vol_table outputs[] = ;
int em28xx_audio_analog_set(struct em28xx *dev)
EXPORT_SYMBOL_GPL(em28xx_audio_analog_set);
int em28xx_audio_setup(struct em28xx *dev)
EXPORT_SYMBOL_GPL(em28xx_audio_setup);
int em28xx_colorlevels_set_default(struct em28xx *dev)
int em28xx_capture_start(struct em28xx *dev, int start)
int em28xx_vbi_supported(struct em28xx *dev)
int em28xx_set_outfmt(struct em28xx *dev)
static int em28xx_accumulator_set(struct em28xx *dev, u8 xmin, u8 xmax,
u8 ymin, u8 ymax)
static int em28xx_capture_area_set(struct em28xx *dev, u8 hstart, u8 vstart,
u16 width, u16 height)
static int em28xx_scaler_set(struct em28xx *dev, u16 h, u16 v)
int em28xx_resolution_set(struct em28xx *dev)
int em28xx_set_alternate(struct em28xx *dev)
int em28xx_gpio_set(struct em28xx *dev, struct em28xx_reg_seq *gpio)
int em28xx_set_mode(struct em28xx *dev, enum em28xx_mode set_mode)
EXPORT_SYMBOL_GPL(em28xx_set_mode);
static void em28xx_irq_callback(struct urb *urb)
void em28xx_uninit_isoc(struct em28xx *dev)
EXPORT_SYMBOL_GPL(em28xx_uninit_isoc);
int em28xx_init_isoc(struct em28xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*isoc_copy) (struct em28xx *dev, struct urb *urb))
EXPORT_SYMBOL_GPL(em28xx_init_isoc);
int em28xx_isoc_dvb_max_packetsize(struct em28xx *dev)
EXPORT_SYMBOL_GPL(em28xx_isoc_dvb_max_packetsize);
void em28xx_wake_i2c(struct em28xx *dev)
static LIST_HEAD(em28xx_devlist);
static DEFINE_MUTEX(em28xx_devlist_mutex);
void em28xx_remove_from_devlist(struct em28xx *dev)
;
void em28xx_add_into_devlist(struct em28xx *dev)
;
static LIST_HEAD(em28xx_extension_devlist);
int em28xx_register_extension(struct em28xx_ops *ops)
EXPORT_SYMBOL(em28xx_register_extension);
void em28xx_unregister_extension(struct em28xx_ops *ops)
EXPORT_SYMBOL(em28xx_unregister_extension);
void em28xx_init_extension(struct em28xx *dev)
void em28xx_close_extension(struct em28xx *dev)
