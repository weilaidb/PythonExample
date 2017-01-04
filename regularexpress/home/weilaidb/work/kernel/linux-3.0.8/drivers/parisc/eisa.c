#define SNAKES_EEPROM_BASE_ADDR 0xF0810400
#define MIRAGE_EEPROM_BASE_ADDR 0xF00C0400
static DEFINE_SPINLOCK(eisa_irq_lock);
void __iomem *eisa_eeprom_addr __read_mostly;
static struct eisa_ba  eisa_dev;
static inline unsigned long eisa_permute(unsigned short port)
unsigned char eisa_in8(unsigned short port)
unsigned short eisa_in16(unsigned short port)
unsigned int eisa_in32(unsigned short port)
void eisa_out8(unsigned char data, unsigned short port)
void eisa_out16(unsigned short data, unsigned short port)
void eisa_out32(unsigned int data, unsigned short port)
EXPORT_SYMBOL(eisa_in8);
EXPORT_SYMBOL(eisa_in16);
EXPORT_SYMBOL(eisa_in32);
EXPORT_SYMBOL(eisa_out8);
EXPORT_SYMBOL(eisa_out16);
EXPORT_SYMBOL(eisa_out32);
static int master_mask;
static int slave_mask;
static unsigned int eisa_irq_level __read_mostly;
static void eisa_mask_irq(struct irq_data *d)
static void eisa_unmask_irq(struct irq_data *d)
static struct irq_chip eisa_interrupt_type = ;
static irqreturn_t eisa_irq(int wax_irq, void *intr_dev)
static irqreturn_t dummy_irq2_handler(int _, void *dev)
static struct irqaction irq2_action = ;
static void init_eisa_pic(void)
#define is_mongoose(dev) (dev->id.sversion == 0x00076)
static int __init eisa_probe(struct parisc_device *dev)
static const struct parisc_device_id eisa_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, eisa_tbl);
static struct parisc_driver eisa_driver = ;
void __init eisa_init(void)
static unsigned int eisa_irq_configured;
void eisa_make_irq_level(int num)
void eisa_make_irq_edge(int num)
static int __init eisa_irq_setup(char *str)
__setup("eisa_irq_edge=", eisa_irq_setup);
