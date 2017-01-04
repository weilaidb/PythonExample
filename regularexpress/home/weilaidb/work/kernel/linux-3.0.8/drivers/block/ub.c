#define DRV_NAME "ub"
#define UB_MAJOR 180
#define UB_MAX_LUNS   9
#define UB_PARTS_PER_LUN      8
#define UB_MAX_CDB_SIZE      16
#define UB_SENSE_SIZE  18
struct bulk_cb_wrap ;
#define US_BULK_CB_WRAP_LEN	31
#define US_BULK_CB_SIGN		0x43425355
#define US_BULK_FLAG_IN		1
#define US_BULK_FLAG_OUT	0
struct bulk_cs_wrap ;
#define US_BULK_CS_WRAP_LEN	13
#define US_BULK_CS_SIGN		0x53425355
#define US_BULK_STAT_OK		0
#define US_BULK_STAT_FAIL	1
#define US_BULK_STAT_PHASE	2
#define US_BULK_RESET_REQUEST	0xff
#define US_BULK_GET_MAX_LUN	0xfe
struct ub_dev;
#define UB_MAX_REQ_SG	9
#define UB_MAX_SECTORS 64
#define UB_URB_TIMEOUT	(HZ*2)
#define UB_DATA_TIMEOUT	(HZ*5)
#define UB_STAT_TIMEOUT	(HZ*5)
#define UB_CTRL_TIMEOUT	(HZ/2)
#define UB_DIR_NONE	0
#define UB_DIR_READ	1
#define UB_DIR_ILLEGAL2	2
#define UB_DIR_WRITE	3
#define UB_DIR_CHAR(c)  (((c)==UB_DIR_WRITE)? 'w': \
(((c)==UB_DIR_READ)? 'r': 'n'))
enum ub_scsi_cmd_state ;
struct ub_scsi_cmd ;
struct ub_request ;
struct ub_capacity ;
struct ub_completion ;
static DEFINE_MUTEX(ub_mutex);
static inline void ub_init_completion(struct ub_completion *x)
#define UB_INIT_COMPLETION(x)	((x).done = 0)
static void ub_complete(struct ub_completion *x)
static int ub_is_completed(struct ub_completion *x)
struct ub_scsi_cmd_queue ;
struct ub_lun ;
struct ub_dev ;
static void ub_cleanup(struct ub_dev *sc);
static int ub_request_fn_1(struct ub_lun *lun, struct request *rq);
static void ub_cmd_build_block(struct ub_dev *sc, struct ub_lun *lun,
struct ub_scsi_cmd *cmd, struct ub_request *urq);
static void ub_cmd_build_packet(struct ub_dev *sc, struct ub_lun *lun,
struct ub_scsi_cmd *cmd, struct ub_request *urq);
static void ub_rw_cmd_done(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_end_rq(struct request *rq, unsigned int status);
static int ub_rw_cmd_retry(struct ub_dev *sc, struct ub_lun *lun,
struct ub_request *urq, struct ub_scsi_cmd *cmd);
static int ub_submit_scsi(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_urb_complete(struct urb *urb);
static void ub_scsi_action(unsigned long _dev);
static void ub_scsi_dispatch(struct ub_dev *sc);
static void ub_scsi_urb_compl(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_data_start(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_state_done(struct ub_dev *sc, struct ub_scsi_cmd *cmd, int rc);
static int __ub_state_stat(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_state_stat(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_state_stat_counted(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static void ub_state_sense(struct ub_dev *sc, struct ub_scsi_cmd *cmd);
static int ub_submit_clear_stall(struct ub_dev *sc, struct ub_scsi_cmd *cmd,
int stalled_pipe);
static void ub_top_sense_done(struct ub_dev *sc, struct ub_scsi_cmd *scmd);
static void ub_reset_enter(struct ub_dev *sc, int try);
static void ub_reset_task(struct work_struct *work);
static int ub_sync_tur(struct ub_dev *sc, struct ub_lun *lun);
static int ub_sync_read_cap(struct ub_dev *sc, struct ub_lun *lun,
struct ub_capacity *ret);
static int ub_sync_reset(struct ub_dev *sc);
static int ub_probe_clear_stall(struct ub_dev *sc, int stalled_pipe);
static int ub_probe_lun(struct ub_dev *sc, int lnum);
#define ub_usb_ids  usb_storage_usb_ids
static const struct usb_device_id ub_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, ub_usb_ids);
#define UB_MAX_HOSTS  26
static char ub_hostv[UB_MAX_HOSTS];
#define UB_QLOCK_NUM 5
static spinlock_t ub_qlockv[UB_QLOCK_NUM];
static int ub_qlock_next = 0;
static DEFINE_SPINLOCK(ub_lock);
static int ub_id_get(void)
static void ub_id_put(int id)
static spinlock_t *ub_next_lock(void)
static void ub_put(struct ub_dev *sc)
static void ub_cleanup(struct ub_dev *sc)
static struct ub_scsi_cmd *ub_get_cmd(struct ub_lun *lun)
static void ub_put_cmd(struct ub_lun *lun, struct ub_scsi_cmd *cmd)
static void ub_cmdq_add(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_cmdq_insert(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static struct ub_scsi_cmd *ub_cmdq_pop(struct ub_dev *sc)
#define ub_cmdq_peek(sc)  ((sc)->cmd_queue.head)
static void ub_request_fn(struct request_queue *q)
static int ub_request_fn_1(struct ub_lun *lun, struct request *rq)
static void ub_cmd_build_block(struct ub_dev *sc, struct ub_lun *lun,
struct ub_scsi_cmd *cmd, struct ub_request *urq)
static void ub_cmd_build_packet(struct ub_dev *sc, struct ub_lun *lun,
struct ub_scsi_cmd *cmd, struct ub_request *urq)
static void ub_rw_cmd_done(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_end_rq(struct request *rq, unsigned int scsi_status)
static int ub_rw_cmd_retry(struct ub_dev *sc, struct ub_lun *lun,
struct ub_request *urq, struct ub_scsi_cmd *cmd)
static int ub_submit_scsi(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static int ub_scsi_cmd_start(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_urb_timeout(unsigned long arg)
static void ub_urb_complete(struct urb *urb)
static void ub_scsi_action(unsigned long _dev)
static void ub_scsi_dispatch(struct ub_dev *sc)
static void ub_scsi_urb_compl(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_data_start(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_state_done(struct ub_dev *sc, struct ub_scsi_cmd *cmd, int rc)
static int __ub_state_stat(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_state_stat(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_state_stat_counted(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static void ub_state_sense(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static int ub_submit_clear_stall(struct ub_dev *sc, struct ub_scsi_cmd *cmd,
int stalled_pipe)
static void ub_top_sense_done(struct ub_dev *sc, struct ub_scsi_cmd *scmd)
static void ub_reset_enter(struct ub_dev *sc, int try)
static void ub_reset_task(struct work_struct *work)
static int ub_pre_reset(struct usb_interface *iface)
static int ub_post_reset(struct usb_interface *iface)
static void ub_revalidate(struct ub_dev *sc, struct ub_lun *lun)
static int ub_bd_open(struct block_device *bdev, fmode_t mode)
static int ub_bd_unlocked_open(struct block_device *bdev, fmode_t mode)
static int ub_bd_release(struct gendisk *disk, fmode_t mode)
static int ub_bd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int ub_bd_revalidate(struct gendisk *disk)
static unsigned int ub_bd_check_events(struct gendisk *disk,
unsigned int clearing)
static const struct block_device_operations ub_bd_fops = ;
static void ub_probe_done(struct ub_dev *sc, struct ub_scsi_cmd *cmd)
static int ub_sync_tur(struct ub_dev *sc, struct ub_lun *lun)
static int ub_sync_read_cap(struct ub_dev *sc, struct ub_lun *lun,
struct ub_capacity *ret)
static void ub_probe_urb_complete(struct urb *urb)
static void ub_probe_timeout(unsigned long arg)
static int ub_sync_reset(struct ub_dev *sc)
static int ub_sync_getmaxlun(struct ub_dev *sc)
static int ub_probe_clear_stall(struct ub_dev *sc, int stalled_pipe)
static int ub_get_pipes(struct ub_dev *sc, struct usb_device *dev,
struct usb_interface *intf)
static int ub_probe(struct usb_interface *intf,
const struct usb_device_id *dev_id)
static int ub_probe_lun(struct ub_dev *sc, int lnum)
static void ub_disconnect(struct usb_interface *intf)
static struct usb_driver ub_driver = ;
static int __init ub_init(void)
static void __exit ub_exit(void)
module_init(ub_init);
module_exit(ub_exit);
MODULE_LICENSE("GPL");
