#define irq2port(x) (M32R_ICU_CR1_PORTL + ((x - 1) * sizeof(unsigned long)))
icu_data_t icu_data[M32700UT_NUM_CPU_IRQ];
static void disable_mappi_irq(unsigned int irq)
static void enable_mappi_irq(unsigned int irq)
static void mask_mappi(struct irq_data *data)
static void unmask_mappi(struct irq_data *data)
static void shutdown_mappi(struct irq_data *data)
static struct irq_chip mappi_irq_type =
;
#define irq2pldirq(x)		((x) - M32700UT_PLD_IRQ_BASE)
#define pldirq2port(x)		(unsigned long)((int)PLD_ICUCR1 + \
(((x) - 1) * sizeof(unsigned short)))
typedef struct  pld_icu_data_t;
static pld_icu_data_t pld_icu_data[M32700UT_NUM_PLD_IRQ];
static void disable_m32700ut_pld_irq(unsigned int irq)
static void enable_m32700ut_pld_irq(unsigned int irq)
static void mask_m32700ut_pld(struct irq_data *data)
static void unmask_m32700ut_pld(struct irq_data *data)
static void shutdown_m32700ut_pld(struct irq_data *data)
static struct irq_chip m32700ut_pld_irq_type =
;
void __init init_IRQ(void)
