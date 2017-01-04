#define __PTRACE_USER_H__
extern int ptrace_getregs(long pid, unsigned long *regs_out);
extern int ptrace_setregs(long pid, unsigned long *regs_in);
#define PTRACE_SYSEMU 31
#define PTRACE_SYSEMU_SINGLESTEP 32
#define PTRACE_OLDSETOPTIONS PTRACE_SETOPTIONS
void set_using_sysemu(int value);
int get_using_sysemu(void);
extern int sysemu_supported;
#define SELECT_PTRACE_OPERATION(sysemu_mode, singlestep_mode) \
(((int[3][3] ) ) \
[sysemu_mode][singlestep_mode])
