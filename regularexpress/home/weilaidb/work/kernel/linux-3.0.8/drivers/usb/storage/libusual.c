#define USU_MOD_FL_THREAD   1
#define USU_MOD_FL_PRESENT  2
struct mod_status ;
static struct mod_status stat[3];
static DEFINE_SPINLOCK(usu_lock);
#define USB_US_DEFAULT_BIAS	USB_US_TYPE_STOR
static atomic_t usu_bias = ATOMIC_INIT(USB_US_DEFAULT_BIAS);
#define BIAS_NAME_SIZE  (sizeof("usb-storage"))
static const char *bias_names[3] = ;
static DEFINE_MUTEX(usu_probe_mutex);
static DECLARE_COMPLETION(usu_end_notify);
static atomic_t total_threads = ATOMIC_INIT(0);
static int usu_probe_thread(void *arg);
void usb_usual_set_present(int type)
EXPORT_SYMBOL_GPL(usb_usual_set_present);
void usb_usual_clear_present(int type)
EXPORT_SYMBOL_GPL(usb_usual_clear_present);
int usb_usual_check_type(const struct usb_device_id *id, int caller_type)
EXPORT_SYMBOL_GPL(usb_usual_check_type);
static int usu_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void usu_disconnect(struct usb_interface *intf)
static struct usb_driver usu_driver = ;
static int usu_probe_thread(void *arg)
static int __init usb_usual_init(void)
static void __exit usb_usual_exit(void)
static int usu_set_bias(const char *bias_s, struct kernel_param *kp)
static int usu_get_bias(char *buffer, struct kernel_param *kp)
module_init(usb_usual_init);
module_exit(usb_usual_exit);
module_param_call(bias, usu_set_bias, usu_get_bias, NULL, S_IRUGO|S_IWUSR);
__MODULE_PARM_TYPE(bias, "string");
MODULE_PARM_DESC(bias, "Bias to usb-storage or ub");
MODULE_LICENSE("GPL");
