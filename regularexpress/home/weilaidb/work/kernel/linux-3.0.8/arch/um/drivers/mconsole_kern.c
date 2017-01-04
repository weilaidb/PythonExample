static int do_unlink_socket(struct notifier_block *notifier,
unsigned long what, void *data)
static struct notifier_block reboot_notifier = ;
static LIST_HEAD(mc_requests);
static void mc_work_proc(struct work_struct *unused)
static DECLARE_WORK(mconsole_work, mc_work_proc);
static irqreturn_t mconsole_interrupt(int irq, void *dev_id)
void mconsole_version(struct mc_request *req)
void mconsole_log(struct mc_request *req)
void mconsole_proc(struct mc_request *req)
#define UML_MCONSOLE_HELPTEXT \
"Commands: \n\
version - Get kernel version \n\
help - Print this message \n\
halt - Halt UML \n\
reboot - Reboot UML \n\
config <dev>=<config> - Add a new device to UML;  \n\
same syntax as command line \n\
config <dev> - Query the configuration of a device \n\
remove <dev> - Remove a device from UML \n\
sysrq <letter> - Performs the SysRq action controlled by the letter \n\
cad - invoke the Ctrl-Alt-Del handler \n\
stop - pause the UML; it will do nothing until it receives a 'go' \n\
go - continue the UML after a 'stop' \n\
log <string> - make UML enter <string> into the kernel log\n\
proc <file> - returns the contents of the UML's /proc/<file>\n\
stack <pid> - returns the stack of the specified pid\n\
"
void mconsole_help(struct mc_request *req)
void mconsole_halt(struct mc_request *req)
void mconsole_reboot(struct mc_request *req)
void mconsole_cad(struct mc_request *req)
void mconsole_go(struct mc_request *req)
void mconsole_stop(struct mc_request *req)
static DEFINE_SPINLOCK(mc_devices_lock);
static LIST_HEAD(mconsole_devices);
void mconsole_register_dev(struct mc_device *new)
static struct mc_device *mconsole_find_dev(char *name)
#define UNPLUGGED_PER_PAGE \
((PAGE_SIZE - sizeof(struct list_head)) / sizeof(unsigned long))
struct unplugged_pages ;
static DEFINE_MUTEX(plug_mem_mutex);
static unsigned long long unplugged_pages_count = 0;
static LIST_HEAD(unplugged_pages);
static int unplug_index = UNPLUGGED_PER_PAGE;
static int mem_config(char *str, char **error_out)
static int mem_get_config(char *name, char *str, int size, char **error_out)
static int mem_id(char **str, int *start_out, int *end_out)
static int mem_remove(int n, char **error_out)
static struct mc_device mem_mc = ;
static int __init mem_mc_init(void)
__initcall(mem_mc_init);
#define CONFIG_BUF_SIZE 64
static void mconsole_get_config(int (*get_config)(char *, char *, int,
char **),
struct mc_request *req, char *name)
void mconsole_config(struct mc_request *req)
void mconsole_remove(struct mc_request *req)
struct mconsole_output ;
static DEFINE_SPINLOCK(client_lock);
static LIST_HEAD(clients);
static char console_buf[MCONSOLE_MAX_DATA];
static void console_write(struct console *console, const char *string,
unsigned int len)
static struct console mc_console = ;
static int mc_add_console(void)
late_initcall(mc_add_console);
static void with_console(struct mc_request *req, void (*proc)(void *),
void *arg)
static void sysrq_proc(void *arg)
void mconsole_sysrq(struct mc_request *req)
void mconsole_sysrq(struct mc_request *req)
static void stack_proc(void *arg)
void mconsole_stack(struct mc_request *req)
static char *notify_socket = NULL;
static int __init mconsole_init(void)
__initcall(mconsole_init);
static ssize_t mconsole_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations mconsole_proc_fops = ;
static int create_proc_mconsole(void)
static DEFINE_SPINLOCK(notify_spinlock);
void lock_notify(void)
void unlock_notify(void)
__initcall(create_proc_mconsole);
#define NOTIFY "notify:"
static int mconsole_setup(char *str)
__setup("mconsole=", mconsole_setup);
__uml_help(mconsole_setup,
"mconsole=notify:<socket>\n"
"    Requests that the mconsole driver send a message to the named Unix\n"
"    socket containing the name of the mconsole socket.  This also serves\n"
"    to notify outside processes when UML has booted far enough to respond\n"
"    to mconsole requests.\n\n"
);
static int notify_panic(struct notifier_block *self, unsigned long unused1,
void *ptr)
static struct notifier_block panic_exit_notifier = ;
static int add_notifier(void)
__initcall(add_notifier);
char *mconsole_notify_socket(void)
EXPORT_SYMBOL(mconsole_notify_socket);
