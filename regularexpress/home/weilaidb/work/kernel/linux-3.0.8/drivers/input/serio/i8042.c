#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@suse.cz>");
MODULE_DESCRIPTION("i8042 keyboard and mouse controller driver");
MODULE_LICENSE("GPL");
static bool i8042_nokbd;
module_param_named(nokbd, i8042_nokbd, bool, 0);
MODULE_PARM_DESC(nokbd, "Do not probe or use KBD port.");
static bool i8042_noaux;
module_param_named(noaux, i8042_noaux, bool, 0);
MODULE_PARM_DESC(noaux, "Do not probe or use AUX (mouse) port.");
static bool i8042_nomux;
module_param_named(nomux, i8042_nomux, bool, 0);
MODULE_PARM_DESC(nomux, "Do not check whether an active multiplexing controller is present.");
static bool i8042_unlock;
module_param_named(unlock, i8042_unlock, bool, 0);
MODULE_PARM_DESC(unlock, "Ignore keyboard lock.");
static bool i8042_reset;
module_param_named(reset, i8042_reset, bool, 0);
MODULE_PARM_DESC(reset, "Reset controller during init and cleanup.");
static bool i8042_direct;
module_param_named(direct, i8042_direct, bool, 0);
MODULE_PARM_DESC(direct, "Put keyboard port into non-translated mode.");
static bool i8042_dumbkbd;
module_param_named(dumbkbd, i8042_dumbkbd, bool, 0);
MODULE_PARM_DESC(dumbkbd, "Pretend that controller can only read data from keyboard");
static bool i8042_noloop;
module_param_named(noloop, i8042_noloop, bool, 0);
MODULE_PARM_DESC(noloop, "Disable the AUX Loopback command while probing for the AUX port");
static bool i8042_notimeout;
module_param_named(notimeout, i8042_notimeout, bool, 0);
MODULE_PARM_DESC(notimeout, "Ignore timeouts signalled by i8042");
static bool i8042_dritek;
module_param_named(dritek, i8042_dritek, bool, 0);
MODULE_PARM_DESC(dritek, "Force enable the Dritek keyboard extension");
static bool i8042_nopnp;
module_param_named(nopnp, i8042_nopnp, bool, 0);
MODULE_PARM_DESC(nopnp, "Do not use PNP to detect controller settings");
#define DEBUG
static bool i8042_debug;
module_param_named(debug, i8042_debug, bool, 0600);
MODULE_PARM_DESC(debug, "Turn i8042 debugging mode on and off");
static bool i8042_bypass_aux_irq_test;
static DEFINE_SPINLOCK(i8042_lock);
static DEFINE_MUTEX(i8042_mutex);
struct i8042_port ;
#define I8042_KBD_PORT_NO	0
#define I8042_AUX_PORT_NO	1
#define I8042_MUX_PORT_NO	2
#define I8042_NUM_PORTS		(I8042_NUM_MUX_PORTS + 2)
static struct i8042_port i8042_ports[I8042_NUM_PORTS];
static unsigned char i8042_initial_ctr;
static unsigned char i8042_ctr;
static bool i8042_mux_present;
static bool i8042_kbd_irq_registered;
static bool i8042_aux_irq_registered;
static unsigned char i8042_suppress_kbd_ack;
static struct platform_device *i8042_platform_device;
static irqreturn_t i8042_interrupt(int irq, void *dev_id);
static bool (*i8042_platform_filter)(unsigned char data, unsigned char str,
struct serio *serio);
void i8042_lock_chip(void)
EXPORT_SYMBOL(i8042_lock_chip);
void i8042_unlock_chip(void)
EXPORT_SYMBOL(i8042_unlock_chip);
int i8042_install_filter(bool (*filter)(unsigned char data, unsigned char str,
struct serio *serio))
EXPORT_SYMBOL(i8042_install_filter);
int i8042_remove_filter(bool (*filter)(unsigned char data, unsigned char str,
struct serio *port))
EXPORT_SYMBOL(i8042_remove_filter);
static int i8042_wait_read(void)
static int i8042_wait_write(void)
static int i8042_flush(void)
static int __i8042_command(unsigned char *param, int command)
int i8042_command(unsigned char *param, int command)
EXPORT_SYMBOL(i8042_command);
static int i8042_kbd_write(struct serio *port, unsigned char c)
static int i8042_aux_write(struct serio *serio, unsigned char c)
static void i8042_port_close(struct serio *serio)
static int i8042_start(struct serio *serio)
static void i8042_stop(struct serio *serio)
static bool i8042_filter(unsigned char data, unsigned char str,
struct serio *serio)
static irqreturn_t i8042_interrupt(int irq, void *dev_id)
static int i8042_enable_kbd_port(void)
static int i8042_enable_aux_port(void)
static int i8042_enable_mux_ports(void)
static int i8042_set_mux_mode(bool multiplex, unsigned char *mux_version)
static int __init i8042_check_mux(void)
static struct completion i8042_aux_irq_delivered __initdata;
static bool i8042_irq_being_tested __initdata;
static irqreturn_t __init i8042_aux_test_irq(int irq, void *dev_id)
static int __init i8042_toggle_aux(bool on)
static int __init i8042_check_aux(void)
static int i8042_controller_check(void)
static int i8042_controller_selftest(void)
static int i8042_controller_init(void)
static void i8042_controller_reset(void)
#define DELAY do  while(0)
static long i8042_panic_blink(int state)
#undef DELAY
static void i8042_dritek_enable(void)
static int i8042_controller_resume(bool force_reset)
static int i8042_pm_reset(struct device *dev)
static int i8042_pm_resume(struct device *dev)
static int i8042_pm_thaw(struct device *dev)
static int i8042_pm_restore(struct device *dev)
static const struct dev_pm_ops i8042_pm_ops = ;
static void i8042_shutdown(struct platform_device *dev)
static int __init i8042_create_kbd_port(void)
static int __init i8042_create_aux_port(int idx)
static void __init i8042_free_kbd_port(void)
static void __init i8042_free_aux_ports(void)
static void __init i8042_register_ports(void)
static void __devexit i8042_unregister_ports(void)
bool i8042_check_port_owner(const struct serio *port)
EXPORT_SYMBOL(i8042_check_port_owner);
static void i8042_free_irqs(void)
static int __init i8042_setup_aux(void)
static int __init i8042_setup_kbd(void)
static int __init i8042_probe(struct platform_device *dev)
static int __devexit i8042_remove(struct platform_device *dev)
static struct platform_driver i8042_driver = ;
static int __init i8042_init(void)
static void __exit i8042_exit(void)
module_init(i8042_init);
module_exit(i8042_exit);
