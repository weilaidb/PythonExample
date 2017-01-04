#define IMPR_SPEED_MASK		0xc0000000
#define IMPR_SPEED_SHIFT	30
#define IMPR_XSPEED_MASK	0x00000060
#define IMPR_XSPEED_SHIFT	5
#define IMPR_PLUGS_MASK		0x0000001f
#define IPCR_ONLINE		0x80000000
#define IPCR_BCAST_CONN		0x40000000
#define IPCR_P2P_CONN_MASK	0x3f000000
#define IPCR_P2P_CONN_SHIFT	24
#define IPCR_CHANNEL_MASK	0x003f0000
#define IPCR_CHANNEL_SHIFT	16
enum bus_reset_handling ;
static __attribute__((format(printf, 2, 3)))
void cmp_error(struct cmp_connection *c, const char *fmt, ...)
static int pcr_modify(struct cmp_connection *c,
__be32 (*modify)(struct cmp_connection *c, __be32 old),
int (*check)(struct cmp_connection *c, __be32 pcr),
enum bus_reset_handling bus_reset_handling)
int cmp_connection_init(struct cmp_connection *c,
struct fw_unit *unit,
unsigned int ipcr_index)
EXPORT_SYMBOL(cmp_connection_init);
void cmp_connection_destroy(struct cmp_connection *c)
EXPORT_SYMBOL(cmp_connection_destroy);
static __be32 ipcr_set_modify(struct cmp_connection *c, __be32 ipcr)
static int ipcr_set_check(struct cmp_connection *c, __be32 ipcr)
int cmp_connection_establish(struct cmp_connection *c,
unsigned int max_payload_bytes)
EXPORT_SYMBOL(cmp_connection_establish);
int cmp_connection_update(struct cmp_connection *c)
EXPORT_SYMBOL(cmp_connection_update);
static __be32 ipcr_break_modify(struct cmp_connection *c, __be32 ipcr)
void cmp_connection_break(struct cmp_connection *c)
EXPORT_SYMBOL(cmp_connection_break);
