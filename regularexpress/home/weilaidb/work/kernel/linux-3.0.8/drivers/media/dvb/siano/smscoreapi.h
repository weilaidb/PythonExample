#define __SMS_CORE_API_H__
#define kmutex_init(_p_) mutex_init(_p_)
#define kmutex_lock(_p_) mutex_lock(_p_)
#define kmutex_trylock(_p_) mutex_trylock(_p_)
#define kmutex_unlock(_p_) mutex_unlock(_p_)
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define SMS_PROTOCOL_MAX_RAOUNDTRIP_MS			(10000)
#define SMS_ALLOC_ALIGNMENT				128
#define SMS_DMA_ALIGNMENT				16
#define SMS_ALIGN_ADDRESS(addr) \
((((uintptr_t)(addr)) + (SMS_DMA_ALIGNMENT-1)) & ~(SMS_DMA_ALIGNMENT-1))
#define SMS_DEVICE_FAMILY2				1
#define SMS_ROM_NO_RESPONSE				2
#define SMS_DEVICE_NOT_READY				0x8000000
enum sms_device_type_st ;
struct smscore_device_t;
struct smscore_client_t;
struct smscore_buffer_t;
typedef int (*hotplug_t)(struct smscore_device_t *coredev,
struct device *device, int arrival);
typedef int (*setmode_t)(void *context, int mode);
typedef void (*detectmode_t)(void *context, int *mode);
typedef int (*sendrequest_t)(void *context, void *buffer, size_t size);
typedef int (*loadfirmware_t)(void *context, void *buffer, size_t size);
typedef int (*preload_t)(void *context);
typedef int (*postload_t)(void *context);
typedef int (*onresponse_t)(void *context, struct smscore_buffer_t *cb);
typedef void (*onremove_t)(void *context);
struct smscore_buffer_t ;
struct smsdevice_params_t ;
struct smsclient_params_t ;
struct smscore_device_t ;
#define SMS_ANTENNA_GPIO_0					1
#define SMS_ANTENNA_GPIO_1					0
#define BW_8_MHZ							0
#define BW_7_MHZ							1
#define BW_6_MHZ							2
#define BW_5_MHZ							3
#define BW_ISDBT_1SEG						4
#define BW_ISDBT_3SEG						5
#define MSG_HDR_FLAG_SPLIT_MSG				4
#define MAX_GPIO_PIN_NUMBER					31
#define HIF_TASK							11
#define SMS_HOST_LIB						150
#define DVBT_BDA_CONTROL_MSG_ID				201
#define SMS_MAX_PAYLOAD_SIZE				240
#define SMS_TUNE_TIMEOUT					500
#define MSG_SMS_GPIO_CONFIG_REQ				507
#define MSG_SMS_GPIO_CONFIG_RES				508
#define MSG_SMS_GPIO_SET_LEVEL_REQ			509
#define MSG_SMS_GPIO_SET_LEVEL_RES			510
#define MSG_SMS_GPIO_GET_LEVEL_REQ			511
#define MSG_SMS_GPIO_GET_LEVEL_RES			512
#define MSG_SMS_RF_TUNE_REQ					561
#define MSG_SMS_RF_TUNE_RES					562
#define MSG_SMS_INIT_DEVICE_REQ				578
#define MSG_SMS_INIT_DEVICE_RES				579
#define MSG_SMS_ADD_PID_FILTER_REQ			601
#define MSG_SMS_ADD_PID_FILTER_RES			602
#define MSG_SMS_REMOVE_PID_FILTER_REQ			603
#define MSG_SMS_REMOVE_PID_FILTER_RES			604
#define MSG_SMS_DAB_CHANNEL				607
#define MSG_SMS_GET_PID_FILTER_LIST_REQ			608
#define MSG_SMS_GET_PID_FILTER_LIST_RES			609
#define MSG_SMS_GET_STATISTICS_RES			616
#define MSG_SMS_GET_STATISTICS_REQ			615
#define MSG_SMS_HO_PER_SLICES_IND			630
#define MSG_SMS_SET_ANTENNA_CONFIG_REQ			651
#define MSG_SMS_SET_ANTENNA_CONFIG_RES			652
#define MSG_SMS_SLEEP_RESUME_COMP_IND			655
#define MSG_SMS_DATA_DOWNLOAD_REQ			660
#define MSG_SMS_DATA_DOWNLOAD_RES			661
#define MSG_SMS_SWDOWNLOAD_TRIGGER_REQ		664
#define MSG_SMS_SWDOWNLOAD_TRIGGER_RES		665
#define MSG_SMS_SWDOWNLOAD_BACKDOOR_REQ		666
#define MSG_SMS_SWDOWNLOAD_BACKDOOR_RES		667
#define MSG_SMS_GET_VERSION_EX_REQ			668
#define MSG_SMS_GET_VERSION_EX_RES			669
#define MSG_SMS_SET_CLOCK_OUTPUT_REQ		670
#define MSG_SMS_I2C_SET_FREQ_REQ			685
#define MSG_SMS_GENERIC_I2C_REQ				687
#define MSG_SMS_GENERIC_I2C_RES				688
#define MSG_SMS_DVBT_BDA_DATA				693
#define MSG_SW_RELOAD_REQ					697
#define MSG_SMS_DATA_MSG					699
#define MSG_SW_RELOAD_START_REQ				702
#define MSG_SW_RELOAD_START_RES				703
#define MSG_SW_RELOAD_EXEC_REQ				704
#define MSG_SW_RELOAD_EXEC_RES				705
#define MSG_SMS_SPI_INT_LINE_SET_REQ		710
#define MSG_SMS_GPIO_CONFIG_EX_REQ			712
#define MSG_SMS_GPIO_CONFIG_EX_RES			713
#define MSG_SMS_ISDBT_TUNE_REQ				776
#define MSG_SMS_ISDBT_TUNE_RES				777
#define MSG_SMS_TRANSMISSION_IND			782
#define MSG_SMS_START_IR_REQ				800
#define MSG_SMS_START_IR_RES				801
#define MSG_SMS_IR_SAMPLES_IND				802
#define MSG_SMS_SIGNAL_DETECTED_IND			827
#define MSG_SMS_NO_SIGNAL_IND				828
#define SMS_INIT_MSG_EX(ptr, type, src, dst, len) do  while (0)
#define SMS_INIT_MSG(ptr, type, len) \
SMS_INIT_MSG_EX(ptr, type, 0, HIF_TASK, len)
enum SMS_DVB3_EVENTS ;
enum SMS_DEVICE_MODE ;
struct SmsMsgHdr_ST ;
struct SmsMsgData_ST ;
struct SmsMsgData_ST2 ;
struct SmsDataDownload_ST ;
struct SmsVersionRes_ST ;
struct SmsFirmware_ST ;
struct SMSHOSTLIB_STATISTICS_ST ;
struct SmsMsgStatisticsInfo_ST ;
struct SMSHOSTLIB_ISDBT_LAYER_STAT_ST ;
struct SMSHOSTLIB_STATISTICS_ISDBT_ST ;
struct PID_STATISTICS_DATA_S ;
struct PID_DATA_S ;
#define CORRECT_STAT_RSSI(_stat) ((_stat).RSSI *= -1)
#define CORRECT_STAT_BANDWIDTH(_stat) (_stat.Bandwidth = 8 - _stat.Bandwidth)
#define CORRECT_STAT_TRANSMISSON_MODE(_stat) \
if (_stat.TransmissionMode == 0) \
_stat.TransmissionMode = 2; \
else if (_stat.TransmissionMode == 1) \
_stat.TransmissionMode = 8; \
else \
_stat.TransmissionMode = 4;
struct TRANSMISSION_STATISTICS_S ;
struct RECEPTION_STATISTICS_S ;
struct SMSHOSTLIB_STATISTICS_DVB_S ;
struct SRVM_SIGNAL_STATUS_S ;
struct SMSHOSTLIB_I2C_REQ_ST ;
struct SMSHOSTLIB_I2C_RES_ST ;
struct smscore_config_gpio ;
struct smscore_gpio_config ;
extern void smscore_registry_setmode(char *devpath, int mode);
extern int smscore_registry_getmode(char *devpath);
extern int smscore_register_hotplug(hotplug_t hotplug);
extern void smscore_unregister_hotplug(hotplug_t hotplug);
extern int smscore_register_device(struct smsdevice_params_t *params,
struct smscore_device_t **coredev);
extern void smscore_unregister_device(struct smscore_device_t *coredev);
extern int smscore_start_device(struct smscore_device_t *coredev);
extern int smscore_load_firmware(struct smscore_device_t *coredev,
char *filename,
loadfirmware_t loadfirmware_handler);
extern int smscore_set_device_mode(struct smscore_device_t *coredev, int mode);
extern int smscore_get_device_mode(struct smscore_device_t *coredev);
extern int smscore_register_client(struct smscore_device_t *coredev,
struct smsclient_params_t *params,
struct smscore_client_t **client);
extern void smscore_unregister_client(struct smscore_client_t *client);
extern int smsclient_sendrequest(struct smscore_client_t *client,
void *buffer, size_t size);
extern void smscore_onresponse(struct smscore_device_t *coredev,
struct smscore_buffer_t *cb);
extern int smscore_get_common_buffer_size(struct smscore_device_t *coredev);
extern int smscore_map_common_buffer(struct smscore_device_t *coredev,
struct vm_area_struct *vma);
extern int smscore_get_fw_filename(struct smscore_device_t *coredev,
int mode, char *filename);
extern int smscore_send_fw_file(struct smscore_device_t *coredev,
u8 *ufwbuf, int size);
extern
struct smscore_buffer_t *smscore_getbuffer(struct smscore_device_t *coredev);
extern void smscore_putbuffer(struct smscore_device_t *coredev,
struct smscore_buffer_t *cb);
int smscore_configure_gpio(struct smscore_device_t *coredev, u32 pin,
struct smscore_config_gpio *pinconfig);
int smscore_set_gpio(struct smscore_device_t *coredev, u32 pin, int level);
extern int smscore_gpio_configure(struct smscore_device_t *coredev, u8 PinNum,
struct smscore_gpio_config *pGpioConfig);
extern int smscore_gpio_set_level(struct smscore_device_t *coredev, u8 PinNum,
u8 NewLevel);
extern int smscore_gpio_get_level(struct smscore_device_t *coredev, u8 PinNum,
u8 *level);
void smscore_set_board_id(struct smscore_device_t *core, int id);
int smscore_get_board_id(struct smscore_device_t *core);
int smscore_led_state(struct smscore_device_t *core, int led);
#define DBG_INFO 1
#define DBG_ADV  2
#define sms_printk(kern, fmt, arg...) \
printk(kern "%s: " fmt "\n", __func__, ##arg)
#define dprintk(kern, lvl, fmt, arg...) do  while (0)
#define sms_log(fmt, arg...) sms_printk(KERN_INFO, fmt, ##arg)
#define sms_err(fmt, arg...) \
sms_printk(KERN_ERR, "line: %d: " fmt, __LINE__, ##arg)
#define sms_warn(fmt, arg...)  sms_printk(KERN_WARNING, fmt, ##arg)
#define sms_info(fmt, arg...) \
dprintk(KERN_INFO, DBG_INFO, fmt, ##arg)
#define sms_debug(fmt, arg...) \
dprintk(KERN_DEBUG, DBG_ADV, fmt, ##arg)
