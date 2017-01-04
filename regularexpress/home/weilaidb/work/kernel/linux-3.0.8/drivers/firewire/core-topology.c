#define SELF_ID_PHY_ID(q)		(((q) >> 24) & 0x3f)
#define SELF_ID_EXTENDED(q)		(((q) >> 23) & 0x01)
#define SELF_ID_LINK_ON(q)		(((q) >> 22) & 0x01)
#define SELF_ID_GAP_COUNT(q)		(((q) >> 16) & 0x3f)
#define SELF_ID_PHY_SPEED(q)		(((q) >> 14) & 0x03)
#define SELF_ID_CONTENDER(q)		(((q) >> 11) & 0x01)
#define SELF_ID_PHY_INITIATOR(q)	(((q) >>  1) & 0x01)
#define SELF_ID_MORE_PACKETS(q)		(((q) >>  0) & 0x01)
#define SELF_ID_EXT_SEQUENCE(q)		(((q) >> 20) & 0x07)
#define SELFID_PORT_CHILD	0x3
#define SELFID_PORT_PARENT	0x2
#define SELFID_PORT_NCONN	0x1
#define SELFID_PORT_NONE	0x0
static u32 *count_ports(u32 *sid, int *total_port_count, int *child_port_count)
static int get_port_type(u32 *sid, int port_index)
static struct fw_node *fw_node_create(u32 sid, int port_count, int color)
static void update_hop_count(struct fw_node *node)
static inline struct fw_node *fw_node(struct list_head *l)
static struct fw_node *build_tree(struct fw_card *card,
u32 *sid, int self_id_count)
typedef void (*fw_node_callback_t)(struct fw_card * card,
struct fw_node * node,
struct fw_node * parent);
static void for_each_fw_node(struct fw_card *card, struct fw_node *root,
fw_node_callback_t callback)
static void report_lost_node(struct fw_card *card,
struct fw_node *node, struct fw_node *parent)
static void report_found_node(struct fw_card *card,
struct fw_node *node, struct fw_node *parent)
void fw_destroy_nodes(struct fw_card *card)
static void move_tree(struct fw_node *node0, struct fw_node *node1, int port)
static void update_tree(struct fw_card *card, struct fw_node *root)
static void update_topology_map(struct fw_card *card,
u32 *self_ids, int self_id_count)
void fw_core_handle_bus_reset(struct fw_card *card, int node_id, int generation,
int self_id_count, u32 *self_ids, bool bm_abdicate)
EXPORT_SYMBOL(fw_core_handle_bus_reset);
