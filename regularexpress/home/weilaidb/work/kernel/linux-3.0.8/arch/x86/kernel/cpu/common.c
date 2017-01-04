cpumask_var_t cpu_initialized_mask;
cpumask_var_t cpu_callout_mask;
cpumask_var_t cpu_callin_mask;
cpumask_var_t cpu_sibling_setup_mask;
void __init setup_cpu_local_masks(void)
static void __cpuinit default_init(struct cpuinfo_x86 *c)
static const struct cpu_dev __cpuinitconst default_cpu = ;
static const struct cpu_dev *this_cpu __cpuinitdata = &default_cpu;
DEFINE_PER_CPU_PAGE_ALIGNED(struct gdt_page, gdt_page) = ;
EXPORT_PER_CPU_SYMBOL_GPL(gdt_page);
static int __init x86_xsave_setup(char *s)
__setup("noxsave", x86_xsave_setup);
static int __init x86_xsaveopt_setup(char *s)
__setup("noxsaveopt", x86_xsaveopt_setup);
static int cachesize_override __cpuinitdata = -1;
static int disable_x86_serial_nr __cpuinitdata = 1;
static int __init cachesize_setup(char *str)
__setup("cachesize=", cachesize_setup);
static int __init x86_fxsr_setup(char *s)
__setup("nofxsr", x86_fxsr_setup);
static int __init x86_sep_setup(char *s)
__setup("nosep", x86_sep_setup);
static inline int flag_is_changeable_p(u32 flag)
static int __cpuinit have_cpuid_p(void)
static void __cpuinit squash_the_stupid_serial_number(struct cpuinfo_x86 *c)
static int __init x86_serial_nr_setup(char *s)
__setup("serialnumber", x86_serial_nr_setup);
static inline int flag_is_changeable_p(u32 flag)
static inline int have_cpuid_p(void)
static inline void squash_the_stupid_serial_number(struct cpuinfo_x86 *c)
static int disable_smep __cpuinitdata;
static __init int setup_disable_smep(char *arg)
__setup("nosmep", setup_disable_smep);
static __cpuinit void setup_smep(struct cpuinfo_x86 *c)
struct cpuid_dependent_feature ;
static const struct cpuid_dependent_feature __cpuinitconst
cpuid_dependent_features[] = ;
static void __cpuinit filter_cpuid_features(struct cpuinfo_x86 *c, bool warn)
static const char *__cpuinit table_lookup_model(struct cpuinfo_x86 *c)
__u32 cpu_caps_cleared[NCAPINTS] __cpuinitdata;
__u32 cpu_caps_set[NCAPINTS] __cpuinitdata;
void load_percpu_segment(int cpu)
void switch_to_new_gdt(int cpu)
static const struct cpu_dev *__cpuinitdata cpu_devs[X86_VENDOR_NUM] = ;
static void __cpuinit get_model_name(struct cpuinfo_x86 *c)
void __cpuinit cpu_detect_cache_sizes(struct cpuinfo_x86 *c)
void __cpuinit detect_ht(struct cpuinfo_x86 *c)
static void __cpuinit get_cpu_vendor(struct cpuinfo_x86 *c)
void __cpuinit cpu_detect(struct cpuinfo_x86 *c)
void __cpuinit get_cpu_cap(struct cpuinfo_x86 *c)
static void __cpuinit identify_cpu_without_cpuid(struct cpuinfo_x86 *c)
static void __init early_identify_cpu(struct cpuinfo_x86 *c)
void __init early_cpu_init(void)
static void __cpuinit detect_nopl(struct cpuinfo_x86 *c)
static void __cpuinit generic_identify(struct cpuinfo_x86 *c)
static void __cpuinit identify_cpu(struct cpuinfo_x86 *c)
static void vgetcpu_set_mode(void)
void __init identify_boot_cpu(void)
void __cpuinit identify_secondary_cpu(struct cpuinfo_x86 *c)
struct msr_range ;
static const struct msr_range msr_range_array[] __cpuinitconst = ;
static void __cpuinit print_cpu_msr(void)
static int show_msr __cpuinitdata;
static __init int setup_show_msr(char *arg)
__setup("show_msr=", setup_show_msr);
static __init int setup_noclflush(char *arg)
__setup("noclflush", setup_noclflush);
void __cpuinit print_cpu_info(struct cpuinfo_x86 *c)
static __init int setup_disablecpuid(char *arg)
__setup("clearcpuid=", setup_disablecpuid);
struct desc_ptr idt_descr = ;
DEFINE_PER_CPU_FIRST(union irq_stack_union,
irq_stack_union) __aligned(PAGE_SIZE);
DEFINE_PER_CPU(struct task_struct *, current_task) ____cacheline_aligned =
&init_task;
EXPORT_PER_CPU_SYMBOL(current_task);
DEFINE_PER_CPU(unsigned long, kernel_stack) =
(unsigned long)&init_thread_union - KERNEL_STACK_OFFSET + THREAD_SIZE;
EXPORT_PER_CPU_SYMBOL(kernel_stack);
DEFINE_PER_CPU(char *, irq_stack_ptr) =
init_per_cpu_var(irq_stack_union.irq_stack) + IRQ_STACK_SIZE - 64;
DEFINE_PER_CPU(unsigned int, irq_count) = -1;
static const unsigned int exception_stack_sizes[N_EXCEPTION_STACKS] = ;
static DEFINE_PER_CPU_PAGE_ALIGNED(char, exception_stacks
[(N_EXCEPTION_STACKS - 1) * EXCEPTION_STKSZ + DEBUG_STKSZ]);
void syscall_init(void)
unsigned long kernel_eflags;
DEFINE_PER_CPU(struct orig_ist, orig_ist);
DEFINE_PER_CPU(struct task_struct *, current_task) = &init_task;
EXPORT_PER_CPU_SYMBOL(current_task);
DEFINE_PER_CPU_ALIGNED(struct stack_canary, stack_canary);
struct pt_regs * __cpuinit idle_regs(struct pt_regs *regs)
static void clear_all_debug_regs(void)
static void dbg_restore_debug_regs(void)
#define dbg_restore_debug_regs()
void __cpuinit cpu_init(void)
void __cpuinit cpu_init(void)
