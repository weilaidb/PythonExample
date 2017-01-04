#define _ASM_X86_IPI_H
static inline unsigned int __prepare_ICR(unsigned int shortcut, int vector,
unsigned int dest)
static inline int __prepare_ICR2(unsigned int mask)
static inline void __xapic_wait_icr_idle(void)
static inline void
__default_send_IPI_shortcut(unsigned int shortcut, int vector, unsigned int dest)
static inline void
__default_send_IPI_dest_field(unsigned int mask, int vector, unsigned int dest)
extern void default_send_IPI_mask_sequence_phys(const struct cpumask *mask,
int vector);
extern void default_send_IPI_mask_allbutself_phys(const struct cpumask *mask,
int vector);
#define NMI_VECTOR 0x02
extern int no_broadcast;
static inline void __default_local_send_IPI_allbutself(int vector)
static inline void __default_local_send_IPI_all(int vector)
extern void default_send_IPI_mask_sequence_logical(const struct cpumask *mask,
int vector);
extern void default_send_IPI_mask_allbutself_logical(const struct cpumask *mask,
int vector);
extern void default_send_IPI_mask_logical(const struct cpumask *mask,
int vector);
extern void default_send_IPI_allbutself(int vector);
extern void default_send_IPI_all(int vector);
extern void default_send_IPI_self(int vector);
