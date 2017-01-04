#define __X86_MM_NUMA_INTERNAL_H
struct numa_memblk ;
struct numa_meminfo ;
void __init numa_remove_memblk_from(int idx, struct numa_meminfo *mi);
int __init numa_cleanup_meminfo(struct numa_meminfo *mi);
void __init numa_reset_distance(void);
void __init x86_numa_init(void);
static inline void init_alloc_remap(int nid, u64 start, u64 end)
void __init init_alloc_remap(int nid, u64 start, u64 end);
void __init numa_emulation(struct numa_meminfo *numa_meminfo,
int numa_dist_cnt);
static inline void numa_emulation(struct numa_meminfo *numa_meminfo,
int numa_dist_cnt)
