#define _ASM_IA64_SYSTEM_H
#define GATE_ADDR		RGN_BASE(RGN_GATE)
#define KERNEL_START		 (GATE_ADDR+__IA64_UL_CONST(0x100000000))
#define PERCPU_ADDR		(-PERCPU_PAGE_SIZE)
#define LOAD_OFFSET		(KERNEL_START - KERNEL_TR_PAGE_SIZE)
#define AT_VECTOR_SIZE_ARCH 2
struct pci_vector_struct ;
extern struct ia64_boot_param  *ia64_boot_param;
#define mb()	ia64_mf()
#define rmb()	mb()
#define wmb()	mb()
#define read_barrier_depends()	do  while(0)
# define smp_mb()	mb()
# define smp_rmb()	rmb()
# define smp_wmb()	wmb()
# define smp_read_barrier_depends()	read_barrier_depends()
# define smp_mb()	barrier()
# define smp_rmb()	barrier()
# define smp_wmb()	barrier()
# define smp_read_barrier_depends()	do  while(0)
#define set_mb(var, value)	do  while (0)
extern struct task_struct *ia64_switch_to (void *next_task);
struct task_struct;
extern void ia64_save_extra (struct task_struct *task);
extern void ia64_load_extra (struct task_struct *task);
extern void ia64_account_on_switch (struct task_struct *prev, struct task_struct *next);
# define IA64_ACCOUNT_ON_SWITCH(p,n) ia64_account_on_switch(p,n)
# define IA64_ACCOUNT_ON_SWITCH(p,n)
DECLARE_PER_CPU(unsigned long, pfm_syst_info);
# define PERFMON_IS_SYSWIDE() (__get_cpu_var(pfm_syst_info) & 0x1)
# define PERFMON_IS_SYSWIDE() (0)
#define IA64_HAS_EXTRA_STATE(t)							\
((t)->thread.flags & (IA64_THREAD_DBG_VALID|IA64_THREAD_PM_VALID)	\
|| PERFMON_IS_SYSWIDE())
#define __switch_to(prev,next,last) do  while (0)
# define switch_to(prev,next,last) do  while (0)
# define switch_to(prev,next,last)	__switch_to(prev, next, last)
#define __ARCH_WANT_UNLOCKED_CTXSW
#define ARCH_HAS_PREFETCH_SWITCH_STACK
#define ia64_platform_is(x) (strcmp(x, platform_name) == 0)
void cpu_idle_wait(void);
#define arch_align_stack(x) (x)
void default_idle(void);
