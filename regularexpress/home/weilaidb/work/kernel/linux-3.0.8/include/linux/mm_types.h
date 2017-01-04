#define _LINUX_MM_TYPES_H
#define AT_VECTOR_SIZE_ARCH 0
#define AT_VECTOR_SIZE (2*(AT_VECTOR_SIZE_ARCH + AT_VECTOR_SIZE_BASE + 1))
struct address_space;
#define USE_SPLIT_PTLOCKS	(NR_CPUS >= CONFIG_SPLIT_PTLOCK_CPUS)
struct page ;
typedef unsigned long __nocast vm_flags_t;
struct vm_region ;
struct vm_area_struct ;
struct core_thread ;
struct core_state ;
enum ;
#if USE_SPLIT_PTLOCKS && defined(CONFIG_MMU)
#define SPLIT_RSS_COUNTING
struct task_rss_stat ;
struct mm_rss_stat ;
struct mm_struct ;
static inline void mm_init_cpumask(struct mm_struct *mm)
static inline cpumask_t *mm_cpumask(struct mm_struct *mm)
