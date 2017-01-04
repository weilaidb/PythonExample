static LIST_HEAD(node_list);
static DEFINE_SPINLOCK(node_list_lock);
static inline struct fw_device *device_of(struct firedtv *fdtv)
static int node_req(struct firedtv *fdtv, u64 addr, void *data, size_t len,
int tcode)
int fdtv_lock(struct firedtv *fdtv, u64 addr, void *data)
int fdtv_read(struct firedtv *fdtv, u64 addr, void *data)
int fdtv_write(struct firedtv *fdtv, u64 addr, void *data, size_t len)
#define ISO_HEADER_SIZE			4
#define CIP_HEADER_SIZE			8
#define MPEG2_TS_HEADER_SIZE		4
#define MPEG2_TS_SOURCE_PACKET_SIZE	(4 + 188)
#define MAX_PACKET_SIZE		1024
#define PACKETS_PER_PAGE	(PAGE_SIZE / MAX_PACKET_SIZE)
#define N_PACKETS		64
#define N_PAGES			DIV_ROUND_UP(N_PACKETS, PACKETS_PER_PAGE)
#define IRQ_INTERVAL		16
struct fdtv_ir_context ;
static int queue_iso(struct fdtv_ir_context *ctx, int index)
static void handle_iso(struct fw_iso_context *context, u32 cycle,
size_t header_length, void *header, void *data)
int fdtv_start_iso(struct firedtv *fdtv)
void fdtv_stop_iso(struct firedtv *fdtv)
static void handle_fcp(struct fw_card *card, struct fw_request *request,
int tcode, int destination, int source, int generation,
unsigned long long offset, void *payload, size_t length,
void *callback_data)
static struct fw_address_handler fcp_handler = ;
static const struct fw_address_region fcp_region = ;
static const char * const model_names[] = ;
#define MAX_MODEL_NAME_LEN sizeof("FireDTV ????")
static int node_probe(struct device *dev)
static int node_remove(struct device *dev)
static void node_update(struct fw_unit *unit)
#define MATCH_FLAGS (IEEE1394_MATCH_VENDOR_ID | IEEE1394_MATCH_MODEL_ID | \
IEEE1394_MATCH_SPECIFIER_ID | IEEE1394_MATCH_VERSION)
#define DIGITAL_EVERYWHERE_OUI	0x001287
#define AVC_UNIT_SPEC_ID_ENTRY	0x00a02d
#define AVC_SW_VERSION_ENTRY	0x010001
static const struct ieee1394_device_id fdtv_id_table[] = ;
MODULE_DEVICE_TABLE(ieee1394, fdtv_id_table);
static struct fw_driver fdtv_driver = ;
static int __init fdtv_init(void)
static void __exit fdtv_exit(void)
module_init(fdtv_init);
module_exit(fdtv_exit);
MODULE_AUTHOR("Andreas Monitzer <andy@monitzer.com>");
MODULE_AUTHOR("Ben Backx <ben@bbackx.com>");
MODULE_DESCRIPTION("FireDTV DVB Driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("FireDTV DVB");
