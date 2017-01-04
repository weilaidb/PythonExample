int in_crash_kexec;
#if defined(CONFIG_SMP) && defined(CONFIG_X86_LOCAL_APIC)
static void kdump_nmi_callback(int cpu, struct die_args *args)
static void kdump_nmi_shootdown_cpus(void)
static void kdump_nmi_shootdown_cpus(void)
void native_machine_crash_shutdown(struct pt_regs *regs)
