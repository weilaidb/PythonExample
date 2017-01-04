#define __ASM_ARCH_MXC_IRQS_H__
#define MXC_INTERNAL_IRQS	128
#define MXC_INTERNAL_IRQS	64
#define MXC_GPIO_IRQ_START	MXC_INTERNAL_IRQS
#if defined CONFIG_SOC_IMX53
#define MXC_GPIO_IRQS		(32 * 7)
#elif defined CONFIG_ARCH_MX2
#define MXC_GPIO_IRQS		(32 * 6)
#elif defined CONFIG_SOC_IMX50
#define MXC_GPIO_IRQS		(32 * 6)
#elif defined CONFIG_ARCH_MX1
#define MXC_GPIO_IRQS		(32 * 4)
#elif defined CONFIG_ARCH_MX25
#define MXC_GPIO_IRQS		(32 * 4)
#elif defined CONFIG_SOC_IMX51
#define MXC_GPIO_IRQS		(32 * 4)
#elif defined CONFIG_ARCH_MX3
#define MXC_GPIO_IRQS		(32 * 3)
#define MXC_BOARD_IRQ_START	(MXC_INTERNAL_IRQS + MXC_GPIO_IRQS)
#define MXC_BOARD_IRQS  80
#define MXC_BOARD_IRQS	16
#define MXC_IPU_IRQ_START	(MXC_BOARD_IRQ_START + MXC_BOARD_IRQS)
#define MX3_IPU_IRQS CONFIG_MX3_IPU_IRQS
#define MX3_IPU_IRQS 0
#define NR_IRQS			(MXC_IPU_IRQ_START + MX3_IPU_IRQS)
extern int imx_irq_set_priority(unsigned char irq, unsigned char prio);
#define FIQ_START	0
extern int mxc_set_irq_fiq(unsigned int irq, unsigned int type);
