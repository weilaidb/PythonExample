#define HEADER_PRI(pri)			((pri) << 0)
#define HEADER_TCODE(tcode)		((tcode) << 4)
#define HEADER_RETRY(retry)		((retry) << 8)
#define HEADER_TLABEL(tlabel)		((tlabel) << 10)
#define HEADER_DESTINATION(destination)	((destination) << 16)
#define HEADER_SOURCE(source)		((source) << 16)
#define HEADER_RCODE(rcode)		((rcode) << 12)
#define HEADER_OFFSET_HIGH(offset_high)	((offset_high) << 0)
#define HEADER_DATA_LENGTH(length)	((length) << 16)
#define HEADER_EXTENDED_TCODE(tcode)	((tcode) << 0)
#define HEADER_GET_TCODE(q)		(((q) >> 4) & 0x0f)
#define HEADER_GET_TLABEL(q)		(((q) >> 10) & 0x3f)
#define HEADER_GET_RCODE(q)		(((q) >> 12) & 0x0f)
#define HEADER_GET_DESTINATION(q)	(((q) >> 16) & 0xffff)
#define HEADER_GET_SOURCE(q)		(((q) >> 16) & 0xffff)
#define HEADER_GET_OFFSET_HIGH(q)	(((q) >> 0) & 0xffff)
#define HEADER_GET_DATA_LENGTH(q)	(((q) >> 16) & 0xffff)
#define HEADER_GET_EXTENDED_TCODE(q)	(((q) >> 0) & 0xffff)
#define HEADER_DESTINATION_IS_BROADCAST(q) \
(((q) & HEADER_DESTINATION(0x3f)) == HEADER_DESTINATION(0x3f))
#define PHY_PACKET_CONFIG	0x0
#define PHY_PACKET_LINK_ON	0x1
#define PHY_PACKET_SELF_ID	0x2
#define PHY_CONFIG_GAP_COUNT(gap_count)	(((gap_count) << 16) | (1 << 22))
#define PHY_CONFIG_ROOT_ID(node_id)	((((node_id) & 0x3f) << 24) | (1 << 23))
#define PHY_IDENTIFIER(id)		((id) << 30)
static int try_cancel_split_timeout(struct fw_transaction *t)
static int close_transaction(struct fw_transaction *transaction,
struct fw_card *card, int rcode)
int fw_cancel_transaction(struct fw_card *card,
struct fw_transaction *transaction)
EXPORT_SYMBOL(fw_cancel_transaction);
static void split_transaction_timeout_callback(unsigned long data)
static void start_split_transaction_timeout(struct fw_transaction *t,
struct fw_card *card)
static void transmit_complete_callback(struct fw_packet *packet,
struct fw_card *card, int status)
static void fw_fill_request(struct fw_packet *packet, int tcode, int tlabel,
int destination_id, int source_id, int generation, int speed,
unsigned long long offset, void *payload, size_t length)
static int allocate_tlabel(struct fw_card *card)
void fw_send_request(struct fw_card *card, struct fw_transaction *t, int tcode,
int destination_id, int generation, int speed,
unsigned long long offset, void *payload, size_t length,
fw_transaction_callback_t callback, void *callback_data)
EXPORT_SYMBOL(fw_send_request);
struct transaction_callback_data ;
static void transaction_callback(struct fw_card *card, int rcode,
void *payload, size_t length, void *data)
int fw_run_transaction(struct fw_card *card, int tcode, int destination_id,
int generation, int speed, unsigned long long offset,
void *payload, size_t length)
EXPORT_SYMBOL(fw_run_transaction);
static DEFINE_MUTEX(phy_config_mutex);
static DECLARE_COMPLETION(phy_config_done);
static void transmit_phy_packet_callback(struct fw_packet *packet,
struct fw_card *card, int status)
static struct fw_packet phy_config_packet = ;
void fw_send_phy_config(struct fw_card *card,
int node_id, int generation, int gap_count)
static struct fw_address_handler *lookup_overlapping_address_handler(
struct list_head *list, unsigned long long offset, size_t length)
static bool is_enclosing_handler(struct fw_address_handler *handler,
unsigned long long offset, size_t length)
static struct fw_address_handler *lookup_enclosing_address_handler(
struct list_head *list, unsigned long long offset, size_t length)
static DEFINE_SPINLOCK(address_handler_lock);
static LIST_HEAD(address_handler_list);
const struct fw_address_region fw_high_memory_region =
;
EXPORT_SYMBOL(fw_high_memory_region);
static bool is_in_fcp_region(u64 offset, size_t length)
int fw_core_add_address_handler(struct fw_address_handler *handler,
const struct fw_address_region *region)
EXPORT_SYMBOL(fw_core_add_address_handler);
void fw_core_remove_address_handler(struct fw_address_handler *handler)
EXPORT_SYMBOL(fw_core_remove_address_handler);
struct fw_request ;
static void free_response_callback(struct fw_packet *packet,
struct fw_card *card, int status)
int fw_get_response_length(struct fw_request *r)
void fw_fill_response(struct fw_packet *response, u32 *request_header,
int rcode, void *payload, size_t length)
EXPORT_SYMBOL(fw_fill_response);
static u32 compute_split_timeout_timestamp(struct fw_card *card,
u32 request_timestamp)
static struct fw_request *allocate_request(struct fw_card *card,
struct fw_packet *p)
void fw_send_response(struct fw_card *card,
struct fw_request *request, int rcode)
EXPORT_SYMBOL(fw_send_response);
static void handle_exclusive_region_request(struct fw_card *card,
struct fw_packet *p,
struct fw_request *request,
unsigned long long offset)
static void handle_fcp_region_request(struct fw_card *card,
struct fw_packet *p,
struct fw_request *request,
unsigned long long offset)
void fw_core_handle_request(struct fw_card *card, struct fw_packet *p)
EXPORT_SYMBOL(fw_core_handle_request);
void fw_core_handle_response(struct fw_card *card, struct fw_packet *p)
EXPORT_SYMBOL(fw_core_handle_response);
static const struct fw_address_region topology_map_region =
;
static void handle_topology_map(struct fw_card *card, struct fw_request *request,
int tcode, int destination, int source, int generation,
unsigned long long offset, void *payload, size_t length,
void *callback_data)
static struct fw_address_handler topology_map = ;
static const struct fw_address_region registers_region =
;
static void update_split_timeout(struct fw_card *card)
static void handle_registers(struct fw_card *card, struct fw_request *request,
int tcode, int destination, int source, int generation,
unsigned long long offset, void *payload, size_t length,
void *callback_data)
static struct fw_address_handler registers = ;
MODULE_AUTHOR("Kristian Hoegsberg <krh@bitplanet.net>");
MODULE_DESCRIPTION("Core IEEE1394 transaction logic");
MODULE_LICENSE("GPL");
static const u32 vendor_textual_descriptor[] = ;
static const u32 model_textual_descriptor[] = ;
static struct fw_descriptor vendor_id_descriptor = ;
static struct fw_descriptor model_id_descriptor = ;
static int __init fw_core_init(void)
static void __exit fw_core_cleanup(void)
module_init(fw_core_init);
module_exit(fw_core_cleanup);
