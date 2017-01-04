#define __ASM_SMP_OPS_H
struct task_struct;
struct plat_smp_ops ;
extern void register_smp_ops(struct plat_smp_ops *ops);
static inline void plat_smp_setup(void)
struct plat_smp_ops;
static inline void plat_smp_setup(void)
static inline void register_smp_ops(struct plat_smp_ops *ops)
extern struct plat_smp_ops up_smp_ops;
extern struct plat_smp_ops cmp_smp_ops;
extern struct plat_smp_ops vsmp_smp_ops;
