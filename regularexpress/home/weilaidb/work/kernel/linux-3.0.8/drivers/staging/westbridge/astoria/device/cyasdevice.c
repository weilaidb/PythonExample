typedef struct cyasdevice  cyasdevice;
static cyasdevice *cy_as_device_controller;
int cy_as_device_init_done;
const char *dev_handle_name = "cy_astoria_dev_handle";
extern void cy_as_hal_config_c_s_mux(void);
static void cyasdevice_deinit(cyasdevice *cy_as_dev)
static void cy_misc_callback(cy_as_device_handle h,
cy_as_misc_event_type evtype, void *evdata)
void cy_as_acquire_common_lock()
EXPORT_SYMBOL(cy_as_acquire_common_lock);
void cy_as_release_common_lock()
EXPORT_SYMBOL(cy_as_release_common_lock);
#define PNAND_REG_CFG_INIT_VAL 0x0000
void  hal_reset(cy_as_hal_device_tag tag)
EXPORT_SYMBOL(hal_reset);
static struct platform_device *westbridge_pd;
static int __devinit wb_probe(struct platform_device *devptr)
static int __devexit wb_remove(struct platform_device *devptr)
static struct platform_driver west_bridge_driver = ;
static int cyasdevice_initialize(void)
cy_as_device_handle cyasdevice_getdevhandle(void)
EXPORT_SYMBOL(cyasdevice_getdevhandle);
cy_as_hal_device_tag cyasdevice_gethaltag(void)
EXPORT_SYMBOL(cyasdevice_gethaltag);
static int __init cyasdevice_init(void)
static void __exit cyasdevice_cleanup(void)
MODULE_DESCRIPTION("west bridge device driver");
MODULE_AUTHOR("cypress semiconductor");
MODULE_LICENSE("GPL");
module_init(cyasdevice_init);
module_exit(cyasdevice_cleanup);
