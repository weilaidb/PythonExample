#define _ASM_PROC_IRQ_H
#define GxICR_NUM_IRQS		42
#define GxICR_NUM_XIRQS		8
#define XIRQ0		34
#define XIRQ1		35
#define XIRQ2		36
#define XIRQ3		37
#define XIRQ4		38
#define XIRQ5		39
#define XIRQ6		40
#define XIRQ7		41
#define XIRQ2IRQ(num)	(XIRQ0 + num)
