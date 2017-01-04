#define VTTY_PORTS 10
static DEFINE_SPINLOCK(consolelock);
static DEFINE_SPINLOCK(consoleloglock);
static const char hvc_driver_name[] = "hvc_console";
#define IN_BUF_SIZE	200
static struct port_info  port_info[VTTY_PORTS] = ;
#define viochar_is_console(pi)	((pi) == &port_info[0])
static struct vio_device_id hvc_driver_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, hvc_driver_table);
static void hvlog(char *fmt, ...)
static void init_data_event(struct viocharlpevent *viochar, HvLpIndex lp)
static int get_chars(uint32_t vtermno, char *buf, int count)
static int put_chars(uint32_t vtermno, const char *buf, int count)
static const struct hv_ops hvc_get_put_ops = ;
static int __devinit hvc_vio_probe(struct vio_dev *vdev,
const struct vio_device_id *id)
static int __devexit hvc_vio_remove(struct vio_dev *vdev)
static struct vio_driver hvc_vio_driver = ;
static void hvc_open_event(struct HvLpEvent *event)
static void hvc_close_event(struct HvLpEvent *event)
static void hvc_data_event(struct HvLpEvent *event)
static void hvc_ack_event(struct HvLpEvent *event)
static void hvc_config_event(struct HvLpEvent *event)
static void hvc_handle_event(struct HvLpEvent *event)
static int __init send_open(HvLpIndex remoteLp, void *sem)
static int __init hvc_vio_init(void)
module_init(hvc_vio_init);
static void __exit hvc_vio_exit(void)
module_exit(hvc_vio_exit);
static int __init hvc_find_vtys(void)
console_initcall(hvc_find_vtys);
