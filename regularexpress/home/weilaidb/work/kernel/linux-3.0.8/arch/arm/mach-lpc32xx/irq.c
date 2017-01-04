#define MIC_APR_DEFAULT		0x3FF0EFE0
#define SIC1_APR_DEFAULT	0xFBD27186
#define SIC2_APR_DEFAULT	0x801810C0
#define MIC_ATR_DEFAULT		0x00000000
#define SIC1_ATR_DEFAULT	0x00026000
#define SIC2_ATR_DEFAULT	0x00000000
struct lpc32xx_event_group_regs ;
static const struct lpc32xx_event_group_regs lpc32xx_event_int_regs = ;
static const struct lpc32xx_event_group_regs lpc32xx_event_pin_regs = ;
struct lpc32xx_event_info ;
static const struct lpc32xx_event_info lpc32xx_events[NR_IRQS] = ;
static void get_controller(unsigned int irq, unsigned int *base,
unsigned int *irqbit)
static void lpc32xx_mask_irq(struct irq_data *d)
static void lpc32xx_unmask_irq(struct irq_data *d)
static void lpc32xx_ack_irq(struct irq_data *d)
static void __lpc32xx_set_irq_type(unsigned int irq, int use_high_level,
int use_edge)
static int lpc32xx_set_irq_type(struct irq_data *d, unsigned int type)
static int lpc32xx_irq_wake(struct irq_data *d, unsigned int state)
static void __init lpc32xx_set_default_mappings(unsigned int apr,
unsigned int atr, unsigned int offset)
static struct irq_chip lpc32xx_irq_chip = ;
static void lpc32xx_sic1_handler(unsigned int irq, struct irq_desc *desc)
static void lpc32xx_sic2_handler(unsigned int irq, struct irq_desc *desc)
void __init lpc32xx_init_irq(void)
