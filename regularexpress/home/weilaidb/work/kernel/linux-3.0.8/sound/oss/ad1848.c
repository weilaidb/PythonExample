#define DEB(x)
#define DEB1(x)
typedef struct
ad1848_info;
typedef struct ad1848_port_info
ad1848_port_info;
static struct address_info cfg;
static int nr_ad1848_devs;
static int deskpro_xl;
static int deskpro_m;
static int soundpro;
static volatile signed char irq2dev[17] = ;
static int timer_installed = -1;
static int loaded;
static int ad_format_mask[13 ] =
;
static ad1848_info adev_info[MAX_AUDIO_DEV];
#define io_Index_Addr(d)	((d)->base)
#define io_Indexed_Data(d)	((d)->base+1)
#define io_Status(d)		((d)->base+2)
#define io_Polled_IO(d)		((d)->base+3)
static struct  capabilities [10 ] = ;
static int isapnp	= 1;
static int isapnpjump;
static int reverse;
static int audio_activated;
static int isapnp;
static int      ad1848_open(int dev, int mode);
static void     ad1848_close(int dev);
static void     ad1848_output_block(int dev, unsigned long buf, int count, int intrflag);
static void     ad1848_start_input(int dev, unsigned long buf, int count, int intrflag);
static int      ad1848_prepare_for_output(int dev, int bsize, int bcount);
static int      ad1848_prepare_for_input(int dev, int bsize, int bcount);
static void     ad1848_halt(int dev);
static void     ad1848_halt_input(int dev);
static void     ad1848_halt_output(int dev);
static void     ad1848_trigger(int dev, int bits);
static irqreturn_t adintr(int irq, void *dev_id);
static int ad1848_tmr_install(int dev);
static void ad1848_tmr_reprogram(int dev);
static int ad_read(ad1848_info * devc, int reg)
static void ad_write(ad1848_info * devc, int reg, int data)
static void wait_for_calibration(ad1848_info * devc)
static void ad_mute(ad1848_info * devc)
static void ad_unmute(ad1848_info * devc)
static void ad_enter_MCE(ad1848_info * devc)
static void ad_leave_MCE(ad1848_info * devc)
static int ad1848_set_recmask(ad1848_info * devc, int mask)
static void change_bits(ad1848_info * devc, unsigned char *regval,
unsigned char *muteval, int dev, int chn, int newval)
static int ad1848_mixer_get(ad1848_info * devc, int dev)
static void ad1848_mixer_set_channel(ad1848_info *devc, int dev, int value, int channel)
static int ad1848_mixer_set(ad1848_info * devc, int dev, int value)
static void ad1848_mixer_reset(ad1848_info * devc)
static int ad1848_mixer_ioctl(int dev, unsigned int cmd, void __user *arg)
static int ad1848_set_speed(int dev, int arg)
static short ad1848_set_channels(int dev, short arg)
static unsigned int ad1848_set_bits(int dev, unsigned int arg)
static struct audio_driver ad1848_audio_driver =
;
static struct mixer_operations ad1848_mixer_operations =
;
static int ad1848_open(int dev, int mode)
static void ad1848_close(int dev)
static void ad1848_output_block(int dev, unsigned long buf, int count, int intrflag)
static void ad1848_start_input(int dev, unsigned long buf, int count, int intrflag)
static int ad1848_prepare_for_output(int dev, int bsize, int bcount)
static int ad1848_prepare_for_input(int dev, int bsize, int bcount)
static void ad1848_halt(int dev)
static void ad1848_halt_input(int dev)
static void ad1848_halt_output(int dev)
static void ad1848_trigger(int dev, int state)
static void ad1848_init_hw(ad1848_info * devc)
int ad1848_detect(struct resource *ports, int *ad_flags, int *osp)
int ad1848_init (char *name, struct resource *ports, int irq, int dma_playback,
int dma_capture, int share_dma, int *osp, struct module *owner)
int ad1848_control(int cmd, int arg)
void ad1848_unload(int io_base, int irq, int dma_playback, int dma_capture, int share_dma)
static irqreturn_t adintr(int irq, void *dev_id)
static int init_deskpro_m(struct address_info *hw_config)
static int init_deskpro(struct address_info *hw_config)
int probe_ms_sound(struct address_info *hw_config, struct resource *ports)
void attach_ms_sound(struct address_info *hw_config, struct resource *ports, struct module *owner)
void unload_ms_sound(struct address_info *hw_config)
static unsigned int current_interval;
static unsigned int ad1848_tmr_start(int dev, unsigned int usecs)
static void ad1848_tmr_reprogram(int dev)
static void ad1848_tmr_disable(int dev)
static void ad1848_tmr_restart(int dev)
static struct sound_lowlev_timer ad1848_tmr =
;
static int ad1848_tmr_install(int dev)
EXPORT_SYMBOL(ad1848_detect);
EXPORT_SYMBOL(ad1848_init);
EXPORT_SYMBOL(ad1848_unload);
EXPORT_SYMBOL(ad1848_control);
EXPORT_SYMBOL(probe_ms_sound);
EXPORT_SYMBOL(attach_ms_sound);
EXPORT_SYMBOL(unload_ms_sound);
static int __initdata io = -1;
static int __initdata irq = -1;
static int __initdata dma = -1;
static int __initdata dma2 = -1;
static int __initdata type = 0;
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(dma, int, 0);
module_param(dma2, int, 0);
module_param(type, int, 0);
module_param(deskpro_xl, bool, 0);
module_param(deskpro_m, bool, 0);
module_param(soundpro, bool, 0);
module_param(isapnp, int, 0);
module_param(isapnpjump, int, 0);
module_param(reverse, bool, 0);
MODULE_PARM_DESC(isapnp,	"When set to 0, Plug & Play support will be disabled");
MODULE_PARM_DESC(isapnpjump,	"Jumps to a specific slot in the driver's PnP table. Use the source, Luke.");
MODULE_PARM_DESC(reverse,	"When set to 1, will reverse ISAPnP search order");
static struct pnp_dev	*ad1848_dev  = NULL;
static struct  ad1848_isapnp_list[] __initdata = ;
static struct isapnp_device_id id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
static struct pnp_dev *activate_dev(char *devname, char *resname, struct pnp_dev *dev)
static struct pnp_dev __init *ad1848_init_generic(struct pnp_card *bus,
struct address_info *hw_config, int slot)
static int __init ad1848_isapnp_init(struct address_info *hw_config, struct pnp_card *bus, int slot)
static int __init ad1848_isapnp_probe(struct address_info *hw_config)
static int __init init_ad1848(void)
static void __exit cleanup_ad1848(void)
module_init(init_ad1848);
module_exit(cleanup_ad1848);
static int __init setup_ad1848(char *str)
__setup("ad1848=", setup_ad1848);
MODULE_LICENSE("GPL");
