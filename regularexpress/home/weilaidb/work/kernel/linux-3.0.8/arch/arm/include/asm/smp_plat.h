#define __ASMARM_SMP_PLAT_H
static inline bool is_smp(void)
static inline int tlb_ops_need_broadcast(void)
#if !defined(CONFIG_SMP) || __LINUX_ARM_ARCH__ >= 7
#define cache_ops_need_broadcast()	0
static inline int cache_ops_need_broadcast(void)
