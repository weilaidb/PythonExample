#define __ASM_SH_SMP_OPS_H
struct plat_smp_ops ;
extern struct plat_smp_ops *mp_ops;
extern struct plat_smp_ops shx3_smp_ops;
static inline void plat_smp_setup(void)
static inline void play_dead(void)
extern void register_smp_ops(struct plat_smp_ops *ops);
static inline void plat_smp_setup(void)
static inline void register_smp_ops(struct plat_smp_ops *ops)
static inline void play_dead(void)
