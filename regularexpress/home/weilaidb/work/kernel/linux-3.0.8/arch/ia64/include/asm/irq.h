#define _ASM_IA64_IRQ_H
static __inline__ int
irq_canonicalize (int irq)
extern void set_irq_affinity_info (unsigned int irq, int dest, int redir);
bool is_affinity_mask_valid(const struct cpumask *cpumask);
#define is_affinity_mask_valid is_affinity_mask_valid
