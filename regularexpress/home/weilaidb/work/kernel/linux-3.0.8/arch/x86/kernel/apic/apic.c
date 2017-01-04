unsigned int num_processors;
unsigned disabled_cpus __cpuinitdata;
unsigned int boot_cpu_physical_apicid = -1U;
unsigned int max_physical_apicid;
physid_mask_t phys_cpu_present_map;
DEFINE_EARLY_PER_CPU(u16, x86_cpu_to_apicid, BAD_APICID);
DEFINE_EARLY_PER_CPU(u16, x86_bios_cpu_apicid, BAD_APICID);
EXPORT_EARLY_PER_CPU_SYMBOL(x86_cpu_to_apicid);
EXPORT_EARLY_PER_CPU_SYMBOL(x86_bios_cpu_apicid);
DEFINE_EARLY_PER_CPU(int, x86_cpu_to_logical_apicid, BAD_APICID);
static int force_enable_local_apic __initdata;
static int __init parse_lapic(char *arg)
early_param("lapic", parse_lapic);
static int enabled_via_apicbase;
static inline void imcr_pic_to_apic(void)
static inline void imcr_apic_to_pic(void)
static int apic_calibrate_pmtmr __initdata;
static __init int setup_apicpmtimer(char *s)
__setup("apicpmtimer", setup_apicpmtimer);
int x2apic_mode;
static int x2apic_preenabled;
static __init int setup_nox2apic(char *str)
early_param("nox2apic", setup_nox2apic);
unsigned long mp_lapic_addr;
int disable_apic;
static int disable_apic_timer __initdata;
int local_apic_timer_c2_ok;
EXPORT_SYMBOL_GPL(local_apic_timer_c2_ok);
int first_system_vector = 0xfe;
unsigned int apic_verbosity;
int pic_mode;
int smp_found_config;
static struct resource lapic_resource = ;
static unsigned int calibration_result;
static void apic_pm_activate(void);
static unsigned long apic_phys;
static inline int lapic_get_version(void)
static inline int lapic_is_integrated(void)
static int modern_apic(void)
static void __init apic_disable(void)
void native_apic_wait_icr_idle(void)
u32 native_safe_apic_wait_icr_idle(void)
void native_apic_icr_write(u32 low, u32 id)
u64 native_apic_icr_read(void)
int get_physical_broadcast(void)
int lapic_get_maxlvt(void)
#define APIC_DIVISOR 16
static void __setup_APIC_LVTT(unsigned int clocks, int oneshot, int irqen)
static atomic_t eilvt_offsets[APIC_EILVT_NR_MAX];
static inline int eilvt_entry_is_changeable(unsigned int old, unsigned int new)
static unsigned int reserve_eilvt_offset(int offset, unsigned int new)
int setup_APIC_eilvt(u8 offset, u8 vector, u8 msg_type, u8 mask)
EXPORT_SYMBOL_GPL(setup_APIC_eilvt);
static int lapic_next_event(unsigned long delta,
struct clock_event_device *evt)
static void lapic_timer_setup(enum clock_event_mode mode,
struct clock_event_device *evt)
static void lapic_timer_broadcast(const struct cpumask *mask)
static struct clock_event_device lapic_clockevent = ;
static DEFINE_PER_CPU(struct clock_event_device, lapic_events);
static void __cpuinit setup_APIC_timer(void)
#define LAPIC_CAL_LOOPS		(HZ/10)
static __initdata int lapic_cal_loops = -1;
static __initdata long lapic_cal_t1, lapic_cal_t2;
static __initdata unsigned long long lapic_cal_tsc1, lapic_cal_tsc2;
static __initdata unsigned long lapic_cal_pm1, lapic_cal_pm2;
static __initdata unsigned long lapic_cal_j1, lapic_cal_j2;
static void __init lapic_cal_handler(struct clock_event_device *dev)
static int __init
calibrate_by_pmtimer(long deltapm, long *delta, long *deltatsc)
static int __init calibrate_APIC_clock(void)
void __init setup_boot_APIC_clock(void)
void __cpuinit setup_secondary_APIC_clock(void)
static void local_apic_timer_interrupt(void)
void __irq_entry smp_apic_timer_interrupt(struct pt_regs *regs)
int setup_profiling_timer(unsigned int multiplier)
void clear_local_APIC(void)
void disable_local_APIC(void)
void lapic_shutdown(void)
int __init verify_local_APIC(void)
void __init sync_Arb_IDs(void)
void __init init_bsp_APIC(void)
static void __cpuinit lapic_setup_esr(void)
void __cpuinit setup_local_APIC(void)
void __cpuinit end_local_APIC_setup(void)
void __init bsp_end_local_APIC_setup(void)
void check_x2apic(void)
void enable_x2apic(void)
int __init enable_IR(void)
void __init enable_IR_x2apic(void)
static int __init detect_init_APIC(void)
static int __init apic_verify(void)
int __init apic_force_enable(unsigned long addr)
static int __init detect_init_APIC(void)
void __init init_apic_mappings(void)
void __init register_lapic_address(unsigned long address)
int apic_version[MAX_LOCAL_APIC];
int __init APIC_init_uniprocessor(void)
void smp_spurious_interrupt(struct pt_regs *regs)
void smp_error_interrupt(struct pt_regs *regs)
void __init connect_bsp_APIC(void)
void disconnect_bsp_APIC(int virt_wire_setup)
void __cpuinit generic_processor_info(int apicid, int version)
int hard_smp_processor_id(void)
void default_init_apic_ldr(void)
static struct  apic_pm_state;
static int lapic_suspend(void)
static void lapic_resume(void)
static struct syscore_ops lapic_syscore_ops = ;
static void __cpuinit apic_pm_activate(void)
static int __init init_lapic_sysfs(void)
core_initcall(init_lapic_sysfs);
static void apic_pm_activate(void)
static int __cpuinit apic_cluster_num(void)
static int __cpuinitdata multi_checked;
static int __cpuinitdata multi;
static int __cpuinit set_multi(const struct dmi_system_id *d)
static const __cpuinitconst struct dmi_system_id multi_dmi_table[] = ;
static void __cpuinit dmi_check_multi(void)
__cpuinit int apic_is_clustered_box(void)
static int __init setup_disableapic(char *arg)
early_param("disableapic", setup_disableapic);
static int __init setup_nolapic(char *arg)
early_param("nolapic", setup_nolapic);
static int __init parse_lapic_timer_c2_ok(char *arg)
early_param("lapic_timer_c2_ok", parse_lapic_timer_c2_ok);
static int __init parse_disable_apic_timer(char *arg)
early_param("noapictimer", parse_disable_apic_timer);
static int __init parse_nolapic_timer(char *arg)
early_param("nolapic_timer", parse_nolapic_timer);
static int __init apic_set_verbosity(char *arg)
early_param("apic", apic_set_verbosity);
static int __init lapic_insert_resource(void)
late_initcall(lapic_insert_resource);
