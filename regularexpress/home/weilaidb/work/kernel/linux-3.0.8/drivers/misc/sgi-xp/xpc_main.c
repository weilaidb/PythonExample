struct device_driver xpc_dbg_name = ;
struct device xpc_part_dbg_subname = ;
struct device xpc_chan_dbg_subname = ;
struct device *xpc_part = &xpc_part_dbg_subname;
struct device *xpc_chan = &xpc_chan_dbg_subname;
static int xpc_kdebug_ignore;
static int xpc_hb_interval = XPC_HB_DEFAULT_INTERVAL;
static int xpc_hb_min_interval = 1;
static int xpc_hb_max_interval = 10;
static int xpc_hb_check_interval = XPC_HB_CHECK_DEFAULT_INTERVAL;
static int xpc_hb_check_min_interval = 10;
static int xpc_hb_check_max_interval = 120;
int xpc_disengage_timelimit = XPC_DISENGAGE_DEFAULT_TIMELIMIT;
static int xpc_disengage_min_timelimit;
static int xpc_disengage_max_timelimit = 120;
static ctl_table xpc_sys_xpc_hb_dir[] = ;
static ctl_table xpc_sys_xpc_dir[] = ;
static ctl_table xpc_sys_dir[] = ;
static struct ctl_table_header *xpc_sysctl;
int xpc_disengage_timedout;
int xpc_activate_IRQ_rcvd;
DEFINE_SPINLOCK(xpc_activate_IRQ_rcvd_lock);
DECLARE_WAIT_QUEUE_HEAD(xpc_activate_IRQ_wq);
static unsigned long xpc_hb_check_timeout;
static struct timer_list xpc_hb_timer;
static DECLARE_COMPLETION(xpc_hb_checker_exited);
static DECLARE_COMPLETION(xpc_discovery_exited);
static void xpc_kthread_waitmsgs(struct xpc_partition *, struct xpc_channel *);
static int xpc_system_reboot(struct notifier_block *, unsigned long, void *);
static struct notifier_block xpc_reboot_notifier = ;
static int xpc_system_die(struct notifier_block *, unsigned long, void *);
static struct notifier_block xpc_die_notifier = ;
struct xpc_arch_operations xpc_arch_ops;
static void
xpc_timeout_partition_disengage(unsigned long data)
static void
xpc_hb_beater(unsigned long dummy)
static void
xpc_start_hb_beater(void)
static void
xpc_stop_hb_beater(void)
static void
xpc_check_remote_hb(void)
static int
xpc_hb_checker(void *ignore)
static int
xpc_initiate_discovery(void *ignore)
static void
xpc_channel_mgr(struct xpc_partition *part)
void *
xpc_kzalloc_cacheline_aligned(size_t size, gfp_t flags, void **base)
static enum xp_retval
xpc_setup_ch_structures(struct xpc_partition *part)
static void
xpc_teardown_ch_structures(struct xpc_partition *part)
static int
xpc_activating(void *__partid)
void
xpc_activate_partition(struct xpc_partition *part)
void
xpc_activate_kthreads(struct xpc_channel *ch, int needed)
static void
xpc_kthread_waitmsgs(struct xpc_partition *part, struct xpc_channel *ch)
static int
xpc_kthread_start(void *args)
void
xpc_create_kthreads(struct xpc_channel *ch, int needed,
int ignore_disconnecting)
void
xpc_disconnect_wait(int ch_number)
static int
xpc_setup_partitions(void)
static void
xpc_teardown_partitions(void)
static void
xpc_do_exit(enum xp_retval reason)
static int
xpc_system_reboot(struct notifier_block *nb, unsigned long event, void *unused)
static void
xpc_die_deactivate(void)
static int
xpc_system_die(struct notifier_block *nb, unsigned long event, void *unused)
int __init
xpc_init(void)
module_init(xpc_init);
void __exit
xpc_exit(void)
module_exit(xpc_exit);
MODULE_AUTHOR("Silicon Graphics, Inc.");
MODULE_DESCRIPTION("Cross Partition Communication (XPC) support");
MODULE_LICENSE("GPL");
module_param(xpc_hb_interval, int, 0);
MODULE_PARM_DESC(xpc_hb_interval, "Number of seconds between "
"heartbeat increments.");
module_param(xpc_hb_check_interval, int, 0);
MODULE_PARM_DESC(xpc_hb_check_interval, "Number of seconds between "
"heartbeat checks.");
module_param(xpc_disengage_timelimit, int, 0);
MODULE_PARM_DESC(xpc_disengage_timelimit, "Number of seconds to wait "
"for disengage to complete.");
module_param(xpc_kdebug_ignore, int, 0);
MODULE_PARM_DESC(xpc_kdebug_ignore, "Should lack of heartbeat be ignored by "
"other partitions when dropping into kdebug.");
