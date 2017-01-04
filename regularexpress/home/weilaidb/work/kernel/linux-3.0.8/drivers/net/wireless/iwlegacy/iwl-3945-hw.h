#define __iwl_3945_hw__
#define IWL39_RSSI_OFFSET	95
#define EEPROM_SKU_CAP_OP_MODE_MRC                      (1 << 7)
struct iwl3945_eeprom_txpower_sample  __packed;
struct iwl3945_eeprom_txpower_group  __packed;
struct iwl3945_eeprom_temperature_corr  __packed;
struct iwl3945_eeprom  __packed;
#define IWL3945_EEPROM_IMG_SIZE 1024
#define PCI_CFG_REV_ID_BIT_BASIC_SKU                (0x40)
#define PCI_CFG_REV_ID_BIT_RTP                      (0x80)
#define IWL39_NUM_QUEUES        5
#define IWL39_CMD_QUEUE_NUM	4
#define IWL_DEFAULT_TX_RETRY  15
#define RFD_SIZE                              4
#define NUM_TFD_CHUNKS                        4
#define RX_QUEUE_SIZE                         256
#define RX_QUEUE_MASK                         255
#define RX_QUEUE_SIZE_LOG                     8
#define U32_PAD(n)		((4-(n))&0x3)
#define TFD_CTL_COUNT_SET(n)       (n << 24)
#define TFD_CTL_COUNT_GET(ctl)     ((ctl >> 24) & 7)
#define TFD_CTL_PAD_SET(n)         (n << 28)
#define TFD_CTL_PAD_GET(ctl)       (ctl >> 28)
#define IWL39_RTC_INST_LOWER_BOUND		(0x000000)
#define IWL39_RTC_INST_UPPER_BOUND		(0x014000)
#define IWL39_RTC_DATA_LOWER_BOUND		(0x800000)
#define IWL39_RTC_DATA_UPPER_BOUND		(0x808000)
#define IWL39_RTC_INST_SIZE (IWL39_RTC_INST_UPPER_BOUND - \
IWL39_RTC_INST_LOWER_BOUND)
#define IWL39_RTC_DATA_SIZE (IWL39_RTC_DATA_UPPER_BOUND - \
IWL39_RTC_DATA_LOWER_BOUND)
#define IWL39_MAX_INST_SIZE IWL39_RTC_INST_SIZE
#define IWL39_MAX_DATA_SIZE IWL39_RTC_DATA_SIZE
#define IWL39_MAX_BSM_SIZE IWL39_RTC_INST_SIZE
static inline int iwl3945_hw_valid_rtc_data_addr(u32 addr)
struct iwl3945_shared  __packed;
static inline u8 iwl3945_hw_get_rate(__le16 rate_n_flags)
static inline u16 iwl3945_hw_get_rate_n_flags(__le16 rate_n_flags)
static inline __le16 iwl3945_hw_set_rate_n_flags(u8 rate, u16 flags)
