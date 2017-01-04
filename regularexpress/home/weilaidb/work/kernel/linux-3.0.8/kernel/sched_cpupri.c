static int convert_prio(int prio)
#define for_each_cpupri_active(array, idx)                    \
for_each_set_bit(idx, array, CPUPRI_NR_PRIORITIES)
int cpupri_find(struct cpupri *cp, struct task_struct *p,
struct cpumask *lowest_mask)
void cpupri_set(struct cpupri *cp, int cpu, int newpri)
int cpupri_init(struct cpupri *cp)
void cpupri_cleanup(struct cpupri *cp)
