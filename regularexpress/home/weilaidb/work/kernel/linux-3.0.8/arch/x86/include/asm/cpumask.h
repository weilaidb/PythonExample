#define _ASM_X86_CPUMASK_H
extern cpumask_var_t cpu_callin_mask;
extern cpumask_var_t cpu_callout_mask;
extern cpumask_var_t cpu_initialized_mask;
extern cpumask_var_t cpu_sibling_setup_mask;
extern void setup_cpu_local_masks(void);
