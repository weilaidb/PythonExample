#define CPM_MAP_SIZE    (0x4000)
cpm8xx_t __iomem *cpmp;
immap_t __iomem *mpc8xx_immr;
static cpic8xx_t __iomem *cpic_reg;
static struct irq_host *cpm_pic_host;
static void cpm_mask_irq(struct irq_data *d)
static void cpm_unmask_irq(struct irq_data *d)
static void cpm_end_irq(struct irq_data *d)
static struct irq_chip cpm_pic = ;
int cpm_get_irq(void)
static int cpm_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static irqreturn_t cpm_error_interrupt(int irq, void *dev)
static struct irqaction cpm_error_irqaction = ;
static struct irq_host_ops cpm_pic_host_ops = ;
unsigned int cpm_pic_init(void)
void __init cpm_reset(void)
static DEFINE_SPINLOCK(cmd_lock);
#define MAX_CR_CMD_LOOPS        10000
int cpm_command(u32 command, u8 opcode)
EXPORT_SYMBOL(cpm_command);
#define BRG_INT_CLK		(get_brgfreq())
#define BRG_UART_CLK		(BRG_INT_CLK/16)
#define BRG_UART_CLK_DIV16	(BRG_UART_CLK/16)
void
cpm_setbrg(uint brg, uint rate)
struct cpm_ioport16 ;
struct cpm_ioport32b ;
struct cpm_ioport32e ;
static void cpm1_set_pin32(int port, int pin, int flags)
static void cpm1_set_pin16(int port, int pin, int flags)
void cpm1_set_pin(enum cpm_port port, int pin, int flags)
int cpm1_clk_setup(enum cpm_clk_target target, int clock, int mode)
struct cpm1_gpio16_chip ;
static inline struct cpm1_gpio16_chip *
to_cpm1_gpio16_chip(struct of_mm_gpio_chip *mm_gc)
static void cpm1_gpio16_save_regs(struct of_mm_gpio_chip *mm_gc)
static int cpm1_gpio16_get(struct gpio_chip *gc, unsigned int gpio)
static void __cpm1_gpio16_set(struct of_mm_gpio_chip *mm_gc, u16 pin_mask,
int value)
static void cpm1_gpio16_set(struct gpio_chip *gc, unsigned int gpio, int value)
static int cpm1_gpio16_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int cpm1_gpio16_dir_in(struct gpio_chip *gc, unsigned int gpio)
int cpm1_gpiochip_add16(struct device_node *np)
struct cpm1_gpio32_chip ;
static inline struct cpm1_gpio32_chip *
to_cpm1_gpio32_chip(struct of_mm_gpio_chip *mm_gc)
static void cpm1_gpio32_save_regs(struct of_mm_gpio_chip *mm_gc)
static int cpm1_gpio32_get(struct gpio_chip *gc, unsigned int gpio)
static void __cpm1_gpio32_set(struct of_mm_gpio_chip *mm_gc, u32 pin_mask,
int value)
static void cpm1_gpio32_set(struct gpio_chip *gc, unsigned int gpio, int value)
static int cpm1_gpio32_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int cpm1_gpio32_dir_in(struct gpio_chip *gc, unsigned int gpio)
int cpm1_gpiochip_add32(struct device_node *np)
static int cpm_init_par_io(void)
arch_initcall(cpm_init_par_io);
