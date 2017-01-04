int fw_compute_block_crc(__be32 *block)
static DEFINE_MUTEX(card_mutex);
static LIST_HEAD(card_list);
static LIST_HEAD(descriptor_list);
static int descriptor_count;
static __be32 tmp_config_rom[256];
static size_t config_rom_length = 1 + 4 + 1 + 1;
#define BIB_CRC(v)		((v) <<  0)
#define BIB_CRC_LENGTH(v)	((v) << 16)
#define BIB_INFO_LENGTH(v)	((v) << 24)
#define BIB_BUS_NAME		0x31333934
#define BIB_LINK_SPEED(v)	((v) <<  0)
#define BIB_GENERATION(v)	((v) <<  4)
#define BIB_MAX_ROM(v)		((v) <<  8)
#define BIB_MAX_RECEIVE(v)	((v) << 12)
#define BIB_CYC_CLK_ACC(v)	((v) << 16)
#define BIB_PMC			((1) << 27)
#define BIB_BMC			((1) << 28)
#define BIB_ISC			((1) << 29)
#define BIB_CMC			((1) << 30)
#define BIB_IRMC		((1) << 31)
#define NODE_CAPABILITIES	0x0c0083c0
#define DEFAULT_SPLIT_TIMEOUT	(2 * 8000)
#define CANON_OUI		0x000085
static void generate_config_rom(struct fw_card *card, __be32 *config_rom)
static void update_config_roms(void)
static size_t required_space(struct fw_descriptor *desc)
int fw_core_add_descriptor(struct fw_descriptor *desc)
EXPORT_SYMBOL(fw_core_add_descriptor);
void fw_core_remove_descriptor(struct fw_descriptor *desc)
EXPORT_SYMBOL(fw_core_remove_descriptor);
static int reset_bus(struct fw_card *card, bool short_reset)
void fw_schedule_bus_reset(struct fw_card *card, bool delayed, bool short_reset)
EXPORT_SYMBOL(fw_schedule_bus_reset);
static void br_work(struct work_struct *work)
static void allocate_broadcast_channel(struct fw_card *card, int generation)
static const char gap_count_table[] = ;
void fw_schedule_bm_work(struct fw_card *card, unsigned long delay)
static void bm_work(struct work_struct *work)
void fw_card_initialize(struct fw_card *card,
const struct fw_card_driver *driver,
struct device *device)
EXPORT_SYMBOL(fw_card_initialize);
int fw_card_add(struct fw_card *card,
u32 max_receive, u32 link_speed, u64 guid)
EXPORT_SYMBOL(fw_card_add);
static int dummy_read_phy_reg(struct fw_card *card, int address)
static int dummy_update_phy_reg(struct fw_card *card, int address,
int clear_bits, int set_bits)
static void dummy_send_request(struct fw_card *card, struct fw_packet *packet)
static void dummy_send_response(struct fw_card *card, struct fw_packet *packet)
static int dummy_cancel_packet(struct fw_card *card, struct fw_packet *packet)
static int dummy_enable_phys_dma(struct fw_card *card,
int node_id, int generation)
static struct fw_iso_context *dummy_allocate_iso_context(struct fw_card *card,
int type, int channel, size_t header_size)
static int dummy_start_iso(struct fw_iso_context *ctx,
s32 cycle, u32 sync, u32 tags)
static int dummy_set_iso_channels(struct fw_iso_context *ctx, u64 *channels)
static int dummy_queue_iso(struct fw_iso_context *ctx, struct fw_iso_packet *p,
struct fw_iso_buffer *buffer, unsigned long payload)
static void dummy_flush_queue_iso(struct fw_iso_context *ctx)
static const struct fw_card_driver dummy_driver_template = ;
void fw_card_release(struct kref *kref)
void fw_core_remove_card(struct fw_card *card)
EXPORT_SYMBOL(fw_core_remove_card);
