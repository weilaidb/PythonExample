static int debug = CONFIG_MTD_DEBUG_VERBOSE;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Set Debug Level 0=quiet, 5=noisy");
#undef DEBUG
#define DEBUG(n, format, arg...) \
if (n <= debug)
#undef DEBUG
#define DEBUG(n, arg...)
static const int debug = 0;
#define info(format, arg...) printk(KERN_INFO "pcmciamtd: " format "\n" , ## arg)
#define DRIVER_DESC	"PCMCIA Flash memory card driver"
#define MAX_PCMCIA_ADDR	0x4000000
struct pcmciamtd_dev ;
static int bankwidth = 2;
static int mem_speed;
static int force_size;
static int vpp;
static int setvpp;
static int mem_type;
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Simon Evans <spse@secret.org.uk>");
MODULE_DESCRIPTION(DRIVER_DESC);
module_param(bankwidth, int, 0);
MODULE_PARM_DESC(bankwidth, "Set bankwidth (1=8 bit, 2=16 bit, default=2)");
module_param(mem_speed, int, 0);
MODULE_PARM_DESC(mem_speed, "Set memory access speed in ns");
module_param(force_size, int, 0);
MODULE_PARM_DESC(force_size, "Force size of card in MiB (1-64)");
module_param(setvpp, int, 0);
MODULE_PARM_DESC(setvpp, "Set Vpp (0=Never, 1=On writes, 2=Always on, default=0)");
module_param(vpp, int, 0);
MODULE_PARM_DESC(vpp, "Vpp value in 1/10ths eg 33=3.3V 120=12V (Dangerous)");
module_param(mem_type, int, 0);
MODULE_PARM_DESC(mem_type, "Set Memory type (0=Flash, 1=RAM, 2=ROM, default=0)");
static caddr_t remap_window(struct map_info *map, unsigned long to)
static map_word pcmcia_read8_remap(struct map_info *map, unsigned long ofs)
static map_word pcmcia_read16_remap(struct map_info *map, unsigned long ofs)
static void pcmcia_copy_from_remap(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void pcmcia_write8_remap(struct map_info *map, map_word d, unsigned long adr)
static void pcmcia_write16_remap(struct map_info *map, map_word d, unsigned long adr)
static void pcmcia_copy_to_remap(struct map_info *map, unsigned long to, const void *from, ssize_t len)
#define DEV_REMOVED(x)  (!(pcmcia_dev_present(((struct pcmciamtd_dev *)map->map_priv_1)->p_dev)))
static map_word pcmcia_read8(struct map_info *map, unsigned long ofs)
static map_word pcmcia_read16(struct map_info *map, unsigned long ofs)
static void pcmcia_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void pcmcia_write8(struct map_info *map, map_word d, unsigned long adr)
static void pcmcia_write16(struct map_info *map, map_word d, unsigned long adr)
static void pcmcia_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static void pcmciamtd_set_vpp(struct map_info *map, int on)
static void pcmciamtd_release(struct pcmcia_device *link)
static int pcmciamtd_cistpl_format(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv_data)
static int pcmciamtd_cistpl_jedec(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv_data)
static int pcmciamtd_cistpl_device(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv_data)
static int pcmciamtd_cistpl_geo(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv_data)
static void card_settings(struct pcmciamtd_dev *dev, struct pcmcia_device *p_dev, int *new_name)
static int pcmciamtd_config(struct pcmcia_device *link)
static int pcmciamtd_suspend(struct pcmcia_device *dev)
static int pcmciamtd_resume(struct pcmcia_device *dev)
static void pcmciamtd_detach(struct pcmcia_device *link)
static int pcmciamtd_probe(struct pcmcia_device *link)
static const struct pcmcia_device_id pcmciamtd_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, pcmciamtd_ids);
static struct pcmcia_driver pcmciamtd_driver = ;
static int __init init_pcmciamtd(void)
static void __exit exit_pcmciamtd(void)
module_init(init_pcmciamtd);
module_exit(exit_pcmciamtd);
