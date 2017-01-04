#define irq2port(x) (M32R_ICU_CR1_PORTL + ((x - 1) * sizeof(unsigned long)))
icu_data_t icu_data[OPSPUT_NUM_CPU_IRQ];
static void disable_opsput_irq(unsigned int irq)
static void enable_opsput_irq(unsigned int irq)
static void mask_opsput(struct irq_data *data)
static void unmask_opsput(struct irq_data *data)
static void shutdown_opsput(struct irq_data *data)
static struct irq_chip opsput_irq_type =
;
#define irq2pldirq(x)		((x) - OPSPUT_PLD_IRQ_BASE)
#define pldirq2port(x)		(unsigned long)((int)PLD_ICUCR1 + \
(((x) - 1) * sizeof(unsigned short)))
typedef struct  pld_icu_data_t;
static pld_icu_data_t pld_icu_data[OPSPUT_NUM_PLD_IRQ];
static void disable_opsput_pld_irq(unsigned int irq)
static void enable_opsput_pld_irq(unsigned int irq)
static void mask_opsput_pld(struct irq_data *data)
static void unmask_opsput_pld(struct irq_data *data)
static void shutdown_opsput_pld(struct irq_data *data)
static struct irq_chip opsput_pld_irq_type =
;
#define irq2lanpldirq(x)	((x) - OPSPUT_LAN_PLD_IRQ_BASE)
#define lanpldirq2port(x)	(unsigned long)((int)OPSPUT_LAN_ICUCR1 + \
(((x) - 1) * sizeof(unsigned short)))
static pld_icu_data_t lanpld_icu_data[OPSPUT_NUM_LAN_PLD_IRQ];
static void disable_opsput_lanpld_irq(unsigned int irq)
static void enable_opsput_lanpld_irq(unsigned int irq)
static void mask_opsput_lanpld(struct irq_data *data)
static void unmask_opsput_lanpld(struct irq_data *data)
static void shutdown_opsput_lanpld(struct irq_data *data)
static struct irq_chip opsput_lanpld_irq_type =
;
#define irq2lcdpldirq(x)	((x) - OPSPUT_LCD_PLD_IRQ_BASE)
#define lcdpldirq2port(x)	(unsigned long)((int)OPSPUT_LCD_ICUCR1 + \
(((x) - 1) * sizeof(unsigned short)))
static pld_icu_data_t lcdpld_icu_data[OPSPUT_NUM_LCD_PLD_IRQ];
static void disable_opsput_lcdpld_irq(unsigned int irq)
static void enable_opsput_lcdpld_irq(unsigned int irq)
static void mask_opsput_lcdpld(struct irq_data *data)
static void unmask_opsput_lcdpld(struct irq_data *data)
static void shutdown_opsput_lcdpld(struct irq_data *data)
static struct irq_chip opsput_lcdpld_irq_type = ;
void __init init_IRQ(void)
#if defined(CONFIG_SMC91X)
#define LAN_IOSTART     0x300
#define LAN_IOEND       0x320
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_FB_S1D13XXX)
static struct s1d13xxxfb_pdata s1d13xxxfb_data = ;
static struct resource s1d13xxxfb_resources[] = ;
static struct platform_device s1d13xxxfb_device = ;
static int __init platform_init(void)
arch_initcall(platform_init);
