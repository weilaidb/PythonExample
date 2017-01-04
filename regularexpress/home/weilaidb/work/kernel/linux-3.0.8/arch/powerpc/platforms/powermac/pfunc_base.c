#undef DEBUG
#define DBG(fmt...)	printk(fmt)
#define DBG(fmt...)
static irqreturn_t macio_gpio_irq(int irq, void *data)
static int macio_do_gpio_irq_enable(struct pmf_function *func)
static int macio_do_gpio_irq_disable(struct pmf_function *func)
static int macio_do_gpio_write(PMF_STD_ARGS, u8 value, u8 mask)
static int macio_do_gpio_read(PMF_STD_ARGS, u8 mask, int rshift, u8 xor)
static int macio_do_delay(PMF_STD_ARGS, u32 duration)
static struct pmf_handlers macio_gpio_handlers = ;
static void macio_gpio_init_one(struct macio_chip *macio)
static int macio_do_write_reg32(PMF_STD_ARGS, u32 offset, u32 value, u32 mask)
static int macio_do_read_reg32(PMF_STD_ARGS, u32 offset)
static int macio_do_write_reg8(PMF_STD_ARGS, u32 offset, u8 value, u8 mask)
static int macio_do_read_reg8(PMF_STD_ARGS, u32 offset)
static int macio_do_read_reg32_msrx(PMF_STD_ARGS, u32 offset, u32 mask,
u32 shift, u32 xor)
static int macio_do_read_reg8_msrx(PMF_STD_ARGS, u32 offset, u32 mask,
u32 shift, u32 xor)
static int macio_do_write_reg32_slm(PMF_STD_ARGS, u32 offset, u32 shift,
u32 mask)
static int macio_do_write_reg8_slm(PMF_STD_ARGS, u32 offset, u32 shift,
u32 mask)
static struct pmf_handlers macio_mmio_handlers = ;
static void macio_mmio_init_one(struct macio_chip *macio)
static struct device_node *unin_hwclock;
static int unin_do_write_reg32(PMF_STD_ARGS, u32 offset, u32 value, u32 mask)
static struct pmf_handlers unin_mmio_handlers = ;
static void uninorth_install_pfunc(void)
int __init pmac_pfunc_base_install(void)
machine_arch_initcall(powermac, pmac_pfunc_base_install);
void pmac_pfunc_base_suspend(void)
void pmac_pfunc_base_resume(void)
