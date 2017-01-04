#define pr_fmt(fmt) "%s: " fmt, __func__
enum ;
enum ;
enum ;
enum ;
enum ;
#define GPIO_INTR_CFG_SU(gpio)    (MSM_TLMM_BASE + 0x0400 + (0x04 * (gpio)))
#define GPIO_CONFIG(gpio)         (MSM_TLMM_BASE + 0x1000 + (0x10 * (gpio)))
#define GPIO_IN_OUT(gpio)         (MSM_TLMM_BASE + 0x1004 + (0x10 * (gpio)))
#define GPIO_INTR_CFG(gpio)       (MSM_TLMM_BASE + 0x1008 + (0x10 * (gpio)))
#define GPIO_INTR_STATUS(gpio)    (MSM_TLMM_BASE + 0x100c + (0x10 * (gpio)))
struct msm_gpio_dev ;
static DEFINE_SPINLOCK(tlmm_lock);
static inline struct msm_gpio_dev *to_msm_gpio_dev(struct gpio_chip *chip)
static inline void set_gpio_bits(unsigned n, void __iomem *reg)
static inline void clear_gpio_bits(unsigned n, void __iomem *reg)
static int msm_gpio_get(struct gpio_chip *chip, unsigned offset)
static void msm_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int msm_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int msm_gpio_direction_output(struct gpio_chip *chip,
unsigned offset,
int val)
static int msm_gpio_request(struct gpio_chip *chip, unsigned offset)
static void msm_gpio_free(struct gpio_chip *chip, unsigned offset)
static int msm_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static inline int msm_irq_to_gpio(struct gpio_chip *chip, unsigned irq)
static struct msm_gpio_dev msm_gpio = ;
static void msm_gpio_update_dual_edge_pos(unsigned gpio)
static void msm_gpio_irq_ack(struct irq_data *d)
static void msm_gpio_irq_mask(struct irq_data *d)
static void msm_gpio_irq_unmask(struct irq_data *d)
static int msm_gpio_irq_set_type(struct irq_data *d, unsigned int flow_type)
static void msm_summary_irq_handler(unsigned int irq, struct irq_desc *desc)
static int msm_gpio_irq_set_wake(struct irq_data *d, unsigned int on)
static struct irq_chip msm_gpio_irq_chip = ;
static int __devinit msm_gpio_probe(struct platform_device *dev)
static int __devexit msm_gpio_remove(struct platform_device *dev)
static struct platform_driver msm_gpio_driver = ;
static struct platform_device msm_device_gpio = ;
static int __init msm_gpio_init(void)
static void __exit msm_gpio_exit(void)
postcore_initcall(msm_gpio_init);
module_exit(msm_gpio_exit);
MODULE_AUTHOR("Gregory Bean <gbean@codeaurora.org>");
MODULE_DESCRIPTION("Driver for Qualcomm MSM TLMMv2 SoC GPIOs");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:msmgpio");
