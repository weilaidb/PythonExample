#if defined(CONFIG_CPM2) || defined(CONFIG_8xx_GPIO)
static u32 __iomem *cpm_udbg_txdesc =
(u32 __iomem __force *)CONFIG_PPC_EARLY_DEBUG_CPM_ADDR;
static void udbg_putc_cpm(char c)
void __init udbg_init_cpm(void)
static spinlock_t cpm_muram_lock;
static rh_block_t cpm_boot_muram_rh_block[16];
static rh_info_t cpm_muram_info;
static u8 __iomem *muram_vbase;
static phys_addr_t muram_pbase;
#define OF_MAX_ADDR_CELLS	4
int cpm_muram_init(void)
unsigned long cpm_muram_alloc(unsigned long size, unsigned long align)
EXPORT_SYMBOL(cpm_muram_alloc);
int cpm_muram_free(unsigned long offset)
EXPORT_SYMBOL(cpm_muram_free);
unsigned long cpm_muram_alloc_fixed(unsigned long offset, unsigned long size)
EXPORT_SYMBOL(cpm_muram_alloc_fixed);
void __iomem *cpm_muram_addr(unsigned long offset)
EXPORT_SYMBOL(cpm_muram_addr);
unsigned long cpm_muram_offset(void __iomem *addr)
EXPORT_SYMBOL(cpm_muram_offset);
dma_addr_t cpm_muram_dma(void __iomem *addr)
EXPORT_SYMBOL(cpm_muram_dma);
#if defined(CONFIG_CPM2) || defined(CONFIG_8xx_GPIO)
struct cpm2_ioports ;
struct cpm2_gpio32_chip ;
static inline struct cpm2_gpio32_chip *
to_cpm2_gpio32_chip(struct of_mm_gpio_chip *mm_gc)
static void cpm2_gpio32_save_regs(struct of_mm_gpio_chip *mm_gc)
static int cpm2_gpio32_get(struct gpio_chip *gc, unsigned int gpio)
static void __cpm2_gpio32_set(struct of_mm_gpio_chip *mm_gc, u32 pin_mask,
int value)
static void cpm2_gpio32_set(struct gpio_chip *gc, unsigned int gpio, int value)
static int cpm2_gpio32_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int cpm2_gpio32_dir_in(struct gpio_chip *gc, unsigned int gpio)
int cpm2_gpiochip_add32(struct device_node *np)
