#define _ASM_X86_ACPI_H
#define COMPILER_DEPENDENT_INT64   long long
#define COMPILER_DEPENDENT_UINT64  unsigned long long
#define ACPI_SYSTEM_XFACE
#define ACPI_EXTERNAL_XFACE
#define ACPI_INTERNAL_XFACE
#define ACPI_INTERNAL_VAR_XFACE
#define ACPI_ASM_MACROS
#define BREAKPOINT3
#define ACPI_DISABLE_IRQS() local_irq_disable()
#define ACPI_ENABLE_IRQS()  local_irq_enable()
#define ACPI_FLUSH_CPU_CACHE()	wbinvd()
int __acpi_acquire_global_lock(unsigned int *lock);
int __acpi_release_global_lock(unsigned int *lock);
#define ACPI_ACQUIRE_GLOBAL_LOCK(facs, Acq) \
((Acq) = __acpi_acquire_global_lock(&facs->global_lock))
#define ACPI_RELEASE_GLOBAL_LOCK(facs, Acq) \
((Acq) = __acpi_release_global_lock(&facs->global_lock))
#define ACPI_DIV_64_BY_32(n_hi, n_lo, d32, q32, r32) \
asm("divl %2;"				     \
: "=a"(q32), "=d"(r32)		     \
: "r"(d32),				     \
"0"(n_lo), "1"(n_hi))
#define ACPI_SHIFT_RIGHT_64(n_hi, n_lo) \
asm("shrl   $1,%2	;"	\
"rcrl   $1,%3;"		\
: "=r"(n_hi), "=r"(n_lo)	\
: "0"(n_hi), "1"(n_lo))
extern int acpi_lapic;
extern int acpi_ioapic;
extern int acpi_noirq;
extern int acpi_strict;
extern int acpi_disabled;
extern int acpi_pci_disabled;
extern int acpi_skip_timer_override;
extern int acpi_use_timer_override;
extern int acpi_fix_pin2_polarity;
extern u8 acpi_sci_flags;
extern int acpi_sci_override_gsi;
void acpi_pic_sci_set_trigger(unsigned int, u16);
extern int (*__acpi_register_gsi)(struct device *dev, u32 gsi,
int trigger, int polarity);
static inline void disable_acpi(void)
extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);
static inline void acpi_noirq_set(void)
static inline void acpi_disable_pci(void)
extern int acpi_suspend_lowlevel(void);
extern const unsigned char acpi_wakeup_code[];
#define acpi_wakeup_address (__pa(TRAMPOLINE_SYM(acpi_wakeup_code)))
extern void acpi_reserve_wakeup_memory(void);
static inline unsigned int acpi_processor_cstate_check(unsigned int max_cstate)
static inline bool arch_has_acpi_pdc(void)
static inline void arch_acpi_set_pdc_bits(u32 *buf)
#define acpi_lapic 0
#define acpi_ioapic 0
static inline void acpi_noirq_set(void)
static inline void acpi_disable_pci(void)
static inline void disable_acpi(void)
#define ARCH_HAS_POWER_INIT	1
extern int acpi_numa;
extern int x86_acpi_numa_init(void);
#define acpi_unlazy_tlb(x)	leave_mm(x)
