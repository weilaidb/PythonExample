#define DP83640_PHY_ID	0x20005ce1
#define PAGESEL		0x13
#define LAYER4		0x02
#define LAYER2		0x01
#define MAX_RXTS	64
#define N_EXT_TS	1
#define PSF_PTPVER	2
#define PSF_EVNT	0x4000
#define PSF_RX		0x2000
#define PSF_TX		0x1000
#define EXT_EVENT	1
#define EXT_GPIO	1
#define CAL_EVENT	2
#define CAL_GPIO	9
#define CAL_TRIGGER	2
#define ADJTIME_FIX	16
#if defined(__BIG_ENDIAN)
#define ENDIAN_FLAG	0
#elif defined(__LITTLE_ENDIAN)
#define ENDIAN_FLAG	PSF_ENDIAN
#define SKB_PTP_TYPE(__skb) (*(unsigned int *)((__skb)->cb))
struct phy_rxts ;
struct phy_txts ;
struct rxts ;
struct dp83640_clock;
struct dp83640_private ;
struct dp83640_clock ;
static int chosen_phy = -1;
static ushort cal_gpio = 4;
module_param(chosen_phy, int, 0444);
module_param(cal_gpio, ushort, 0444);
MODULE_PARM_DESC(chosen_phy, \
"The address of the PHY to use for the ancillary clock features");
MODULE_PARM_DESC(cal_gpio, \
"Which GPIO line to use for synchronizing multiple PHYs");
static LIST_HEAD(phyter_clocks);
static DEFINE_MUTEX(phyter_clocks_lock);
static void rx_timestamp_work(struct work_struct *work);
#define BROADCAST_ADDR 31
static inline int broadcast_write(struct mii_bus *bus, u32 regnum, u16 val)
static int ext_read(struct phy_device *phydev, int page, u32 regnum)
static void ext_write(int broadcast, struct phy_device *phydev,
int page, u32 regnum, u16 val)
static int tdr_write(int bc, struct phy_device *dev,
const struct timespec *ts, u16 cmd)
static void phy2rxts(struct phy_rxts *p, struct rxts *rxts)
static u64 phy2txts(struct phy_txts *p)
static int ptp_dp83640_adjfreq(struct ptp_clock_info *ptp, s32 ppb)
static int ptp_dp83640_adjtime(struct ptp_clock_info *ptp, s64 delta)
static int ptp_dp83640_gettime(struct ptp_clock_info *ptp, struct timespec *ts)
static int ptp_dp83640_settime(struct ptp_clock_info *ptp,
const struct timespec *ts)
static int ptp_dp83640_enable(struct ptp_clock_info *ptp,
struct ptp_clock_request *rq, int on)
static u8 status_frame_dst[6] = ;
static u8 status_frame_src[6] = ;
static void enable_status_frames(struct phy_device *phydev, bool on)
static bool is_status_frame(struct sk_buff *skb, int type)
static int expired(struct rxts *rxts)
static void prune_rx_ts(struct dp83640_private *dp83640)
static void enable_broadcast(struct phy_device *phydev, int init_page, int on)
static void recalibrate(struct dp83640_clock *clock)
static int decode_evnt(struct dp83640_private *dp83640,
void *data, u16 ests)
static void decode_rxts(struct dp83640_private *dp83640,
struct phy_rxts *phy_rxts)
static void decode_txts(struct dp83640_private *dp83640,
struct phy_txts *phy_txts)
static void decode_status_frame(struct dp83640_private *dp83640,
struct sk_buff *skb)
static int match(struct sk_buff *skb, unsigned int type, struct rxts *rxts)
static void dp83640_free_clocks(void)
static void dp83640_clock_init(struct dp83640_clock *clock, struct mii_bus *bus)
static int choose_this_phy(struct dp83640_clock *clock,
struct phy_device *phydev)
static struct dp83640_clock *dp83640_clock_get(struct dp83640_clock *clock)
static struct dp83640_clock *dp83640_clock_get_bus(struct mii_bus *bus)
static void dp83640_clock_put(struct dp83640_clock *clock)
static int dp83640_probe(struct phy_device *phydev)
static void dp83640_remove(struct phy_device *phydev)
static int dp83640_hwtstamp(struct phy_device *phydev, struct ifreq *ifr)
static void rx_timestamp_work(struct work_struct *work)
static bool dp83640_rxtstamp(struct phy_device *phydev,
struct sk_buff *skb, int type)
static void dp83640_txtstamp(struct phy_device *phydev,
struct sk_buff *skb, int type)
static struct phy_driver dp83640_driver = ;
static int __init dp83640_init(void)
static void __exit dp83640_exit(void)
MODULE_DESCRIPTION("National Semiconductor DP83640 PHY driver");
MODULE_AUTHOR("Richard Cochran <richard.cochran@omicron.at>");
MODULE_LICENSE("GPL");
module_init(dp83640_init);
module_exit(dp83640_exit);
static struct mdio_device_id __maybe_unused dp83640_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, dp83640_tbl);
