#define _ASM_POWERPC_KEXEC_H
#define KEXEC_SOURCE_MEMORY_LIMIT	(2 * 1024 * 1024 * 1024UL - 1)
#define KEXEC_DESTINATION_MEMORY_LIMIT	(2 * 1024 * 1024 * 1024UL - 1)
#define KEXEC_CONTROL_MEMORY_LIMIT	(2 * 1024 * 1024 * 1024UL - 1)
#define KEXEC_SOURCE_MEMORY_LIMIT (-1UL)
#define KEXEC_DESTINATION_MEMORY_LIMIT (-1UL)
#define KEXEC_CONTROL_MEMORY_LIMIT (-1UL)
#define KEXEC_CONTROL_MEMORY_LIMIT TASK_SIZE
#define KEXEC_CONTROL_PAGE_SIZE 4096
#define KEXEC_ARCH KEXEC_ARCH_PPC64
#define KEXEC_ARCH KEXEC_ARCH_PPC
#define KEXEC_STATE_NONE 0
#define KEXEC_STATE_IRQS_OFF 1
#define KEXEC_STATE_REAL_MODE 2
typedef void (*crash_shutdown_t)(void);
static inline void crash_setup_regs(struct pt_regs *newregs,
struct pt_regs *oldregs)
extern void kexec_smp_wait(void);
extern int crashing_cpu;
extern void crash_send_ipi(void (*crash_ipi_callback)(struct pt_regs *));
extern cpumask_t cpus_in_sr;
static inline int kexec_sr_activated(int cpu)
struct kimage;
struct pt_regs;
extern void default_machine_kexec(struct kimage *image);
extern int default_machine_kexec_prepare(struct kimage *image);
extern void default_machine_crash_shutdown(struct pt_regs *regs);
extern int crash_shutdown_register(crash_shutdown_t handler);
extern int crash_shutdown_unregister(crash_shutdown_t handler);
extern void machine_kexec_simple(struct kimage *image);
extern void crash_kexec_secondary(struct pt_regs *regs);
extern int overlaps_crashkernel(unsigned long start, unsigned long size);
extern void reserve_crashkernel(void);
extern void machine_kexec_mask_interrupts(void);
static inline int kexec_sr_activated(int cpu)
static inline void crash_kexec_secondary(struct pt_regs *regs)
static inline int overlaps_crashkernel(unsigned long start, unsigned long size)
static inline void reserve_crashkernel(void)
static inline int crash_shutdown_register(crash_shutdown_t handler)
static inline int crash_shutdown_unregister(crash_shutdown_t handler)
