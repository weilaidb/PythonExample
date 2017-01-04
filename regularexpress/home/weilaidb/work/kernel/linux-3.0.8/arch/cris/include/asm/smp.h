#define __ASM_SMP_H
extern cpumask_t phys_cpu_present_map;
#define raw_smp_processor_id() (current_thread_info()->cpu)
