#define IP22_EISA_MAX_SLOTS	  4
#define EISA_MAX_IRQ             16
#define EIU_MODE_REG     0x0001ffc0
#define EIU_STAT_REG     0x0001ffc4
#define EIU_PREMPT_REG   0x0001ffc8
#define EIU_QUIET_REG    0x0001ffcc
#define EIU_INTRPT_ACK   0x00010004
static char __init *decode_eisa_sig(unsigned long addr)
static irqreturn_t ip22_eisa_intr(int irq, void *dev_id)
static struct irqaction eisa_action = ;
int __init ip22_eisa_init(void)
