#define _ASM_ACPI_H
#define COMPILER_DEPENDENT_INT64	long
#define COMPILER_DEPENDENT_UINT64	unsigned long
#define ACPI_SYSTEM_XFACE
#define ACPI_EXTERNAL_XFACE
#define ACPI_INTERNAL_XFACE
#define ACPI_INTERNAL_VAR_XFACE
#define ACPI_ASM_MACROS
#define BREAKPOINT3
#define ACPI_DISABLE_IRQS() local_irq_disable()
#define ACPI_ENABLE_IRQS()  local_irq_enable()
#define ACPI_FLUSH_CPU_CACHE()
static inline int
ia64_acpi_acquire_global_lock (unsigned int *lock)
static inline int
ia64_acpi_release_global_lock (unsigned int *lock)
#define ACPI_ACQUIRE_GLOBAL_LOCK(facs, Acq)				\
((Acq) = ia64_acpi_acquire_global_lock(&facs->global_lock))
#define ACPI_RELEASE_GLOBAL_LOCK(facs, Acq)				\
((Acq) = ia64_acpi_release_global_lock(&facs->global_lock))
#define acpi_disabled 0
#define acpi_noirq 0
#define acpi_pci_disabled 0
#define acpi_strict 1
#define acpi_processor_cstate_check(x) (x)
static inline void disable_acpi(void)
static inline void pci_acpi_crs_quirks(void)
const char *acpi_get_sysname (void);
static inline const char *acpi_get_sysname (void)
int acpi_request_vector (u32 int_type);
int acpi_gsi_to_irq (u32 gsi, unsigned int *irq);
extern int acpi_suspend_lowlevel(void);
extern unsigned long acpi_wakeup_address;
extern unsigned int can_cpei_retarget(void);
extern unsigned int is_cpu_cpei_target(unsigned int cpu);
extern void set_cpei_target_cpu(unsigned int cpu);
extern unsigned int get_cpei_target_cpu(void);
extern void prefill_possible_map(void);
extern int additional_cpus;
#define additional_cpus 0
#if MAX_NUMNODES > 256
#define MAX_PXM_DOMAINS MAX_NUMNODES
#define MAX_PXM_DOMAINS (256)
extern int __devinitdata pxm_to_nid_map[MAX_PXM_DOMAINS];
extern int __initdata nid_to_pxm_map[MAX_NUMNODES];
static inline bool arch_has_acpi_pdc(void)
static inline void arch_acpi_set_pdc_bits(u32 *buf)
#define acpi_unlazy_tlb(x)
extern cpumask_t early_cpu_possible_map;
#define for_each_possible_early_cpu(cpu)  \
for_each_cpu_mask((cpu), early_cpu_possible_map)
static inline void per_cpu_scan_finalize(int min_cpus, int reserve_cpus)
