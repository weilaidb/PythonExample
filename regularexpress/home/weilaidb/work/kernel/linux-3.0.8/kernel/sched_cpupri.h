#define _LINUX_CPUPRI_H
#define CPUPRI_NR_PRIORITIES	(MAX_RT_PRIO + 2)
#define CPUPRI_NR_PRI_WORDS	BITS_TO_LONGS(CPUPRI_NR_PRIORITIES)
#define CPUPRI_INVALID -1
#define CPUPRI_IDLE     0
#define CPUPRI_NORMAL   1
struct cpupri_vec ;
struct cpupri ;
int  cpupri_find(struct cpupri *cp,
struct task_struct *p, struct cpumask *lowest_mask);
void cpupri_set(struct cpupri *cp, int cpu, int pri);
int cpupri_init(struct cpupri *cp);
void cpupri_cleanup(struct cpupri *cp);
#define cpupri_set(cp, cpu, pri) do  while (0)
#define cpupri_init() do  while (0)
