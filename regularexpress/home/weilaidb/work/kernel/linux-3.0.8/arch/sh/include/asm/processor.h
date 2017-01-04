#define __ASM_SH_PROCESSOR_H
enum cpu_type ;
enum cpu_family ;
struct tlb_info ;
struct sh_cpuinfo  __attribute__ ((aligned(L1_CACHE_BYTES)));
extern struct sh_cpuinfo cpu_data[];
#define boot_cpu_data cpu_data[0]
#define current_cpu_data cpu_data[smp_processor_id()]
#define raw_current_cpu_data cpu_data[raw_smp_processor_id()]
#define cpu_sleep()	__asm__ __volatile__ ("sleep" : : : "memory")
#define cpu_relax()	barrier()
struct seq_operations;
struct task_struct;
extern struct pt_regs fake_swapper_regs;
extern void cpu_init(void);
extern void cpu_probe(void);
extern unsigned int xstate_size;
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;
extern int get_unalign_ctl(struct task_struct *, unsigned long addr);
extern int set_unalign_ctl(struct task_struct *, unsigned int val);
#define GET_UNALIGN_CTL(tsk, addr)	get_unalign_ctl((tsk), (addr))
#define SET_UNALIGN_CTL(tsk, val)	set_unalign_ctl((tsk), (val))
extern unsigned int mem_init_done;
const char *get_cpu_subtype(struct sh_cpuinfo *c);
extern const struct seq_operations cpuinfo_op;
#define SH_THREAD_UAC_NOPRINT	(1 << 0)
#define SH_THREAD_UAC_SIGBUS	(1 << 1)
#define SH_THREAD_UAC_MASK	(SH_THREAD_UAC_NOPRINT | SH_THREAD_UAC_SIGBUS)
#define MODE_PIN0 (1 << 0)
#define MODE_PIN1 (1 << 1)
#define MODE_PIN2 (1 << 2)
#define MODE_PIN3 (1 << 3)
#define MODE_PIN4 (1 << 4)
#define MODE_PIN5 (1 << 5)
#define MODE_PIN6 (1 << 6)
#define MODE_PIN7 (1 << 7)
#define MODE_PIN8 (1 << 8)
#define MODE_PIN9 (1 << 9)
#define MODE_PIN10 (1 << 10)
#define MODE_PIN11 (1 << 11)
#define MODE_PIN12 (1 << 12)
#define MODE_PIN13 (1 << 13)
#define MODE_PIN14 (1 << 14)
#define MODE_PIN15 (1 << 15)
int generic_mode_pins(void);
int test_mode_pin(int pin);
int vsyscall_init(void);
#define vsyscall_init() do  while (0)
# include "processor_32.h"
# include "processor_64.h"
