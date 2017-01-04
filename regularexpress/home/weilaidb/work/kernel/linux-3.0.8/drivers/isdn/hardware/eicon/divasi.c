static char *main_revision = "$Revision: 1.25.6.2 $";
static int major;
MODULE_DESCRIPTION("User IDI Interface for Eicon ISDN cards");
MODULE_AUTHOR("Cytronics & Melware, Eicon Networks");
MODULE_SUPPORTED_DEVICE("DIVA card driver");
MODULE_LICENSE("GPL");
typedef struct _diva_um_idi_os_context  diva_um_idi_os_context_t;
static char *DRIVERNAME = "Eicon DIVA - User IDI (http:
static char *DRIVERLNAME = "diva_idi";
static char *DEVNAME = "DivasIDI";
char *DRIVERRELEASE_IDI = "2.0";
extern int idifunc_init(void);
extern void idifunc_finit(void);
static char *getrev(const char *revision)
static ssize_t um_idi_read(struct file *file, char __user *buf, size_t count,
loff_t * offset);
static ssize_t um_idi_write(struct file *file, const char __user *buf,
size_t count, loff_t * offset);
static unsigned int um_idi_poll(struct file *file, poll_table * wait);
static int um_idi_open(struct inode *inode, struct file *file);
static int um_idi_release(struct inode *inode, struct file *file);
static int remove_entity(void *entity);
static void diva_um_timer_function(unsigned long data);
extern struct proc_dir_entry *proc_net_eicon;
static struct proc_dir_entry *um_idi_proc_entry = NULL;
static int um_idi_proc_show(struct seq_file *m, void *v)
static int um_idi_proc_open(struct inode *inode, struct file *file)
static const struct file_operations um_idi_proc_fops = ;
static int DIVA_INIT_FUNCTION create_um_idi_proc(void)
static void remove_um_idi_proc(void)
static const struct file_operations divas_idi_fops = ;
static void divas_idi_unregister_chrdev(void)
static int DIVA_INIT_FUNCTION divas_idi_register_chrdev(void)
static int DIVA_INIT_FUNCTION divasi_init(void)
static void DIVA_EXIT_FUNCTION divasi_exit(void)
module_init(divasi_init);
module_exit(divasi_exit);
static int
divas_um_idi_copy_to_user(void *os_handle, void *dst, const void *src,
int length)
static ssize_t
um_idi_read(struct file *file, char __user *buf, size_t count, loff_t * offset)
static int
divas_um_idi_copy_from_user(void *os_handle, void *dst, const void *src,
int length)
static int um_idi_open_adapter(struct file *file, int adapter_nr)
static ssize_t
um_idi_write(struct file *file, const char __user *buf, size_t count,
loff_t * offset)
static unsigned int um_idi_poll(struct file *file, poll_table * wait)
static int um_idi_open(struct inode *inode, struct file *file)
static int um_idi_release(struct inode *inode, struct file *file)
int diva_os_get_context_size(void)
void diva_os_wakeup_read(void *os_context)
void diva_os_wakeup_close(void *os_context)
static
void diva_um_timer_function(unsigned long data)
static int remove_entity(void *entity)
void diva_um_idi_start_wdog(void *entity)
void diva_um_idi_stop_wdog(void *entity)
