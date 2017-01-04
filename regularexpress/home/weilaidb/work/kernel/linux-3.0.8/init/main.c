static int kernel_init(void *);
extern void init_IRQ(void);
extern void fork_init(unsigned long);
extern void mca_init(void);
extern void sbus_init(void);
extern void prio_tree_init(void);
extern void radix_tree_init(void);
extern void free_initmem(void);
static inline void mark_rodata_ro(void)
extern void tc_init(void);
bool early_boot_irqs_disabled __read_mostly;
enum system_states system_state __read_mostly;
EXPORT_SYMBOL(system_state);
#define MAX_INIT_ARGS CONFIG_INIT_ENV_ARG_LIMIT
#define MAX_INIT_ENVS CONFIG_INIT_ENV_ARG_LIMIT
extern void time_init(void);
void (*__initdata late_time_init)(void);
extern void softirq_init(void);
char __initdata boot_command_line[COMMAND_LINE_SIZE];
char *saved_command_line;
static char *static_command_line;
static char *execute_command;
static char *ramdisk_execute_command;
unsigned int reset_devices;
EXPORT_SYMBOL(reset_devices);
static int __init set_reset_devices(char *str)
__setup("reset_devices", set_reset_devices);
static const char * argv_init[MAX_INIT_ARGS+2] = ;
const char * envp_init[MAX_INIT_ENVS+2] = ;
static const char *panic_later, *panic_param;
extern const struct obs_kernel_param __setup_start[], __setup_end[];
static int __init obsolete_checksetup(char *line)
unsigned long loops_per_jiffy = (1<<12);
EXPORT_SYMBOL(loops_per_jiffy);
static int __init debug_kernel(char *str)
static int __init quiet_kernel(char *str)
early_param("debug", debug_kernel);
early_param("quiet", quiet_kernel);
static int __init loglevel(char *str)
early_param("loglevel", loglevel);
static int __init unknown_bootoption(char *param, char *val)
int __read_mostly debug_pagealloc_enabled = 0;
static int __init init_setup(char *str)
__setup("init=", init_setup);
static int __init rdinit_setup(char *str)
__setup("rdinit=", rdinit_setup);
static const unsigned int setup_max_cpus = NR_CPUS;
static void __init smp_init(void)
#define smp_init()	do  while (0)
static inline void setup_nr_cpu_ids(void)
static inline void smp_prepare_cpus(unsigned int maxcpus)
static void __init setup_command_line(char *command_line)
static __initdata DECLARE_COMPLETION(kthreadd_done);
static noinline void __init_refok rest_init(void)
static int __init do_early_param(char *param, char *val)
void __init parse_early_options(char *cmdline)
void __init parse_early_param(void)
static void __init boot_cpu_init(void)
void __init __weak smp_setup_processor_id(void)
void __init __weak thread_info_cache_init(void)
static void __init mm_init(void)
asmlinkage void __init start_kernel(void)
static void __init do_ctors(void)
int initcall_debug;
core_param(initcall_debug, initcall_debug, bool, 0644);
static char msgbuf[64];
static int __init_or_module do_one_initcall_debug(initcall_t fn)
int __init_or_module do_one_initcall(initcall_t fn)
extern initcall_t __initcall_start[], __initcall_end[], __early_initcall_end[];
static void __init do_initcalls(void)
static void __init do_basic_setup(void)
static void __init do_pre_smp_initcalls(void)
static void run_init_process(const char *init_filename)
static noinline int init_post(void)
static int __init kernel_init(void * unused)
