#define TXx9_IRCER_ICE	0x00000001
#define TXx9_IRCR_LOW	0x00000000
#define TXx9_IRCR_HIGH	0x00000001
#define TXx9_IRCR_DOWN	0x00000002
#define TXx9_IRCR_UP	0x00000003
#define TXx9_IRCR_EDGE(cr)	((cr) & 0x00000002)
#define TXx9_IRSCR_EIClrE	0x00000100
#define TXx9_IRSCR_EIClr_MASK	0x0000000f
#define TXx9_IRCSR_IF	0x00010000
#define irc_dlevel	0
#define irc_elevel	1
static struct  tx4939irq[TX4939_NUM_IR] __read_mostly;
static void tx4939_irq_unmask(struct irq_data *d)
static inline void tx4939_irq_mask(struct irq_data *d)
static void tx4939_irq_mask_ack(struct irq_data *d)
static int tx4939_irq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip tx4939_irq_chip = ;
static int tx4939_irq_set_pri(int irc_irq, int new_pri)
void __init tx4939_irq_init(void)
int tx4939_irq(void)
