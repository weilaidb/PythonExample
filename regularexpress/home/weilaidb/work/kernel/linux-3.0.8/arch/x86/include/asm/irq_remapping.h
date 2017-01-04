#define _ASM_X86_IRQ_REMAPPING_H
#define IRTE_DEST(dest) ((x2apic_mode) ? dest : dest << 8)
static inline void prepare_irte(struct irte *irte, int vector,
unsigned int dest)
static inline bool irq_remapped(struct irq_cfg *cfg)
static void prepare_irte(struct irte *irte, int vector, unsigned int dest)
static inline bool irq_remapped(struct irq_cfg *cfg)
