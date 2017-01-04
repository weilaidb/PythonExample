#define pr_fmt(fmt) "cxgb: " fmt
#define _CXGB_COMMON_H_
#define DRV_DESCRIPTION "Chelsio 10Gb Ethernet Driver"
#define DRV_NAME "cxgb"
#define DRV_VERSION "2.2"
#define CH_DEVICE(devid, ssid, idx) \
#define SUPPORTED_PAUSE       (1 << 13)
#define SUPPORTED_LOOPBACK    (1 << 15)
#define ADVERTISED_PAUSE      (1 << 13)
#define ADVERTISED_ASYM_PAUSE (1 << 14)
typedef struct adapter adapter_t;
struct t1_rx_mode ;
#define t1_rx_mode_promisc(rm)	(rm->dev->flags & IFF_PROMISC)
#define t1_rx_mode_allmulti(rm)	(rm->dev->flags & IFF_ALLMULTI)
#define t1_rx_mode_mc_cnt(rm)	(netdev_mc_count(rm->dev))
#define t1_get_netdev(rm)	(rm->dev)
#define	MAX_NPORTS 4
#define PORT_MASK ((1 << MAX_NPORTS) - 1)
#define NMTUS      8
#define TCB_SIZE   128
#define SPEED_INVALID 0xffff
#define DUPLEX_INVALID 0xff
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct sge_params ;
struct chelsio_pci_params ;
struct tp_params ;
struct mc5_params ;
#define DEFAULT_SERVER_REGION_LEN 256
#define DEFAULT_RT_REGION_LEN 1024
struct adapter_params ;
struct link_config ;
struct cmac;
struct cphy;
struct port_info ;
struct sge;
struct peespi;
struct adapter ;
enum ;
struct mdio_ops;
struct gmac;
struct gphy;
struct board_info ;
static inline int t1_is_asic(const adapter_t *adapter)
extern const struct pci_device_id t1_pci_tbl[];
static inline int adapter_matches_type(const adapter_t *adapter,
int version, int revision)
#define t1_is_T1B(adap) adapter_matches_type(adap, CHBT_TERM_T1, TERM_T1B)
#define is_T2(adap)     adapter_matches_type(adap, CHBT_TERM_T2, TERM_T2)
static inline int vlan_tso_capable(const adapter_t *adapter)
#define for_each_port(adapter, iter) \
for (iter = 0; iter < (adapter)->params.nports; ++iter)
#define board_info(adapter) ((adapter)->params.brd_info)
#define is_10G(adapter) (board_info(adapter)->caps & SUPPORTED_10000baseT_Full)
static inline unsigned int core_ticks_per_usec(const adapter_t *adap)
extern int __t1_tpi_read(adapter_t *adapter, u32 addr, u32 *valp);
extern int __t1_tpi_write(adapter_t *adapter, u32 addr, u32 value);
extern int t1_tpi_write(adapter_t *adapter, u32 addr, u32 value);
extern int t1_tpi_read(adapter_t *adapter, u32 addr, u32 *value);
extern void t1_interrupts_enable(adapter_t *adapter);
extern void t1_interrupts_disable(adapter_t *adapter);
extern void t1_interrupts_clear(adapter_t *adapter);
extern int t1_elmer0_ext_intr_handler(adapter_t *adapter);
extern void t1_elmer0_ext_intr(adapter_t *adapter);
extern int t1_slow_intr_handler(adapter_t *adapter);
extern int t1_link_start(struct cphy *phy, struct cmac *mac, struct link_config *lc);
extern const struct board_info *t1_get_board_info(unsigned int board_id);
extern const struct board_info *t1_get_board_info_from_ids(unsigned int devid,
unsigned short ssid);
extern int t1_seeprom_read(adapter_t *adapter, u32 addr, __le32 *data);
extern int t1_get_board_rev(adapter_t *adapter, const struct board_info *bi,
struct adapter_params *p);
extern int t1_init_hw_modules(adapter_t *adapter);
extern int t1_init_sw_modules(adapter_t *adapter, const struct board_info *bi);
extern void t1_free_sw_modules(adapter_t *adapter);
extern void t1_fatal_err(adapter_t *adapter);
extern void t1_link_changed(adapter_t *adapter, int port_id);
extern void t1_link_negotiated(adapter_t *adapter, int port_id, int link_stat,
int speed, int duplex, int pause);
