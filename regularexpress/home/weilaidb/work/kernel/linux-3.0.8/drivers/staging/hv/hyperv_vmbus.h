#define _HYPERV_VMBUS_H
enum hv_cpuid_function ;
#define HV_SYNIC_VERSION		(1)
#define HV_SYNIC_VERSION_1		(0x1)
#define HV_MESSAGE_SIZE			(256)
#define HV_MESSAGE_PAYLOAD_BYTE_COUNT	(240)
#define HV_MESSAGE_PAYLOAD_QWORD_COUNT	(30)
#define HV_ANY_VP			(0xFFFFFFFF)
#define HV_EVENT_FLAGS_COUNT		(256 * 8)
#define HV_EVENT_FLAGS_BYTE_COUNT	(256)
#define HV_EVENT_FLAGS_DWORD_COUNT	(256 / sizeof(u32))
enum hv_message_type ;
#define HV_SYNIC_SINT_COUNT		(16)
#define HV_SYNIC_STIMER_COUNT		(4)
#define HV_PARTITION_ID_INVALID		((u64)0x0)
union hv_connection_id ;
union hv_port_id ;
enum hv_port_type ;
struct hv_port_info ;
struct hv_connection_info ;
union hv_message_flags ;
struct hv_message_header ;
struct hv_timer_message_payload ;
struct hv_message ;
#define HV_PORT_MESSAGE_BUFFER_COUNT	(16)
struct hv_message_page ;
union hv_synic_event_flags ;
struct hv_synic_event_flags_page ;
union hv_synic_scontrol ;
union hv_synic_sint ;
union hv_synic_simp ;
union hv_synic_siefp ;
union hv_monitor_trigger_group ;
struct hv_monitor_parameter ;
union hv_monitor_trigger_state ;
struct hv_monitor_page ;
enum hv_call_code ;
struct hv_input_post_message ;
struct hv_input_signal_event ;
enum hv_guest_os_vendor ;
enum hv_guest_os_microsoft_ids ;
#define HV_X64_MSR_GUEST_OS_ID	0x40000000
union hv_x64_msr_guest_os_id_contents ;
#define HV_X64_MSR_HYPERCALL	0x40000001
union hv_x64_msr_hypercall_contents ;
enum ;
#define HV_PRESENT_BIT			0x80000000
#define HV_LINUX_GUEST_ID_LO		0x00000000
#define HV_LINUX_GUEST_ID_HI		0xB16B00B5
#define HV_LINUX_GUEST_ID		(((u64)HV_LINUX_GUEST_ID_HI << 32) | \
HV_LINUX_GUEST_ID_LO)
#define HV_CPU_POWER_MANAGEMENT		(1 << 0)
#define HV_RECOMMENDATIONS_MAX		4
#define HV_X64_MAX			5
#define HV_CAPS_MAX			8
#define HV_HYPERCALL_PARAM_ALIGN	sizeof(u64)
#define HV_SERVICE_PARENT_PORT				(0)
#define HV_SERVICE_PARENT_CONNECTION			(0)
#define HV_SERVICE_CONNECT_RESPONSE_SUCCESS		(0)
#define HV_SERVICE_CONNECT_RESPONSE_INVALID_PARAMETER	(1)
#define HV_SERVICE_CONNECT_RESPONSE_UNKNOWN_SERVICE	(2)
#define HV_SERVICE_CONNECT_RESPONSE_CONNECTION_REJECTED	(3)
#define HV_SERVICE_CONNECT_REQUEST_MESSAGE_ID		(1)
#define HV_SERVICE_CONNECT_RESPONSE_MESSAGE_ID		(2)
#define HV_SERVICE_DISCONNECT_REQUEST_MESSAGE_ID	(3)
#define HV_SERVICE_DISCONNECT_RESPONSE_MESSAGE_ID	(4)
#define HV_SERVICE_MAX_MESSAGE_ID				(4)
#define HV_SERVICE_PROTOCOL_VERSION (0x0010)
#define HV_CONNECT_PAYLOAD_BYTE_COUNT 64
static const struct hv_guid VMBUS_SERVICE_ID = ;
#define MAX_NUM_CPUS	32
struct hv_input_signal_event_buffer ;
struct hv_context ;
extern struct hv_context hv_context;
extern int hv_init(void);
extern void hv_cleanup(void);
extern u16 hv_post_message(union hv_connection_id connection_id,
enum hv_message_type message_type,
void *payload, size_t payload_size);
extern u16 hv_signal_event(void);
extern void hv_synic_init(void *irqarg);
extern void hv_synic_cleanup(void *arg);
int hv_ringbuffer_init(struct hv_ring_buffer_info *ring_info, void *buffer,
u32 buflen);
void hv_ringbuffer_cleanup(struct hv_ring_buffer_info *ring_info);
int hv_ringbuffer_write(struct hv_ring_buffer_info *ring_info,
struct scatterlist *sglist,
u32 sgcount);
int hv_ringbuffer_peek(struct hv_ring_buffer_info *ring_info, void *buffer,
u32 buflen);
int hv_ringbuffer_read(struct hv_ring_buffer_info *ring_info,
void *buffer,
u32 buflen,
u32 offset);
u32 hv_get_ringbuffer_interrupt_mask(struct hv_ring_buffer_info *ring_info);
void hv_dump_ring_info(struct hv_ring_buffer_info *ring_info, char *prefix);
void hv_ringbuffer_get_debuginfo(struct hv_ring_buffer_info *ring_info,
struct hv_ring_buffer_debug_info *debug_info);
#define MAX_NUM_CHANNELS	((PAGE_SIZE >> 1) << 3)
#define MAX_NUM_CHANNELS_SUPPORTED	256
enum vmbus_connect_state ;
#define MAX_SIZE_CHANNEL_MESSAGE	HV_MESSAGE_PAYLOAD_BYTE_COUNT
struct vmbus_connection ;
struct vmbus_msginfo ;
extern struct vmbus_connection vmbus_connection;
struct hv_device *vmbus_child_device_create(struct hv_guid *type,
struct hv_guid *instance,
struct vmbus_channel *channel);
int vmbus_child_device_register(struct hv_device *child_device_obj);
void vmbus_child_device_unregister(struct hv_device *device_obj);
struct vmbus_channel *relid2channel(u32 relid);
int vmbus_connect(void);
int vmbus_disconnect(void);
int vmbus_post_msg(void *buffer, size_t buflen);
int vmbus_set_event(u32 child_relid);
void vmbus_on_event(unsigned long data);
