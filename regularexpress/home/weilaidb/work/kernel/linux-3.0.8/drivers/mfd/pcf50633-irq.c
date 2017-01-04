#define PCF50633_REG_MBCS1		0x4b
#define PCF50633_REG_MBCS2		0x4c
#define PCF50633_MBCS1_USBPRES 		0x01
#define PCF50633_MBCS1_ADAPTPRES	0x01
int pcf50633_register_irq(struct pcf50633 *pcf, int irq,
void (*handler) (int, void *), void *data)
EXPORT_SYMBOL_GPL(pcf50633_register_irq);
int pcf50633_free_irq(struct pcf50633 *pcf, int irq)
EXPORT_SYMBOL_GPL(pcf50633_free_irq);
static int __pcf50633_irq_mask_set(struct pcf50633 *pcf, int irq, u8 mask)
int pcf50633_irq_mask(struct pcf50633 *pcf, int irq)
EXPORT_SYMBOL_GPL(pcf50633_irq_mask);
int pcf50633_irq_unmask(struct pcf50633 *pcf, int irq)
EXPORT_SYMBOL_GPL(pcf50633_irq_unmask);
int pcf50633_irq_mask_get(struct pcf50633 *pcf, int irq)
EXPORT_SYMBOL_GPL(pcf50633_irq_mask_get);
static void pcf50633_irq_call_handler(struct pcf50633 *pcf, int irq)
#define PCF50633_ONKEY1S_TIMEOUT 8
static irqreturn_t pcf50633_irq(int irq, void *data)
int pcf50633_irq_suspend(struct pcf50633 *pcf)
int pcf50633_irq_resume(struct pcf50633 *pcf)
int pcf50633_irq_init(struct pcf50633 *pcf, int irq)
void pcf50633_irq_free(struct pcf50633 *pcf)
