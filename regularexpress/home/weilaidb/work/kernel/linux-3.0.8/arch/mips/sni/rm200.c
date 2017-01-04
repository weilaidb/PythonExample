#define RM200_I8259A_IRQ_BASE 32
#define MEMPORT(_base,_irq)				\
static struct plat_serial8250_port rm200_data[] = ;
static struct platform_device rm200_serial8250_device = ;
static struct resource rm200_ds1216_rsrc[] = ;
static struct platform_device rm200_ds1216_device = ;
static struct resource snirm_82596_rm200_rsrc[] = ;
static struct platform_device snirm_82596_rm200_pdev = ;
static struct resource snirm_53c710_rm200_rsrc[] = ;
static struct platform_device snirm_53c710_rm200_pdev = ;
static int __init snirm_setup_devinit(void)
device_initcall(snirm_setup_devinit);
static DEFINE_RAW_SPINLOCK(sni_rm200_i8259A_lock);
#define PIC_CMD    0x00
#define PIC_IMR    0x01
#define PIC_ISR    PIC_CMD
#define PIC_POLL   PIC_ISR
#define PIC_OCW3   PIC_ISR
#define PIC_CASCADE_IR		2
#define MASTER_ICW4_DEFAULT	0x01
#define SLAVE_ICW4_DEFAULT	0x01
static unsigned int rm200_cached_irq_mask = 0xffff;
static __iomem u8 *rm200_pic_master;
static __iomem u8 *rm200_pic_slave;
#define cached_master_mask	(rm200_cached_irq_mask)
#define cached_slave_mask	(rm200_cached_irq_mask >> 8)
static void sni_rm200_disable_8259A_irq(struct irq_data *d)
static void sni_rm200_enable_8259A_irq(struct irq_data *d)
static inline int sni_rm200_i8259A_irq_real(unsigned int irq)
void sni_rm200_mask_and_ack_8259A(struct irq_data *d)
static struct irq_chip sni_rm200_i8259A_chip = ;
static inline int sni_rm200_i8259_irq(void)
void sni_rm200_init_8259A(void)
static struct irqaction sni_rm200_irq2 = ;
static struct resource sni_rm200_pic1_resource = ;
static struct resource sni_rm200_pic2_resource = ;
static irqreturn_t sni_rm200_i8259A_irq_handler(int dummy, void *p)
struct irqaction sni_rm200_i8259A_irq = ;
void __init sni_rm200_i8259_irqs(void)
#define SNI_RM200_INT_STAT_REG  CKSEG1ADDR(0xbc000000)
#define SNI_RM200_INT_ENA_REG   CKSEG1ADDR(0xbc080000)
#define SNI_RM200_INT_START  24
#define SNI_RM200_INT_END    28
static void enable_rm200_irq(struct irq_data *d)
void disable_rm200_irq(struct irq_data *d)
static struct irq_chip rm200_irq_type = ;
static void sni_rm200_hwint(void)
void __init sni_rm200_irq_init(void)
void __init sni_rm200_init(void)
