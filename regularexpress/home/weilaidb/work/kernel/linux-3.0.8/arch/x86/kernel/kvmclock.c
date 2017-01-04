static int kvmclock = 1;
static int msr_kvm_system_time = MSR_KVM_SYSTEM_TIME;
static int msr_kvm_wall_clock = MSR_KVM_WALL_CLOCK;
static int parse_no_kvmclock(char *arg)
early_param("no-kvmclock", parse_no_kvmclock);
static DEFINE_PER_CPU_SHARED_ALIGNED(struct pvclock_vcpu_time_info, hv_clock);
static struct pvclock_wall_clock wall_clock;
static unsigned long kvm_get_wallclock(void)
static int kvm_set_wallclock(unsigned long now)
static cycle_t kvm_clock_read(void)
static cycle_t kvm_clock_get_cycles(struct clocksource *cs)
static unsigned long kvm_get_tsc_khz(void)
static void kvm_get_preset_lpj(void)
static struct clocksource kvm_clock = ;
int kvm_register_clock(char *txt)
static void __cpuinit kvm_setup_secondary_clock(void)
static void kvm_crash_shutdown(struct pt_regs *regs)
static void kvm_shutdown(void)
void __init kvmclock_init(void)
