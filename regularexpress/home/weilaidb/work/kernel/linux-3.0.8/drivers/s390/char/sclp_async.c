static int callhome_enabled;
static struct sclp_req *request;
static struct sclp_async_sccb *sccb;
static int sclp_async_send_wait(char *message);
static struct ctl_table_header *callhome_sysctl_header;
static DEFINE_SPINLOCK(sclp_async_lock);
#define SCLP_NORMAL_WRITE	0x00
struct async_evbuf  __attribute__((packed));
struct sclp_async_sccb  __attribute__((packed));
static struct sclp_register sclp_async_register = ;
static int call_home_on_panic(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block call_home_panic_nb = ;
static int proc_handler_callhome(struct ctl_table *ctl, int write,
void __user *buffer, size_t *count,
loff_t *ppos)
static struct ctl_table callhome_table[] = ;
static struct ctl_table kern_dir_table[] = ;
static int sclp_async_send_wait(char *message)
static int __init sclp_async_init(void)
module_init(sclp_async_init);
static void __exit sclp_async_exit(void)
module_exit(sclp_async_exit);
MODULE_AUTHOR("Copyright IBM Corp. 2009");
MODULE_AUTHOR("Hans-Joachim Picht <hans@linux.vnet.ibm.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SCLP Asynchronous Notification Records");
