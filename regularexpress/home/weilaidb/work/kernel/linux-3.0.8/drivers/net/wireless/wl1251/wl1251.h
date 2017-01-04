#define __WL1251_H__
#define DRIVER_NAME "wl1251"
#define DRIVER_PREFIX DRIVER_NAME ": "
enum ;
#define DEBUG_LEVEL (DEBUG_NONE)
#define DEBUG_DUMP_LIMIT 1024
#define wl1251_error(fmt, arg...) \
printk(KERN_ERR DRIVER_PREFIX "ERROR " fmt "\n", ##arg)
#define wl1251_warning(fmt, arg...) \
printk(KERN_WARNING DRIVER_PREFIX "WARNING " fmt "\n", ##arg)
#define wl1251_notice(fmt, arg...) \
printk(KERN_INFO DRIVER_PREFIX fmt "\n", ##arg)
#define wl1251_info(fmt, arg...) \
printk(KERN_DEBUG DRIVER_PREFIX fmt "\n", ##arg)
#define wl1251_debug(level, fmt, arg...) \
do  while (0)
#define wl1251_dump(level, prefix, buf, len)	\
do  while (0)
#define wl1251_dump_ascii(level, prefix, buf, len)	\
do  while (0)
#define WL1251_DEFAULT_RX_CONFIG (CFG_UNI_FILTER_EN |	\
CFG_BSSID_FILTER_EN)
#define WL1251_DEFAULT_RX_FILTER (CFG_RX_PRSP_EN |  \
CFG_RX_MGMT_EN |  \
CFG_RX_DATA_EN |  \
CFG_RX_CTL_EN |   \
CFG_RX_BCN_EN |   \
CFG_RX_AUTH_EN |  \
CFG_RX_ASSOC_EN)
#define WL1251_BUSY_WORD_LEN 8
struct boot_attr ;
enum wl1251_state ;
enum wl1251_partition_type ;
enum wl1251_station_mode ;
struct wl1251_partition ;
struct wl1251_partition_set ;
struct wl1251;
struct wl1251_stats ;
struct wl1251_debugfs ;
struct wl1251_if_operations ;
struct wl1251 ;
int wl1251_plt_start(struct wl1251 *wl);
int wl1251_plt_stop(struct wl1251 *wl);
struct ieee80211_hw *wl1251_alloc_hw(void);
int wl1251_free_hw(struct wl1251 *wl);
int wl1251_init_ieee80211(struct wl1251 *wl);
void wl1251_enable_interrupts(struct wl1251 *wl);
void wl1251_disable_interrupts(struct wl1251 *wl);
#define DEFAULT_HW_GEN_MODULATION_TYPE    CCK_LONG
#define DEFAULT_HW_GEN_TX_RATE          RATE_2MBPS
#define JOIN_TIMEOUT 5000
#define WL1251_DEFAULT_POWER_LEVEL 20
#define WL1251_TX_QUEUE_LOW_WATERMARK  10
#define WL1251_TX_QUEUE_HIGH_WATERMARK 25
#define WL1251_DEFAULT_BEACON_INT 100
#define WL1251_DEFAULT_DTIM_PERIOD 1
#define WL1251_DEFAULT_CHANNEL 0
#define WL1251_DEFAULT_BET_CONSECUTIVE 10
#define CHIP_ID_1251_PG10	           (0x7010101)
#define CHIP_ID_1251_PG11	           (0x7020101)
#define CHIP_ID_1251_PG12	           (0x7030101)
#define CHIP_ID_1271_PG10	           (0x4030101)
#define CHIP_ID_1271_PG20	           (0x4030111)
#define WL1251_FW_NAME "wl1251-fw.bin"
#define WL1251_NVS_NAME "wl1251-nvs.bin"
#define WL1251_POWER_ON_SLEEP 10
#define WL1251_PART_DOWN_MEM_START	0x0
#define WL1251_PART_DOWN_MEM_SIZE	0x16800
#define WL1251_PART_DOWN_REG_START	REGISTERS_BASE
#define WL1251_PART_DOWN_REG_SIZE	REGISTERS_DOWN_SIZE
#define WL1251_PART_WORK_MEM_START	0x28000
#define WL1251_PART_WORK_MEM_SIZE	0x14000
#define WL1251_PART_WORK_REG_START	REGISTERS_BASE
#define WL1251_PART_WORK_REG_SIZE	REGISTERS_WORK_SIZE
#define WL1251_DEFAULT_LOW_RSSI_WEIGHT          10
#define WL1251_DEFAULT_LOW_RSSI_DEPTH           10
