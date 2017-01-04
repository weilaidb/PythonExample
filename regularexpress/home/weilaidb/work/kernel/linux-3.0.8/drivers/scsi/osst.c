static const char * cvsid = "$Id: osst.c,v 1.73 2005/01/01 21:13:34 wriede Exp $";
static const char * osst_version = "0.99.4";
#define OSST_FW_NEED_POLL_MIN 10601
#define OSST_FW_NEED_POLL_MAX 10704
#define OSST_FW_NEED_POLL(x,d) ((x) >= OSST_FW_NEED_POLL_MIN && (x) <= OSST_FW_NEED_POLL_MAX && d->host->this_id != 7)
#define DEBUG 0
#define OSST_DEB_MSG  KERN_NOTICE
#define ST_KILOBYTE 1024
static DEFINE_MUTEX(osst_int_mutex);
static int max_dev = 0;
static int write_threshold_kbs = 0;
static int max_sg_segs = 0;
MODULE_AUTHOR("Willem Riede");
MODULE_DESCRIPTION("OnStream  Tape Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(OSST_MAJOR);
MODULE_ALIAS_SCSI_DEVICE(TYPE_TAPE);
module_param(max_dev, int, 0444);
MODULE_PARM_DESC(max_dev, "Maximum number of OnStream Tape Drives to attach (4)");
module_param(write_threshold_kbs, int, 0644);
MODULE_PARM_DESC(write_threshold_kbs, "Asynchronous write threshold (KB; 32)");
module_param(max_sg_segs, int, 0644);
MODULE_PARM_DESC(max_sg_segs, "Maximum number of scatter/gather segments to use (9)");
static struct osst_dev_parm  parms[] __initdata = ;
#define OSST_BUFFER_SIZE (OSST_BUFFER_BLOCKS * ST_KILOBYTE)
#define OSST_WRITE_THRESHOLD (OSST_WRITE_THRESHOLD_BLOCKS * ST_KILOBYTE)
#if OSST_BUFFER_SIZE >= (2 << 24 - 1)
#error "Buffer size should not exceed (2 << 24 - 1) bytes!"
#if DEBUG
static int debugging = 1;
#define MAX_RETRIES 0
#define NO_TAPE  NOT_READY
#define OSST_WAIT_POSITION_COMPLETE   (HZ > 200 ? HZ / 200 : 1)
#define OSST_WAIT_WRITE_COMPLETE      (HZ / 12)
#define OSST_WAIT_LONG_WRITE_COMPLETE (HZ / 2)
#define OSST_TIMEOUT (200 * HZ)
#define OSST_LONG_TIMEOUT (1800 * HZ)
#define TAPE_NR(x) (iminor(x) & ~(-1 << ST_MODE_SHIFT))
#define TAPE_MODE(x) ((iminor(x) & ST_MODE_MASK) >> ST_MODE_SHIFT)
#define TAPE_REWIND(x) ((iminor(x) & 0x80) == 0)
#define TAPE_IS_RAW(x) (TAPE_MODE(x) & (ST_NBR_MODES >> 1))
#define SET_DENS_AND_BLK 0x10001
static int osst_buffer_size       = OSST_BUFFER_SIZE;
static int osst_write_threshold   = OSST_WRITE_THRESHOLD;
static int osst_max_sg_segs       = OSST_MAX_SG;
static int osst_max_dev           = OSST_MAX_TAPES;
static int osst_nr_dev;
static struct osst_tape **os_scsi_tapes = NULL;
static DEFINE_RWLOCK(os_scsi_tapes_lock);
static int modes_defined = 0;
static struct osst_buffer *new_tape_buffer(int, int, int);
static int enlarge_buffer(struct osst_buffer *, int);
static void normalize_buffer(struct osst_buffer *);
static int append_to_buffer(const char __user *, struct osst_buffer *, int);
static int from_buffer(struct osst_buffer *, char __user *, int);
static int osst_zero_buffer_tail(struct osst_buffer *);
static int osst_copy_to_buffer(struct osst_buffer *, unsigned char *);
static int osst_copy_from_buffer(struct osst_buffer *, unsigned char *);
static int osst_probe(struct device *);
static int osst_remove(struct device *);
static struct scsi_driver osst_template = ;
static int osst_int_ioctl(struct osst_tape *STp, struct osst_request ** aSRpnt,
unsigned int cmd_in, unsigned long arg);
static int osst_set_frame_position(struct osst_tape *STp, struct osst_request ** aSRpnt, int frame, int skip);
static int osst_get_frame_position(struct osst_tape *STp, struct osst_request ** aSRpnt);
static int osst_flush_write_buffer(struct osst_tape *STp, struct osst_request ** aSRpnt);
static int osst_write_error_recovery(struct osst_tape * STp, struct osst_request ** aSRpnt, int pending);
static inline char *tape_name(struct osst_tape *tape)
static void osst_analyze_sense(struct osst_request *SRpnt, struct st_cmdstatus *s)
static int osst_chk_result(struct osst_tape * STp, struct osst_request * SRpnt)
static void osst_end_async(struct request *req, int update)
static struct osst_request *osst_allocate_request(void)
static void osst_release_request(struct osst_request *streq)
static int osst_execute(struct osst_request *SRpnt, const unsigned char *cmd,
int cmd_len, int data_direction, void *buffer, unsigned bufflen,
int use_sg, int timeout, int retries)
static	struct osst_request * osst_do_scsi(struct osst_request *SRpnt, struct osst_tape *STp,
unsigned char *cmd, int bytes, int direction, int timeout, int retries, int do_wait)
static void osst_write_behind_check(struct osst_tape *STp)
static void osst_init_aux(struct osst_tape * STp, int frame_type, int frame_seq_number,
int logical_blk_num, int blk_sz, int blk_cnt)
static int osst_verify_frame(struct osst_tape * STp, int frame_seq_number, int quiet)
static int osst_wait_ready(struct osst_tape * STp, struct osst_request ** aSRpnt,
unsigned timeout, int initial_delay)
static int osst_wait_for_medium(struct osst_tape * STp, struct osst_request ** aSRpnt, unsigned timeout)
static int osst_position_tape_and_confirm(struct osst_tape * STp, struct osst_request ** aSRpnt, int frame)
static int osst_flush_drive_buffer(struct osst_tape * STp, struct osst_request ** aSRpnt)
#define OSST_POLL_PER_SEC 10
static int osst_wait_frame(struct osst_tape * STp, struct osst_request ** aSRpnt, int curr, int minlast, int to)
static int osst_recover_wait_frame(struct osst_tape * STp, struct osst_request ** aSRpnt, int writing)
static int osst_read_frame(struct osst_tape * STp, struct osst_request ** aSRpnt, int timeout)
static int osst_initiate_read(struct osst_tape * STp, struct osst_request ** aSRpnt)
static int osst_get_logical_frame(struct osst_tape * STp, struct osst_request ** aSRpnt,
int frame_seq_number, int quiet)
static int osst_seek_logical_blk(struct osst_tape * STp, struct osst_request ** aSRpnt, int logical_blk_num)
#define OSST_FRAME_SHIFT  6
#define OSST_SECTOR_SHIFT 9
#define OSST_SECTOR_MASK  0x03F
static int osst_get_sector(struct osst_tape * STp, struct osst_request ** aSRpnt)
static int osst_seek_sector(struct osst_tape * STp, struct osst_request ** aSRpnt, int sector)
static int osst_read_back_buffer_and_rewrite(struct osst_tape * STp, struct osst_request ** aSRpnt,
unsigned int frame, unsigned int skip, int pending)
static int osst_reposition_and_retry(struct osst_tape * STp, struct osst_request ** aSRpnt,
unsigned int frame, unsigned int skip, int pending)
static int osst_write_error_recovery(struct osst_tape * STp, struct osst_request ** aSRpnt, int pending)
static int osst_space_over_filemarks_backward(struct osst_tape * STp, struct osst_request ** aSRpnt,
int mt_op, int mt_count)
static int osst_space_over_filemarks_forward_slow(struct osst_tape * STp, struct osst_request ** aSRpnt,
int mt_op, int mt_count)
static int osst_space_over_filemarks_forward_fast(struct osst_tape * STp, struct osst_request ** aSRpnt,
int mt_op, int mt_count)
#if DEBUG
static void osst_set_retries(struct osst_tape * STp, struct osst_request ** aSRpnt, int retries)
static int osst_write_filemark(struct osst_tape * STp, struct osst_request ** aSRpnt)
static int osst_write_eod(struct osst_tape * STp, struct osst_request ** aSRpnt)
static int osst_write_filler(struct osst_tape * STp, struct osst_request ** aSRpnt, int where, int count)
static int __osst_write_header(struct osst_tape * STp, struct osst_request ** aSRpnt, int where, int count)
static int osst_write_header(struct osst_tape * STp, struct osst_request ** aSRpnt, int locate_eod)
static int osst_reset_header(struct osst_tape * STp, struct osst_request ** aSRpnt)
static int __osst_analyze_headers(struct osst_tape * STp, struct osst_request ** aSRpnt, int ppos)
static int osst_analyze_headers(struct osst_tape * STp, struct osst_request ** aSRpnt)
static int osst_verify_position(struct osst_tape * STp, struct osst_request ** aSRpnt)
static unsigned int osst_parse_firmware_rev (const char * str)
static int osst_configure_onstream(struct osst_tape *STp, struct osst_request ** aSRpnt)
static int cross_eof(struct osst_tape *STp, struct osst_request ** aSRpnt, int forward)
static int osst_get_frame_position(struct osst_tape *STp, struct osst_request ** aSRpnt)
static int osst_set_frame_position(struct osst_tape *STp, struct osst_request ** aSRpnt, int ppos, int skip)
static int osst_write_trailer(struct osst_tape *STp, struct osst_request ** aSRpnt, int leave_at_EOT)
static int osst_flush_write_buffer(struct osst_tape *STp, struct osst_request ** aSRpnt)
static int osst_flush_buffer(struct osst_tape * STp, struct osst_request ** aSRpnt, int seek_next)
static int osst_write_frame(struct osst_tape * STp, struct osst_request ** aSRpnt, int synchronous)
static int do_door_lock(struct osst_tape * STp, int do_lock)
static void reset_state(struct osst_tape *STp)
static ssize_t osst_write(struct file * filp, const char __user * buf, size_t count, loff_t *ppos)
static ssize_t osst_read(struct file * filp, char __user * buf, size_t count, loff_t *ppos)
static void osst_log_options(struct osst_tape *STp, struct st_modedef *STm, char *name)
static int osst_set_options(struct osst_tape *STp, long options)
static int osst_int_ioctl(struct osst_tape * STp, struct osst_request ** aSRpnt,
unsigned int cmd_in, unsigned long arg)
static int __os_scsi_tape_open(struct inode * inode, struct file * filp)
static int os_scsi_tape_open(struct inode * inode, struct file * filp)
static int os_scsi_tape_flush(struct file * filp, fl_owner_t id)
static int os_scsi_tape_close(struct inode * inode, struct file * filp)
static long osst_ioctl(struct file * file,
unsigned int cmd_in, unsigned long arg)
static long osst_compat_ioctl(struct file * file, unsigned int cmd_in, unsigned long arg)
static struct osst_buffer * new_tape_buffer( int from_initialization, int need_dma, int max_sg )
static int enlarge_buffer(struct osst_buffer *STbuffer, int need_dma)
static void normalize_buffer(struct osst_buffer *STbuffer)
static int append_to_buffer(const char __user *ubp, struct osst_buffer *st_bp, int do_count)
static int from_buffer(struct osst_buffer *st_bp, char __user *ubp, int do_count)
static int osst_zero_buffer_tail(struct osst_buffer *st_bp)
static int osst_copy_to_buffer(struct osst_buffer *st_bp, unsigned char *ptr)
static int osst_copy_from_buffer(struct osst_buffer *st_bp, unsigned char *ptr)
static void validate_options (void)
static int __init osst_setup (char *str)
__setup("osst=", osst_setup);
static const struct file_operations osst_fops = ;
static int osst_supports(struct scsi_device * SDp)
static ssize_t osst_version_show(struct device_driver *ddd, char *buf)
static DRIVER_ATTR(version, S_IRUGO, osst_version_show, NULL);
static int osst_create_sysfs_files(struct device_driver *sysfs)
static void osst_remove_sysfs_files(struct device_driver *sysfs)
static ssize_t osst_adr_rev_show(struct device *dev,
struct device_attribute *attr, char *buf)
DEVICE_ATTR(ADR_rev, S_IRUGO, osst_adr_rev_show, NULL);
static ssize_t osst_linux_media_version_show(struct device *dev,
struct device_attribute *attr,
char *buf)
DEVICE_ATTR(media_version, S_IRUGO, osst_linux_media_version_show, NULL);
static ssize_t osst_capacity_show(struct device *dev,
struct device_attribute *attr, char *buf)
DEVICE_ATTR(capacity, S_IRUGO, osst_capacity_show, NULL);
static ssize_t osst_first_data_ppos_show(struct device *dev,
struct device_attribute *attr,
char *buf)
DEVICE_ATTR(BOT_frame, S_IRUGO, osst_first_data_ppos_show, NULL);
static ssize_t osst_eod_frame_ppos_show(struct device *dev,
struct device_attribute *attr,
char *buf)
DEVICE_ATTR(EOD_frame, S_IRUGO, osst_eod_frame_ppos_show, NULL);
static ssize_t osst_filemark_cnt_show(struct device *dev,
struct device_attribute *attr, char *buf)
DEVICE_ATTR(file_count, S_IRUGO, osst_filemark_cnt_show, NULL);
static struct class *osst_sysfs_class;
static int osst_sysfs_init(void)
static void osst_sysfs_destroy(dev_t dev)
static int osst_sysfs_add(dev_t dev, struct device *device, struct osst_tape * STp, char * name)
static void osst_sysfs_cleanup(void)
static int osst_probe(struct device *dev)
;
static int osst_remove(struct device *dev)
static int __init init_osst(void)
static void __exit exit_osst (void)
module_init(init_osst);
module_exit(exit_osst);
