#define _ARCH_IXP4XX_IRQS_H_
#define IRQ_IXP4XX_NPEA		0
#define IRQ_IXP4XX_NPEB		1
#define IRQ_IXP4XX_NPEC		2
#define IRQ_IXP4XX_QM1		3
#define IRQ_IXP4XX_QM2		4
#define IRQ_IXP4XX_TIMER1	5
#define IRQ_IXP4XX_GPIO0	6
#define IRQ_IXP4XX_GPIO1	7
#define IRQ_IXP4XX_PCI_INT	8
#define IRQ_IXP4XX_PCI_DMA1	9
#define IRQ_IXP4XX_PCI_DMA2	10
#define IRQ_IXP4XX_TIMER2	11
#define IRQ_IXP4XX_USB		12
#define IRQ_IXP4XX_UART2	13
#define IRQ_IXP4XX_TIMESTAMP	14
#define IRQ_IXP4XX_UART1	15
#define IRQ_IXP4XX_WDOG		16
#define IRQ_IXP4XX_AHB_PMU	17
#define IRQ_IXP4XX_XSCALE_PMU	18
#define IRQ_IXP4XX_GPIO2	19
#define IRQ_IXP4XX_GPIO3	20
#define IRQ_IXP4XX_GPIO4	21
#define IRQ_IXP4XX_GPIO5	22
#define IRQ_IXP4XX_GPIO6	23
#define IRQ_IXP4XX_GPIO7	24
#define IRQ_IXP4XX_GPIO8	25
#define IRQ_IXP4XX_GPIO9	26
#define IRQ_IXP4XX_GPIO10	27
#define IRQ_IXP4XX_GPIO11	28
#define IRQ_IXP4XX_GPIO12	29
#define IRQ_IXP4XX_SW_INT1	30
#define IRQ_IXP4XX_SW_INT2	31
#define IRQ_IXP4XX_USB_HOST	32
#define IRQ_IXP4XX_I2C		33
#define IRQ_IXP4XX_SSP		34
#define IRQ_IXP4XX_TSYNC	35
#define IRQ_IXP4XX_EAU_DONE	36
#define IRQ_IXP4XX_SHA_DONE	37
#define IRQ_IXP4XX_SWCP_PE	58
#define IRQ_IXP4XX_QM_PE	60
#define IRQ_IXP4XX_MCU_ECC	61
#define IRQ_IXP4XX_EXP_PE	62
#define _IXP4XX_GPIO_IRQ(n)	(IRQ_IXP4XX_GPIO ## n)
#define IXP4XX_GPIO_IRQ(n)	_IXP4XX_GPIO_IRQ(n)
#if defined(CONFIG_CPU_IXP46X) || defined(CONFIG_CPU_IXP43X)
#define NR_IRQS			64
#define NR_IRQS			32
#define	XSCALE_PMU_IRQ		(IRQ_IXP4XX_XSCALE_PMU)