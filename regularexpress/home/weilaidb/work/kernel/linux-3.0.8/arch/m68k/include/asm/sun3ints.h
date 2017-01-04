#define SUN3INTS_H
#define SUN3_INT_VECS 192
void sun3_enable_irq(unsigned int irq);
void sun3_disable_irq(unsigned int irq);
extern void sun3_init_IRQ (void);
extern void sun3_enable_interrupts (void);
extern void sun3_disable_interrupts (void);
extern volatile unsigned char* sun3_intreg;
#define SUN3_VEC_FLOPPY		(IRQ_USER+0)
#define SUN3_VEC_VMESCSI0	(IRQ_USER+0)
#define SUN3_VEC_VMESCSI1	(IRQ_USER+1)
#define SUN3_VEC_CG		(IRQ_USER+104)
