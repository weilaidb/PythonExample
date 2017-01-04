#define SIC_SYSIRQ(irq)	(irq - (IRQ_CORETMR + 1))
unsigned long bfin_irq_flags = 0x1f;
EXPORT_SYMBOL(bfin_irq_flags);
unsigned long bfin_sic_iwr[3];
unsigned vr_wakeup;
static struct ivgx  ivg_table[NR_PERI_INTS];
static struct ivg_slice  ivg7_13[IVG13 - IVG7 + 1];
static void __init search_IAR(void)
void bfin_ack_noop(struct irq_data *d)
static void bfin_core_mask_irq(struct irq_data *d)
static void bfin_core_unmask_irq(struct irq_data *d)
void bfin_internal_mask_irq(unsigned int irq)
static void bfin_internal_mask_irq_chip(struct irq_data *d)
static void bfin_internal_unmask_irq_affinity(unsigned int irq,
const struct cpumask *affinity)
void bfin_internal_unmask_irq(unsigned int irq)
static void bfin_internal_unmask_irq_chip(struct irq_data *d)
static int bfin_internal_set_affinity(struct irq_data *d,
const struct cpumask *mask, bool force)
static void bfin_internal_unmask_irq_chip(struct irq_data *d)
int bfin_internal_set_wake(unsigned int irq, unsigned int state)
static int bfin_internal_set_wake_chip(struct irq_data *d, unsigned int state)
# define bfin_internal_set_wake_chip NULL
static struct irq_chip bfin_core_irqchip = ;
static struct irq_chip bfin_internal_irqchip = ;
void bfin_handle_irq(unsigned irq)
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static int mac_stat_int_mask;
static void bfin_mac_status_ack_irq(unsigned int irq)
static void bfin_mac_status_mask_irq(struct irq_data *d)
static void bfin_mac_status_unmask_irq(struct irq_data *d)
int bfin_mac_status_set_wake(struct irq_data *d, unsigned int state)
# define bfin_mac_status_set_wake NULL
static struct irq_chip bfin_mac_status_irqchip = ;
void bfin_demux_mac_status_irq(unsigned int int_err_irq,
struct irq_desc *inta_desc)
static inline void bfin_set_irq_handler(unsigned irq, irq_flow_handler_t handle)
static DECLARE_BITMAP(gpio_enabled, MAX_BLACKFIN_GPIOS);
extern void bfin_gpio_irq_prepare(unsigned gpio);
#if !defined(CONFIG_BF54x)
static void bfin_gpio_ack_irq(struct irq_data *d)
static void bfin_gpio_mask_ack_irq(struct irq_data *d)
static void bfin_gpio_mask_irq(struct irq_data *d)
static void bfin_gpio_unmask_irq(struct irq_data *d)
static unsigned int bfin_gpio_irq_startup(struct irq_data *d)
static void bfin_gpio_irq_shutdown(struct irq_data *d)
static int bfin_gpio_irq_type(struct irq_data *d, unsigned int type)
static int bfin_gpio_set_wake(struct irq_data *d, unsigned int state)
# define bfin_gpio_set_wake NULL
static void bfin_demux_gpio_block(unsigned int irq)
void bfin_demux_gpio_irq(unsigned int inta_irq,
struct irq_desc *desc)
#define NR_PINT_SYS_IRQS	4
#define NR_PINT_BITS		32
#define NR_PINTS		160
#define IRQ_NOT_AVAIL		0xFF
#define PINT_2_BANK(x)		((x) >> 5)
#define PINT_2_BIT(x)		((x) & 0x1F)
#define PINT_BIT(x)		(1 << (PINT_2_BIT(x)))
static unsigned char irq2pint_lut[NR_PINTS];
static unsigned char pint2irq_lut[NR_PINT_SYS_IRQS * NR_PINT_BITS];
struct pin_int_t ;
static struct pin_int_t *pint[NR_PINT_SYS_IRQS] = ;
inline unsigned int get_irq_base(u32 bank, u8 bmap)
void init_pint_lut(void)
static void bfin_gpio_ack_irq(struct irq_data *d)
static void bfin_gpio_mask_ack_irq(struct irq_data *d)
static void bfin_gpio_mask_irq(struct irq_data *d)
static void bfin_gpio_unmask_irq(struct irq_data *d)
static unsigned int bfin_gpio_irq_startup(struct irq_data *d)
static void bfin_gpio_irq_shutdown(struct irq_data *d)
static int bfin_gpio_irq_type(struct irq_data *d, unsigned int type)
static int bfin_gpio_set_wake(struct irq_data *d, unsigned int state)
# define bfin_gpio_set_wake NULL
void bfin_demux_gpio_irq(unsigned int inta_irq,
struct irq_desc *desc)
static struct irq_chip bfin_gpio_irqchip = ;
void __cpuinit init_exception_vectors(void)
int __init init_arch_irq(void)
__attribute__((l1_text))
static int vec_to_irq(int vec)
__attribute__((l1_text))
void do_irq(int vec, struct pt_regs *fp)
int __ipipe_get_irq_priority(unsigned irq)
__attribute__((l1_text))
asmlinkage int __ipipe_grab_irq(int vec, struct pt_regs *regs)
