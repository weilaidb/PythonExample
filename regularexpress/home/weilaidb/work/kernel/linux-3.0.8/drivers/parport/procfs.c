#if defined(CONFIG_SYSCTL) && defined(CONFIG_PROC_FS)
#define PARPORT_MIN_TIMESLICE_VALUE 1ul
#define PARPORT_MAX_TIMESLICE_VALUE ((unsigned long) HZ)
#define PARPORT_MIN_SPINTIME_VALUE 1
#define PARPORT_MAX_SPINTIME_VALUE 1000
static int do_active_device(ctl_table *table, int write,
void __user *result, size_t *lenp, loff_t *ppos)
static int do_autoprobe(ctl_table *table, int write,
void __user *result, size_t *lenp, loff_t *ppos)
static int do_hardware_base_addr (ctl_table *table, int write,
void __user *result,
size_t *lenp, loff_t *ppos)
static int do_hardware_irq (ctl_table *table, int write,
void __user *result,
size_t *lenp, loff_t *ppos)
static int do_hardware_dma (ctl_table *table, int write,
void __user *result,
size_t *lenp, loff_t *ppos)
static int do_hardware_modes (ctl_table *table, int write,
void __user *result,
size_t *lenp, loff_t *ppos)
#define PARPORT_PORT_DIR(CHILD)
#define PARPORT_PARPORT_DIR(CHILD)
#define PARPORT_DEV_DIR(CHILD)
#define PARPORT_DEVICES_ROOT_DIR
static const unsigned long parport_min_timeslice_value =
PARPORT_MIN_TIMESLICE_VALUE;
static const unsigned long parport_max_timeslice_value =
PARPORT_MAX_TIMESLICE_VALUE;
static const  int parport_min_spintime_value =
PARPORT_MIN_SPINTIME_VALUE;
static const int parport_max_spintime_value =
PARPORT_MAX_SPINTIME_VALUE;
struct parport_sysctl_table ;
static const struct parport_sysctl_table parport_sysctl_template = ;
struct parport_device_sysctl_table
;
static const struct parport_device_sysctl_table
parport_device_sysctl_template = ;
struct parport_default_sysctl_table
;
static struct parport_default_sysctl_table
parport_default_sysctl_table = ;
int parport_proc_register(struct parport *port)
int parport_proc_unregister(struct parport *port)
int parport_device_proc_register(struct pardevice *device)
int parport_device_proc_unregister(struct pardevice *device)
static int __init parport_default_proc_register(void)
static void __exit parport_default_proc_unregister(void)
int parport_proc_register(struct parport *pp)
int parport_proc_unregister(struct parport *pp)
int parport_device_proc_register(struct pardevice *device)
int parport_device_proc_unregister(struct pardevice *device)
static int __init parport_default_proc_register (void)
static void __exit parport_default_proc_unregister (void)
module_init(parport_default_proc_register)
module_exit(parport_default_proc_unregister)
