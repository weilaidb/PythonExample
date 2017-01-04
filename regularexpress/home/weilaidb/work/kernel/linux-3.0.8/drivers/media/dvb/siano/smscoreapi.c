static int sms_dbg;
module_param_named(debug, sms_dbg, int, 0644);
MODULE_PARM_DESC(debug, "set debug level (info=1, adv=2 (or-able))");
struct smscore_device_notifyee_t ;
struct smscore_idlist_t ;
struct smscore_client_t ;
void smscore_set_board_id(struct smscore_device_t *core, int id)
int smscore_led_state(struct smscore_device_t *core, int led)
EXPORT_SYMBOL_GPL(smscore_set_board_id);
int smscore_get_board_id(struct smscore_device_t *core)
EXPORT_SYMBOL_GPL(smscore_get_board_id);
struct smscore_registry_entry_t ;
static struct list_head g_smscore_notifyees;
static struct list_head g_smscore_devices;
static struct mutex g_smscore_deviceslock;
static struct list_head g_smscore_registry;
static struct mutex g_smscore_registrylock;
static int default_mode = 4;
module_param(default_mode, int, 0644);
MODULE_PARM_DESC(default_mode, "default firmware id (device mode)");
static struct smscore_registry_entry_t *smscore_find_registry(char *devpath)
int smscore_registry_getmode(char *devpath)
EXPORT_SYMBOL_GPL(smscore_registry_getmode);
static enum sms_device_type_st smscore_registry_gettype(char *devpath)
void smscore_registry_setmode(char *devpath, int mode)
static void smscore_registry_settype(char *devpath,
enum sms_device_type_st type)
static void list_add_locked(struct list_head *new, struct list_head *head,
spinlock_t *lock)
int smscore_register_hotplug(hotplug_t hotplug)
EXPORT_SYMBOL_GPL(smscore_register_hotplug);
void smscore_unregister_hotplug(hotplug_t hotplug)
EXPORT_SYMBOL_GPL(smscore_unregister_hotplug);
static void smscore_notify_clients(struct smscore_device_t *coredev)
static int smscore_notify_callbacks(struct smscore_device_t *coredev,
struct device *device, int arrival)
static struct
smscore_buffer_t *smscore_createbuffer(u8 *buffer, void *common_buffer,
dma_addr_t common_buffer_phys)
int smscore_register_device(struct smsdevice_params_t *params,
struct smscore_device_t **coredev)
EXPORT_SYMBOL_GPL(smscore_register_device);
static int smscore_sendrequest_and_wait(struct smscore_device_t *coredev,
void *buffer, size_t size, struct completion *completion)
static int smscore_init_ir(struct smscore_device_t *coredev)
int smscore_start_device(struct smscore_device_t *coredev)
EXPORT_SYMBOL_GPL(smscore_start_device);
static int smscore_load_firmware_family2(struct smscore_device_t *coredev,
void *buffer, size_t size)
static int smscore_load_firmware_from_file(struct smscore_device_t *coredev,
char *filename,
loadfirmware_t loadfirmware_handler)
void smscore_unregister_device(struct smscore_device_t *coredev)
EXPORT_SYMBOL_GPL(smscore_unregister_device);
static int smscore_detect_mode(struct smscore_device_t *coredev)
static char *smscore_fw_lkup[][SMS_NUM_OF_DEVICE_TYPES] = ;
static inline char *sms_get_fw_name(struct smscore_device_t *coredev,
int mode, enum sms_device_type_st type)
int smscore_set_device_mode(struct smscore_device_t *coredev, int mode)
int smscore_get_device_mode(struct smscore_device_t *coredev)
EXPORT_SYMBOL_GPL(smscore_get_device_mode);
static struct
smscore_client_t *smscore_find_client(struct smscore_device_t *coredev,
int data_type, int id)
void smscore_onresponse(struct smscore_device_t *coredev,
struct smscore_buffer_t *cb)
EXPORT_SYMBOL_GPL(smscore_onresponse);
struct smscore_buffer_t *get_entry(struct smscore_device_t *coredev)
struct smscore_buffer_t *smscore_getbuffer(struct smscore_device_t *coredev)
EXPORT_SYMBOL_GPL(smscore_getbuffer);
void smscore_putbuffer(struct smscore_device_t *coredev,
struct smscore_buffer_t *cb)
EXPORT_SYMBOL_GPL(smscore_putbuffer);
static int smscore_validate_client(struct smscore_device_t *coredev,
struct smscore_client_t *client,
int data_type, int id)
int smscore_register_client(struct smscore_device_t *coredev,
struct smsclient_params_t *params,
struct smscore_client_t **client)
EXPORT_SYMBOL_GPL(smscore_register_client);
void smscore_unregister_client(struct smscore_client_t *client)
EXPORT_SYMBOL_GPL(smscore_unregister_client);
int smsclient_sendrequest(struct smscore_client_t *client,
void *buffer, size_t size)
EXPORT_SYMBOL_GPL(smsclient_sendrequest);
int smscore_configure_gpio(struct smscore_device_t *coredev, u32 pin,
struct smscore_config_gpio *pinconfig)
int smscore_set_gpio(struct smscore_device_t *coredev, u32 pin, int level)
static int GetGpioPinParams(u32 PinNum, u32 *pTranslatedPinNum,
u32 *pGroupNum, u32 *pGroupCfg)
int smscore_gpio_configure(struct smscore_device_t *coredev, u8 PinNum,
struct smscore_gpio_config *pGpioConfig)
int smscore_gpio_set_level(struct smscore_device_t *coredev, u8 PinNum,
u8 NewLevel)
int smscore_gpio_get_level(struct smscore_device_t *coredev, u8 PinNum,
u8 *level)
static int __init smscore_module_init(void)
static void __exit smscore_module_exit(void)
module_init(smscore_module_init);
module_exit(smscore_module_exit);
MODULE_DESCRIPTION("Siano MDTV Core module");
MODULE_AUTHOR("Siano Mobile Silicon, Inc. (uris@siano-ms.com)");
MODULE_LICENSE("GPL");
