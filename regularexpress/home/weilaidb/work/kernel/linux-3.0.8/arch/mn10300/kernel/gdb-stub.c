#undef GDBSTUB_USE_F7F7_AS_BREAKPOINT
#define BUFMAX 2048
static const char gdbstub_banner[] =
"Linux/MN10300 GDB Stub (c) RedHat 2007\n";
u8	gdbstub_rx_buffer[PAGE_SIZE] __attribute__((aligned(PAGE_SIZE)));
u32	gdbstub_rx_inp;
u32	gdbstub_rx_outp;
u8	gdbstub_busy;
u8	gdbstub_rx_overflow;
u8	gdbstub_rx_unget;
static u8	gdbstub_flush_caches;
static char	input_buffer[BUFMAX];
static char	output_buffer[BUFMAX];
static char	trans_buffer[BUFMAX];
struct gdbstub_bkpt ;
static struct gdbstub_bkpt gdbstub_bkpts[256];
static void getpacket(char *buffer);
static int putpacket(char *buffer);
static int computeSignal(enum exception_code excep);
static int hex(unsigned char ch);
static int hexToInt(char **ptr, int *intValue);
static unsigned char *mem2hex(const void *mem, char *buf, int count,
int may_fault);
static const char *hex2mem(const char *buf, void *_mem, int count,
int may_fault);
static int hex(unsigned char ch)
void debug_to_serial(const char *p, int n)
void gdbstub_printk(const char *fmt, ...)
static inline char *gdbstub_strcpy(char *dst, const char *src)
static void getpacket(char *buffer)
static int putpacket(char *buffer)
static int hexToInt(char **ptr, int *intValue)
static struct gdb_bp_save  step_bp[2];
static const unsigned char gdbstub_insn_sizes[256] =
;
static int __gdbstub_mark_bp(u8 *addr, int ix)
static inline void __gdbstub_restore_bp(void)
static int gdbstub_single_step(struct pt_regs *regs)
void gdbstub_console_write(struct console *con, const char *p, unsigned n)
static kdev_t gdbstub_console_dev(struct console *con)
static struct console gdbstub_console = ;
static
unsigned char *mem2hex(const void *_mem, char *buf, int count, int may_fault)
static
const char *hex2mem(const char *buf, void *_mem, int count, int may_fault)
static const struct excep_to_sig_map  excep_to_sig_map[] = ;
static int computeSignal(enum exception_code excep)
static u32 gdbstub_fpcr, gdbstub_fpufs_array[32];
static void gdbstub_store_fpu(void)
static void gdbstub_load_fpu(void)
int gdbstub_set_breakpoint(u8 *addr, int len)
int gdbstub_clear_breakpoint(u8 *addr, int len)
static int gdbstub(struct pt_regs *regs, enum exception_code excep)
int at_debugger_breakpoint(struct pt_regs *regs)
asmlinkage int debugger_intercept(enum exception_code excep,
int signo, int si_code, struct pt_regs *regs)
asmlinkage void gdbstub_exception(struct pt_regs *regs,
enum exception_code excep)
void gdbstub_exit(int status)
asmlinkage void __init gdbstub_init(void)
static int __init gdbstub_postinit(void)
__initcall(gdbstub_postinit);
asmlinkage void gdbstub_rx_irq(struct pt_regs *regs, enum exception_code excep)
