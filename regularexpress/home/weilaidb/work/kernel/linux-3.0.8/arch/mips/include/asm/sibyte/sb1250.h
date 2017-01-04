#define _ASM_SIBYTE_SB1250_H
#define SIBYTE_RELEASE 0x02111403
#define SB1250_NR_IRQS 64
#define BCM1480_NR_IRQS                 128
#define BCM1480_NR_IRQS_HALF            64
#define SB1250_DUART_MINOR_BASE		64
extern unsigned int sb1_pass;
extern unsigned int soc_pass;
extern unsigned int soc_type;
extern unsigned int periph_rev;
extern unsigned int zbbus_mhz;
extern void sb1250_time_init(void);
extern void sb1250_mask_irq(int cpu, int irq);
extern void sb1250_unmask_irq(int cpu, int irq);
extern void bcm1480_time_init(void);
extern void bcm1480_mask_irq(int cpu, int irq);
extern void bcm1480_unmask_irq(int cpu, int irq);
#define AT_spin \
__asm__ __volatile__ (		\
".set noat\n"		\
"li $at, 0\n"		\
"1: beqz $at, 1b\n"	\
".set at\n"		\
)
#define IOADDR(a) ((void __iomem *)(IO_BASE + (a)))
