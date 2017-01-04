#define DRV_NAME "ide-tape"
#define IDETAPE_VERSION "1.20"
#undef IDETAPE_DEBUG_LOG
#define ide_debug_log(lvl, fmt, args...) __ide_debug_log(lvl, fmt, ## args)
#define ide_debug_log(lvl, fmt, args...) do  while (0)
#define IDETAPE_MAX_PC_RETRIES		3
#define IDETAPE_FIFO_THRESHOLD		2
#define IDETAPE_DSC_RW_MIN		5*HZ/100
#define IDETAPE_DSC_RW_MAX		40*HZ/100
#define IDETAPE_DSC_RW_TIMEOUT		2*60*HZ
#define IDETAPE_DSC_MA_FAST		2*HZ
#define IDETAPE_DSC_MA_THRESHOLD	5*60*HZ
#define IDETAPE_DSC_MA_SLOW		30*HZ
#define IDETAPE_DSC_MA_TIMEOUT		2*60*60*HZ
enum ;
#define DOOR_UNLOCKED			0
#define DOOR_LOCKED			1
#define DOOR_EXPLICITLY_LOCKED		2
#define IDETAPE_SPACE_OVER_FILEMARK	1
#define IDETAPE_SPACE_TO_EOD		3
#define IDETAPE_LU_LOAD_MASK		1
#define IDETAPE_LU_RETENSION_MASK	2
#define IDETAPE_LU_EOT_MASK		4
#define IDETAPE_BLOCK_DESCRIPTOR	0
#define IDETAPE_CAPABILITIES_PAGE	0x2a
typedef struct ide_tape_obj  idetape_tape_t;
static DEFINE_MUTEX(ide_tape_mutex);
static DEFINE_MUTEX(idetape_ref_mutex);
static DEFINE_MUTEX(idetape_chrdev_mutex);
static struct class *idetape_sysfs_class;
static void ide_tape_release(struct device *);
static struct ide_tape_obj *idetape_devs[MAX_HWIFS * MAX_DRIVES];
static struct ide_tape_obj *ide_tape_get(struct gendisk *disk, bool cdev,
unsigned int i)
static void ide_tape_put(struct ide_tape_obj *tape)
static void idetape_analyze_error(ide_drive_t *drive)
static void ide_tape_handle_dsc(ide_drive_t *);
static int ide_tape_callback(ide_drive_t *drive, int dsc)
static void ide_tape_stall_queue(ide_drive_t *drive)
static void ide_tape_handle_dsc(ide_drive_t *drive)
static ide_startstop_t ide_tape_issue_pc(ide_drive_t *drive,
struct ide_cmd *cmd,
struct ide_atapi_pc *pc)
static void idetape_create_mode_sense_cmd(struct ide_atapi_pc *pc, u8 page_code)
static ide_startstop_t idetape_media_access_finished(ide_drive_t *drive)
static void ide_tape_create_rw_cmd(idetape_tape_t *tape,
struct ide_atapi_pc *pc, struct request *rq,
u8 opcode)
static ide_startstop_t idetape_do_request(ide_drive_t *drive,
struct request *rq, sector_t block)
static void idetape_create_write_filemark_cmd(ide_drive_t *drive,
struct ide_atapi_pc *pc, int write_filemark)
static int idetape_wait_ready(ide_drive_t *drive, unsigned long timeout)
static int idetape_flush_tape_buffers(ide_drive_t *drive)
static int ide_tape_read_position(ide_drive_t *drive)
static void idetape_create_locate_cmd(ide_drive_t *drive,
struct ide_atapi_pc *pc,
unsigned int block, u8 partition, int skip)
static void __ide_tape_discard_merge_buffer(ide_drive_t *drive)
static int idetape_position_tape(ide_drive_t *drive, unsigned int block,
u8 partition, int skip)
static void ide_tape_discard_merge_buffer(ide_drive_t *drive,
int restore_position)
static int idetape_queue_rw_tail(ide_drive_t *drive, int cmd, int size)
static void idetape_create_inquiry_cmd(struct ide_atapi_pc *pc)
static void idetape_create_rewind_cmd(ide_drive_t *drive,
struct ide_atapi_pc *pc)
static void idetape_create_erase_cmd(struct ide_atapi_pc *pc)
static void idetape_create_space_cmd(struct ide_atapi_pc *pc, int count, u8 cmd)
static void ide_tape_flush_merge_buffer(ide_drive_t *drive)
static int idetape_init_rw(ide_drive_t *drive, int dir)
static void idetape_pad_zeros(ide_drive_t *drive, int bcount)
static int idetape_rewind_tape(ide_drive_t *drive)
static int idetape_blkdev_ioctl(ide_drive_t *drive, unsigned int cmd,
unsigned long arg)
static int idetape_space_over_filemarks(ide_drive_t *drive, short mt_op,
int mt_count)
static ssize_t idetape_chrdev_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t idetape_chrdev_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int idetape_write_filemark(ide_drive_t *drive)
static int idetape_mtioctop(ide_drive_t *drive, short mt_op, int mt_count)
static long do_idetape_chrdev_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long idetape_chrdev_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static void ide_tape_get_bsize_from_bdesc(ide_drive_t *drive)
static int idetape_chrdev_open(struct inode *inode, struct file *filp)
static void idetape_write_release(ide_drive_t *drive, unsigned int minor)
static int idetape_chrdev_release(struct inode *inode, struct file *filp)
static void idetape_get_inquiry_results(ide_drive_t *drive)
static void idetape_get_mode_sense_results(ide_drive_t *drive)
#define ide_tape_devset_get(name, field) \
static int get_##name(ide_drive_t *drive) \
#define ide_tape_devset_set(name, field) \
static int set_##name(ide_drive_t *drive, int arg) \
#define ide_tape_devset_rw_field(_name, _field) \
ide_tape_devset_get(_name, _field) \
ide_tape_devset_set(_name, _field) \
IDE_DEVSET(_name, DS_SYNC, get_##_name, set_##_name)
#define ide_tape_devset_r_field(_name, _field) \
ide_tape_devset_get(_name, _field) \
IDE_DEVSET(_name, 0, get_##_name, NULL)
static int mulf_tdsc(ide_drive_t *drive)
static int divf_tdsc(ide_drive_t *drive)
static int divf_buffer(ide_drive_t *drive)
static int divf_buffer_size(ide_drive_t *drive)
ide_devset_rw_flag(dsc_overlap, IDE_DFLAG_DSC_OVERLAP);
ide_tape_devset_rw_field(tdsc, best_dsc_rw_freq);
ide_tape_devset_r_field(avg_speed, avg_speed);
ide_tape_devset_r_field(speed, caps[14]);
ide_tape_devset_r_field(buffer, caps[16]);
ide_tape_devset_r_field(buffer_size, buffer_size);
static const struct ide_proc_devset idetape_settings[] = ;
static void idetape_setup(ide_drive_t *drive, idetape_tape_t *tape, int minor)
static void ide_tape_remove(ide_drive_t *drive)
static void ide_tape_release(struct device *dev)
static int idetape_name_proc_show(struct seq_file *m, void *v)
static int idetape_name_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idetape_name_proc_fops = ;
static ide_proc_entry_t idetape_proc[] = ;
static ide_proc_entry_t *ide_tape_proc_entries(ide_drive_t *drive)
static const struct ide_proc_devset *ide_tape_proc_devsets(ide_drive_t *drive)
static int ide_tape_probe(ide_drive_t *);
static struct ide_driver idetape_driver = ;
static const struct file_operations idetape_fops = ;
static int idetape_open(struct block_device *bdev, fmode_t mode)
static int idetape_release(struct gendisk *disk, fmode_t mode)
static int idetape_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations idetape_block_ops = ;
static int ide_tape_probe(ide_drive_t *drive)
static void __exit idetape_exit(void)
static int __init idetape_init(void)
MODULE_ALIAS("ide:*m-tape*");
module_init(idetape_init);
module_exit(idetape_exit);
MODULE_ALIAS_CHARDEV_MAJOR(IDETAPE_MAJOR);
MODULE_DESCRIPTION("ATAPI Streaming TAPE Driver");
MODULE_LICENSE("GPL");
