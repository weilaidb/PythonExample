#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct vmbus_channel_message_table_entry ;
#define MAX_MSG_TYPES                    4
#define MAX_NUM_DEVICE_CLASSES_SUPPORTED 8
static const struct hv_guid
supported_device_classes[MAX_NUM_DEVICE_CLASSES_SUPPORTED] = ;
void prep_negotiate_resp(struct icmsg_hdr *icmsghdrp,
struct icmsg_negotiate *negop,
u8 *buf)
EXPORT_SYMBOL(prep_negotiate_resp);
void chn_cb_negotiate(void *context)
EXPORT_SYMBOL(chn_cb_negotiate);
struct hyperv_service_callback hv_cb_utils[MAX_MSG_TYPES] = ;
EXPORT_SYMBOL(hv_cb_utils);
static struct vmbus_channel *alloc_channel(void)
static void release_channel(struct work_struct *work)
void free_channel(struct vmbus_channel *channel)
static void vmbus_process_rescind_offer(struct work_struct *work)
static void vmbus_process_offer(struct work_struct *work)
static void vmbus_onoffer(struct vmbus_channel_message_header *hdr)
static void vmbus_onoffer_rescind(struct vmbus_channel_message_header *hdr)
static void vmbus_onoffers_delivered(
struct vmbus_channel_message_header *hdr)
static void vmbus_onopen_result(struct vmbus_channel_message_header *hdr)
static void vmbus_ongpadl_created(struct vmbus_channel_message_header *hdr)
static void vmbus_ongpadl_torndown(
struct vmbus_channel_message_header *hdr)
static void vmbus_onversion_response(
struct vmbus_channel_message_header *hdr)
static struct vmbus_channel_message_table_entry
channel_message_table[CHANNELMSG_COUNT] = ;
void vmbus_onmessage(void *context)
int vmbus_request_offers(void)
