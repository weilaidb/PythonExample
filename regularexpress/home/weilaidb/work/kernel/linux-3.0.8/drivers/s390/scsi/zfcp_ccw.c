#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ZFCP_MODEL_PRIV 0x4
static DEFINE_SPINLOCK(zfcp_ccw_adapter_ref_lock);
struct zfcp_adapter *zfcp_ccw_adapter_by_cdev(struct ccw_device *cdev)
void zfcp_ccw_adapter_put(struct zfcp_adapter *adapter)
static int zfcp_ccw_activate(struct ccw_device *cdev)
static struct ccw_device_id zfcp_ccw_device_id[] = ;
MODULE_DEVICE_TABLE(ccw, zfcp_ccw_device_id);
int zfcp_ccw_priv_sch(struct zfcp_adapter *adapter)
static int zfcp_ccw_probe(struct ccw_device *cdev)
static void zfcp_ccw_remove(struct ccw_device *cdev)
static int zfcp_ccw_set_online(struct ccw_device *cdev)
static int zfcp_ccw_set_offline(struct ccw_device *cdev)
static int zfcp_ccw_notify(struct ccw_device *cdev, int event)
static void zfcp_ccw_shutdown(struct ccw_device *cdev)
struct ccw_driver zfcp_ccw_driver = ;
