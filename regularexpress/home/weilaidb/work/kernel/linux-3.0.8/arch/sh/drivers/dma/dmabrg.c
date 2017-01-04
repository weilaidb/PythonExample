#define DMARSRA		0xfe090000
#define DMAOR		0xffa00040
#define DMACHCR0	0xffa0000c
#define DMABRGCR	0xfe3c0000
#define DMAOR_BRG	0x0000c000
#define DMAOR_DMEN	0x00000001
#define DMABRGI0	68
#define DMABRGI1	69
#define DMABRGI2	70
struct dmabrg_handler  *dmabrg_handlers;
static inline void dmabrg_call_handler(int i)
static irqreturn_t dmabrg_irq(int irq, void *data)
static void dmabrg_disable_irq(unsigned int dmairq)
static void dmabrg_enable_irq(unsigned int dmairq)
int dmabrg_request_irq(unsigned int dmairq, void(*handler)(void*),
void *data)
EXPORT_SYMBOL_GPL(dmabrg_request_irq);
void dmabrg_free_irq(unsigned int dmairq)
EXPORT_SYMBOL_GPL(dmabrg_free_irq);
static int __init dmabrg_init(void)
subsys_initcall(dmabrg_init);
