#define VENDOR_ID	0x1B24
#define PRODUCT_ID	0x4001
static struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
int debug_mode;
module_param(debug_mode, int, 0644);
MODULE_PARM_DESC(debug_mode, "0 = disable, 1 = enable, 2 = verbose");
static const char *firmware_name = "tlg2300_firmware.bin";
static struct usb_driver poseidon_driver;
static LIST_HEAD(pd_device_list);
s32 send_set_req(struct poseidon *pd, u8 cmdid, s32 param, s32 *cmd_status)
s32 send_get_req(struct poseidon *pd, u8 cmdid, s32 param,
void *buf, s32 *cmd_status, s32 datalen)
static int pm_notifier_block(struct notifier_block *nb,
unsigned long event, void *dummy)
static struct notifier_block pm_notifer = ;
int set_tuner_mode(struct poseidon *pd, unsigned char mode)
void poseidon_delete(struct kref *kref)
static int firmware_download(struct usb_device *udev)
static inline struct poseidon *get_pd(struct usb_interface *intf)
static inline void set_map_flags(struct poseidon *pd, struct usb_device *udev)
static inline int get_autopm_ref(struct poseidon *pd)
static inline struct poseidon *fixup(struct poseidon *pd)
static struct poseidon *find_old_poseidon(struct usb_device *udev)
static inline int is_working(struct poseidon *pd)
static int poseidon_suspend(struct usb_interface *intf, pm_message_t msg)
static int poseidon_resume(struct usb_interface *intf)
static void hibernation_resume(struct work_struct *w)
static inline struct poseidon *find_old_poseidon(struct usb_device *udev)
static inline void set_map_flags(struct poseidon *pd, struct usb_device *udev)
static bool check_firmware(struct usb_device *udev, int *down_firmware)
static int poseidon_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void poseidon_disconnect(struct usb_interface *interface)
static struct usb_driver poseidon_driver = ;
static int __init poseidon_init(void)
static void __exit poseidon_exit(void)
module_init(poseidon_init);
module_exit(poseidon_exit);
MODULE_AUTHOR("Telegent Systems");
MODULE_DESCRIPTION("For tlg2300-based USB device ");
MODULE_LICENSE("GPL");
