static void rbtx4939_machine_restart(char *command)
static void __init rbtx4939_time_init(void)
#if defined(__BIG_ENDIAN) && \
(defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE))
#define HAVE_RBTX4939_IOSWAB
#define IS_CE1_ADDR(addr) \
((((unsigned long)(addr) - IO_BASE) & 0xfff00000) == TXX9_CE(1))
static u16 rbtx4939_ioswabw(volatile u16 *a, u16 x)
static u16 rbtx4939_mem_ioswabw(volatile u16 *a, u16 x)
static void __init rbtx4939_pci_setup(void)
static unsigned long long default_ebccr[] __initdata = ;
static void __init rbtx4939_ebusc_setup(void)
static void __init rbtx4939_update_ioc_pen(void)
#define RBTX4939_MAX_7SEGLEDS	8
#if defined(CONFIG_LEDS_CLASS) || defined(CONFIG_LEDS_CLASS_MODULE)
static u8 led_val[RBTX4939_MAX_7SEGLEDS];
struct rbtx4939_led_data ;
static void rbtx4939_led_brightness_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int __init rbtx4939_led_probe(struct platform_device *pdev)
static struct platform_driver rbtx4939_led_driver = ;
static void __init rbtx4939_led_setup(void)
static inline void rbtx4939_led_setup(void)
static void __rbtx4939_7segled_putc(unsigned int pos, unsigned char val)
static void rbtx4939_7segled_putc(unsigned int pos, unsigned char val)
#if defined(CONFIG_MTD_RBTX4939) || defined(CONFIG_MTD_RBTX4939_MODULE)
static unsigned long rbtx4939_flash_fixup_ofs(unsigned long ofs)
static map_word rbtx4939_flash_read16(struct map_info *map, unsigned long ofs)
static void rbtx4939_flash_write16(struct map_info *map, const map_word datum,
unsigned long ofs)
static void rbtx4939_flash_copy_from(struct map_info *map, void *to,
unsigned long from, ssize_t len)
static void rbtx4939_flash_map_init(struct map_info *map)
static void __init rbtx4939_mtd_init(void)
static void __init rbtx4939_mtd_init(void)
static void __init rbtx4939_arch_init(void)
static void __init rbtx4939_device_init(void)
static void __init rbtx4939_setup(void)
struct txx9_board_vec rbtx4939_vec __initdata = ;
