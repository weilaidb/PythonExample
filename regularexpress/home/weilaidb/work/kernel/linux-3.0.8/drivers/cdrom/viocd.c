#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define VIOCD_DEVICE			"iseries/vcd"
#define VIOCD_VERS "1.06"
#define VIOCD_MAX_CD	HVMAXARCHITECTEDVIRTUALCDROMS
static DEFINE_MUTEX(viocd_mutex);
static const struct vio_error_entry viocd_err_table[] = ;
struct viocd_waitevent ;
struct capability_entry ;
static struct capability_entry capability_table[] __initdata = ;
static int viocd_numdev;
struct disk_info ;
static struct disk_info viocd_diskinfo[VIOCD_MAX_CD];
#define DEVICE_NR(di)	((di) - &viocd_diskinfo[0])
static spinlock_t viocd_reqlock;
#define MAX_CD_REQ	1
static int proc_viocd_show(struct seq_file *m, void *v)
static int proc_viocd_open(struct inode *inode, struct file *file)
static const struct file_operations proc_viocd_operations = ;
static int viocd_blk_open(struct block_device *bdev, fmode_t mode)
static int viocd_blk_release(struct gendisk *disk, fmode_t mode)
static int viocd_blk_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static unsigned int viocd_blk_check_events(struct gendisk *disk,
unsigned int clearing)
static const struct block_device_operations viocd_fops = ;
static int viocd_open(struct cdrom_device_info *cdi, int purpose)
static void viocd_release(struct cdrom_device_info *cdi)
static int send_request(struct request *req)
static int rwreq;
static void do_viocd_request(struct request_queue *q)
static unsigned int viocd_check_events(struct cdrom_device_info *cdi,
unsigned int clearing, int disc_nr)
static int viocd_lock_door(struct cdrom_device_info *cdi, int locking)
static int viocd_packet(struct cdrom_device_info *cdi,
struct packet_command *cgc)
static void restart_all_queues(int first_index)
static void vio_handle_cd_event(struct HvLpEvent *event)
static int viocd_audio_ioctl(struct cdrom_device_info *cdi, unsigned int cmd,
void *arg)
static struct cdrom_device_ops viocd_dops = ;
static int find_capability(const char *type)
static int viocd_probe(struct vio_dev *vdev, const struct vio_device_id *id)
static int viocd_remove(struct vio_dev *vdev)
static struct vio_device_id viocd_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, viocd_device_table);
static struct vio_driver viocd_driver = ;
static int __init viocd_init(void)
static void __exit viocd_exit(void)
module_init(viocd_init);
module_exit(viocd_exit);
MODULE_LICENSE("GPL");
