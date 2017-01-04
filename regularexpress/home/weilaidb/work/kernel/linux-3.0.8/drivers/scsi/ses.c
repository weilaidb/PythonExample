struct ses_device ;
struct ses_component ;
static int ses_probe(struct device *dev)
#define SES_TIMEOUT (30 * HZ)
#define SES_RETRIES 3
static int ses_recv_diag(struct scsi_device *sdev, int page_code,
void *buf, int bufflen)
static int ses_send_diag(struct scsi_device *sdev, int page_code,
void *buf, int bufflen)
static int ses_set_page2_descriptor(struct enclosure_device *edev,
struct enclosure_component *ecomp,
unsigned char *desc)
static unsigned char *ses_get_page2_descriptor(struct enclosure_device *edev,
struct enclosure_component *ecomp)
static void ses_get_fault(struct enclosure_device *edev,
struct enclosure_component *ecomp)
static int ses_set_fault(struct enclosure_device *edev,
struct enclosure_component *ecomp,
enum enclosure_component_setting val)
static void ses_get_status(struct enclosure_device *edev,
struct enclosure_component *ecomp)
static void ses_get_locate(struct enclosure_device *edev,
struct enclosure_component *ecomp)
static int ses_set_locate(struct enclosure_device *edev,
struct enclosure_component *ecomp,
enum enclosure_component_setting val)
static int ses_set_active(struct enclosure_device *edev,
struct enclosure_component *ecomp,
enum enclosure_component_setting val)
static struct enclosure_component_callbacks ses_enclosure_callbacks = ;
struct ses_host_edev ;
static void ses_process_descriptor(struct enclosure_component *ecomp,
unsigned char *desc)
struct efd ;
static int ses_enclosure_find_by_addr(struct enclosure_device *edev,
void *data)
#define INIT_ALLOC_SIZE 32
static void ses_enclosure_data_process(struct enclosure_device *edev,
struct scsi_device *sdev,
int create)
static void ses_match_to_enclosure(struct enclosure_device *edev,
struct scsi_device *sdev)
static int ses_intf_add(struct device *cdev,
struct class_interface *intf)
static int ses_remove(struct device *dev)
static void ses_intf_remove_component(struct scsi_device *sdev)
static void ses_intf_remove_enclosure(struct scsi_device *sdev)
static void ses_intf_remove(struct device *cdev,
struct class_interface *intf)
static struct class_interface ses_interface = ;
static struct scsi_driver ses_template = ;
static int __init ses_init(void)
static void __exit ses_exit(void)
module_init(ses_init);
module_exit(ses_exit);
MODULE_ALIAS_SCSI_DEVICE(TYPE_ENCLOSURE);
MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("SCSI Enclosure Services (ses) driver");
MODULE_LICENSE("GPL v2");
