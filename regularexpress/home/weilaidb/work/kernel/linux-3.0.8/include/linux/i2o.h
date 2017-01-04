#define _I2O_H
#define I2O_MAX_DRIVERS		8
#define I2O_QUEUE_EMPTY		0xffffffff
#define CACHE_NULL		0
#define CACHE_PREFETCH		1
#define CACHE_SMARTFETCH	2
#define CACHE_WRITETHROUGH	17
#define CACHE_WRITEBACK		18
#define CACHE_SMARTBACK		19
#define CACHE_SMARTTHROUGH	20
#define 	BLKI2OGRSTRAT	_IOR('2', 1, int)
#define 	BLKI2OGWSTRAT	_IOR('2', 2, int)
#define 	BLKI2OSRSTRAT	_IOW('2', 3, int)
#define 	BLKI2OSWSTRAT	_IOW('2', 4, int)
#define	I2O_CMD_ADAPTER_ASSIGN		0xB3
#define	I2O_CMD_ADAPTER_READ		0xB2
#define	I2O_CMD_ADAPTER_RELEASE		0xB5
#define	I2O_CMD_BIOS_INFO_SET		0xA5
#define	I2O_CMD_BOOT_DEVICE_SET		0xA7
#define	I2O_CMD_CONFIG_VALIDATE		0xBB
#define	I2O_CMD_CONN_SETUP		0xCA
#define	I2O_CMD_DDM_DESTROY		0xB1
#define	I2O_CMD_DDM_ENABLE		0xD5
#define	I2O_CMD_DDM_QUIESCE		0xC7
#define	I2O_CMD_DDM_RESET		0xD9
#define	I2O_CMD_DDM_SUSPEND		0xAF
#define	I2O_CMD_DEVICE_ASSIGN		0xB7
#define	I2O_CMD_DEVICE_RELEASE		0xB9
#define	I2O_CMD_HRT_GET			0xA8
#define	I2O_CMD_ADAPTER_CLEAR		0xBE
#define	I2O_CMD_ADAPTER_CONNECT		0xC9
#define	I2O_CMD_ADAPTER_RESET		0xBD
#define	I2O_CMD_LCT_NOTIFY		0xA2
#define	I2O_CMD_OUTBOUND_INIT		0xA1
#define	I2O_CMD_PATH_ENABLE		0xD3
#define	I2O_CMD_PATH_QUIESCE		0xC5
#define	I2O_CMD_PATH_RESET		0xD7
#define	I2O_CMD_STATIC_MF_CREATE	0xDD
#define	I2O_CMD_STATIC_MF_RELEASE	0xDF
#define	I2O_CMD_STATUS_GET		0xA0
#define	I2O_CMD_SW_DOWNLOAD		0xA9
#define	I2O_CMD_SW_UPLOAD		0xAB
#define	I2O_CMD_SW_REMOVE		0xAD
#define	I2O_CMD_SYS_ENABLE		0xD1
#define	I2O_CMD_SYS_MODIFY		0xC1
#define	I2O_CMD_SYS_QUIESCE		0xC3
#define	I2O_CMD_SYS_TAB_SET		0xA3
#define I2O_CMD_UTIL_NOP		0x00
#define I2O_CMD_UTIL_ABORT		0x01
#define I2O_CMD_UTIL_CLAIM		0x09
#define I2O_CMD_UTIL_RELEASE		0x0B
#define I2O_CMD_UTIL_PARAMS_GET		0x06
#define I2O_CMD_UTIL_PARAMS_SET		0x05
#define I2O_CMD_UTIL_EVT_REGISTER	0x13
#define I2O_CMD_UTIL_EVT_ACK		0x14
#define I2O_CMD_UTIL_CONFIG_DIALOG	0x10
#define I2O_CMD_UTIL_DEVICE_RESERVE	0x0D
#define I2O_CMD_UTIL_DEVICE_RELEASE	0x0F
#define I2O_CMD_UTIL_LOCK		0x17
#define I2O_CMD_UTIL_LOCK_RELEASE	0x19
#define I2O_CMD_UTIL_REPLY_FAULT_NOTIFY	0x15
#define I2O_CMD_SCSI_EXEC		0x81
#define I2O_CMD_SCSI_ABORT		0x83
#define I2O_CMD_SCSI_BUSRESET		0x27
#define I2O_CMD_BUS_ADAPTER_RESET	0x85
#define I2O_CMD_BUS_RESET		0x87
#define I2O_CMD_BUS_SCAN		0x89
#define I2O_CMD_BUS_QUIESCE		0x8b
#define I2O_CMD_BLOCK_READ		0x30
#define I2O_CMD_BLOCK_WRITE		0x31
#define I2O_CMD_BLOCK_CFLUSH		0x37
#define I2O_CMD_BLOCK_MLOCK		0x49
#define I2O_CMD_BLOCK_MUNLOCK		0x4B
#define I2O_CMD_BLOCK_MMOUNT		0x41
#define I2O_CMD_BLOCK_MEJECT		0x43
#define I2O_CMD_BLOCK_POWER		0x70
#define I2O_CMD_PRIVATE			0xFF
#define I2O_CMD_IN_PROGRESS	0x01
#define I2O_CMD_REJECTED	0x02
#define I2O_CMD_FAILED		0x03
#define I2O_CMD_COMPLETED	0x04
#define I2O_RTN_NO_ERROR			0
#define I2O_RTN_NOT_INIT			1
#define I2O_RTN_FREE_Q_EMPTY			2
#define I2O_RTN_TCB_ERROR			3
#define I2O_RTN_TRANSACTION_ERROR		4
#define I2O_RTN_ADAPTER_ALREADY_INIT		5
#define I2O_RTN_MALLOC_ERROR			6
#define I2O_RTN_ADPTR_NOT_REGISTERED		7
#define I2O_RTN_MSG_REPLY_TIMEOUT		8
#define I2O_RTN_NO_STATUS			9
#define I2O_RTN_NO_FIRM_VER			10
#define	I2O_RTN_NO_LINK_SPEED			11
#define I2O_REPLY_STATUS_SUCCESS                    	0x00
#define I2O_REPLY_STATUS_ABORT_DIRTY                	0x01
#define I2O_REPLY_STATUS_ABORT_NO_DATA_TRANSFER     	0x02
#define	I2O_REPLY_STATUS_ABORT_PARTIAL_TRANSFER		0x03
#define	I2O_REPLY_STATUS_ERROR_DIRTY			0x04
#define	I2O_REPLY_STATUS_ERROR_NO_DATA_TRANSFER		0x05
#define	I2O_REPLY_STATUS_ERROR_PARTIAL_TRANSFER		0x06
#define	I2O_REPLY_STATUS_PROCESS_ABORT_DIRTY		0x08
#define	I2O_REPLY_STATUS_PROCESS_ABORT_NO_DATA_TRANSFER	0x09
#define	I2O_REPLY_STATUS_PROCESS_ABORT_PARTIAL_TRANSFER	0x0A
#define	I2O_REPLY_STATUS_TRANSACTION_ERROR		0x0B
#define	I2O_REPLY_STATUS_PROGRESS_REPORT		0x80
#define I2O_PARAMS_STATUS_SUCCESS		0x00
#define I2O_PARAMS_STATUS_BAD_KEY_ABORT		0x01
#define I2O_PARAMS_STATUS_BAD_KEY_CONTINUE   	0x02
#define I2O_PARAMS_STATUS_BUFFER_FULL		0x03
#define I2O_PARAMS_STATUS_BUFFER_TOO_SMALL	0x04
#define I2O_PARAMS_STATUS_FIELD_UNREADABLE	0x05
#define I2O_PARAMS_STATUS_FIELD_UNWRITEABLE	0x06
#define I2O_PARAMS_STATUS_INSUFFICIENT_FIELDS	0x07
#define I2O_PARAMS_STATUS_INVALID_GROUP_ID	0x08
#define I2O_PARAMS_STATUS_INVALID_OPERATION	0x09
#define I2O_PARAMS_STATUS_NO_KEY_FIELD		0x0A
#define I2O_PARAMS_STATUS_NO_SUCH_FIELD		0x0B
#define I2O_PARAMS_STATUS_NON_DYNAMIC_GROUP	0x0C
#define I2O_PARAMS_STATUS_OPERATION_ERROR	0x0D
#define I2O_PARAMS_STATUS_SCALAR_ERROR		0x0E
#define I2O_PARAMS_STATUS_TABLE_ERROR		0x0F
#define I2O_PARAMS_STATUS_WRONG_GROUP_TYPE	0x10
#define I2O_DSC_SUCCESS                        0x0000
#define I2O_DSC_BAD_KEY                        0x0002
#define I2O_DSC_TCL_ERROR                      0x0003
#define I2O_DSC_REPLY_BUFFER_FULL              0x0004
#define I2O_DSC_NO_SUCH_PAGE                   0x0005
#define I2O_DSC_INSUFFICIENT_RESOURCE_SOFT     0x0006
#define I2O_DSC_INSUFFICIENT_RESOURCE_HARD     0x0007
#define I2O_DSC_CHAIN_BUFFER_TOO_LARGE         0x0009
#define I2O_DSC_UNSUPPORTED_FUNCTION           0x000A
#define I2O_DSC_DEVICE_LOCKED                  0x000B
#define I2O_DSC_DEVICE_RESET                   0x000C
#define I2O_DSC_INAPPROPRIATE_FUNCTION         0x000D
#define I2O_DSC_INVALID_INITIATOR_ADDRESS      0x000E
#define I2O_DSC_INVALID_MESSAGE_FLAGS          0x000F
#define I2O_DSC_INVALID_OFFSET                 0x0010
#define I2O_DSC_INVALID_PARAMETER              0x0011
#define I2O_DSC_INVALID_REQUEST                0x0012
#define I2O_DSC_INVALID_TARGET_ADDRESS         0x0013
#define I2O_DSC_MESSAGE_TOO_LARGE              0x0014
#define I2O_DSC_MESSAGE_TOO_SMALL              0x0015
#define I2O_DSC_MISSING_PARAMETER              0x0016
#define I2O_DSC_TIMEOUT                        0x0017
#define I2O_DSC_UNKNOWN_ERROR                  0x0018
#define I2O_DSC_UNKNOWN_FUNCTION               0x0019
#define I2O_DSC_UNSUPPORTED_VERSION            0x001A
#define I2O_DSC_DEVICE_BUSY                    0x001B
#define I2O_DSC_DEVICE_NOT_AVAILABLE           0x001C
#define I2O_BSA_DSC_SUCCESS               0x0000
#define I2O_BSA_DSC_MEDIA_ERROR           0x0001
#define I2O_BSA_DSC_ACCESS_ERROR          0x0002
#define I2O_BSA_DSC_DEVICE_FAILURE        0x0003
#define I2O_BSA_DSC_DEVICE_NOT_READY      0x0004
#define I2O_BSA_DSC_MEDIA_NOT_PRESENT     0x0005
#define I2O_BSA_DSC_MEDIA_LOCKED          0x0006
#define I2O_BSA_DSC_MEDIA_FAILURE         0x0007
#define I2O_BSA_DSC_PROTOCOL_FAILURE      0x0008
#define I2O_BSA_DSC_BUS_FAILURE           0x0009
#define I2O_BSA_DSC_ACCESS_VIOLATION      0x000A
#define I2O_BSA_DSC_WRITE_PROTECTED       0x000B
#define I2O_BSA_DSC_DEVICE_RESET          0x000C
#define I2O_BSA_DSC_VOLUME_CHANGED        0x000D
#define I2O_BSA_DSC_TIMEOUT               0x000E
#define I2O_FSC_TRANSPORT_SERVICE_SUSPENDED             0x81
#define I2O_FSC_TRANSPORT_SERVICE_TERMINATED            0x82
#define I2O_FSC_TRANSPORT_CONGESTION                    0x83
#define I2O_FSC_TRANSPORT_FAILURE                       0x84
#define I2O_FSC_TRANSPORT_STATE_ERROR                   0x85
#define I2O_FSC_TRANSPORT_TIME_OUT                      0x86
#define I2O_FSC_TRANSPORT_ROUTING_FAILURE               0x87
#define I2O_FSC_TRANSPORT_INVALID_VERSION               0x88
#define I2O_FSC_TRANSPORT_INVALID_OFFSET                0x89
#define I2O_FSC_TRANSPORT_INVALID_MSG_FLAGS             0x8A
#define I2O_FSC_TRANSPORT_FRAME_TOO_SMALL               0x8B
#define I2O_FSC_TRANSPORT_FRAME_TOO_LARGE               0x8C
#define I2O_FSC_TRANSPORT_INVALID_TARGET_ID             0x8D
#define I2O_FSC_TRANSPORT_INVALID_INITIATOR_ID          0x8E
#define I2O_FSC_TRANSPORT_INVALID_INITIATOR_CONTEXT     0x8F
#define I2O_FSC_TRANSPORT_UNKNOWN_FAILURE               0xFF
#define	I2O_CLAIM_PRIMARY					0x01000000
#define	I2O_CLAIM_MANAGEMENT					0x02000000
#define	I2O_CLAIM_AUTHORIZED					0x03000000
#define	I2O_CLAIM_SECONDARY					0x04000000
#define I2OVER15	0x0001
#define I2OVER20	0x0002
#define I2OVERSION	I2OVER15
#define SGL_OFFSET_0    I2OVERSION
#define SGL_OFFSET_4    (0x0040 | I2OVERSION)
#define SGL_OFFSET_5    (0x0050 | I2OVERSION)
#define SGL_OFFSET_6    (0x0060 | I2OVERSION)
#define SGL_OFFSET_7    (0x0070 | I2OVERSION)
#define SGL_OFFSET_8    (0x0080 | I2OVERSION)
#define SGL_OFFSET_9    (0x0090 | I2OVERSION)
#define SGL_OFFSET_10   (0x00A0 | I2OVERSION)
#define SGL_OFFSET_11   (0x00B0 | I2OVERSION)
#define SGL_OFFSET_12   (0x00C0 | I2OVERSION)
#define SGL_OFFSET(x)   (((x)<<4) | I2OVERSION)
#define TRL_SINGLE_FIXED_LENGTH		0x00
#define TRL_SINGLE_VARIABLE_LENGTH	0x40
#define TRL_MULTIPLE_FIXED_LENGTH	0x80
#define MSG_STATIC	0x0100
#define MSG_64BIT_CNTXT	0x0200
#define MSG_MULTI_TRANS	0x1000
#define MSG_FAIL	0x2000
#define MSG_FINAL	0x4000
#define MSG_REPLY	0x8000
#define THREE_WORD_MSG_SIZE	0x00030000
#define FOUR_WORD_MSG_SIZE	0x00040000
#define FIVE_WORD_MSG_SIZE	0x00050000
#define SIX_WORD_MSG_SIZE	0x00060000
#define SEVEN_WORD_MSG_SIZE	0x00070000
#define EIGHT_WORD_MSG_SIZE	0x00080000
#define NINE_WORD_MSG_SIZE	0x00090000
#define TEN_WORD_MSG_SIZE	0x000A0000
#define ELEVEN_WORD_MSG_SIZE	0x000B0000
#define I2O_MESSAGE_SIZE(x)	((x)<<16)
#define ADAPTER_TID		0
#define HOST_TID		1
#define I2O_MAX_OUTBOUND_MSG_FRAMES	128
#define I2O_OUTBOUND_MSG_FRAME_SIZE	128
#define I2O_MSG_INPOOL_MIN		32
#define I2O_INBOUND_MSG_FRAME_SIZE	128
#define I2O_POST_WAIT_OK	0
#define I2O_POST_WAIT_TIMEOUT	-ETIMEDOUT
#define I2O_CONTEXT_LIST_MIN_LENGTH	15
#define I2O_CONTEXT_LIST_USED		0x01
#define I2O_CONTEXT_LIST_DELETED	0x02
#define I2O_TIMEOUT_INIT_OUTBOUND_QUEUE	15
#define I2O_TIMEOUT_MESSAGE_GET		5
#define I2O_TIMEOUT_RESET		30
#define I2O_TIMEOUT_STATUS_GET		5
#define I2O_TIMEOUT_LCT_GET		360
#define I2O_TIMEOUT_SCSI_SCB_ABORT	240
#define I2O_HRT_GET_TRIES		3
#define I2O_LCT_GET_TRIES		3
#define I2O_MAX_SECTORS			1024
#define I2O_MAX_SECTORS_LIMITED		128
#define I2O_MAX_PHYS_SEGMENTS		BLK_MAX_SEGMENTS
struct i2o_message ;
struct i2o_msg_mfa ;
struct i2o_device ;
struct i2o_event ;
struct i2o_class_id ;
struct i2o_driver ;
struct i2o_dma ;
struct i2o_pool ;
struct i2o_io ;
struct i2o_context_list_element ;
struct i2o_controller ;
struct i2o_sys_tbl_entry ;
struct i2o_sys_tbl ;
extern struct list_head i2o_controllers;
extern struct i2o_message *i2o_msg_get_wait(struct i2o_controller *, int);
extern int i2o_msg_post_wait_mem(struct i2o_controller *, struct i2o_message *,
unsigned long, struct i2o_dma *);
extern int i2o_status_get(struct i2o_controller *);
extern int i2o_event_register(struct i2o_device *, struct i2o_driver *, int,
u32);
extern struct i2o_device *i2o_iop_find_device(struct i2o_controller *, u16);
extern struct i2o_controller *i2o_find_iop(int);
#if BITS_PER_LONG == 64
extern u32 i2o_cntxt_list_add(struct i2o_controller *, void *);
extern void *i2o_cntxt_list_get(struct i2o_controller *, u32);
extern u32 i2o_cntxt_list_remove(struct i2o_controller *, void *);
extern u32 i2o_cntxt_list_get_ptr(struct i2o_controller *, void *);
static inline u32 i2o_ptr_low(void *ptr)
;
static inline u32 i2o_ptr_high(void *ptr)
;
static inline u32 i2o_dma_low(dma_addr_t dma_addr)
;
static inline u32 i2o_dma_high(dma_addr_t dma_addr)
;
static inline u32 i2o_cntxt_list_add(struct i2o_controller *c, void *ptr)
;
static inline void *i2o_cntxt_list_get(struct i2o_controller *c, u32 context)
;
static inline u32 i2o_cntxt_list_remove(struct i2o_controller *c, void *ptr)
;
static inline u32 i2o_cntxt_list_get_ptr(struct i2o_controller *c, void *ptr)
;
static inline u32 i2o_ptr_low(void *ptr)
;
static inline u32 i2o_ptr_high(void *ptr)
;
static inline u32 i2o_dma_low(dma_addr_t dma_addr)
;
static inline u32 i2o_dma_high(dma_addr_t dma_addr)
;
extern u16 i2o_sg_tablesize(struct i2o_controller *c, u16 body_size);
extern dma_addr_t i2o_dma_map_single(struct i2o_controller *c, void *ptr,
size_t size,
enum dma_data_direction direction,
u32 ** sg_ptr);
extern int i2o_dma_map_sg(struct i2o_controller *c,
struct scatterlist *sg, int sg_count,
enum dma_data_direction direction,
u32 ** sg_ptr);
extern int i2o_dma_alloc(struct device *dev, struct i2o_dma *addr, size_t len);
extern void i2o_dma_free(struct device *dev, struct i2o_dma *addr);
extern int i2o_dma_realloc(struct device *dev, struct i2o_dma *addr,
size_t len);
extern int i2o_pool_alloc(struct i2o_pool *pool, const char *name,
size_t size, int min_nr);
extern void i2o_pool_free(struct i2o_pool *pool);
extern int i2o_driver_register(struct i2o_driver *);
extern void i2o_driver_unregister(struct i2o_driver *);
static inline void i2o_driver_notify_controller_add(struct i2o_driver *drv,
struct i2o_controller *c)
;
static inline void i2o_driver_notify_controller_remove(struct i2o_driver *drv,
struct i2o_controller *c)
;
static inline void i2o_driver_notify_device_add(struct i2o_driver *drv,
struct i2o_device *i2o_dev)
;
static inline void i2o_driver_notify_device_remove(struct i2o_driver *drv,
struct i2o_device *i2o_dev)
;
extern void i2o_driver_notify_controller_add_all(struct i2o_controller *);
extern void i2o_driver_notify_controller_remove_all(struct i2o_controller *);
extern void i2o_driver_notify_device_add_all(struct i2o_device *);
extern void i2o_driver_notify_device_remove_all(struct i2o_device *);
extern int i2o_device_claim(struct i2o_device *);
extern int i2o_device_claim_release(struct i2o_device *);
extern int i2o_exec_lct_get(struct i2o_controller *);
#define to_i2o_driver(drv) container_of(drv,struct i2o_driver, driver)
#define to_i2o_device(dev) container_of(dev, struct i2o_device, device)
#define to_i2o_controller(dev) container_of(dev, struct i2o_controller, device)
static inline struct i2o_message *i2o_msg_out_to_virt(struct i2o_controller *c,
u32 m)
;
static inline struct i2o_message __iomem *i2o_msg_in_to_virt(struct
i2o_controller *c,
u32 m)
;
static inline struct i2o_message *i2o_msg_get(struct i2o_controller *c)
;
static inline void i2o_msg_post(struct i2o_controller *c,
struct i2o_message *msg)
;
static inline int i2o_msg_post_wait(struct i2o_controller *c,
struct i2o_message *msg,
unsigned long timeout)
;
static inline void i2o_msg_nop_mfa(struct i2o_controller *c, u32 mfa)
;
static inline void i2o_msg_nop(struct i2o_controller *c,
struct i2o_message *msg)
;
static inline void i2o_flush_reply(struct i2o_controller *c, u32 m)
;
#define i2o_raw_writel(val, mem)	__raw_writel(cpu_to_le32(val), mem)
extern int i2o_parm_field_get(struct i2o_device *, int, int, void *, int);
extern int i2o_parm_table_get(struct i2o_device *, int, int, int, void *, int,
void *, int);
#define osm_printk(level, format, arg...)  \
printk(level "%s: " format, OSM_NAME , ## arg)
#define osm_debug(format, arg...) \
osm_printk(KERN_DEBUG, format , ## arg)
#define osm_debug(format, arg...) \
do  while (0)
#define osm_err(format, arg...)		\
osm_printk(KERN_ERR, format , ## arg)
#define osm_info(format, arg...)		\
osm_printk(KERN_INFO, format , ## arg)
#define osm_warn(format, arg...)		\
osm_printk(KERN_WARNING, format , ## arg)
extern void i2o_report_status(const char *, const char *, struct i2o_message *);
extern void i2o_dump_message(struct i2o_message *);
extern void i2o_dump_hrt(struct i2o_controller *c);
extern void i2o_debug_state(struct i2o_controller *c);
