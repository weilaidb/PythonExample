MODULE_AUTHOR("Stephane Eranian <eranian@hpl.hp.com>");
MODULE_DESCRIPTION("perfmon default sampling format");
MODULE_LICENSE("GPL");
#define DEFAULT_DEBUG 1
#define DPRINT(a) \
do  while (0)
#define DPRINT_ovfl(a) \
do  while (0)
#define DPRINT(a)
#define DPRINT_ovfl(a)
static int
default_validate(struct task_struct *task, unsigned int flags, int cpu, void *data)
static int
default_get_size(struct task_struct *task, unsigned int flags, int cpu, void *data, unsigned long *size)
static int
default_init(struct task_struct *task, void *buf, unsigned int flags, int cpu, void *data)
static int
default_handler(struct task_struct *task, void *buf, pfm_ovfl_arg_t *arg, struct pt_regs *regs, unsigned long stamp)
static int
default_restart(struct task_struct *task, pfm_ovfl_ctrl_t *ctrl, void *buf, struct pt_regs *regs)
static int
default_exit(struct task_struct *task, void *buf, struct pt_regs *regs)
static pfm_buffer_fmt_t default_fmt=;
static int __init
pfm_default_smpl_init_module(void)
static void __exit
pfm_default_smpl_cleanup_module(void)
module_init(pfm_default_smpl_init_module);
module_exit(pfm_default_smpl_cleanup_module);
