#define __SH_INTC_H
typedef unsigned char intc_enum;
struct intc_vect ;
#define INTC_VECT(enum_id, vect)
#define INTC_IRQ(enum_id, irq) INTC_VECT(enum_id, irq2evt(irq))
struct intc_group ;
#define INTC_GROUP(enum_id, ids...)
struct intc_subgroup ;
struct intc_mask_reg ;
struct intc_prio_reg ;
struct intc_sense_reg ;
#define INTC_SMP_BALANCING(reg)	.dist_reg = (reg)
#define INTC_SMP_BALANCING(reg)
#define INTC_SMP(stride, nr)	.smp = (stride) | ((nr) << 8)
#define INTC_SMP(stride, nr)
struct intc_hw_desc ;
#define _INTC_ARRAY(a) a, __same_type(a, NULL) ? 0 : sizeof(a)/sizeof(*a)
#define INTC_HW_DESC(vectors, groups, mask_regs,	\
prio_regs,	sense_regs, ack_regs)	\
struct intc_desc ;
#define DECLARE_INTC_DESC(symbol, chipname, vectors, groups,		\
mask_regs, prio_regs, sense_regs)				\
struct intc_desc symbol __initdata =
#define DECLARE_INTC_DESC_ACK(symbol, chipname, vectors, groups,	\
mask_regs, prio_regs, sense_regs, ack_regs)			\
struct intc_desc symbol __initdata =
int register_intc_controller(struct intc_desc *desc);
void reserve_intc_vectors(struct intc_vect *vectors, unsigned int nr_vecs);
int intc_set_priority(unsigned int irq, unsigned int prio);
int intc_irq_lookup(const char *chipname, intc_enum enum_id);
void intc_finalize(void);
int register_intc_userimask(unsigned long addr);
static inline int register_intc_userimask(unsigned long addr)
