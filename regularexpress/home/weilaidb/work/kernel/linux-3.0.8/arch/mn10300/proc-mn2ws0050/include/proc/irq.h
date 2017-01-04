#define _PROC_IRQ_H
#define GxICR_NUM_IRQS		163
#define GxICR_NUM_EXT_IRQS	197
#define GxICR_NUM_XIRQS		16
#define XIRQ0		34
#define XIRQ1		35
#define XIRQ2		36
#define XIRQ3		37
#define XIRQ4		38
#define XIRQ5		39
#define XIRQ6		40
#define XIRQ7		41
#define XIRQ8		42
#define XIRQ9		43
#define XIRQ10		44
#define XIRQ11		45
#define XIRQ12		46
#define XIRQ13		47
#define XIRQ14		48
#define XIRQ15		49
#define XIRQ2IRQ(num)	(XIRQ0 + num)
