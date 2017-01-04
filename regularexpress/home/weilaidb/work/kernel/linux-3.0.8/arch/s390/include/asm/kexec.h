#define _S390_KEXEC_H
#define KEXEC_SOURCE_MEMORY_LIMIT (-1UL)
#define KEXEC_DESTINATION_MEMORY_LIMIT (-1UL)
#define KEXEC_CONTROL_MEMORY_LIMIT (1UL<<31)
#define KEXEC_CONTROL_PAGE_SIZE 4096
#define KEXEC_ARCH KEXEC_ARCH_S390
static inline void crash_setup_regs(struct pt_regs *newregs,
struct pt_regs *oldregs)
