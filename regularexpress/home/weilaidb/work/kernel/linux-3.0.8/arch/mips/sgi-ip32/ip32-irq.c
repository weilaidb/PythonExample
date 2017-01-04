static void inline flush_crime_bus(void)
static void inline flush_mace_bus(void)
extern irqreturn_t crime_memerr_intr(int irq, void *dev_id);
extern irqreturn_t crime_cpuerr_intr(int irq, void *dev_id);
static struct irqaction memerr_irq = ;
static struct irqaction cpuerr_irq = ;
static uint64_t crime_mask;
static inline void crime_enable_irq(struct irq_data *d)
static inline void crime_disable_irq(struct irq_data *d)
static struct irq_chip crime_level_interrupt = ;
static void crime_edge_mask_and_ack_irq(struct irq_data *d)
static struct irq_chip crime_edge_interrupt = ;
static unsigned long macepci_mask;
static void enable_macepci_irq(struct irq_data *d)
static void disable_macepci_irq(struct irq_data *d)
static struct irq_chip ip32_macepci_interrupt = ;
#define MACEISA_AUDIO_INT	(MACEISA_AUDIO_SW_INT |		\
MACEISA_AUDIO_SC_INT |		\
MACEISA_AUDIO1_DMAT_INT |	\
MACEISA_AUDIO1_OF_INT |	\
MACEISA_AUDIO2_DMAT_INT |	\
MACEISA_AUDIO2_MERR_INT |	\
MACEISA_AUDIO3_DMAT_INT |	\
MACEISA_AUDIO3_MERR_INT)
#define MACEISA_MISC_INT	(MACEISA_RTC_INT |		\
MACEISA_KEYB_INT |		\
MACEISA_KEYB_POLL_INT |	\
MACEISA_MOUSE_INT |		\
MACEISA_MOUSE_POLL_INT |	\
MACEISA_TIMER0_INT |		\
MACEISA_TIMER1_INT |		\
MACEISA_TIMER2_INT)
#define MACEISA_SUPERIO_INT	(MACEISA_PARALLEL_INT |		\
MACEISA_PAR_CTXA_INT |		\
MACEISA_PAR_CTXB_INT |		\
MACEISA_PAR_MERR_INT |		\
MACEISA_SERIAL1_INT |		\
MACEISA_SERIAL1_TDMAT_INT |	\
MACEISA_SERIAL1_TDMAPR_INT |	\
MACEISA_SERIAL1_TDMAME_INT |	\
MACEISA_SERIAL1_RDMAT_INT |	\
MACEISA_SERIAL1_RDMAOR_INT |	\
MACEISA_SERIAL2_INT |		\
MACEISA_SERIAL2_TDMAT_INT |	\
MACEISA_SERIAL2_TDMAPR_INT |	\
MACEISA_SERIAL2_TDMAME_INT |	\
MACEISA_SERIAL2_RDMAT_INT |	\
MACEISA_SERIAL2_RDMAOR_INT)
static unsigned long maceisa_mask;
static void enable_maceisa_irq(struct irq_data *d)
static void disable_maceisa_irq(struct irq_data *d)
static void mask_and_ack_maceisa_irq(struct irq_data *d)
static struct irq_chip ip32_maceisa_level_interrupt = ;
static struct irq_chip ip32_maceisa_edge_interrupt = ;
static void enable_mace_irq(struct irq_data *d)
static void disable_mace_irq(struct irq_data *d)
static struct irq_chip ip32_mace_interrupt = ;
static void ip32_unknown_interrupt(void)
static void ip32_irq0(void)
static void ip32_irq1(void)
static void ip32_irq2(void)
static void ip32_irq3(void)
static void ip32_irq4(void)
static void ip32_irq5(void)
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
