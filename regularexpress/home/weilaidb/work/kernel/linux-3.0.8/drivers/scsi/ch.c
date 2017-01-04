#define VERSION "0.25"
#define CH_DT_MAX       16
#define CH_TYPES        8
#define CH_MAX_DEVS     128
MODULE_DESCRIPTION("device driver for scsi media changer devices");
MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(SCSI_CHANGER_MAJOR);
MODULE_ALIAS_SCSI_DEVICE(TYPE_MEDIUM_CHANGER);
static DEFINE_MUTEX(ch_mutex);
static int init = 1;
module_param(init, int, 0444);
MODULE_PARM_DESC(init, \
"initialize element status on driver load (default: on)");
static int timeout_move = 300;
module_param(timeout_move, int, 0644);
MODULE_PARM_DESC(timeout_move,"timeout for move commands "
"(default: 300 seconds)");
static int timeout_init = 3600;
module_param(timeout_init, int, 0644);
MODULE_PARM_DESC(timeout_init,"timeout for INITIALIZE ELEMENT STATUS "
"(default: 3600 seconds)");
static int verbose = 1;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose,"be verbose (default: on)");
static int debug = 0;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"enable/disable debug messages, also prints more "
"detailed sense codes on scsi errors (default: off)");
static int dt_id[CH_DT_MAX] = ;
static int dt_lun[CH_DT_MAX];
module_param_array(dt_id,  int, NULL, 0444);
module_param_array(dt_lun, int, NULL, 0444);
static int vendor_firsts[CH_TYPES-4];
static int vendor_counts[CH_TYPES-4];
module_param_array(vendor_firsts, int, NULL, 0444);
module_param_array(vendor_counts, int, NULL, 0444);
static const char * vendor_labels[CH_TYPES-4] = ;
#define DPRINTK(fmt, arg...)						\
do  while (0)
#define VPRINTK(level, fmt, arg...)					\
do  while (0)
#define MAX_RETRIES   1
static struct class * ch_sysfs_class;
typedef struct  scsi_changer;
static DEFINE_IDR(ch_index_idr);
static DEFINE_SPINLOCK(ch_index_lock);
static const struct  ch_err[] = ;
static int ch_find_errno(struct scsi_sense_hdr *sshdr)
static int
ch_do_scsi(scsi_changer *ch, unsigned char *cmd,
void *buffer, unsigned buflength,
enum dma_data_direction direction)
static int
ch_elem_to_typecode(scsi_changer *ch, u_int elem)
static int
ch_read_element_status(scsi_changer *ch, u_int elem, char *data)
static int
ch_init_elem(scsi_changer *ch)
static int
ch_readconfig(scsi_changer *ch)
static int
ch_position(scsi_changer *ch, u_int trans, u_int elem, int rotate)
static int
ch_move(scsi_changer *ch, u_int trans, u_int src, u_int dest, int rotate)
static int
ch_exchange(scsi_changer *ch, u_int trans, u_int src,
u_int dest1, u_int dest2, int rotate1, int rotate2)
static void
ch_check_voltag(char *tag)
static int
ch_set_voltag(scsi_changer *ch, u_int elem,
int alternate, int clear, u_char *tag)
static int ch_gstatus(scsi_changer *ch, int type, unsigned char __user *dest)
static int
ch_release(struct inode *inode, struct file *file)
static int
ch_open(struct inode *inode, struct file *file)
static int
ch_checkrange(scsi_changer *ch, unsigned int type, unsigned int unit)
static long ch_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
struct changer_element_status32 ;
#define CHIOGSTATUS32  _IOW('c', 8,struct changer_element_status32)
static long ch_ioctl_compat(struct file * file,
unsigned int cmd, unsigned long arg)
static int ch_probe(struct device *dev)
static int ch_remove(struct device *dev)
static struct scsi_driver ch_template = ;
static const struct file_operations changer_fops = ;
static int __init init_ch_module(void)
static void __exit exit_ch_module(void)
module_init(init_ch_module);
module_exit(exit_ch_module);
