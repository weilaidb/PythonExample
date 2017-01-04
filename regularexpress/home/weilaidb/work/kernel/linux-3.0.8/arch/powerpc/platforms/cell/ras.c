#undef DEBUG
static void dump_fir(int cpu)
void cbe_system_error_exception(struct pt_regs *regs)
void cbe_maintenance_exception(struct pt_regs *regs)
void cbe_thermal_exception(struct pt_regs *regs)
static int cbe_machine_check_handler(struct pt_regs *regs)
struct ptcal_area ;
static LIST_HEAD(ptcal_list);
static int ptcal_start_tok, ptcal_stop_tok;
static int __init cbe_ptcal_enable_on_node(int nid, int order)
static int __init cbe_ptcal_enable(void)
static int cbe_ptcal_disable(void)
static int cbe_ptcal_notify_reboot(struct notifier_block *nb,
unsigned long code, void *data)
static void cbe_ptcal_crash_shutdown(void)
static struct notifier_block cbe_ptcal_reboot_notifier = ;
static int sysreset_hack;
static int __init cbe_sysreset_init(void)
device_initcall(cbe_sysreset_init);
int cbe_sysreset_hack(void)
int __init cbe_ptcal_init(void)
arch_initcall(cbe_ptcal_init);
void __init cbe_ras_init(void)
