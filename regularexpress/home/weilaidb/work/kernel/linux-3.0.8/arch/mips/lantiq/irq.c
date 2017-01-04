#define LTQ_ICU_IM0_ISR		0x0000
#define LTQ_ICU_IM0_IER		0x0008
#define LTQ_ICU_IM0_IOSR	0x0010
#define LTQ_ICU_IM0_IRSR	0x0018
#define LTQ_ICU_IM0_IMR		0x0020
#define LTQ_ICU_IM1_ISR		0x0028
#define LTQ_ICU_OFFSET		(LTQ_ICU_IM1_ISR - LTQ_ICU_IM0_ISR)
#define LTQ_EIU_EXIN_C		0x0000
#define LTQ_EIU_EXIN_INIC	0x0004
#define LTQ_EIU_EXIN_INEN	0x000C
#define LTQ_EIU_IR0		(INT_NUM_IM4_IRL0 + 30)
#define LTQ_EIU_IR1		(INT_NUM_IM3_IRL0 + 31)
#define LTQ_EIU_IR2		(INT_NUM_IM1_IRL0 + 26)
#define LTQ_EIU_IR3		INT_NUM_IM1_IRL0
#define LTQ_EIU_IR4		(INT_NUM_IM1_IRL0 + 1)
#define LTQ_EIU_IR5		(INT_NUM_IM1_IRL0 + 2)
#define LTQ_EIU_IR6		(INT_NUM_IM2_IRL0 + 30)
#define MAX_EIU			6
#define LTQ_ICU_EBU_IRQ		22
#define ltq_icu_w32(x, y)	ltq_w32((x), ltq_icu_membase + (y))
#define ltq_icu_r32(x)		ltq_r32(ltq_icu_membase + (x))
#define ltq_eiu_w32(x, y)	ltq_w32((x), ltq_eiu_membase + (y))
#define ltq_eiu_r32(x)		ltq_r32(ltq_eiu_membase + (x))
static unsigned short ltq_eiu_irq[MAX_EIU] = ;
static struct resource ltq_icu_resource = ;
static struct resource ltq_eiu_resource = ;
static void __iomem *ltq_icu_membase;
static void __iomem *ltq_eiu_membase;
void ltq_disable_irq(struct irq_data *d)
void ltq_mask_and_ack_irq(struct irq_data *d)
static void ltq_ack_irq(struct irq_data *d)
void ltq_enable_irq(struct irq_data *d)
static unsigned int ltq_startup_eiu_irq(struct irq_data *d)
static void ltq_shutdown_eiu_irq(struct irq_data *d)
static struct irq_chip ltq_irq_type = ;
static struct irq_chip ltq_eiu_type = ;
static void ltq_hw_irqdispatch(int module)
#define DEFINE_HWx_IRQDISPATCH(x)					\
static void ltq_hw ## x ## _irqdispatch(void)			\
DEFINE_HWx_IRQDISPATCH(0)
DEFINE_HWx_IRQDISPATCH(1)
DEFINE_HWx_IRQDISPATCH(2)
DEFINE_HWx_IRQDISPATCH(3)
DEFINE_HWx_IRQDISPATCH(4)
static void ltq_hw5_irqdispatch(void)
asmlinkage void plat_irq_dispatch(void)
static struct irqaction cascade = ;
void __init arch_init_irq(void)
unsigned int __cpuinit get_c0_compare_int(void)
