#define v1printk(a...) do  while (0)
#define v2printk(a...) do  while (0)
#define eprintk(a...) do  while (0)
#define MAX_CONFIG_LEN		40
static struct kgdb_io kgdbts_io_ops;
static char get_buf[BUFMAX];
static int get_buf_cnt;
static char put_buf[BUFMAX];
static int put_buf_cnt;
static char scratch_buf[BUFMAX];
static int verbose;
static int repeat_test;
static int test_complete;
static int send_ack;
static int final_ack;
static int force_hwbrks;
static int hwbreaks_ok;
static int hw_break_val;
static int hw_break_val2;
#if defined(CONFIG_ARM) || defined(CONFIG_MIPS) || defined(CONFIG_SPARC)
static int arch_needs_sstep_emulation = 1;
static int arch_needs_sstep_emulation;
static unsigned long sstep_addr;
static int sstep_state;
static unsigned long kgdbts_gdb_regs[(NUMREGBYTES +
sizeof(unsigned long) - 1) /
sizeof(unsigned long)];
static struct pt_regs kgdbts_regs;
static int configured		= -1;
static char config[MAX_CONFIG_LEN] = CONFIG_KGDB_TESTS_BOOT_STRING;
static char config[MAX_CONFIG_LEN];
static struct kparam_string kps = ;
static void fill_get_buf(char *buf);
struct test_struct ;
struct test_state ;
static struct test_state ts;
static int kgdbts_unreg_thread(void *ptr)
static noinline void kgdbts_break_test(void)
static unsigned long lookup_addr(char *arg)
static void break_helper(char *bp_type, char *arg, unsigned long vaddr)
static void sw_break(char *arg)
static void sw_rem_break(char *arg)
static void hw_break(char *arg)
static void hw_rem_break(char *arg)
static void hw_write_break(char *arg)
static void hw_rem_write_break(char *arg)
static void hw_access_break(char *arg)
static void hw_rem_access_break(char *arg)
static void hw_break_val_access(void)
static void hw_break_val_write(void)
static int check_and_rewind_pc(char *put_str, char *arg)
static int check_single_step(char *put_str, char *arg)
static void write_regs(char *arg)
static void skip_back_repeat_test(char *arg)
static int got_break(char *put_str, char *arg)
static void emul_sstep_get(char *arg)
static int emul_sstep_put(char *put_str, char *arg)
static int final_ack_set(char *put_str, char *arg)
static struct test_struct plant_and_detach_test[] = ;
static struct test_struct sw_breakpoint_test[] = ;
static struct test_struct bad_read_test[] = ;
static struct test_struct singlestep_break_test[] = ;
static struct test_struct do_fork_test[] = ;
static struct test_struct sys_open_test[] = ;
static struct test_struct hw_breakpoint_test[] = ;
static struct test_struct hw_write_break_test[] = ;
static struct test_struct hw_access_break_test[] = ;
static struct test_struct nmi_sleep_test[] = ;
static void fill_get_buf(char *buf)
static int validate_simple_test(char *put_str)
static int run_simple_test(int is_get_char, int chr)
static void init_simple_test(void)
static void run_plant_and_detach_test(int is_early)
static void run_breakpoint_test(int is_hw_breakpoint)
static void run_hw_break_test(int is_write_test)
static void run_nmi_sleep_test(int nmi_sleep)
static void run_bad_read_test(void)
static void run_do_fork_test(void)
static void run_sys_open_test(void)
static void run_singlestep_break_test(void)
static void kgdbts_run_tests(void)
static int kgdbts_option_setup(char *opt)
__setup("kgdbts=", kgdbts_option_setup);
static int configure_kgdbts(void)
static int __init init_kgdbts(void)
static int kgdbts_get_char(void)
static void kgdbts_put_char(u8 chr)
static int param_set_kgdbts_var(const char *kmessage, struct kernel_param *kp)
static void kgdbts_pre_exp_handler(void)
static void kgdbts_post_exp_handler(void)
static struct kgdb_io kgdbts_io_ops = ;
module_init(init_kgdbts);
module_param_call(kgdbts, param_set_kgdbts_var, param_get_string, &kps, 0644);
MODULE_PARM_DESC(kgdbts, "<A|V1|V2>[F#|S#][N#]");
MODULE_DESCRIPTION("KGDB Test Suite");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Wind River Systems, Inc.");
