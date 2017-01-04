struct hv_input_dev_info ;
#define SYNTHHID_MAX_INPUT_REPORT_SIZE 16
#define SYNTHHID_INPUT_VERSION_MAJOR	2
#define SYNTHHID_INPUT_VERSION_MINOR	0
#define SYNTHHID_INPUT_VERSION		(SYNTHHID_INPUT_VERSION_MINOR | \
(SYNTHHID_INPUT_VERSION_MAJOR << 16))
enum synthhid_msg_type ;
struct synthhid_msg_hdr ;
struct synthhid_msg ;
union synthhid_version ;
struct synthhid_protocol_request ;
struct synthhid_protocol_response ;
struct synthhid_device_info ;
struct synthhid_device_info_ack ;
struct synthhid_input_report ;
#define INPUTVSC_SEND_RING_BUFFER_SIZE		10*PAGE_SIZE
#define INPUTVSC_RECV_RING_BUFFER_SIZE		10*PAGE_SIZE
#define NBITS(x) (((x)/BITS_PER_LONG)+1)
enum pipe_prot_msg_type ;
struct pipe_prt_msg ;
struct  mousevsc_prt_msg ;
struct mousevsc_dev ;
static const char *driver_name = "mousevsc";
static const struct hv_guid mouse_guid = ;
static void deviceinfo_callback(struct hv_device *dev, struct hv_input_dev_info *info);
static void inputreport_callback(struct hv_device *dev, void *packet, u32 len);
static void reportdesc_callback(struct hv_device *dev, void *packet, u32 len);
static struct mousevsc_dev *alloc_input_device(struct hv_device *device)
static void free_input_device(struct mousevsc_dev *device)
static struct mousevsc_dev *get_input_device(struct hv_device *device)
static struct mousevsc_dev *must_get_input_device(struct hv_device *device)
static void put_input_device(struct hv_device *device)
static struct mousevsc_dev *release_input_device(struct hv_device *device)
static struct mousevsc_dev *final_release_input_device(struct hv_device *device)
static void mousevsc_on_send_completion(struct hv_device *device,
struct vmpacket_descriptor *packet)
static void mousevsc_on_receive_device_info(struct mousevsc_dev *input_device,
struct synthhid_device_info *device_info)
static void mousevsc_on_receive_input_report(struct mousevsc_dev *input_device,
struct synthhid_input_report *input_report)
static void mousevsc_on_receive(struct hv_device *device,
struct vmpacket_descriptor *packet)
static void mousevsc_on_channel_callback(void *context)
static int mousevsc_connect_to_vsp(struct hv_device *device)
static int mousevsc_on_device_add(struct hv_device *device,
void *additional_info)
static int mousevsc_on_device_remove(struct hv_device *device)
struct input_device_context ;
static void deviceinfo_callback(struct hv_device *dev, struct hv_input_dev_info *info)
static void inputreport_callback(struct hv_device *dev, void *packet, u32 len)
static int mousevsc_hid_open(struct hid_device *hid)
static void mousevsc_hid_close(struct hid_device *hid)
static int mousevsc_probe(struct hv_device *dev)
static int mousevsc_remove(struct hv_device *dev)
static void reportdesc_callback(struct hv_device *dev, void *packet, u32 len)
static struct  hv_driver mousevsc_drv = ;
static void mousevsc_drv_exit(void)
static int __init mousevsc_init(void)
static void __exit mousevsc_exit(void)
MODULE_LICENSE("GPL");
MODULE_VERSION(HV_DRV_VERSION);
module_init(mousevsc_init);
module_exit(mousevsc_exit);
