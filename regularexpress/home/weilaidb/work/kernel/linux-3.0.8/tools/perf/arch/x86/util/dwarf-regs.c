#define X86_32_MAX_REGS 8
const char *x86_32_regs_table[X86_32_MAX_REGS] = ;
#define X86_64_MAX_REGS 16
const char *x86_64_regs_table[X86_64_MAX_REGS] = ;
#define ARCH_MAX_REGS X86_64_MAX_REGS
#define arch_regs_table x86_64_regs_table
#define ARCH_MAX_REGS X86_32_MAX_REGS
#define arch_regs_table x86_32_regs_table
const char *get_arch_regstr(unsigned int n)
