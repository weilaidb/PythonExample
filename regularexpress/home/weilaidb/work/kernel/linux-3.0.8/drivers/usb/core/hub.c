#define CONFIG_USB_ANNOUNCE_NEW_DEVICES
struct usb_hub ;
static inline int hub_is_superspeed(struct usb_device *hdev)
static DEFINE_SPINLOCK(device_state_lock);
static DEFINE_SPINLOCK(hub_event_lock);
static LIST_HEAD(hub_event_list);
static DECLARE_WAIT_QUEUE_HEAD(khubd_wait);
static struct task_struct *khubd_task;
static int blinkenlights = 0;
module_param (blinkenlights, bool, S_IRUGO);
MODULE_PARM_DESC (blinkenlights, "true to cycle leds on hubs");
static int initial_descriptor_timeout = USB_CTRL_GET_TIMEOUT;
module_param(initial_descriptor_timeout, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(initial_descriptor_timeout,
"initial 64-byte descriptor request timeout in milliseconds "
"(default 5000 - 5.0 seconds)");
static int old_scheme_first = 0;
module_param(old_scheme_first, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(old_scheme_first,
"start with the old device initialization scheme");
static int use_both_schemes = 1;
module_param(use_both_schemes, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(use_both_schemes,
"try the other device initialization scheme if the "
"first one fails");
DECLARE_RWSEM(ehci_cf_port_reset_rwsem);
EXPORT_SYMBOL_GPL(ehci_cf_port_reset_rwsem);
#define HUB_DEBOUNCE_TIMEOUT	1500
#define HUB_DEBOUNCE_STEP	  25
#define HUB_DEBOUNCE_STABLE	 100
static int usb_reset_and_verify_device(struct usb_device *udev);
static inline char *portspeed(struct usb_hub *hub, int portstatus)
static struct usb_hub *hdev_to_hub(struct usb_device *hdev)
static int get_hub_descriptor(struct usb_device *hdev, void *data)
static int clear_hub_feature(struct usb_device *hdev, int feature)
static int clear_port_feature(struct usb_device *hdev, int port1, int feature)
static int set_port_feature(struct usb_device *hdev, int port1, int feature)
static void set_port_led(
struct usb_hub *hub,
int port1,
int selector
)
#define	LED_CYCLE_PERIOD	((2*HZ)/3)
static void led_work (struct work_struct *work)
#define	USB_STS_TIMEOUT		1000
#define	USB_STS_RETRIES		5
static int get_hub_status(struct usb_device *hdev,
struct usb_hub_status *data)
static int get_port_status(struct usb_device *hdev, int port1,
struct usb_port_status *data)
static int hub_port_status(struct usb_hub *hub, int port1,
u16 *status, u16 *change)
static void kick_khubd(struct usb_hub *hub)
void usb_kick_khubd(struct usb_device *hdev)
static void hub_irq(struct urb *urb)
static inline int
hub_clear_tt_buffer (struct usb_device *hdev, u16 devinfo, u16 tt)
static void hub_tt_work(struct work_struct *work)
int usb_hub_clear_tt_buffer(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_hub_clear_tt_buffer);
static unsigned hub_power_on(struct usb_hub *hub, bool do_delay)
static int hub_hub_status(struct usb_hub *hub,
u16 *status, u16 *change)
static int hub_port_disable(struct usb_hub *hub, int port1, int set_state)
static void hub_port_logical_disconnect(struct usb_hub *hub, int port1)
int usb_remove_device(struct usb_device *udev)
enum hub_activation_type ;
static void hub_init_func2(struct work_struct *ws);
static void hub_init_func3(struct work_struct *ws);
static void hub_activate(struct usb_hub *hub, enum hub_activation_type type)
static void hub_init_func2(struct work_struct *ws)
static void hub_init_func3(struct work_struct *ws)
enum hub_quiescing_type ;
static void hub_quiesce(struct usb_hub *hub, enum hub_quiescing_type type)
static int hub_pre_reset(struct usb_interface *intf)
static int hub_post_reset(struct usb_interface *intf)
static int hub_configure(struct usb_hub *hub,
struct usb_endpoint_descriptor *endpoint)
static void hub_release(struct kref *kref)
static unsigned highspeed_hubs;
static void hub_disconnect(struct usb_interface *intf)
static int hub_probe(struct usb_interface *intf, const struct usb_device_id *id)
static int
hub_ioctl(struct usb_interface *intf, unsigned int code, void *user_data)
static int find_port_owner(struct usb_device *hdev, unsigned port1,
void ***ppowner)
int usb_hub_claim_port(struct usb_device *hdev, unsigned port1, void *owner)
int usb_hub_release_port(struct usb_device *hdev, unsigned port1, void *owner)
void usb_hub_release_all_ports(struct usb_device *hdev, void *owner)
bool usb_device_is_owned(struct usb_device *udev)
static void recursively_mark_NOTATTACHED(struct usb_device *udev)
void usb_set_device_state(struct usb_device *udev,
enum usb_device_state new_state)
EXPORT_SYMBOL_GPL(usb_set_device_state);
static void choose_devnum(struct usb_device *udev)
static void release_devnum(struct usb_device *udev)
static void update_devnum(struct usb_device *udev, int devnum)
static void hub_free_dev(struct usb_device *udev)
void usb_disconnect(struct usb_device **pdev)
static void show_string(struct usb_device *udev, char *id, char *string)
static void announce_device(struct usb_device *udev)
static inline void announce_device(struct usb_device *udev)
static int usb_enumerate_device_otg(struct usb_device *udev)
static int usb_enumerate_device(struct usb_device *udev)
int usb_new_device(struct usb_device *udev)
int usb_deauthorize_device(struct usb_device *usb_dev)
int usb_authorize_device(struct usb_device *usb_dev)
static unsigned hub_is_wusb(struct usb_hub *hub)
#define PORT_RESET_TRIES	5
#define SET_ADDRESS_TRIES	2
#define GET_DESCRIPTOR_TRIES	2
#define SET_CONFIG_TRIES	(2 * (use_both_schemes + 1))
#define USE_NEW_SCHEME(i)	((i) / 2 == old_scheme_first)
#define HUB_ROOT_RESET_TIME	50
#define HUB_SHORT_RESET_TIME	10
#define HUB_LONG_RESET_TIME	200
#define HUB_RESET_TIMEOUT	500
static int hub_port_wait_reset(struct usb_hub *hub, int port1,
struct usb_device *udev, unsigned int delay)
static int hub_port_reset(struct usb_hub *hub, int port1,
struct usb_device *udev, unsigned int delay)
static int hub_port_warm_reset(struct usb_hub *hub, int port)
static int port_is_power_on(struct usb_hub *hub, unsigned portstatus)
static int port_is_suspended(struct usb_hub *hub, unsigned portstatus)
static int check_port_resume_type(struct usb_device *udev,
struct usb_hub *hub, int port1,
int status, unsigned portchange, unsigned portstatus)
int usb_port_suspend(struct usb_device *udev, pm_message_t msg)
static int finish_port_resume(struct usb_device *udev)
int usb_port_resume(struct usb_device *udev, pm_message_t msg)
int usb_remote_wakeup(struct usb_device *udev)
int usb_port_suspend(struct usb_device *udev, pm_message_t msg)
int usb_port_resume(struct usb_device *udev, pm_message_t msg)
static int hub_suspend(struct usb_interface *intf, pm_message_t msg)
static int hub_resume(struct usb_interface *intf)
static int hub_reset_resume(struct usb_interface *intf)
void usb_root_hub_lost_power(struct usb_device *rhdev)
EXPORT_SYMBOL_GPL(usb_root_hub_lost_power);
#define hub_suspend		NULL
#define hub_resume		NULL
#define hub_reset_resume	NULL
static int hub_port_debounce(struct usb_hub *hub, int port1)
void usb_ep0_reinit(struct usb_device *udev)
EXPORT_SYMBOL_GPL(usb_ep0_reinit);
#define usb_sndaddr0pipe()	(PIPE_CONTROL << 30)
#define usb_rcvaddr0pipe()	((PIPE_CONTROL << 30) | USB_DIR_IN)
static int hub_set_address(struct usb_device *udev, int devnum)
static int
hub_port_init (struct usb_hub *hub, struct usb_device *udev, int port1,
int retry_counter)
static void
check_highspeed (struct usb_hub *hub, struct usb_device *udev, int port1)
static unsigned
hub_power_remaining (struct usb_hub *hub)
static void hub_port_connect_change(struct usb_hub *hub, int port1,
u16 portstatus, u16 portchange)
static void hub_events(void)
static int hub_thread(void *__unused)
static const struct usb_device_id hub_id_table[] = ;
MODULE_DEVICE_TABLE (usb, hub_id_table);
static struct usb_driver hub_driver = ;
int usb_hub_init(void)
void usb_hub_cleanup(void)
static int descriptors_changed(struct usb_device *udev,
struct usb_device_descriptor *old_device_descriptor)
static int usb_reset_and_verify_device(struct usb_device *udev)
int usb_reset_device(struct usb_device *udev)
EXPORT_SYMBOL_GPL(usb_reset_device);
void usb_queue_reset_device(struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_queue_reset_device);
