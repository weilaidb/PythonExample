#define LASI_VER	0xC008
#define LASI_IO_CONF	0x7FFFE
#define LASI_IO_CONF2	0x7FFFF
static void lasi_choose_irq(struct parisc_device *dev, void *ctrl)
static void __init
lasi_init_irq(struct gsc_asic *this_lasi)
#define lasi_led_init(x)
static void __init lasi_led_init(unsigned long lasi_hpa)
static unsigned long lasi_power_off_hpa __read_mostly;
static void lasi_power_off(void)
static int __init lasi_init_chip(struct parisc_device *dev)
static struct parisc_device_id lasi_tbl[] = ;
struct parisc_driver lasi_driver = ;
