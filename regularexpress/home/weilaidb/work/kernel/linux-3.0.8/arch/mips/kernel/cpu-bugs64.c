static char bug64hit[] __initdata =
"reliable operation impossible!\n%s";
static char nowar[] __initdata =
"Please report to <linux-mips@linux-mips.org>.";
static char r4kwar[] __initdata =
"Enable CPU_R4000_WORKAROUNDS to rectify.";
static char daddiwar[] __initdata =
"Enable CPU_DADDI_WORKAROUNDS to rectify.";
static inline void align_mod(const int align, const int mod)
static inline void mult_sh_align_mod(long *v1, long *v2, long *w,
const int align, const int mod)
static inline void check_mult_sh(void)
static volatile int daddi_ov __cpuinitdata;
asmlinkage void __init do_daddi_ov(struct pt_regs *regs)
static inline void check_daddi(void)
int daddiu_bug  = -1;
static inline void check_daddiu(void)
void __init check_bugs64_early(void)
void __init check_bugs64(void)
