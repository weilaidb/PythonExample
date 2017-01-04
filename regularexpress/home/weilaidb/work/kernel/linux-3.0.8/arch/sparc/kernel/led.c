#define LED_MAX_LENGTH 8
static inline void led_toggle(void)
static struct timer_list led_blink_timer;
static void led_blink(unsigned long timeout)
static int led_proc_show(struct seq_file *m, void *v)
static int led_proc_open(struct inode *inode, struct file *file)
static ssize_t led_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations led_proc_fops = ;
static struct proc_dir_entry *led;
#define LED_VERSION	"0.1"
static int __init led_init(void)
static void __exit led_exit(void)
module_init(led_init);
module_exit(led_exit);
MODULE_AUTHOR("Lars Kotthoff <metalhead@metalhead.ws>");
MODULE_DESCRIPTION("Provides control of the front LED on SPARC systems.");
MODULE_LICENSE("GPL");
MODULE_VERSION(LED_VERSION);
