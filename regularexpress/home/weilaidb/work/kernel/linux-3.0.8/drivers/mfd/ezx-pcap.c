#define PCAP_ADC_MAXQ		8
struct pcap_adc_request ;
struct pcap_adc_sync_request ;
struct pcap_chip ;
static int ezx_pcap_putget(struct pcap_chip *pcap, u32 *data)
int ezx_pcap_write(struct pcap_chip *pcap, u8 reg_num, u32 value)
EXPORT_SYMBOL_GPL(ezx_pcap_write);
int ezx_pcap_read(struct pcap_chip *pcap, u8 reg_num, u32 *value)
EXPORT_SYMBOL_GPL(ezx_pcap_read);
int ezx_pcap_set_bits(struct pcap_chip *pcap, u8 reg_num, u32 mask, u32 val)
EXPORT_SYMBOL_GPL(ezx_pcap_set_bits);
int irq_to_pcap(struct pcap_chip *pcap, int irq)
EXPORT_SYMBOL_GPL(irq_to_pcap);
int pcap_to_irq(struct pcap_chip *pcap, int irq)
EXPORT_SYMBOL_GPL(pcap_to_irq);
static void pcap_mask_irq(struct irq_data *d)
static void pcap_unmask_irq(struct irq_data *d)
static struct irq_chip pcap_irq_chip = ;
static void pcap_msr_work(struct work_struct *work)
static void pcap_isr_work(struct work_struct *work)
static void pcap_irq_handler(unsigned int irq, struct irq_desc *desc)
void pcap_set_ts_bits(struct pcap_chip *pcap, u32 bits)
EXPORT_SYMBOL_GPL(pcap_set_ts_bits);
static void pcap_disable_adc(struct pcap_chip *pcap)
static void pcap_adc_trigger(struct pcap_chip *pcap)
static irqreturn_t pcap_adc_irq(int irq, void *_pcap)
int pcap_adc_async(struct pcap_chip *pcap, u8 bank, u32 flags, u8 ch[],
void *callback, void *data)
EXPORT_SYMBOL_GPL(pcap_adc_async);
static void pcap_adc_sync_cb(void *param, u16 res[])
int pcap_adc_sync(struct pcap_chip *pcap, u8 bank, u32 flags, u8 ch[],
u16 res[])
EXPORT_SYMBOL_GPL(pcap_adc_sync);
static int pcap_remove_subdev(struct device *dev, void *unused)
static int __devinit pcap_add_subdev(struct pcap_chip *pcap,
struct pcap_subdev *subdev)
static int __devexit ezx_pcap_remove(struct spi_device *spi)
static int __devinit ezx_pcap_probe(struct spi_device *spi)
static struct spi_driver ezxpcap_driver = ;
static int __init ezx_pcap_init(void)
static void __exit ezx_pcap_exit(void)
subsys_initcall(ezx_pcap_init);
module_exit(ezx_pcap_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Daniel Ribeiro / Harald Welte");
MODULE_DESCRIPTION("Motorola PCAP2 ASIC Driver");
MODULE_ALIAS("spi:ezx-pcap");
