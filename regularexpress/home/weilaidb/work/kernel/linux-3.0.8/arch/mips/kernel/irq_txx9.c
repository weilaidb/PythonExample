struct txx9_irc_reg ;
#define TXx9_IRCER_ICE	0x00000001
#define TXx9_IRCR_LOW	0x00000000
#define TXx9_IRCR_HIGH	0x00000001
#define TXx9_IRCR_DOWN	0x00000002
#define TXx9_IRCR_UP	0x00000003
#define TXx9_IRCR_EDGE(cr)	((cr) & 0x00000002)
#define TXx9_IRSCR_EIClrE	0x00000100
#define TXx9_IRSCR_EIClr_MASK	0x0000000f
#define TXx9_IRCSR_IF	0x00010000
#define TXx9_IRCSR_ILV_MASK	0x00000700
#define TXx9_IRCSR_IVL_MASK	0x0000001f
#define irc_dlevel	0
#define irc_elevel	1
static struct txx9_irc_reg __iomem *txx9_ircptr __read_mostly;
static struct  txx9irq[TXx9_MAX_IR] __read_mostly;
static void txx9_irq_unmask(struct irq_data *d)
static inline void txx9_irq_mask(struct irq_data *d)
static void txx9_irq_mask_ack(struct irq_data *d)
static int txx9_irq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip txx9_irq_chip = ;
void __init txx9_irq_init(unsigned long baseaddr)
int __init txx9_irq_set_pri(int irc_irq, int new_pri)
int txx9_irq(void)
