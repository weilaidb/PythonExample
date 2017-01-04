static void ptrace_child(void)
static void fatal_perror(const char *str)
static void fatal(char *fmt, ...)
static void non_fatal(char *fmt, ...)
static int start_ptraced_child(void)
static int stop_ptraced_child(int pid, int exitcode, int mustexit)
int ptrace_faultinfo;
static int disable_ptrace_faultinfo;
int ptrace_ldt;
static int disable_ptrace_ldt;
int proc_mm;
static int disable_proc_mm;
int have_switch_mm;
static int disable_switch_mm;
int skas_needs_stub;
static int __init skas0_cmd_param(char *str, int* add)
static int __init mode_skas0_cmd_param(char *str, int* add)
__attribute__((alias("skas0_cmd_param")));
__uml_setup("skas0", skas0_cmd_param,
"skas0\n"
"    Disables SKAS3 and SKAS4 usage, so that SKAS0 is used\n\n");
__uml_setup("mode=skas0", mode_skas0_cmd_param,
"mode=skas0\n"
"    Disables SKAS3 and SKAS4 usage, so that SKAS0 is used.\n\n");
static int force_sysemu_disabled = 0;
static int __init nosysemu_cmd_param(char *str, int* add)
__uml_setup("nosysemu", nosysemu_cmd_param,
"nosysemu\n"
"    Turns off syscall emulation patch for ptrace (SYSEMU) on.\n"
"    SYSEMU is a performance-patch introduced by Laurent Vivier. It changes\n"
"    behaviour of ptrace() and helps reducing host context switch rate.\n"
"    To make it working, you need a kernel patch for your host, too.\n"
"    See http:
"    information.\n\n");
static void __init check_sysemu(void)
static void __init check_ptrace(void)
extern void check_tmpexec(void);
static void __init check_coredump_limit(void)
void __init os_early_checks(void)
static int __init noprocmm_cmd_param(char *str, int* add)
__uml_setup("noprocmm", noprocmm_cmd_param,
"noprocmm\n"
"    Turns off usage of /proc/mm, even if host supports it.\n"
"    To support /proc/mm, the host needs to be patched using\n"
"    the current skas3 patch.\n\n");
static int __init noptracefaultinfo_cmd_param(char *str, int* add)
__uml_setup("noptracefaultinfo", noptracefaultinfo_cmd_param,
"noptracefaultinfo\n"
"    Turns off usage of PTRACE_FAULTINFO, even if host supports\n"
"    it. To support PTRACE_FAULTINFO, the host needs to be patched\n"
"    using the current skas3 patch.\n\n");
static int __init noptraceldt_cmd_param(char *str, int* add)
__uml_setup("noptraceldt", noptraceldt_cmd_param,
"noptraceldt\n"
"    Turns off usage of PTRACE_LDT, even if host supports it.\n"
"    To support PTRACE_LDT, the host needs to be patched using\n"
"    the current skas3 patch.\n\n");
static inline void check_skas3_ptrace_faultinfo(void)
static inline void check_skas3_ptrace_ldt(void)
static inline void check_skas3_proc_mm(void)
void can_do_skas(void)
int __init parse_iomem(char *str, int *add)
