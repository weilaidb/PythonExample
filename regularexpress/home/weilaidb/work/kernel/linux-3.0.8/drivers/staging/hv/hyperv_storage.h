#define _HYPERV_STORAGE_H
#define REVISION_STRING(REVISION_) #REVISION_
#define FILL_VMSTOR_REVISION(RESULT_LVALUE_)				\
do  while (0)
#define VMSTOR_PROTOCOL_MAJOR(VERSION_)		(((VERSION_) >> 8) & 0xff)
#define VMSTOR_PROTOCOL_MINOR(VERSION_)		(((VERSION_))      & 0xff)
#define VMSTOR_PROTOCOL_VERSION(MAJOR_, MINOR_)	((((MAJOR_) & 0xff) << 8) | \
(((MINOR_) & 0xff)))
#define VMSTOR_INVALID_PROTOCOL_VERSION		(-1)
#define VMSTOR_PROTOCOL_VERSION_CURRENT VMSTOR_PROTOCOL_VERSION(2, 0)
#define MAX_TRANSFER_LENGTH	0x40000
#define DEFAULT_PACKET_SIZE (sizeof(struct vmdata_gpa_direct) +	\
sizeof(struct vstor_packet) +		\
sizesizeof(u64) * (MAX_TRANSFER_LENGTH / PAGE_SIZE)))
enum vstor_packet_operation ;
#define CDB16GENERIC_LENGTH			0x10
#define SENSE_BUFFER_SIZE			0x12
#define MAX_DATA_BUF_LEN_WITH_PADDING		0x14
struct vmscsi_request  __attribute((packed));
struct vmstorage_channel_properties  __packed;
struct vmstorage_protocol_version  __packed;
#define STORAGE_CHANNEL_REMOVABLE_FLAG		0x1
#define STORAGE_CHANNEL_EMULATED_IDE_FLAG	0x2
struct vstor_packet  __packed;
#define REQUEST_COMPLETION_FLAG	0x1
#define VSC_LEGAL_FLAGS		(REQUEST_COMPLETION_FLAG)
#define STORVSC_RING_BUFFER_SIZE			(20*PAGE_SIZE)
#define BLKVSC_RING_BUFFER_SIZE				(20*PAGE_SIZE)
#define STORVSC_MAX_IO_REQUESTS				128
#define STORVSC_MAX_LUNS_PER_TARGET			64
#define STORVSC_MAX_TARGETS				1
#define STORVSC_MAX_CHANNELS				1
struct hv_storvsc_request;
enum storvsc_request_type ;
struct hv_storvsc_request ;
struct storvsc_device_info ;
struct storvsc_major_info ;
struct storvsc_device ;
static inline struct storvsc_device *get_stor_device(struct hv_device *device)
static inline void put_stor_device(struct hv_device *device)
static inline void storvsc_wait_to_drain(struct storvsc_device *dev)
int storvsc_dev_add(struct hv_device *device,
void *additional_info);
int storvsc_dev_remove(struct hv_device *device);
int storvsc_do_io(struct hv_device *device,
struct hv_storvsc_request *request);
int storvsc_get_major_info(struct storvsc_device_info *device_info,
struct storvsc_major_info *major_info);
