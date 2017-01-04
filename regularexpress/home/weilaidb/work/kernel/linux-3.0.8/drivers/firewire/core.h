#define _FIREWIRE_CORE_H
struct device;
struct fw_card;
struct fw_device;
struct fw_iso_buffer;
struct fw_iso_context;
struct fw_iso_packet;
struct fw_node;
struct fw_packet;
#define PHY_LINK_ACTIVE		0x80
#define PHY_CONTENDER		0x40
#define PHY_BUS_RESET		0x40
#define PHY_EXTENDED_REGISTERS	0xe0
#define PHY_BUS_SHORT_RESET	0x40
#define PHY_INT_STATUS_BITS	0x3c
#define PHY_ENABLE_ACCEL	0x02
#define PHY_ENABLE_MULTI	0x01
#define PHY_PAGE_SELECT		0xe0
#define BANDWIDTH_AVAILABLE_INITIAL	4915
#define BROADCAST_CHANNEL_INITIAL	(1 << 31 | 31)
#define BROADCAST_CHANNEL_VALID		(1 << 30)
#define CSR_STATE_BIT_CMSTR	(1 << 8)
#define CSR_STATE_BIT_ABDICATE	(1 << 10)
struct fw_card_driver ;
void fw_card_initialize(struct fw_card *card,
const struct fw_card_driver *driver, struct device *device);
int fw_card_add(struct fw_card *card,
u32 max_receive, u32 link_speed, u64 guid);
void fw_core_remove_card(struct fw_card *card);
int fw_compute_block_crc(__be32 *block);
void fw_schedule_bus_reset(struct fw_card *card, bool delayed, bool short_reset);
void fw_schedule_bm_work(struct fw_card *card, unsigned long delay);
static inline struct fw_card *fw_card_get(struct fw_card *card)
void fw_card_release(struct kref *kref);
static inline void fw_card_put(struct fw_card *card)
extern const struct file_operations fw_device_ops;
void fw_device_cdev_update(struct fw_device *device);
void fw_device_cdev_remove(struct fw_device *device);
void fw_cdev_handle_phy_packet(struct fw_card *card, struct fw_packet *p);
extern struct rw_semaphore fw_device_rwsem;
extern struct idr fw_device_idr;
extern int fw_cdev_major;
struct fw_device *fw_device_get_by_devt(dev_t devt);
int fw_device_set_broadcast_channel(struct device *dev, void *gen);
void fw_node_event(struct fw_card *card, struct fw_node *node, int event);
int fw_iso_buffer_map(struct fw_iso_buffer *buffer, struct vm_area_struct *vma);
enum ;
struct fw_node ;
static inline struct fw_node *fw_node_get(struct fw_node *node)
static inline void fw_node_put(struct fw_node *node)
void fw_core_handle_bus_reset(struct fw_card *card, int node_id,
int generation, int self_id_count, u32 *self_ids, bool bm_abdicate);
void fw_destroy_nodes(struct fw_card *card);
static inline bool is_next_generation(int new_generation, int old_generation)
#define TCODE_LINK_INTERNAL		0xe
#define TCODE_IS_READ_REQUEST(tcode)	(((tcode) & ~1) == 4)
#define TCODE_IS_BLOCK_PACKET(tcode)	(((tcode) &  1) != 0)
#define TCODE_IS_LINK_INTERNAL(tcode)	((tcode) == TCODE_LINK_INTERNAL)
#define TCODE_IS_REQUEST(tcode)		(((tcode) &  2) == 0)
#define TCODE_IS_RESPONSE(tcode)	(((tcode) &  2) != 0)
#define TCODE_HAS_REQUEST_DATA(tcode)	(((tcode) & 12) != 4)
#define TCODE_HAS_RESPONSE_DATA(tcode)	(((tcode) & 12) != 0)
#define LOCAL_BUS 0xffc0
void fw_core_handle_request(struct fw_card *card, struct fw_packet *request);
void fw_core_handle_response(struct fw_card *card, struct fw_packet *packet);
int fw_get_response_length(struct fw_request *request);
void fw_fill_response(struct fw_packet *response, u32 *request_header,
int rcode, void *payload, size_t length);
#define FW_PHY_CONFIG_NO_NODE_ID	-1
#define FW_PHY_CONFIG_CURRENT_GAP_COUNT	-1
void fw_send_phy_config(struct fw_card *card,
int node_id, int generation, int gap_count);
static inline bool is_ping_packet(u32 *data)
