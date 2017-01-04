static int sg_version_num = 30534;
#define SG_VERSION_STR "3.5.34"
static char *sg_version_date = "20061027";
static int sg_proc_init(void);
static void sg_proc_cleanup(void);
#define SG_ALLOW_DIO_DEF 0
#define SG_MAX_DEVS 32768
#define MULDIV(X,MUL,DIV) ((((X % DIV) * MUL) / DIV) + ((X / DIV) * MUL))
#define SG_DEFAULT_TIMEOUT MULDIV(SG_DEFAULT_TIMEOUT_USER, HZ, USER_HZ)
int sg_big_buff = SG_DEF_RESERVED_SIZE;
static int def_reserved_size = -1;
static int sg_allow_dio = SG_ALLOW_DIO_DEF;
static int scatter_elem_sz = SG_SCATTER_SZ;
static int scatter_elem_sz_prev = SG_SCATTER_SZ;
#define SG_SECTOR_SZ 512
static int sg_add(struct device *, struct class_interface *);
static void sg_remove(struct device *, struct class_interface *);
static DEFINE_MUTEX(sg_mutex);
static DEFINE_IDR(sg_index_idr);
static DEFINE_RWLOCK(sg_index_lock);
static struct class_interface sg_interface = ;
typedef struct sg_scatter_hold  Sg_scatter_hold;
struct sg_device;
struct sg_fd;
typedef struct sg_request  Sg_request;
typedef struct sg_fd  Sg_fd;
typedef struct sg_device  Sg_device;
static void sg_rq_end_io(struct request *rq, int uptodate);
static int sg_start_req(Sg_request *srp, unsigned char *cmd);
static int sg_finish_rem_req(Sg_request * srp);
static int sg_build_indirect(Sg_scatter_hold * schp, Sg_fd * sfp, int buff_size);
static ssize_t sg_new_read(Sg_fd * sfp, char __user *buf, size_t count,
Sg_request * srp);
static ssize_t sg_new_write(Sg_fd *sfp, struct file *file,
const char __user *buf, size_t count, int blocking,
int read_only, int sg_io_owned, Sg_request **o_srp);
static int sg_common_write(Sg_fd * sfp, Sg_request * srp,
unsigned char *cmnd, int timeout, int blocking);
static int sg_read_oxfer(Sg_request * srp, char __user *outp, int num_read_xfer);
static void sg_remove_scat(Sg_scatter_hold * schp);
static void sg_build_reserve(Sg_fd * sfp, int req_size);
static void sg_link_reserve(Sg_fd * sfp, Sg_request * srp, int size);
static void sg_unlink_reserve(Sg_fd * sfp, Sg_request * srp);
static Sg_fd *sg_add_sfp(Sg_device * sdp, int dev);
static void sg_remove_sfp(struct kref *);
static Sg_request *sg_get_rq_mark(Sg_fd * sfp, int pack_id);
static Sg_request *sg_add_request(Sg_fd * sfp);
static int sg_remove_request(Sg_fd * sfp, Sg_request * srp);
static int sg_res_in_use(Sg_fd * sfp);
static Sg_device *sg_get_dev(int dev);
static void sg_put_dev(Sg_device *sdp);
#define SZ_SG_HEADER sizeof(struct sg_header)
#define SZ_SG_IO_HDR sizeof(sg_io_hdr_t)
#define SZ_SG_IOVEC sizeof(sg_iovec_t)
#define SZ_SG_REQ_INFO sizeof(sg_req_info_t)
static int sg_allow_access(struct file *filp, unsigned char *cmd)
static int
sg_open(struct inode *inode, struct file *filp)
static int
sg_release(struct inode *inode, struct file *filp)
static ssize_t
sg_read(struct file *filp, char __user *buf, size_t count, loff_t * ppos)
static ssize_t
sg_new_read(Sg_fd * sfp, char __user *buf, size_t count, Sg_request * srp)
static ssize_t
sg_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos)
static ssize_t
sg_new_write(Sg_fd *sfp, struct file *file, const char __user *buf,
size_t count, int blocking, int read_only, int sg_io_owned,
Sg_request **o_srp)
static int
sg_common_write(Sg_fd * sfp, Sg_request * srp,
unsigned char *cmnd, int timeout, int blocking)
static int
sg_ioctl(struct file *filp, unsigned int cmd_in, unsigned long arg)
static long
sg_unlocked_ioctl(struct file *filp, unsigned int cmd_in, unsigned long arg)
static long sg_compat_ioctl(struct file *filp, unsigned int cmd_in, unsigned long arg)
static unsigned int
sg_poll(struct file *filp, poll_table * wait)
static int
sg_fasync(int fd, struct file *filp, int mode)
static int
sg_vma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct sg_mmap_vm_ops = ;
static int
sg_mmap(struct file *filp, struct vm_area_struct *vma)
static void sg_rq_end_io_usercontext(struct work_struct *work)
static void sg_rq_end_io(struct request *rq, int uptodate)
static const struct file_operations sg_fops = ;
static struct class *sg_sysfs_class;
static int sg_sysfs_valid = 0;
static Sg_device *sg_alloc(struct gendisk *disk, struct scsi_device *scsidp)
static int
sg_add(struct device *cl_dev, struct class_interface *cl_intf)
static void sg_device_destroy(struct kref *kref)
static void sg_remove(struct device *cl_dev, struct class_interface *cl_intf)
module_param_named(scatter_elem_sz, scatter_elem_sz, int, S_IRUGO | S_IWUSR);
module_param_named(def_reserved_size, def_reserved_size, int,
S_IRUGO | S_IWUSR);
module_param_named(allow_dio, sg_allow_dio, int, S_IRUGO | S_IWUSR);
MODULE_AUTHOR("Douglas Gilbert");
MODULE_DESCRIPTION("SCSI generic (sg) driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(SG_VERSION_STR);
MODULE_ALIAS_CHARDEV_MAJOR(SCSI_GENERIC_MAJOR);
MODULE_PARM_DESC(scatter_elem_sz, "scatter gather element "
"size (default: max(SG_SCATTER_SZ, PAGE_SIZE))");
MODULE_PARM_DESC(def_reserved_size, "size of buffer reserved for each fd");
MODULE_PARM_DESC(allow_dio, "allow direct I/O (default: 0 (disallow))");
static int __init
init_sg(void)
static void __exit
exit_sg(void)
static int sg_start_req(Sg_request *srp, unsigned char *cmd)
static int sg_finish_rem_req(Sg_request * srp)
static int
sg_build_sgat(Sg_scatter_hold * schp, const Sg_fd * sfp, int tablesize)
static int
sg_build_indirect(Sg_scatter_hold * schp, Sg_fd * sfp, int buff_size)
static void
sg_remove_scat(Sg_scatter_hold * schp)
static int
sg_read_oxfer(Sg_request * srp, char __user *outp, int num_read_xfer)
static void
sg_build_reserve(Sg_fd * sfp, int req_size)
static void
sg_link_reserve(Sg_fd * sfp, Sg_request * srp, int size)
static void
sg_unlink_reserve(Sg_fd * sfp, Sg_request * srp)
static Sg_request *
sg_get_rq_mark(Sg_fd * sfp, int pack_id)
static Sg_request *
sg_add_request(Sg_fd * sfp)
static int
sg_remove_request(Sg_fd * sfp, Sg_request * srp)
static Sg_fd *
sg_add_sfp(Sg_device * sdp, int dev)
static void sg_remove_sfp_usercontext(struct work_struct *work)
static void sg_remove_sfp(struct kref *kref)
static int
sg_res_in_use(Sg_fd * sfp)
static int
sg_idr_max_id(int id, void *p, void *data)
static int
sg_last_dev(void)
static Sg_device *sg_lookup_dev(int dev)
static Sg_device *sg_get_dev(int dev)
static void sg_put_dev(struct sg_device *sdp)
static struct proc_dir_entry *sg_proc_sgp = NULL;
static char sg_proc_sg_dirname[] = "scsi/sg";
static int sg_proc_seq_show_int(struct seq_file *s, void *v);
static int sg_proc_single_open_adio(struct inode *inode, struct file *file);
static ssize_t sg_proc_write_adio(struct file *filp, const char __user *buffer,
size_t count, loff_t *off);
static const struct file_operations adio_fops = ;
static int sg_proc_single_open_dressz(struct inode *inode, struct file *file);
static ssize_t sg_proc_write_dressz(struct file *filp,
const char __user *buffer, size_t count, loff_t *off);
static const struct file_operations dressz_fops = ;
static int sg_proc_seq_show_version(struct seq_file *s, void *v);
static int sg_proc_single_open_version(struct inode *inode, struct file *file);
static const struct file_operations version_fops = ;
static int sg_proc_seq_show_devhdr(struct seq_file *s, void *v);
static int sg_proc_single_open_devhdr(struct inode *inode, struct file *file);
static const struct file_operations devhdr_fops = ;
static int sg_proc_seq_show_dev(struct seq_file *s, void *v);
static int sg_proc_open_dev(struct inode *inode, struct file *file);
static void * dev_seq_start(struct seq_file *s, loff_t *pos);
static void * dev_seq_next(struct seq_file *s, void *v, loff_t *pos);
static void dev_seq_stop(struct seq_file *s, void *v);
static const struct file_operations dev_fops = ;
static const struct seq_operations dev_seq_ops = ;
static int sg_proc_seq_show_devstrs(struct seq_file *s, void *v);
static int sg_proc_open_devstrs(struct inode *inode, struct file *file);
static const struct file_operations devstrs_fops = ;
static const struct seq_operations devstrs_seq_ops = ;
static int sg_proc_seq_show_debug(struct seq_file *s, void *v);
static int sg_proc_open_debug(struct inode *inode, struct file *file);
static const struct file_operations debug_fops = ;
static const struct seq_operations debug_seq_ops = ;
struct sg_proc_leaf ;
static struct sg_proc_leaf sg_proc_leaf_arr[] = ;
static int
sg_proc_init(void)
static void
sg_proc_cleanup(void)
static int sg_proc_seq_show_int(struct seq_file *s, void *v)
static int sg_proc_single_open_adio(struct inode *inode, struct file *file)
static ssize_t
sg_proc_write_adio(struct file *filp, const char __user *buffer,
size_t count, loff_t *off)
static int sg_proc_single_open_dressz(struct inode *inode, struct file *file)
static ssize_t
sg_proc_write_dressz(struct file *filp, const char __user *buffer,
size_t count, loff_t *off)
static int sg_proc_seq_show_version(struct seq_file *s, void *v)
static int sg_proc_single_open_version(struct inode *inode, struct file *file)
static int sg_proc_seq_show_devhdr(struct seq_file *s, void *v)
static int sg_proc_single_open_devhdr(struct inode *inode, struct file *file)
struct sg_proc_deviter ;
static void * dev_seq_start(struct seq_file *s, loff_t *pos)
static void * dev_seq_next(struct seq_file *s, void *v, loff_t *pos)
static void dev_seq_stop(struct seq_file *s, void *v)
static int sg_proc_open_dev(struct inode *inode, struct file *file)
static int sg_proc_seq_show_dev(struct seq_file *s, void *v)
static int sg_proc_open_devstrs(struct inode *inode, struct file *file)
static int sg_proc_seq_show_devstrs(struct seq_file *s, void *v)
static void sg_proc_debug_helper(struct seq_file *s, Sg_device * sdp)
static int sg_proc_open_debug(struct inode *inode, struct file *file)
static int sg_proc_seq_show_debug(struct seq_file *s, void *v)
module_init(init_sg);
module_exit(exit_sg);
