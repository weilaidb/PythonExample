#define _ASM_X86_PVCLOCK_ABI_H
struct pvclock_vcpu_time_info  __attribute__((__packed__));
struct pvclock_wall_clock  __attribute__((__packed__));
#define PVCLOCK_TSC_STABLE_BIT	(1 << 0)
