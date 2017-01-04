#define OFFSET(REG_ADDR)    ((REG_ADDR) << 2)
#define MAX_FRAME_SIZE  9600
#define IPG 12
#define TXXG_CONF1_VAL ((IPG << SUNI1x10GEXP_BITOFF_TXXG_IPGT) | \
SUNI1x10GEXP_BITMSK_TXXG_32BIT_ALIGN | SUNI1x10GEXP_BITMSK_TXXG_CRCEN | \
SUNI1x10GEXP_BITMSK_TXXG_PADEN)
#define RXXG_CONF1_VAL (SUNI1x10GEXP_BITMSK_RXXG_PUREP | 0x14 | \
SUNI1x10GEXP_BITMSK_RXXG_FLCHK | SUNI1x10GEXP_BITMSK_RXXG_CRC_STRIP)
#define STATS_TICK_SECS (15 * 60)
enum ;
struct _cmac_instance ;
static int pmread(struct cmac *cmac, u32 reg, u32 * data32)
static int pmwrite(struct cmac *cmac, u32 reg, u32 data32)
static int pm3393_reset(struct cmac *cmac)
static int pm3393_interrupt_enable(struct cmac *cmac)
static int pm3393_interrupt_disable(struct cmac *cmac)
static int pm3393_interrupt_clear(struct cmac *cmac)
static int pm3393_interrupt_handler(struct cmac *cmac)
static int pm3393_enable(struct cmac *cmac, int which)
static int pm3393_enable_port(struct cmac *cmac, int which)
static int pm3393_disable(struct cmac *cmac, int which)
static int pm3393_loopback_enable(struct cmac *cmac)
static int pm3393_loopback_disable(struct cmac *cmac)
static int pm3393_set_mtu(struct cmac *cmac, int mtu)
static int pm3393_set_rx_mode(struct cmac *cmac, struct t1_rx_mode *rm)
static int pm3393_get_speed_duplex_fc(struct cmac *cmac, int *speed,
int *duplex, int *fc)
static int pm3393_set_speed_duplex_fc(struct cmac *cmac, int speed, int duplex,
int fc)
#define RMON_UPDATE(mac, name, stat_name) \
static const struct cmac_statistics *pm3393_update_statistics(struct cmac *mac,
int flag)
static int pm3393_macaddress_get(struct cmac *cmac, u8 mac_addr[6])
static int pm3393_macaddress_set(struct cmac *cmac, u8 ma[6])
static void pm3393_destroy(struct cmac *cmac)
static struct cmac_ops pm3393_ops = ;
static struct cmac *pm3393_mac_create(adapter_t *adapter, int index)
static int pm3393_mac_reset(adapter_t * adapter)
const struct gmac t1_pm3393_ops = ;
