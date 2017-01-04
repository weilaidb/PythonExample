#define __ACPI_PROCESSOR_H
#define ACPI_PROCESSOR_BUSY_METRIC	10
#define ACPI_PROCESSOR_MAX_POWER	8
#define ACPI_PROCESSOR_MAX_C2_LATENCY	100
#define ACPI_PROCESSOR_MAX_C3_LATENCY	1000
#define ACPI_PROCESSOR_MAX_THROTTLING	16
#define ACPI_PROCESSOR_MAX_THROTTLE	250
#define ACPI_PROCESSOR_MAX_DUTY_WIDTH	4
#define ACPI_PDC_REVISION_ID		0x1
#define ACPI_PSD_REV0_REVISION		0
#define ACPI_PSD_REV0_ENTRIES		5
#define ACPI_TSD_REV0_REVISION		0
#define ACPI_TSD_REV0_ENTRIES		5
#define DOMAIN_COORD_TYPE_SW_ALL	0xfc
#define DOMAIN_COORD_TYPE_SW_ANY	0xfd
#define DOMAIN_COORD_TYPE_HW_ALL	0xfe
#define ACPI_CSTATE_SYSTEMIO	0
#define ACPI_CSTATE_FFH		1
#define ACPI_CSTATE_HALT	2
#define ACPI_CX_DESC_LEN	32
struct acpi_processor_cx;
struct acpi_power_register  __attribute__ ((packed));
struct acpi_processor_cx ;
struct acpi_processor_power ;
struct acpi_psd_package  __attribute__ ((packed));
struct acpi_pct_register  __attribute__ ((packed));
struct acpi_processor_px ;
struct acpi_processor_performance ;
struct acpi_tsd_package  __attribute__ ((packed));
struct acpi_ptc_register  __attribute__ ((packed));
struct acpi_processor_tx_tss ;
struct acpi_processor_tx ;
struct acpi_processor;
struct acpi_processor_throttling ;
struct acpi_processor_lx ;
struct acpi_processor_limit ;
struct acpi_processor_flags ;
struct acpi_processor ;
struct acpi_processor_errata ;
extern int acpi_processor_preregister_performance(struct
acpi_processor_performance
__percpu *performance);
extern int acpi_processor_register_performance(struct acpi_processor_performance
*performance, unsigned int cpu);
extern void acpi_processor_unregister_performance(struct
acpi_processor_performance
*performance,
unsigned int cpu);
int acpi_processor_notify_smm(struct module *calling_module);
DECLARE_PER_CPU(struct acpi_processor *, processors);
extern struct acpi_processor_errata errata;
void acpi_processor_power_init_bm_check(struct acpi_processor_flags *flags,
unsigned int cpu);
int acpi_processor_ffh_cstate_probe(unsigned int cpu,
struct acpi_processor_cx *cx,
struct acpi_power_register *reg);
void acpi_processor_ffh_cstate_enter(struct acpi_processor_cx *cstate);
static inline void acpi_processor_power_init_bm_check(struct
acpi_processor_flags
*flags, unsigned int cpu)
static inline int acpi_processor_ffh_cstate_probe(unsigned int cpu,
struct acpi_processor_cx *cx,
struct acpi_power_register
*reg)
static inline void acpi_processor_ffh_cstate_enter(struct acpi_processor_cx
*cstate)
void acpi_processor_ppc_init(void);
void acpi_processor_ppc_exit(void);
int acpi_processor_ppc_has_changed(struct acpi_processor *pr, int event_flag);
extern int acpi_processor_get_bios_limit(int cpu, unsigned int *limit);
static inline void acpi_processor_ppc_init(void)
static inline void acpi_processor_ppc_exit(void)
static inline int acpi_processor_ppc_has_changed(struct acpi_processor *pr,
int event_flag)
static inline int acpi_processor_get_bios_limit(int cpu, unsigned int *limit)
void acpi_processor_set_pdc(acpi_handle handle);
int acpi_get_cpuid(acpi_handle, int type, u32 acpi_id);
int acpi_processor_tstate_has_changed(struct acpi_processor *pr);
int acpi_processor_get_throttling_info(struct acpi_processor *pr);
extern int acpi_processor_set_throttling(struct acpi_processor *pr,
int state, bool force);
extern void acpi_processor_reevaluate_tstate(struct acpi_processor *pr,
unsigned long action);
extern const struct file_operations acpi_processor_throttling_fops;
extern void acpi_processor_throttling_init(void);
int acpi_processor_power_init(struct acpi_processor *pr,
struct acpi_device *device);
int acpi_processor_cst_has_changed(struct acpi_processor *pr);
int acpi_processor_power_exit(struct acpi_processor *pr,
struct acpi_device *device);
int acpi_processor_suspend(struct acpi_device * device, pm_message_t state);
int acpi_processor_resume(struct acpi_device * device);
extern struct cpuidle_driver acpi_idle_driver;
int acpi_processor_get_limit_info(struct acpi_processor *pr);
extern struct thermal_cooling_device_ops processor_cooling_ops;
void acpi_thermal_cpufreq_init(void);
void acpi_thermal_cpufreq_exit(void);
static inline void acpi_thermal_cpufreq_init(void)
static inline void acpi_thermal_cpufreq_exit(void)
