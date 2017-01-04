#define INTMSK(start, end) ((1 << ((end) + 1 - (start))) - 1)
static inline void s3c2443_irq_demux(unsigned int irq, unsigned int len)
static void s3c2443_irq_demux_wdtac97(unsigned int irq, struct irq_desc *desc)
#define INTMSK_WDTAC97	(1UL << (IRQ_WDT - IRQ_EINT0))
#define SUBMSK_WDTAC97	INTMSK(IRQ_S3C2443_WDT, IRQ_S3C2443_AC97)
static void s3c2443_irq_wdtac97_mask(struct irq_data *data)
static void s3c2443_irq_wdtac97_unmask(struct irq_data *data)
static void s3c2443_irq_wdtac97_ack(struct irq_data *data)
static struct irq_chip s3c2443_irq_wdtac97 = ;
static void s3c2443_irq_demux_lcd(unsigned int irq, struct irq_desc *desc)
#define INTMSK_LCD	(1UL << (IRQ_LCD - IRQ_EINT0))
#define SUBMSK_LCD	INTMSK(IRQ_S3C2443_LCD1, IRQ_S3C2443_LCD4)
static void s3c2443_irq_lcd_mask(struct irq_data *data)
static void s3c2443_irq_lcd_unmask(struct irq_data *data)
static void s3c2443_irq_lcd_ack(struct irq_data *data)
static struct irq_chip s3c2443_irq_lcd = ;
static void s3c2443_irq_demux_dma(unsigned int irq, struct irq_desc *desc)
#define INTMSK_DMA	(1UL << (IRQ_S3C2443_DMA - IRQ_EINT0))
#define SUBMSK_DMA	INTMSK(IRQ_S3C2443_DMA0, IRQ_S3C2443_DMA5)
static void s3c2443_irq_dma_mask(struct irq_data *data)
static void s3c2443_irq_dma_unmask(struct irq_data *data)
static void s3c2443_irq_dma_ack(struct irq_data *data)
static struct irq_chip s3c2443_irq_dma = ;
static void s3c2443_irq_demux_uart3(unsigned int irq, struct irq_desc *desc)
#define INTMSK_UART3	(1UL << (IRQ_S3C2443_UART3 - IRQ_EINT0))
#define SUBMSK_UART3	(0x7 << (IRQ_S3C2443_RX3 - S3C2410_IRQSUB(0)))
static void s3c2443_irq_uart3_mask(struct irq_data *data)
static void s3c2443_irq_uart3_unmask(struct irq_data *data)
static void s3c2443_irq_uart3_ack(struct irq_data *data)
static struct irq_chip s3c2443_irq_uart3 = ;
static void s3c2443_irq_demux_cam(unsigned int irq, struct irq_desc *desc)
#define INTMSK_CAM	(1UL << (IRQ_CAM - IRQ_EINT0))
#define SUBMSK_CAM	INTMSK(IRQ_S3C2440_CAM_C, IRQ_S3C2440_CAM_P)
static void s3c2443_irq_cam_mask(struct irq_data *data)
static void s3c2443_irq_cam_unmask(struct irq_data *data)
static void s3c2443_irq_cam_ack(struct irq_data *data)
static struct irq_chip s3c2443_irq_cam = ;
static int __init s3c2443_add_sub(unsigned int base,
void (*demux)(unsigned int,
struct irq_desc *),
struct irq_chip *chip,
unsigned int start, unsigned int end)
static int __init s3c2443_irq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2443_irq_driver = ;
static int __init s3c2443_irq_init(void)
arch_initcall(s3c2443_irq_init);
