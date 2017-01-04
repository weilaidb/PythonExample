void vfp_testing_entry(void);
void vfp_support_entry(void);
void vfp_null_entry(void);
void (*vfp_vector)(void) = vfp_null_entry;
union vfp_state *last_VFP_context[NR_CPUS];
unsigned int VFP_arch;
static void vfp_thread_flush(struct thread_info *thread)
static void vfp_thread_exit(struct thread_info *thread)
static void vfp_thread_copy(struct thread_info *thread)
static int vfp_notifier(struct notifier_block *self, unsigned long cmd, void *v)
static struct notifier_block vfp_notifier_block = ;
static void vfp_raise_sigfpe(unsigned int sicode, struct pt_regs *regs)
static void vfp_panic(char *reason, u32 inst)
static void vfp_raise_exceptions(u32 exceptions, u32 inst, u32 fpscr, struct pt_regs *regs)
static u32 vfp_emulate_instruction(u32 inst, u32 fpscr, struct pt_regs *regs)
void VFP_bounce(u32 trigger, u32 fpexc, struct pt_regs *regs)
static void vfp_enable(void *unused)
static int vfp_pm_suspend(void)
static void vfp_pm_resume(void)
static struct syscore_ops vfp_pm_syscore_ops = ;
static void vfp_pm_init(void)
static inline void vfp_pm_init(void)
void vfp_sync_hwstate(struct thread_info *thread)
void vfp_flush_hwstate(struct thread_info *thread)
static int vfp_hotplug(struct notifier_block *b, unsigned long action,
void *hcpu)
static int __init vfp_init(void)
late_initcall(vfp_init);
