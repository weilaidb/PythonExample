#define RDAC_NAME "rdac"
#define RDAC_RETRY_COUNT 5
#define RDAC_QUIESCENCE_TIME 20;
#define RDAC_PAGE_CODE_REDUNDANT_CONTROLLER 0x2c
#define RDAC_MODE_TRANSFER_SPECIFIED_LUNS	0x02
#define RDAC_FORCED_QUIESENCE 0x02
#define RDAC_TIMEOUT	(60 * HZ)
#define RDAC_RETRIES	3
struct rdac_mode_6_hdr ;
struct rdac_mode_10_hdr ;
struct rdac_mode_common ;
struct rdac_pg_legacy ;
struct rdac_pg_expanded ;
struct c9_inquiry ;
#define SUBSYS_ID_LEN	16
#define SLOT_ID_LEN	2
#define ARRAY_LABEL_LEN	31
struct c4_inquiry ;
struct rdac_controller ;
struct c8_inquiry ;
struct c2_inquiry ;
struct rdac_dh_data ;
static const char *mode[] = ;
static const char *lun_state[] =
;
struct rdac_queue_data ;
static LIST_HEAD(ctlr_list);
static DEFINE_SPINLOCK(list_lock);
static struct workqueue_struct *kmpath_rdacd;
static void send_mode_select(struct work_struct *work);
static int rdac_logging = 1;
module_param(rdac_logging, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(rdac_logging, "A bit mask of rdac logging levels, "
"Default is 1 - failover logging enabled, "
"set it to 0xF to enable all the logs");
#define RDAC_LOG_FAILOVER	0
#define RDAC_LOG_SENSE		2
#define RDAC_LOG_BITS		2
#define RDAC_LOG_LEVEL(SHIFT)  \
((rdac_logging >> (SHIFT)) & ((1 << (RDAC_LOG_BITS)) - 1))
#define RDAC_LOG(SHIFT, sdev, f, arg...) \
do  while (0);
static inline struct rdac_dh_data *get_rdac_data(struct scsi_device *sdev)
static struct request *get_rdac_req(struct scsi_device *sdev,
void *buffer, unsigned buflen, int rw)
static struct request *rdac_failover_get(struct scsi_device *sdev,
struct rdac_dh_data *h, struct list_head *list)
static void release_controller(struct kref *kref)
static struct rdac_controller *get_controller(u8 *subsys_id, u8 *slot_id,
char *array_name)
static int submit_inquiry(struct scsi_device *sdev, int page_code,
unsigned int len, struct rdac_dh_data *h)
static int get_lun_info(struct scsi_device *sdev, struct rdac_dh_data *h,
char *array_name)
static int check_ownership(struct scsi_device *sdev, struct rdac_dh_data *h)
static int initialize_controller(struct scsi_device *sdev,
struct rdac_dh_data *h, char *array_name)
static int set_mode_select(struct scsi_device *sdev, struct rdac_dh_data *h)
static int mode_select_handle_sense(struct scsi_device *sdev,
unsigned char *sensebuf)
static void send_mode_select(struct work_struct *work)
static int queue_mode_select(struct scsi_device *sdev,
activate_complete fn, void *data)
static int rdac_activate(struct scsi_device *sdev,
activate_complete fn, void *data)
static int rdac_prep_fn(struct scsi_device *sdev, struct request *req)
static int rdac_check_sense(struct scsi_device *sdev,
struct scsi_sense_hdr *sense_hdr)
static const struct scsi_dh_devlist rdac_dev_list[] = ;
static int rdac_bus_attach(struct scsi_device *sdev);
static void rdac_bus_detach(struct scsi_device *sdev);
static struct scsi_device_handler rdac_dh = ;
static int rdac_bus_attach(struct scsi_device *sdev)
static void rdac_bus_detach( struct scsi_device *sdev )
static int __init rdac_init(void)
static void __exit rdac_exit(void)
module_init(rdac_init);
module_exit(rdac_exit);
MODULE_DESCRIPTION("Multipath LSI/Engenio RDAC driver");
MODULE_AUTHOR("Mike Christie, Chandra Seetharaman");
MODULE_VERSION("01.00.0000.0000");
MODULE_LICENSE("GPL");
