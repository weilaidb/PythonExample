#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
int crashing_cpu = -1;
static cpumask_t cpus_in_crash = CPU_MASK_NONE;
cpumask_t cpus_in_sr = CPU_MASK_NONE;
#define CRASH_HANDLER_MAX 3
static crash_shutdown_t crash_shutdown_handles[CRASH_HANDLER_MAX+1];
static DEFINE_SPINLOCK(crash_handlers_lock);
static atomic_t enter_on_soft_reset = ATOMIC_INIT(0);
void crash_ipi_callback(struct pt_regs *regs)
static void crash_soft_reset_check(int cpu)
static void crash_kexec_prepare_cpus(int cpu)
void crash_kexec_secondary(struct pt_regs *regs)
static void crash_kexec_prepare_cpus(int cpu)
void crash_kexec_secondary(struct pt_regs *regs)
#if defined(CONFIG_SMP) && defined(CONFIG_PPC_STD_MMU_64)
static void crash_kexec_wait_realmode(int cpu)
static inline void crash_kexec_wait_realmode(int cpu)
int crash_shutdown_register(crash_shutdown_t handler)
EXPORT_SYMBOL(crash_shutdown_register);
int crash_shutdown_unregister(crash_shutdown_t handler)
EXPORT_SYMBOL(crash_shutdown_unregister);
static unsigned long crash_shutdown_buf[JMP_BUF_LEN];
static int crash_shutdown_cpu = -1;
static int handle_fault(struct pt_regs *regs)
void default_machine_crash_shutdown(struct pt_regs *regs)
