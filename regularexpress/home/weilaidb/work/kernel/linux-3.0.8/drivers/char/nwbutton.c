#define __NWBUTTON_C
static void button_sequence_finished (unsigned long parameters);
static int button_press_count;
static DEFINE_TIMER(button_timer, button_sequence_finished, 0, 0);
static DECLARE_WAIT_QUEUE_HEAD(button_wait_queue);
static char button_output_buffer[32];
static int bcount;
static int bdelay = BUTTON_DELAY;
static struct button_callback button_callback_list[32];
static int callback_count;
static int reboot_count = NUM_PRESSES_REBOOT;
int button_add_callback (void (*callback) (void), int count)
int button_del_callback (void (*callback) (void))
static void button_consume_callbacks (int bpcount)
static void button_sequence_finished (unsigned long parameters)
static irqreturn_t button_handler (int irq, void *dev_id)
static int button_read (struct file *filp, char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations button_fops = ;
static struct miscdevice button_misc_device = ;
static int __init nwbutton_init(void)
static void __exit nwbutton_exit (void)
MODULE_AUTHOR("Alex Holden");
MODULE_LICENSE("GPL");
module_init(nwbutton_init);
module_exit(nwbutton_exit);
