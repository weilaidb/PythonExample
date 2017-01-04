#define __WL12XX_H__
#define DRIVER_NAME "wl1271"
#define DRIVER_PREFIX DRIVER_NAME ": "
#define WL12XX_BA_SUPPORT_FW_COST_VER2_START    50
#define WL12XX_BA_SUPPORT_FW_COST_VER2_END      60
enum ;
extern u32 wl12xx_debug_level;
#define DEBUG_DUMP_LIMIT 1024
#define wl1271_error(fmt, arg...) \
pr_err(DRIVER_PREFIX "ERROR " fmt "\n", ##arg)
#define wl1271_warning(fmt, arg...) \
pr_warning(DRIVER_PREFIX "WARNING " fmt "\n", ##arg)
#define wl1271_notice(fmt, arg...) \
pr_info(DRIVER_PREFIX fmt "\n", ##arg)
#define wl1271_info(fmt, arg...) \
pr_info(DRIVER_PREFIX fmt "\n", ##arg)
#define wl1271_debug(level, fmt, arg...) \
do  while (0)
#define wl1271_dump(level, prefix, buf, len)	\
do  while (0)
#define wl1271_dump_ascii(level, prefix, buf, len)	\
do  while (0)
#define WL1271_DEFAULT_STA_RX_CONFIG (CFG_UNI_FILTER_EN |	\
CFG_BSSID_FILTER_EN | \
CFG_MC_FILTER_EN)
#define WL1271_DEFAULT_STA_RX_FILTER (CFG_RX_RCTS_ACK | CFG_RX_PRSP_EN |  \
CFG_RX_MGMT_EN | CFG_RX_DATA_EN |   \
CFG_RX_CTL_EN | CFG_RX_BCN_EN |     \
CFG_RX_AUTH_EN | CFG_RX_ASSOC_EN)
#define WL1271_DEFAULT_AP_RX_CONFIG  0
#define WL1271_DEFAULT_AP_RX_FILTER  (CFG_RX_RCTS_ACK | CFG_RX_PREQ_EN | \
CFG_RX_MGMT_EN | CFG_RX_DATA_EN | \
CFG_RX_CTL_EN | CFG_RX_AUTH_EN | \
CFG_RX_ASSOC_EN)
#define WL1271_FW_NAME "ti-connectivity/wl1271-fw-2.bin"
#define WL128X_FW_NAME "ti-connectivity/wl128x-fw.bin"
#define WL127X_AP_FW_NAME "ti-connectivity/wl1271-fw-ap.bin"
#define WL128X_AP_FW_NAME "ti-connectivity/wl128x-fw-ap.bin"
#define WL12XX_NVS_NAME "ti-connectivity/wl1271-nvs.bin"
#define WL1271_TX_SECURITY_LO16(s) ((u16)((s) & 0xffff))
#define WL1271_TX_SECURITY_HI32(s) ((u32)(((s) >> 16) & 0xffffffff))
#define WL1271_CIPHER_SUITE_GEM 0x00147201
#define WL1271_BUSY_WORD_CNT 1
#define WL1271_BUSY_WORD_LEN (WL1271_BUSY_WORD_CNT * sizeof(u32))
#define WL1271_ELP_HW_STATE_ASLEEP 0
#define WL1271_ELP_HW_STATE_IRQ    1
#define WL1271_DEFAULT_BEACON_INT  100
#define WL1271_DEFAULT_DTIM_PERIOD 1
#define WL1271_AP_GLOBAL_HLID      0
#define WL1271_AP_BROADCAST_HLID   1
#define WL1271_AP_STA_HLID_START   2
#define WL1271_PS_STA_MAX_BLOCKS  (2 * 9)
#define WL1271_AP_BSS_INDEX        0
#define WL1271_AP_DEF_INACTIV_SEC  300
#define WL1271_AP_DEF_BEACON_EXP   20
#define ACX_TX_DESCRIPTORS         32
#define WL1271_AGGR_BUFFER_SIZE (4 * PAGE_SIZE)
enum wl1271_state ;
enum wl1271_partition_type ;
struct wl1271_partition ;
struct wl1271_partition_set ;
struct wl1271;
enum ;
#define FW_VER_CHIP_WL127X 6
#define FW_VER_CHIP_WL128X 7
#define FW_VER_IF_TYPE_STA 1
#define FW_VER_IF_TYPE_AP  2
#define FW_VER_MINOR_1_SPARE_STA_MIN 58
#define FW_VER_MINOR_1_SPARE_AP_MIN  47
struct wl1271_chip ;
struct wl1271_stats ;
#define NUM_TX_QUEUES              4
#define NUM_RX_PKT_DESC            8
#define AP_MAX_STATIONS            5
#define AP_MAX_LINKS               (AP_MAX_STATIONS + 2)
struct wl1271_fw_common_status  __packed;
struct wl1271_fw_ap_status  __packed;
struct wl1271_fw_sta_status  __packed;
struct wl1271_fw_full_status  __packed;
struct wl1271_rx_mem_pool_addr ;
#define WL1271_MAX_CHANNELS 64
struct wl1271_scan ;
struct wl1271_if_operations ;
#define MAX_NUM_KEYS 14
#define MAX_KEY_SIZE 32
struct wl1271_ap_key ;
enum wl12xx_flags ;
struct wl1271_link ;
struct wl1271 ;
struct wl1271_station ;
int wl1271_plt_start(struct wl1271 *wl);
int wl1271_plt_stop(struct wl1271 *wl);
#define JOIN_TIMEOUT 5000
#define SESSION_COUNTER_MAX 7
#define WL1271_DEFAULT_POWER_LEVEL 0
#define WL1271_TX_QUEUE_LOW_WATERMARK  10
#define WL1271_TX_QUEUE_HIGH_WATERMARK 25
#define WL1271_DEFERRED_QUEUE_LIMIT    64
#define WL1271_PRE_POWER_ON_SLEEP 20
#define WL1271_POWER_ON_SLEEP 200
#define HW_BG_RATES_MASK	0xffff
#define HW_HT_RATES_OFFSET	16
#define WL12XX_QUIRK_END_OF_TRANSACTION		BIT(0)
#define WL12XX_QUIRK_USE_2_SPARE_BLOCKS		BIT(1)
#define WL12XX_QUIRK_BLOCKSIZE_ALIGNMENT	BIT(2)
