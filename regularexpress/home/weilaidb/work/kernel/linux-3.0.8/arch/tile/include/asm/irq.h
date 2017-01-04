#define _ASM_TILE_IRQ_H
#define NR_IRQS 32
#define IRQ_RESCHEDULE 1
#define irq_canonicalize(irq)   (irq)
void ack_bad_irq(unsigned int irq);
enum ;
void tile_irq_activate(unsigned int irq, int tile_irq_type);
void enable_percpu_irq(unsigned int irq);
void disable_percpu_irq(unsigned int irq);
void setup_irq_regs(void);
