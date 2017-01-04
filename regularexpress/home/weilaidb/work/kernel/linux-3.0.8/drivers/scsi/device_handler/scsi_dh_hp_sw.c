#define HP_SW_NAME			"hp_sw"
#define HP_SW_TIMEOUT			(60 * HZ)
#define HP_SW_RETRIES			3
#define HP_SW_PATH_UNINITIALIZED	-1
#define HP_SW_PATH_ACTIVE		0
#define HP_SW_PATH_PASSIVE		1
struct hp_sw_dh_data ;
static int hp_sw_start_stop(struct hp_sw_dh_data *);
static inline struct hp_sw_dh_data *get_hp_sw_data(struct scsi_device *sdev)
static int tur_done(struct scsi_device *sdev, unsigned char *sense)
static int hp_sw_tur(struct scsi_device *sdev, struct hp_sw_dh_data *h)
static int start_done(struct scsi_device *sdev, unsigned char *sense)
static void start_stop_endio(struct request *req, int error)
static int hp_sw_start_stop(struct hp_sw_dh_data *h)
static int hp_sw_prep_fn(struct scsi_device *sdev, struct request *req)
static int hp_sw_activate(struct scsi_device *sdev,
activate_complete fn, void *data)
static const struct scsi_dh_devlist hp_sw_dh_data_list[] = ;
static int hp_sw_bus_attach(struct scsi_device *sdev);
static void hp_sw_bus_detach(struct scsi_device *sdev);
static struct scsi_device_handler hp_sw_dh = ;
static int hp_sw_bus_attach(struct scsi_device *sdev)
static void hp_sw_bus_detach( struct scsi_device *sdev )
static int __init hp_sw_init(void)
static void __exit hp_sw_exit(void)
module_init(hp_sw_init);
module_exit(hp_sw_exit);
MODULE_DESCRIPTION("HP Active/Passive driver");
MODULE_AUTHOR("Mike Christie <michaelc@cs.wisc.edu");
MODULE_LICENSE("GPL");
