#define STATS_TICK_SECS 15
#define MAJOR_UPDATE_TICKS (1800 / STATS_TICK_SECS)
#define MAX_MTU 9600
#define WM_DISABLE	0x01a01fff
#define WM_ENABLE	0x014a03F0
struct init_table ;
struct _cmac_instance ;
#define INITBLOCK_SLEEP	0xffffffff
static void vsc_read(adapter_t *adapter, u32 addr, u32 *val)
static void vsc_write(adapter_t *adapter, u32 addr, u32 data)
static void vsc7326_full_reset(adapter_t* adapter)
static struct init_table vsc7326_reset[] = ;
static struct init_table vsc7326_portinit[4][22] = ;
static void run_table(adapter_t *adapter, struct init_table *ib, int len)
static int bist_rd(adapter_t *adapter, int moduleid, int address)
static int bist_wr(adapter_t *adapter, int moduleid, int address, int value)
static int run_bist(adapter_t *adapter, int moduleid)
static int check_bist(adapter_t *adapter, int moduleid)
static int enable_mem(adapter_t *adapter, int moduleid)
static int run_bist_all(adapter_t *adapter)
static int mac_intr_handler(struct cmac *mac)
static int mac_intr_enable(struct cmac *mac)
static int mac_intr_disable(struct cmac *mac)
static int mac_intr_clear(struct cmac *mac)
static int mac_set_address(struct cmac* mac, u8 addr[6])
static int mac_get_address(struct cmac *mac, u8 addr[6])
static int mac_reset(struct cmac *mac)
static int mac_set_rx_mode(struct cmac *mac, struct t1_rx_mode *rm)
static int mac_set_mtu(struct cmac *mac, int mtu)
static int mac_set_speed_duplex_fc(struct cmac *mac, int speed, int duplex,
int fc)
static int mac_enable(struct cmac *mac, int which)
static int mac_disable(struct cmac *mac, int which)
static void rmon_update(struct cmac *mac, unsigned int addr, u64 *stat)
static void port_stats_update(struct cmac *mac)
static const struct cmac_statistics *mac_update_statistics(struct cmac *mac,
int flag)
static void mac_destroy(struct cmac *mac)
static struct cmac_ops vsc7326_ops = ;
static struct cmac *vsc7326_mac_create(adapter_t *adapter, int index)
static int vsc7326_mac_reset(adapter_t *adapter)
const struct gmac t1_vsc7326_ops = ;
