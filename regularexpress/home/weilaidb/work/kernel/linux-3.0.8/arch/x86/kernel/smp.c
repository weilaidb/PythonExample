static void native_smp_send_reschedule(int cpu)
void native_send_call_func_single_ipi(int cpu)
void native_send_call_func_ipi(const struct cpumask *mask)
asmlinkage void smp_reboot_interrupt(void)
static void native_stop_other_cpus(int wait)
void smp_reschedule_interrupt(struct pt_regs *regs)
void smp_call_function_interrupt(struct pt_regs *regs)
void smp_call_function_single_interrupt(struct pt_regs *regs)
struct smp_ops smp_ops = ;
EXPORT_SYMBOL_GPL(smp_ops);
