static struct op_x86_model_spec *model;
static DEFINE_PER_CPU(struct op_msrs, cpu_msrs);
static DEFINE_PER_CPU(unsigned long, saved_lvtpc);
static int nmi_enabled;
static int ctr_running;
struct op_counter_config counter_config[OP_MAX_COUNTER];
u64 op_x86_get_ctrl(struct op_x86_model_spec const *model,
struct op_counter_config *counter_config)
static int profile_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
static void nmi_cpu_save_registers(struct op_msrs *msrs)
static void nmi_cpu_start(void *dummy)
static int nmi_start(void)
static void nmi_cpu_stop(void *dummy)
static void nmi_stop(void)
static DEFINE_PER_CPU(int, switch_index);
static inline int has_mux(void)
inline int op_x86_phys_to_virt(int phys)
inline int op_x86_virt_to_phys(int virt)
static void nmi_shutdown_mux(void)
static int nmi_setup_mux(void)
static void nmi_cpu_setup_mux(int cpu, struct op_msrs const * const msrs)
static void nmi_cpu_save_mpx_registers(struct op_msrs *msrs)
static void nmi_cpu_restore_mpx_registers(struct op_msrs *msrs)
static void nmi_cpu_switch(void *dummy)
static int nmi_multiplex_on(void)
static int nmi_switch_event(void)
static inline void mux_init(struct oprofile_operations *ops)
static void mux_clone(int cpu)
inline int op_x86_phys_to_virt(int phys)
inline int op_x86_virt_to_phys(int virt)
static inline void nmi_shutdown_mux(void)
static inline int nmi_setup_mux(void)
static inline void
nmi_cpu_setup_mux(int cpu, struct op_msrs const * const msrs)
static inline void mux_init(struct oprofile_operations *ops)
static void mux_clone(int cpu)
static void free_msrs(void)
static int allocate_msrs(void)
static void nmi_cpu_setup(void *dummy)
static struct notifier_block profile_exceptions_nb = ;
static void nmi_cpu_restore_registers(struct op_msrs *msrs)
static void nmi_cpu_shutdown(void *dummy)
static void nmi_cpu_up(void *dummy)
static void nmi_cpu_down(void *dummy)
static int nmi_create_files(struct super_block *sb, struct dentry *root)
static int oprofile_cpu_notifier(struct notifier_block *b, unsigned long action,
void *data)
static struct notifier_block oprofile_cpu_nb = ;
static int nmi_setup(void)
static void nmi_shutdown(void)
static int nmi_suspend(void)
static void nmi_resume(void)
static struct syscore_ops oprofile_syscore_ops = ;
static void __init init_suspend_resume(void)
static void exit_suspend_resume(void)
static inline void init_suspend_resume(void)
static inline void exit_suspend_resume(void)
static int __init p4_init(char **cpu_type)
static int force_arch_perfmon;
static int force_cpu_type(const char *str, struct kernel_param *kp)
module_param_call(cpu_type, force_cpu_type, NULL, NULL, 0);
static int __init ppro_init(char **cpu_type)
int __init op_nmi_init(struct oprofile_operations *ops)
void op_nmi_exit(void)
