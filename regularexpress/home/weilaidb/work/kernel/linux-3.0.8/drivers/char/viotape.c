#define VIOTAPE_VERSION		"1.2"
#define VIOTAPE_MAXREQ		1
#define VIOTAPE_KERN_WARN	KERN_WARNING "viotape: "
#define VIOTAPE_KERN_INFO	KERN_INFO "viotape: "
static DEFINE_MUTEX(proc_viotape_mutex);
static int viotape_numdev;
struct viot_devinfo_struct ;
#define VIOTAPOP_RESET          0
#define VIOTAPOP_FSF	        1
#define VIOTAPOP_BSF	        2
#define VIOTAPOP_FSR	        3
#define VIOTAPOP_BSR	        4
#define VIOTAPOP_WEOF	        5
#define VIOTAPOP_REW	        6
#define VIOTAPOP_NOP	        7
#define VIOTAPOP_EOM	        8
#define VIOTAPOP_ERASE          9
#define VIOTAPOP_SETBLK        10
#define VIOTAPOP_SETDENSITY    11
#define VIOTAPOP_SETPOS	       12
#define VIOTAPOP_GETPOS	       13
#define VIOTAPOP_SETPART       14
#define VIOTAPOP_UNLOAD        15
enum viotaperc ;
static const struct vio_error_entry viotape_err_table[] = ;
#define VIOTAPE_MAX_TAPE	HVMAXARCHITECTEDVIRTUALTAPES
#define MAX_PARTITIONS		4
#define VIOT_IDLE		0
#define VIOT_READING		1
#define VIOT_WRITING		2
static struct  viotape_unitinfo[VIOTAPE_MAX_TAPE];
static struct mtget viomtget[VIOTAPE_MAX_TAPE];
static struct class *tape_class;
static struct device *tape_device[VIOTAPE_MAX_TAPE];
static struct  state[VIOTAPE_MAX_TAPE];
static struct semaphore reqSem;
struct op_struct ;
static spinlock_t	op_struct_list_lock;
static struct op_struct	*op_struct_list;
static int chg_state(int index, unsigned char new_state, struct file *file);
static int proc_viotape_show(struct seq_file *m, void *v)
static int proc_viotape_open(struct inode *inode, struct file *file)
static const struct file_operations proc_viotape_operations = ;
void get_dev_info(struct inode *ino, struct viot_devinfo_struct *devi)
static void clear_op_struct_pool(void)
static int add_op_structs(int structs)
static struct op_struct *get_op_struct(void)
static void free_op_struct(struct op_struct *op_struct)
int tape_rc_to_errno(int tape_rc, char *operation, int tapeno)
static ssize_t viotap_write(struct file *file, const char *buf,
size_t count, loff_t * ppos)
static ssize_t viotap_read(struct file *file, char *buf, size_t count,
loff_t *ptr)
static int viotap_ioctl(struct inode *inode, struct file *file,
unsigned int cmd, unsigned long arg)
static long viotap_unlocked_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int viotap_open(struct inode *inode, struct file *file)
static int viotap_release(struct inode *inode, struct file *file)
const struct file_operations viotap_fops = ;
static void vioHandleTapeEvent(struct HvLpEvent *event)
static int viotape_probe(struct vio_dev *vdev, const struct vio_device_id *id)
static int viotape_remove(struct vio_dev *vdev)
static struct vio_device_id viotape_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, viotape_device_table);
static struct vio_driver viotape_driver = ;
int __init viotap_init(void)
static int chg_state(int index, unsigned char new_state, struct file *file)
static void __exit viotap_exit(void)
MODULE_LICENSE("GPL");
module_init(viotap_init);
module_exit(viotap_exit);
