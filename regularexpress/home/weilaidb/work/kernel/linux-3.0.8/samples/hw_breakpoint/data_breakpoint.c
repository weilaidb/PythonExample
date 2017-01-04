struct perf_event * __percpu *sample_hbp;
static char ksym_name[KSYM_NAME_LEN] = "pid_max";
module_param_string(ksym, ksym_name, KSYM_NAME_LEN, S_IRUGO);
MODULE_PARM_DESC(ksym, "Kernel symbol to monitor; this module will report any"
" write operations on the kernel symbol");
static void sample_hbp_handler(struct perf_event *bp, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs)
static int __init hw_break_module_init(void)
static void __exit hw_break_module_exit(void)
module_init(hw_break_module_init);
module_exit(hw_break_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("K.Prasad");
MODULE_DESCRIPTION("ksym breakpoint");
