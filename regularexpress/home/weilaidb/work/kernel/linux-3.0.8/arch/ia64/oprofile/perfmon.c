static int allow_ints;
static int
perfmon_handler(struct task_struct *task, void *buf, pfm_ovfl_arg_t *arg,
struct pt_regs *regs, unsigned long stamp)
static int perfmon_start(void)
static void perfmon_stop(void)
#define OPROFILE_FMT_UUID
static pfm_buffer_fmt_t oprofile_fmt = ;
static char *get_cpu_type(void)
static int using_perfmon;
int perfmon_init(struct oprofile_operations *ops)
void perfmon_exit(void)
