static const char hvc_driver_name[] = "hvc_console";
static struct vio_device_id hvc_driver_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, hvc_driver_table);
static int filtered_get_chars(uint32_t vtermno, char *buf, int count)
static const struct hv_ops hvc_get_put_ops = ;
static int __devinit hvc_vio_probe(struct vio_dev *vdev,
const struct vio_device_id *id)
static int __devexit hvc_vio_remove(struct vio_dev *vdev)
static struct vio_driver hvc_vio_driver = ;
static int __init hvc_vio_init(void)
module_init(hvc_vio_init);
static void __exit hvc_vio_exit(void)
module_exit(hvc_vio_exit);
static int hvc_find_vtys(void)
console_initcall(hvc_find_vtys);
