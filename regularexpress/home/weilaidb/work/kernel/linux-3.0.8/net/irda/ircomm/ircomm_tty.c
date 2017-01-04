static int  ircomm_tty_open(struct tty_struct *tty, struct file *filp);
static void ircomm_tty_close(struct tty_struct * tty, struct file *filp);
static int  ircomm_tty_write(struct tty_struct * tty,
const unsigned char *buf, int count);
static int  ircomm_tty_write_room(struct tty_struct *tty);
static void ircomm_tty_throttle(struct tty_struct *tty);
static void ircomm_tty_unthrottle(struct tty_struct *tty);
static int  ircomm_tty_chars_in_buffer(struct tty_struct *tty);
static void ircomm_tty_flush_buffer(struct tty_struct *tty);
static void ircomm_tty_send_xchar(struct tty_struct *tty, char ch);
static void ircomm_tty_wait_until_sent(struct tty_struct *tty, int timeout);
static void ircomm_tty_hangup(struct tty_struct *tty);
static void ircomm_tty_do_softint(struct work_struct *work);
static void ircomm_tty_shutdown(struct ircomm_tty_cb *self);
static void ircomm_tty_stop(struct tty_struct *tty);
static int ircomm_tty_data_indication(void *instance, void *sap,
struct sk_buff *skb);
static int ircomm_tty_control_indication(void *instance, void *sap,
struct sk_buff *skb);
static void ircomm_tty_flow_indication(void *instance, void *sap,
LOCAL_FLOW cmd);
static const struct file_operations ircomm_tty_proc_fops;
static struct tty_driver *driver;
static hashbin_t *ircomm_tty = NULL;
static const struct tty_operations ops = ;
static int __init ircomm_tty_init(void)
static void __exit __ircomm_tty_cleanup(struct ircomm_tty_cb *self)
static void __exit ircomm_tty_cleanup(void)
static int ircomm_tty_startup(struct ircomm_tty_cb *self)
static int ircomm_tty_block_til_ready(struct ircomm_tty_cb *self,
struct file *filp)
static int ircomm_tty_open(struct tty_struct *tty, struct file *filp)
static void ircomm_tty_close(struct tty_struct *tty, struct file *filp)
static void ircomm_tty_flush_buffer(struct tty_struct *tty)
static void ircomm_tty_do_softint(struct work_struct *work)
static int ircomm_tty_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int ircomm_tty_write_room(struct tty_struct *tty)
static void ircomm_tty_wait_until_sent(struct tty_struct *tty, int timeout)
static void ircomm_tty_throttle(struct tty_struct *tty)
static void ircomm_tty_unthrottle(struct tty_struct *tty)
static int ircomm_tty_chars_in_buffer(struct tty_struct *tty)
static void ircomm_tty_shutdown(struct ircomm_tty_cb *self)
static void ircomm_tty_hangup(struct tty_struct *tty)
static void ircomm_tty_send_xchar(struct tty_struct *tty, char ch)
void ircomm_tty_start(struct tty_struct *tty)
static void ircomm_tty_stop(struct tty_struct *tty)
void ircomm_tty_check_modem_status(struct ircomm_tty_cb *self)
static int ircomm_tty_data_indication(void *instance, void *sap,
struct sk_buff *skb)
static int ircomm_tty_control_indication(void *instance, void *sap,
struct sk_buff *skb)
static void ircomm_tty_flow_indication(void *instance, void *sap,
LOCAL_FLOW cmd)
static void ircomm_tty_line_info(struct ircomm_tty_cb *self, struct seq_file *m)
static int ircomm_tty_proc_show(struct seq_file *m, void *v)
static int ircomm_tty_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ircomm_tty_proc_fops = ;
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("IrCOMM serial TTY driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(IRCOMM_TTY_MAJOR);
module_init(ircomm_tty_init);
module_exit(ircomm_tty_cleanup);
