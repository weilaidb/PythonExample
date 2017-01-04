#define _LINUX_BLOCKGROUP_LOCK_H
#if NR_CPUS >= 32
#define NR_BG_LOCKS	128
#elif NR_CPUS >= 16
#define NR_BG_LOCKS	64
#elif NR_CPUS >= 8
#define NR_BG_LOCKS	32
#elif NR_CPUS >= 4
#define NR_BG_LOCKS	16
#elif NR_CPUS >= 2
#define NR_BG_LOCKS	8
#define NR_BG_LOCKS	4
#define NR_BG_LOCKS	1
struct bgl_lock  ____cacheline_aligned_in_smp;
struct blockgroup_lock ;
static inline void bgl_lock_init(struct blockgroup_lock *bgl)
static inline spinlock_t *
bgl_lock_ptr(struct blockgroup_lock *bgl, unsigned int block_group)
