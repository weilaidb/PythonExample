#define IPATH_MIN_USER_PORT_BUFCNT 7
static ushort ipath_cfgports;
module_param_named(cfgports, ipath_cfgports, ushort, S_IRUGO);
MODULE_PARM_DESC(cfgports, "Set max number of ports to use");
static ushort ipath_kpiobufs;
static int ipath_set_kpiobufs(const char *val, struct kernel_param *kp);
module_param_call(kpiobufs, ipath_set_kpiobufs, param_get_ushort,
&ipath_kpiobufs, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(kpiobufs, "Set number of PIO buffers for driver");
static int create_port0_egr(struct ipath_devdata *dd)
static int bringup_link(struct ipath_devdata *dd)
static struct ipath_portdata *create_portdata0(struct ipath_devdata *dd)
static int init_chip_first(struct ipath_devdata *dd)
static int init_chip_reset(struct ipath_devdata *dd)
static int init_pioavailregs(struct ipath_devdata *dd)
static void init_shadow_tids(struct ipath_devdata *dd)
static void enable_chip(struct ipath_devdata *dd, int reinit)
static int init_housekeeping(struct ipath_devdata *dd, int reinit)
static void verify_interrupt(unsigned long opaque)
int ipath_init_chip(struct ipath_devdata *dd, int reinit)
static int ipath_set_kpiobufs(const char *str, struct kernel_param *kp)
