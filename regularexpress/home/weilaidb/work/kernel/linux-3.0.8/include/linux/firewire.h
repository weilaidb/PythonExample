#define _LINUX_FIREWIRE_H
#define fw_notify(s, args...) printk(KERN_NOTICE KBUILD_MODNAME ": " s, ## args)
#define fw_error(s, args...) printk(KERN_ERR KBUILD_MODNAME ": " s, ## args)
#define CSR_REGISTER_BASE		0xfffff0000000ULL
#define CSR_STATE_CLEAR			0x0
#define CSR_STATE_SET			0x4
#define CSR_NODE_IDS			0x8
#define CSR_RESET_START			0xc
#define CSR_SPLIT_TIMEOUT_HI		0x18
#define CSR_SPLIT_TIMEOUT_LO		0x1c
#define CSR_CYCLE_TIME			0x200
#define CSR_BUS_TIME			0x204
#define CSR_BUSY_TIMEOUT		0x210
#define CSR_PRIORITY_BUDGET		0x218
#define CSR_BUS_MANAGER_ID		0x21c
#define CSR_BANDWIDTH_AVAILABLE		0x220
#define CSR_CHANNELS_AVAILABLE		0x224
#define CSR_CHANNELS_AVAILABLE_HI	0x224
#define CSR_CHANNELS_AVAILABLE_LO	0x228
#define CSR_MAINT_UTILITY		0x230
#define CSR_BROADCAST_CHANNEL		0x234
#define CSR_CONFIG_ROM			0x400
#define CSR_CONFIG_ROM_END		0x800
#define CSR_OMPR			0x900
#define CSR_OPCR(i)			(0x904 + (i) * 4)
#define CSR_IMPR			0x980
#define CSR_IPCR(i)			(0x984 + (i) * 4)
#define CSR_FCP_COMMAND			0xB00
#define CSR_FCP_RESPONSE		0xD00
#define CSR_FCP_END			0xF00
#define CSR_TOPOLOGY_MAP		0x1000
#define CSR_TOPOLOGY_MAP_END		0x1400
#define CSR_SPEED_MAP			0x2000
#define CSR_SPEED_MAP_END		0x3000
#define CSR_OFFSET		0x40
#define CSR_LEAF		0x80
#define CSR_DIRECTORY		0xc0
#define CSR_DESCRIPTOR		0x01
#define CSR_VENDOR		0x03
#define CSR_HARDWARE_VERSION	0x04
#define CSR_UNIT		0x11
#define CSR_SPECIFIER_ID	0x12
#define CSR_VERSION		0x13
#define CSR_DEPENDENT_INFO	0x14
#define CSR_MODEL		0x17
#define CSR_DIRECTORY_ID	0x20
struct fw_csr_iterator ;
void fw_csr_iterator_init(struct fw_csr_iterator *ci, const u32 *p);
int fw_csr_iterator_next(struct fw_csr_iterator *ci, int *key, int *value);
int fw_csr_string(const u32 *directory, int key, char *buf, size_t size);
extern struct bus_type fw_bus_type;
struct fw_card_driver;
struct fw_node;
struct fw_card ;
struct fw_attribute_group ;
enum fw_device_state ;
struct fw_device ;
static inline struct fw_device *fw_device(struct device *dev)
static inline int fw_device_is_shutdown(struct fw_device *device)
static inline struct fw_device *fw_device_get(struct fw_device *device)
static inline void fw_device_put(struct fw_device *device)
int fw_device_enable_phys_dma(struct fw_device *device);
struct fw_unit ;
static inline struct fw_unit *fw_unit(struct device *dev)
static inline struct fw_unit *fw_unit_get(struct fw_unit *unit)
static inline void fw_unit_put(struct fw_unit *unit)
static inline struct fw_device *fw_parent_device(struct fw_unit *unit)
struct ieee1394_device_id;
struct fw_driver ;
struct fw_packet;
struct fw_request;
typedef void (*fw_packet_callback_t)(struct fw_packet *packet,
struct fw_card *card, int status);
typedef void (*fw_transaction_callback_t)(struct fw_card *card, int rcode,
void *data, size_t length,
void *callback_data);
typedef void (*fw_address_callback_t)(struct fw_card *card,
struct fw_request *request,
int tcode, int destination, int source,
int generation,
unsigned long long offset,
void *data, size_t length,
void *callback_data);
struct fw_packet ;
struct fw_transaction ;
struct fw_address_handler ;
struct fw_address_region ;
extern const struct fw_address_region fw_high_memory_region;
int fw_core_add_address_handler(struct fw_address_handler *handler,
const struct fw_address_region *region);
void fw_core_remove_address_handler(struct fw_address_handler *handler);
void fw_send_response(struct fw_card *card,
struct fw_request *request, int rcode);
void fw_send_request(struct fw_card *card, struct fw_transaction *t,
int tcode, int destination_id, int generation, int speed,
unsigned long long offset, void *payload, size_t length,
fw_transaction_callback_t callback, void *callback_data);
int fw_cancel_transaction(struct fw_card *card,
struct fw_transaction *transaction);
int fw_run_transaction(struct fw_card *card, int tcode, int destination_id,
int generation, int speed, unsigned long long offset,
void *payload, size_t length);
static inline int fw_stream_packet_destination_id(int tag, int channel, int sy)
struct fw_descriptor ;
int fw_core_add_descriptor(struct fw_descriptor *desc);
void fw_core_remove_descriptor(struct fw_descriptor *desc);
struct fw_iso_packet ;
#define FW_ISO_CONTEXT_TRANSMIT			0
#define FW_ISO_CONTEXT_RECEIVE			1
#define FW_ISO_CONTEXT_RECEIVE_MULTICHANNEL	2
#define FW_ISO_CONTEXT_MATCH_TAG0	 1
#define FW_ISO_CONTEXT_MATCH_TAG1	 2
#define FW_ISO_CONTEXT_MATCH_TAG2	 4
#define FW_ISO_CONTEXT_MATCH_TAG3	 8
#define FW_ISO_CONTEXT_MATCH_ALL_TAGS	15
struct fw_iso_buffer ;
int fw_iso_buffer_init(struct fw_iso_buffer *buffer, struct fw_card *card,
int page_count, enum dma_data_direction direction);
void fw_iso_buffer_destroy(struct fw_iso_buffer *buffer, struct fw_card *card);
size_t fw_iso_buffer_lookup(struct fw_iso_buffer *buffer, dma_addr_t completed);
struct fw_iso_context;
typedef void (*fw_iso_callback_t)(struct fw_iso_context *context,
u32 cycle, size_t header_length,
void *header, void *data);
typedef void (*fw_iso_mc_callback_t)(struct fw_iso_context *context,
dma_addr_t completed, void *data);
struct fw_iso_context ;
struct fw_iso_context *fw_iso_context_create(struct fw_card *card,
int type, int channel, int speed, size_t header_size,
fw_iso_callback_t callback, void *callback_data);
int fw_iso_context_set_channels(struct fw_iso_context *ctx, u64 *channels);
int fw_iso_context_queue(struct fw_iso_context *ctx,
struct fw_iso_packet *packet,
struct fw_iso_buffer *buffer,
unsigned long payload);
void fw_iso_context_queue_flush(struct fw_iso_context *ctx);
int fw_iso_context_start(struct fw_iso_context *ctx,
int cycle, int sync, int tags);
int fw_iso_context_stop(struct fw_iso_context *ctx);
void fw_iso_context_destroy(struct fw_iso_context *ctx);
void fw_iso_resource_manage(struct fw_card *card, int generation,
u64 channels_mask, int *channel, int *bandwidth,
bool allocate);
extern struct workqueue_struct *fw_workqueue;
