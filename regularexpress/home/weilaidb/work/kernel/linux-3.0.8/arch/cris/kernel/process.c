static struct signal_struct init_signals = INIT_SIGNALS(init_signals);
static struct sighand_struct init_sighand = INIT_SIGHAND(init_sighand);
union thread_union init_thread_union __init_task_data =
;
struct task_struct init_task = INIT_TASK(init_task);
EXPORT_SYMBOL(init_task);
int cris_hlt_counter=0;
void disable_hlt(void)
EXPORT_SYMBOL(disable_hlt);
void enable_hlt(void)
EXPORT_SYMBOL(enable_hlt);
void (*pm_idle)(void);
extern void default_idle(void);
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
void cpu_idle (void)
void hard_reset_now (void);
void machine_restart(char *cmd)
void machine_halt(void)
void machine_power_off(void)
void flush_thread(void)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpu)
