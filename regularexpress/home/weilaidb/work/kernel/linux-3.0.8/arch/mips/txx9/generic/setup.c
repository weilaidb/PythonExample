struct resource txx9_ce_res[8];
static char txx9_ce_res_name[8][4];
unsigned int txx9_pcode;
char txx9_pcode_str[8];
static struct resource txx9_reg_res = ;
void __init
txx9_reg_res_init(unsigned int pcode, unsigned long base, unsigned long size)
unsigned int txx9_master_clock;
unsigned int txx9_cpu_clock;
unsigned int txx9_gbus_clock;
int txx9_ccfg_toeon __initdata;
int txx9_ccfg_toeon __initdata = 1;
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
int gpio_to_irq(unsigned gpio)
EXPORT_SYMBOL(gpio_to_irq);
int irq_to_gpio(unsigned irq)
EXPORT_SYMBOL(irq_to_gpio);
#define BOARD_VEC(board)	extern struct txx9_board_vec board;
#undef BOARD_VEC
struct txx9_board_vec *txx9_board_vec __initdata;
static char txx9_system_type[32];
static struct txx9_board_vec *board_vecs[] __initdata = ;
static struct txx9_board_vec *__init find_board_byname(const char *name)
static void __init prom_init_cmdline(void)
static int txx9_ic_disable __initdata;
static int txx9_dc_disable __initdata;
#if defined(CONFIG_CPU_TX49XX)
static void __init early_flush_dcache(void)
static void __init txx9_cache_fixup(void)
#elif defined(CONFIG_CPU_TX39XX)
static void __init early_flush_dcache(void)
static void __init txx9_cache_fixup(void)
static inline void txx9_cache_fixup(void)
static void __init preprocess_cmdline(void)
static void __init select_board(void)
void __init prom_init(void)
void __init prom_free_prom_memory(void)
const char *get_system_type(void)
const char *__init prom_getenv(const char *name)
static void __noreturn txx9_machine_halt(void)
void __init txx9_wdt_init(unsigned long base)
void txx9_wdt_now(unsigned long base)
void __init txx9_spi_init(int busid, unsigned long base, int irq)
void __init txx9_ethaddr_init(unsigned int id, unsigned char *ethaddr)
void __init txx9_sio_init(unsigned long baseaddr, int irq,
unsigned int line, unsigned int sclk, int nocts)
static void __init null_prom_putchar(char c)
void (*txx9_prom_putchar)(char c) __initdata = null_prom_putchar;
void __init prom_putchar(char c)
static void __iomem *early_txx9_sio_port;
static void __init early_txx9_sio_putchar(char c)
void __init txx9_sio_putchar_init(unsigned long baseaddr)
void __init plat_mem_setup(void)
void __init arch_init_irq(void)
void __init plat_time_init(void)
static int __init _txx9_arch_init(void)
arch_initcall(_txx9_arch_init);
static int __init _txx9_device_init(void)
device_initcall(_txx9_device_init);
int (*txx9_irq_dispatch)(int pending);
asmlinkage void plat_irq_dispatch(void)
static unsigned long __swizzle_addr_none(unsigned long port)
unsigned long (*__swizzle_addr_b)(unsigned long port) = __swizzle_addr_none;
EXPORT_SYMBOL(__swizzle_addr_b);
static u16 ioswabw_default(volatile u16 *a, u16 x)
static u16 __mem_ioswabw_default(volatile u16 *a, u16 x)
u16 (*ioswabw)(volatile u16 *a, u16 x) = ioswabw_default;
EXPORT_SYMBOL(ioswabw);
u16 (*__mem_ioswabw)(volatile u16 *a, u16 x) = __mem_ioswabw_default;
EXPORT_SYMBOL(__mem_ioswabw);
void __init txx9_physmap_flash_init(int no, unsigned long addr,
unsigned long size,
const struct physmap_flash_data *pdata)
void __init txx9_ndfmc_init(unsigned long baseaddr,
const struct txx9ndfmc_platform_data *pdata)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static DEFINE_SPINLOCK(txx9_iocled_lock);
#define TXX9_IOCLED_MAXLEDS 8
struct txx9_iocled_data ;
static int txx9_iocled_get(struct gpio_chip *chip, unsigned int offset)
static void txx9_iocled_set(struct gpio_chip *chip, unsigned int offset,
int value)
static int txx9_iocled_dir_in(struct gpio_chip *chip, unsigned int offset)
static int txx9_iocled_dir_out(struct gpio_chip *chip, unsigned int offset,
int value)
void __init txx9_iocled_init(unsigned long baseaddr,
int basenum, unsigned int num, int lowactive,
const char *color, char **deftriggers)
void __init txx9_iocled_init(unsigned long baseaddr,
int basenum, unsigned int num, int lowactive,
const char *color, char **deftriggers)
void __init txx9_dmac_init(int id, unsigned long baseaddr, int irq,
const struct txx9dmac_platform_data *pdata)
void __init txx9_aclc_init(unsigned long baseaddr, int irq,
unsigned int dmac_id,
unsigned int dma_chan_out,
unsigned int dma_chan_in)
static struct sysdev_class txx9_sramc_sysdev_class;
struct txx9_sramc_sysdev ;
static ssize_t txx9_sram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static ssize_t txx9_sram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
void __init txx9_sramc_init(struct resource *r)
