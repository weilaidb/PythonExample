#define SENSE_ID_RETRIES	256
#define SENSE_ID_TIMEOUT	(10 * HZ)
#define SENSE_ID_MIN_LEN	4
#define SENSE_ID_BASIC_LEN	7
static int diag210_to_senseid(struct senseid *senseid, struct diag210 *diag)
static int diag210_get_dev_info(struct ccw_device *cdev)
static void snsid_init(struct ccw_device *cdev)
static int snsid_check(struct ccw_device *cdev, void *data)
static void snsid_callback(struct ccw_device *cdev, void *data, int rc)
void ccw_device_sense_id_start(struct ccw_device *cdev)
