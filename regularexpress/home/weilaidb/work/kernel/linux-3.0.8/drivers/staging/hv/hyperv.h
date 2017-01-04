#define _HYPERV_H
struct hv_guid ;
#define MAX_PAGE_BUFFER_COUNT				16
#define MAX_MULTIPAGE_BUFFER_COUNT			32
struct hv_page_buffer ;
struct hv_multipage_buffer ;
#define MAX_PAGE_BUFFER_PACKET		(0x18 +			\
(sizeof(struct hv_page_buffer) * \
MAX_PAGE_BUFFER_COUNT))
#define MAX_MULTIPAGE_BUFFER_PACKET	(0x18 +			\
sizeof(struct hv_multipage_buffer))
struct hv_ring_buffer  __packed;
struct hv_ring_buffer_info ;
struct hv_ring_buffer_debug_info ;
#define HV_DRV_VERSION           "3.1"
#define VMBUS_REVISION_NUMBER		13
#define MAX_PIPE_DATA_PAYLOAD		(sizeof(u8) * 16384)
#define VMBUS_PIPE_TYPE_BYTE		0x00000000
#define VMBUS_PIPE_TYPE_MESSAGE		0x00000004
#define MAX_USER_DEFINED_BYTES		120
#define MAX_PIPE_USER_DEFINED_BYTES	116
struct vmbus_channel_offer  __packed;
#define VMBUS_CHANNEL_ENUMERATE_DEVICE_INTERFACE	1
#define VMBUS_CHANNEL_SERVER_SUPPORTS_TRANSFER_PAGES	2
#define VMBUS_CHANNEL_SERVER_SUPPORTS_GPADLS		4
#define VMBUS_CHANNEL_NAMED_PIPE_MODE			0x10
#define VMBUS_CHANNEL_LOOPBACK_OFFER			0x100
#define VMBUS_CHANNEL_PARENT_OFFER			0x200
#define VMBUS_CHANNEL_REQUEST_MONITORED_NOTIFICATION	0x400
struct vmpacket_descriptor  __packed;
struct vmpacket_header  __packed;
struct vmtransfer_page_range  __packed;
struct vmtransfer_page_packet_header  __packed;
struct vmgpadl_packet_header  __packed;
struct vmadd_remove_transfer_page_set  __packed;
struct gpa_range ;
struct vmestablish_gpadl  __packed;
struct vmteardown_gpadl  __packed;
struct vmdata_gpa_direct  __packed;
struct vmadditional_data  __packed;
union vmpacket_largest_possible_header ;
#define VMPACKET_DATA_START_ADDRESS(__packet)	\
(void *)(((unsigned char *)__packet) +	\
((struct vmpacket_descriptor)__packet)->offset8 * 8)
#define VMPACKET_DATA_LENGTH(__packet)		\
((((struct vmpacket_descriptor)__packet)->len8 -	\
((struct vmpacket_descriptor)__packet)->offset8) * 8)
#define VMPACKET_TRANSFER_MODE(__packet)	\
(((struct IMPACT)__packet)->type)
enum vmbus_packet_type ;
#define VMBUS_DATA_PACKET_FLAG_COMPLETION_REQUESTED	1
enum vmbus_channel_message_type ;
struct vmbus_channel_message_header  __packed;
struct vmbus_channel_query_vmbus_version  __packed;
struct vmbus_channel_version_supported  __packed;
struct vmbus_channel_offer_channel  __packed;
struct vmbus_channel_rescind_offer  __packed;
struct vmbus_channel_open_channel  __packed;
struct vmbus_channel_open_result  __packed;
struct vmbus_channel_close_channel  __packed;
#define GPADL_TYPE_RING_BUFFER		1
#define GPADL_TYPE_SERVER_SAVE_AREA	2
#define GPADL_TYPE_TRANSACTION		8
struct vmbus_channel_gpadl_header  __packed;
struct vmbus_channel_gpadl_body  __packed;
struct vmbus_channel_gpadl_created  __packed;
struct vmbus_channel_gpadl_teardown  __packed;
struct vmbus_channel_gpadl_torndown  __packed;
struct vmbus_channel_view_range_add  __packed;
struct vmbus_channel_view_range_remove  __packed;
struct vmbus_channel_relid_released  __packed;
struct vmbus_channel_initiate_contact  __packed;
struct vmbus_channel_version_response  __packed;
enum vmbus_channel_state ;
struct vmbus_channel ;
struct vmbus_channel_debug_info ;
struct vmbus_channel_msginfo ;
void free_channel(struct vmbus_channel *channel);
void vmbus_onmessage(void *context);
int vmbus_request_offers(void);
struct vmbus_channel_packet_page_buffer  __packed;
struct vmbus_channel_packet_multipage_buffer  __packed;
extern int vmbus_open(struct vmbus_channel *channel,
u32 send_ringbuffersize,
u32 recv_ringbuffersize,
void *userdata,
u32 userdatalen,
void(*onchannel_callback)(void *context),
void *context);
extern void vmbus_close(struct vmbus_channel *channel);
extern int vmbus_sendpacket(struct vmbus_channel *channel,
const void *buffer,
u32 bufferLen,
u64 requestid,
enum vmbus_packet_type type,
u32 flags);
extern int vmbus_sendpacket_pagebuffer(struct vmbus_channel *channel,
struct hv_page_buffer pagebuffers[],
u32 pagecount,
void *buffer,
u32 bufferlen,
u64 requestid);
extern int vmbus_sendpacket_multipagebuffer(struct vmbus_channel *channel,
struct hv_multipage_buffer *mpb,
void *buffer,
u32 bufferlen,
u64 requestid);
extern int vmbus_establish_gpadl(struct vmbus_channel *channel,
void *kbuffer,
u32 size,
u32 *gpadl_handle);
extern int vmbus_teardown_gpadl(struct vmbus_channel *channel,
u32 gpadl_handle);
extern int vmbus_recvpacket(struct vmbus_channel *channel,
void *buffer,
u32 bufferlen,
u32 *buffer_actual_len,
u64 *requestid);
extern int vmbus_recvpacket_raw(struct vmbus_channel *channel,
void *buffer,
u32 bufferlen,
u32 *buffer_actual_len,
u64 *requestid);
extern void vmbus_onchannel_event(struct vmbus_channel *channel);
extern void vmbus_get_debug_info(struct vmbus_channel *channel,
struct vmbus_channel_debug_info *debug);
extern void vmbus_ontimer(unsigned long data);
#define LOWORD(dw) ((unsigned short)(dw))
#define HIWORD(dw) ((unsigned short)(((unsigned int) (dw) >> 16) & 0xFFFF))
#define VMBUS				0x0001
#define STORVSC				0x0002
#define NETVSC				0x0004
#define INPUTVSC			0x0008
#define BLKVSC				0x0010
#define VMBUS_DRV			0x0100
#define STORVSC_DRV			0x0200
#define NETVSC_DRV			0x0400
#define INPUTVSC_DRV		0x0800
#define BLKVSC_DRV			0x1000
#define ALL_MODULES			(VMBUS		|\
STORVSC		|\
NETVSC		|\
INPUTVSC	|\
BLKVSC		|\
VMBUS_DRV	|\
STORVSC_DRV	|\
NETVSC_DRV	|\
INPUTVSC_DRV|\
BLKVSC_DRV)
#define ERROR_LVL				3
#define WARNING_LVL				4
#define INFO_LVL				6
#define DEBUG_LVL				7
#define DEBUG_LVL_ENTEREXIT			8
#define DEBUG_RING_LVL				9
extern unsigned int vmbus_loglevel;
#define DPRINT(mod, lvl, fmt, args...) do  while (0)
#define DPRINT_DBG(mod, fmt, args...) do  while (0)
#define DPRINT_INFO(mod, fmt, args...) do  while (0)
#define DPRINT_WARN(mod, fmt, args...) do  while (0)
#define DPRINT_ERR(mod, fmt, args...) do  while (0)
struct hv_driver;
struct hv_device;
struct hv_dev_port_info ;
struct hv_device_info ;
struct hv_driver ;
struct hv_device ;
static inline struct hv_device *device_to_hv_device(struct device *d)
static inline struct hv_driver *drv_to_hv_drv(struct device_driver *d)
int vmbus_child_driver_register(struct device_driver *drv);
void vmbus_child_driver_unregister(struct device_driver *drv);
#define ICMSGTYPE_NEGOTIATE		0
#define ICMSGTYPE_HEARTBEAT		1
#define ICMSGTYPE_KVPEXCHANGE		2
#define ICMSGTYPE_SHUTDOWN		3
#define ICMSGTYPE_TIMESYNC		4
#define ICMSGTYPE_VSS			5
#define ICMSGHDRFLAG_TRANSACTION	1
#define ICMSGHDRFLAG_REQUEST		2
#define ICMSGHDRFLAG_RESPONSE		4
#define HV_S_OK				0x00000000
#define HV_E_FAIL			0x80004005
#define HV_ERROR_NOT_SUPPORTED		0x80070032
#define HV_ERROR_MACHINE_LOCKED		0x800704F7
struct vmbuspipe_hdr  __packed;
struct ic_version  __packed;
struct icmsg_hdr  __packed;
struct icmsg_negotiate  __packed;
struct shutdown_msg_data  __packed;
struct heartbeat_msg_data  __packed;
#define ICTIMESYNCFLAG_PROBE	0
#define ICTIMESYNCFLAG_SYNC	1
#define ICTIMESYNCFLAG_SAMPLE	2
#define WLTIMEDELTA	116444736000000000L
#define WLTIMEDELTA	116444736000000000LL
struct ictimesync_data  __packed;
#define HV_SHUTDOWN_MSG		0
#define HV_TIMESYNC_MSG		1
#define HV_HEARTBEAT_MSG	2
#define HV_KVP_MSG		3
struct hyperv_service_callback ;
extern void prep_negotiate_resp(struct icmsg_hdr *,
struct icmsg_negotiate *, u8 *);
extern void chn_cb_negotiate(void *);
extern struct hyperv_service_callback hv_cb_utils[];
