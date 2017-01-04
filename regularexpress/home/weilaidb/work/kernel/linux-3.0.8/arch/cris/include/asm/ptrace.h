#define _CRIS_PTRACE_H
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define profile_pc(regs) instruction_pointer(regs)
