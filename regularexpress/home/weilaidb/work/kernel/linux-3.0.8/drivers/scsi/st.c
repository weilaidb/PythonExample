static const char *verstr = "20101219";
#define DEBUG 0
#if DEBUG
#define ST_DEB_MSG  KERN_NOTICE
#define DEB(a) a
#define DEBC(a) if (debugging)
#define DEB(a)
#define DEBC(a)
#define ST_KILOBYTE 1024
static DEFINE_MUTEX(st_mutex);
static int buffer_kbs;
static int max_sg_segs;
static int try_direct_io = TRY_DIRECT_IO;
static int try_rdio = 1;
static int try_wdio = 1;
static int st_dev_max;
static int st_nr_dev;
static struct class *st_sysfs_class;
MODULE_AUTHOR("Kai Makisara");
MODULE_DESCRIPTION("SCSI tape (st) driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(SCSI_TAPE_MAJOR);
MODULE_ALIAS_SCSI_DEVICE(TYPE_TAPE);
module_param_named(buffer_kbs, buffer_kbs, int, 0);
MODULE_PARM_DESC(buffer_kbs, "Default driver buffer size for fixed block mode (KB; 32)");
module_param_named(max_sg_segs, max_sg_segs, int, 0);
MODULE_PARM_DESC(max_sg_segs, "Maximum number of scatter/gather segments to use (256)");
module_param_named(try_direct_io, try_direct_io, int, 0);
MODULE_PARM_DESC(try_direct_io, "Try direct I/O between user buffer and tape drive (1)");
module_param_named(try_rdio, try_rdio, int, 0);
MODULE_PARM_DESC(try_rdio, "Try direct read i/o when possible");
module_param_named(try_wdio, try_wdio, int, 0);
MODULE_PARM_DESC(try_wdio, "Try direct write i/o when possible");
static int write_threshold_kbs;
static struct st_dev_parm  parms[] __initdata = ;
#if ST_NBR_MODES > 16
#error "Maximum number of modes is 16"
static const char *st_formats[] = ;
#define ST_FIXED_BUFFER_SIZE (ST_FIXED_BUFFER_BLOCKS * ST_KILOBYTE)
#if ST_FIXED_BUFFER_SIZE >= (2 << 24 - 1)
#error "Buffer size should not exceed (2 << 24 - 1) bytes!"
static int debugging = DEBUG;
#define MAX_RETRIES 0
#define MAX_WRITE_RETRIES 0
#define MAX_READY_RETRIES 0
#define NO_TAPE  NOT_READY
#define ST_TIMEOUT (900 * HZ)
#define ST_LONG_TIMEOUT (14000 * HZ)
#define TAPE_NR(x) ( ((iminor(x) & ~255) >> (ST_NBR_MODE_BITS + 1)) | \
(iminor(x) & ~(-1 << ST_MODE_SHIFT)) )
#define TAPE_MODE(x) ((iminor(x) & ST_MODE_MASK) >> ST_MODE_SHIFT)
#define TAPE_MINOR(d, m, n) (((d & ~(255 >> (ST_NBR_MODE_BITS + 1))) << (ST_NBR_MODE_BITS + 1)) | \
(d & (255 >> (ST_NBR_MODE_BITS + 1))) | (m << ST_MODE_SHIFT) | ((n != 0) << 7) )
#define SET_DENS_AND_BLK 0x10001
static DEFINE_RWLOCK(st_dev_arr_lock);
static int st_fixed_buffer_size = ST_FIXED_BUFFER_SIZE;
static int st_max_sg_segs = ST_MAX_SG;
static struct scsi_tape **scsi_tapes = NULL;
static int modes_defined;
static int enlarge_buffer(struct st_buffer *, int, int);
static void clear_buffer(struct st_buffer *);
static void normalize_buffer(struct st_buffer *);
static int append_to_buffer(const char __user *, struct st_buffer *, int);
static int from_buffer(struct st_buffer *, char __user *, int);
static void move_buffer_data(struct st_buffer *, int);
static int sgl_map_user_pages(struct st_buffer *, const unsigned int,
unsigned long, size_t, int);
static int sgl_unmap_user_pages(struct st_buffer *, const unsigned int, int);
static int st_probe(struct device *);
static int st_remove(struct device *);
static int do_create_sysfs_files(void);
static void do_remove_sysfs_files(void);
static int do_create_class_files(struct scsi_tape *, int, int);
static struct scsi_driver st_template = ;
static int st_compression(struct scsi_tape *, int);
static int find_partition(struct scsi_tape *);
static int switch_partition(struct scsi_tape *);
static int st_int_ioctl(struct scsi_tape *, unsigned int, unsigned long);
static void scsi_tape_release(struct kref *);
#define to_scsi_tape(obj) container_of(obj, struct scsi_tape, kref)
static DEFINE_MUTEX(st_ref_mutex);
#define SIGS_FROM_OSST \
, \
, \
, \
, \
static struct scsi_tape *scsi_tape_get(int dev)
static void scsi_tape_put(struct scsi_tape *STp)
struct st_reject_data ;
static struct st_reject_data reject_list[] = ;
static char * st_incompatible(struct scsi_device* SDp)
static inline char *tape_name(struct scsi_tape *tape)
static void st_analyze_sense(struct st_request *SRpnt, struct st_cmdstatus *s)
static int st_chk_result(struct scsi_tape *STp, struct st_request * SRpnt)
static struct st_request *st_allocate_request(struct scsi_tape *stp)
static void st_release_request(struct st_request *streq)
static void st_scsi_execute_end(struct request *req, int uptodate)
static int st_scsi_execute(struct st_request *SRpnt, const unsigned char *cmd,
int data_direction, void *buffer, unsigned bufflen,
int timeout, int retries)
static struct st_request *
st_do_scsi(struct st_request * SRpnt, struct scsi_tape * STp, unsigned char *cmd,
int bytes, int direction, int timeout, int retries, int do_wait)
static int write_behind_check(struct scsi_tape * STp)
static int cross_eof(struct scsi_tape * STp, int forward)
static int st_flush_write_buffer(struct scsi_tape * STp)
static int flush_buffer(struct scsi_tape *STp, int seek_next)
static int set_mode_densblk(struct scsi_tape * STp, struct st_modedef * STm)
static int do_door_lock(struct scsi_tape * STp, int do_lock)
static void reset_state(struct scsi_tape *STp)
#define CHKRES_READY       0
#define CHKRES_NEW_SESSION 1
#define CHKRES_NOT_READY   2
#define CHKRES_NO_TAPE     3
#define MAX_ATTENTIONS    10
static int test_ready(struct scsi_tape *STp, int do_wait)
static int check_tape(struct scsi_tape *STp, struct file *filp)
static int st_open(struct inode *inode, struct file *filp)
static int st_flush(struct file *filp, fl_owner_t id)
static int st_release(struct inode *inode, struct file *filp)
static ssize_t rw_checks(struct scsi_tape *STp, struct file *filp, size_t count)
static int setup_buffering(struct scsi_tape *STp, const char __user *buf,
size_t count, int is_read)
static void release_buffering(struct scsi_tape *STp, int is_read)
static ssize_t
st_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos)
static long read_tape(struct scsi_tape *STp, long count,
struct st_request ** aSRpnt)
static ssize_t
st_read(struct file *filp, char __user *buf, size_t count, loff_t * ppos)
DEB(
static void st_log_options(struct scsi_tape * STp, struct st_modedef * STm, char *name)
)
static int st_set_options(struct scsi_tape *STp, long options)
#define MODE_HEADER_LENGTH  4
#define MH_OFF_DATA_LENGTH     0
#define MH_OFF_MEDIUM_TYPE     1
#define MH_OFF_DEV_SPECIFIC    2
#define MH_OFF_BDESCS_LENGTH   3
#define MP_OFF_PAGE_NBR        0
#define MP_OFF_PAGE_LENGTH     1
#define MH_BIT_WP              0x80
#define MP_MSK_PAGE_NBR        0x3f
#define MODE_SENSE_OMIT_BDESCS 0x08
#define MODE_SELECT_PAGE_FORMAT 0x10
static int read_mode_page(struct scsi_tape *STp, int page, int omit_block_descs)
static int write_mode_page(struct scsi_tape *STp, int page, int slow)
#define COMPRESSION_PAGE        0x0f
#define COMPRESSION_PAGE_LENGTH 16
#define CP_OFF_DCE_DCC          2
#define CP_OFF_C_ALGO           7
#define DCE_MASK  0x80
#define DCC_MASK  0x40
#define RED_MASK  0x60
static int st_compression(struct scsi_tape * STp, int state)
static int do_load_unload(struct scsi_tape *STp, struct file *filp, int load_code)
#if DEBUG
#define ST_DEB_FORWARD  0
#define ST_DEB_BACKWARD 1
static void deb_space_print(char *name, int direction, char *units, unsigned char *cmd)
static int st_int_ioctl(struct scsi_tape *STp, unsigned int cmd_in, unsigned long arg)
static int get_location(struct scsi_tape *STp, unsigned int *block, int *partition,
int logical)
static int set_location(struct scsi_tape *STp, unsigned int block, int partition,
int logical)
static int find_partition(struct scsi_tape *STp)
static int switch_partition(struct scsi_tape *STp)
#define PART_PAGE   0x11
#define PART_PAGE_FIXED_LENGTH 8
#define PP_OFF_MAX_ADD_PARTS   2
#define PP_OFF_NBR_ADD_PARTS   3
#define PP_OFF_FLAGS           4
#define PP_OFF_PART_UNITS      6
#define PP_OFF_RESERVED        7
#define PP_BIT_IDP             0x20
#define PP_MSK_PSUM_MB         0x10
static int nbr_partitions(struct scsi_tape *STp)
static int partition_tape(struct scsi_tape *STp, int size)
static long st_ioctl(struct file *file, unsigned int cmd_in, unsigned long arg)
static long st_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static struct st_buffer *new_tape_buffer(int need_dma, int max_sg)
#define ST_MAX_ORDER 6
static int enlarge_buffer(struct st_buffer * STbuffer, int new_size, int need_dma)
static void clear_buffer(struct st_buffer * st_bp)
static void normalize_buffer(struct st_buffer * STbuffer)
static int append_to_buffer(const char __user *ubp, struct st_buffer * st_bp, int do_count)
static int from_buffer(struct st_buffer * st_bp, char __user *ubp, int do_count)
static void move_buffer_data(struct st_buffer * st_bp, int offset)
static void validate_options(void)
static int __init st_setup(char *str)
__setup("st=", st_setup);
static const struct file_operations st_fops =
;
static int st_probe(struct device *dev)
;
static int st_remove(struct device *dev)
static void scsi_tape_release(struct kref *kref)
static int __init init_st(void)
static void __exit exit_st(void)
module_init(init_st);
module_exit(exit_st);
static ssize_t st_try_direct_io_show(struct device_driver *ddp, char *buf)
static DRIVER_ATTR(try_direct_io, S_IRUGO, st_try_direct_io_show, NULL);
static ssize_t st_fixed_buffer_size_show(struct device_driver *ddp, char *buf)
static DRIVER_ATTR(fixed_buffer_size, S_IRUGO, st_fixed_buffer_size_show, NULL);
static ssize_t st_max_sg_segs_show(struct device_driver *ddp, char *buf)
static DRIVER_ATTR(max_sg_segs, S_IRUGO, st_max_sg_segs_show, NULL);
static ssize_t st_version_show(struct device_driver *ddd, char *buf)
static DRIVER_ATTR(version, S_IRUGO, st_version_show, NULL);
static int do_create_sysfs_files(void)
static void do_remove_sysfs_files(void)
static ssize_t
st_defined_show(struct device *dev, struct device_attribute *attr, char *buf)
DEVICE_ATTR(defined, S_IRUGO, st_defined_show, NULL);
static ssize_t
st_defblk_show(struct device *dev, struct device_attribute *attr, char *buf)
DEVICE_ATTR(default_blksize, S_IRUGO, st_defblk_show, NULL);
static ssize_t
st_defdensity_show(struct device *dev, struct device_attribute *attr, char *buf)
DEVICE_ATTR(default_density, S_IRUGO, st_defdensity_show, NULL);
static ssize_t
st_defcompression_show(struct device *dev, struct device_attribute *attr,
char *buf)
DEVICE_ATTR(default_compression, S_IRUGO, st_defcompression_show, NULL);
static ssize_t
st_options_show(struct device *dev, struct device_attribute *attr, char *buf)
DEVICE_ATTR(options, S_IRUGO, st_options_show, NULL);
static int do_create_class_files(struct scsi_tape *STp, int dev_num, int mode)
static int sgl_map_user_pages(struct st_buffer *STbp,
const unsigned int max_pages, unsigned long uaddr,
size_t count, int rw)
static int sgl_unmap_user_pages(struct st_buffer *STbp,
const unsigned int nr_pages, int dirtied)
