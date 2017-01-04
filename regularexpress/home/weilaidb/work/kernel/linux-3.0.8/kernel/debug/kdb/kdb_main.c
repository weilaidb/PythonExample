#define GREP_LEN 256
char kdb_grep_string[GREP_LEN];
int kdb_grepping_flag;
EXPORT_SYMBOL(kdb_grepping_flag);
int kdb_grep_leading;
int kdb_grep_trailing;
int kdb_flags;
atomic_t kdb_event;
int kdb_initial_cpu = -1;
int kdb_nextline = 1;
int kdb_state;
struct task_struct *kdb_current_task;
EXPORT_SYMBOL(kdb_current_task);
struct pt_regs *kdb_current_regs;
const char *kdb_diemsg;
static int kdb_go_count;
static unsigned int kdb_continue_catastrophic =
CONFIG_KDB_CONTINUE_CATASTROPHIC;
static unsigned int kdb_continue_catastrophic;
static kdbtab_t *kdb_commands;
#define KDB_BASE_CMD_MAX 50
static int kdb_max_commands = KDB_BASE_CMD_MAX;
static kdbtab_t kdb_base_commands[KDB_BASE_CMD_MAX];
#define for_each_kdbcmd(cmd, num)					\
for ((cmd) = kdb_base_commands, (num) = 0;			\
num < kdb_max_commands;					\
num++, num == KDB_BASE_CMD_MAX ? cmd = kdb_commands : cmd++)
typedef struct _kdbmsg  kdbmsg_t;
#define KDBMSG(msgnum, text) \
static kdbmsg_t kdbmsgs[] = ;
#undef KDBMSG
static const int __nkdb_err = sizeof(kdbmsgs) / sizeof(kdbmsg_t);
static char *__env[] = ;
static const int __nenv = (sizeof(__env) / sizeof(char *));
struct task_struct *kdb_curr_task(int cpu)
char *kdbgetenv(const char *match)
static char *kdballocenv(size_t bytes)
static int kdbgetulenv(const char *match, unsigned long *value)
int kdbgetintenv(const char *match, int *value)
int kdbgetularg(const char *arg, unsigned long *value)
int kdbgetu64arg(const char *arg, u64 *value)
int kdb_set(int argc, const char **argv)
static int kdb_check_regs(void)
int kdbgetaddrarg(int argc, const char **argv, int *nextarg,
unsigned long *value,  long *offset,
char **name)
static void kdb_cmderror(int diag)
struct defcmd_set ;
static struct defcmd_set *defcmd_set;
static int defcmd_set_count;
static int defcmd_in_progress;
static int kdb_exec_defcmd(int argc, const char **argv);
static int kdb_defcmd2(const char *cmdstr, const char *argv0)
static int kdb_defcmd(int argc, const char **argv)
static int kdb_exec_defcmd(int argc, const char **argv)
#define KDB_CMD_HISTORY_COUNT	32
#define CMD_BUFLEN		200
static unsigned int cmd_head, cmd_tail;
static unsigned int cmdptr;
static char cmd_hist[KDB_CMD_HISTORY_COUNT][CMD_BUFLEN];
static char cmd_cur[CMD_BUFLEN];
static void parse_grep(const char *str)
#define MAXARGC	20
int kdb_parse(const char *cmdstr)
static int handle_ctrl_cmd(char *cmd)
static int kdb_reboot(int argc, const char **argv)
static void kdb_dumpregs(struct pt_regs *regs)
void kdb_set_current_task(struct task_struct *p)
static int kdb_local(kdb_reason_t reason, int error, struct pt_regs *regs,
kdb_dbtrap_t db_result)
void kdb_print_state(const char *text, int value)
int kdb_main_loop(kdb_reason_t reason, kdb_reason_t reason2, int error,
kdb_dbtrap_t db_result, struct pt_regs *regs)
static int kdb_mdr(unsigned long addr, unsigned int count)
static void kdb_md_line(const char *fmtstr, unsigned long addr,
int symbolic, int nosect, int bytesperword,
int num, int repeat, int phys)
static int kdb_md(int argc, const char **argv)
static int kdb_mm(int argc, const char **argv)
static int kdb_go(int argc, const char **argv)
static int kdb_rd(int argc, const char **argv)
static int kdb_rm(int argc, const char **argv)
#if defined(CONFIG_MAGIC_SYSRQ)
static int kdb_sr(int argc, const char **argv)
static int kdb_ef(int argc, const char **argv)
#if defined(CONFIG_MODULES)
static int kdb_lsmod(int argc, const char **argv)
static int kdb_env(int argc, const char **argv)
static int kdb_dmesg(int argc, const char **argv)
static void kdb_cpu_status(void)
static int kdb_cpu(int argc, const char **argv)
void kdb_ps_suppressed(void)
void kdb_ps1(const struct task_struct *p)
static int kdb_ps(int argc, const char **argv)
static int kdb_pid(int argc, const char **argv)
static int kdb_ll(int argc, const char **argv)
static int kdb_kgdb(int argc, const char **argv)
static int kdb_help(int argc, const char **argv)
static int kdb_kill(int argc, const char **argv)
struct kdb_tm ;
static void kdb_gmtime(struct timespec *tv, struct kdb_tm *tm)
static void kdb_sysinfo(struct sysinfo *val)
static int kdb_summary(int argc, const char **argv)
static int kdb_per_cpu(int argc, const char **argv)
static int kdb_grep_help(int argc, const char **argv)
#define kdb_command_extend 50
int kdb_register_repeat(char *cmd,
kdb_func_t func,
char *usage,
char *help,
short minlen,
kdb_repeat_t repeat)
EXPORT_SYMBOL_GPL(kdb_register_repeat);
int kdb_register(char *cmd,
kdb_func_t func,
char *usage,
char *help,
short minlen)
EXPORT_SYMBOL_GPL(kdb_register);
int kdb_unregister(char *cmd)
EXPORT_SYMBOL_GPL(kdb_unregister);
static void __init kdb_inittab(void)
static void __init kdb_cmd_init(void)
void __init kdb_init(int lvl)
