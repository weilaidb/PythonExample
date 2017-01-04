#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int modifying_code __read_mostly;
static DEFINE_PER_CPU(int, save_modifying_code);
int ftrace_arch_code_modify_prepare(void)
int ftrace_arch_code_modify_post_process(void)
union ftrace_code_union ;
static int ftrace_calc_offset(long ip, long addr)
static unsigned char *ftrace_call_replace(unsigned long ip, unsigned long addr)
#define MOD_CODE_WRITE_FLAG (1 << 31)
static atomic_t nmi_running = ATOMIC_INIT(0);
static int mod_code_status;
static void *mod_code_ip;
static const void *mod_code_newcode;
static unsigned nmi_wait_count;
static atomic_t nmi_update_count = ATOMIC_INIT(0);
int ftrace_arch_read_dyn_info(char *buf, int size)
static void clear_mod_flag(void)
static void ftrace_mod_code(void)
void ftrace_nmi_enter(void)
void ftrace_nmi_exit(void)
static void wait_for_nmi_and_set_mod_flag(void)
static void wait_for_nmi(void)
static inline int
within(unsigned long addr, unsigned long start, unsigned long end)
static int
do_ftrace_mod_code(unsigned long ip, const void *new_code)
static const unsigned char *ftrace_nop_replace(void)
static int
ftrace_modify_code(unsigned long ip, unsigned const char *old_code,
unsigned const char *new_code)
int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
extern void ftrace_graph_call(void);
static int ftrace_mod_jmp(unsigned long ip,
int old_offset, int new_offset)
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
void prepare_ftrace_return(unsigned long *parent, unsigned long self_addr,
unsigned long frame_pointer)
