# define _MIPS_KEXEC
#define KEXEC_SOURCE_MEMORY_LIMIT (0x20000000)
#define KEXEC_DESTINATION_MEMORY_LIMIT (0x20000000)
#define KEXEC_CONTROL_MEMORY_LIMIT (0x20000000)
#define KEXEC_CONTROL_PAGE_SIZE 4096
#define KEXEC_ARCH KEXEC_ARCH_MIPS
static inline void crash_setup_regs(struct pt_regs *newregs,
struct pt_regs *oldregs)
