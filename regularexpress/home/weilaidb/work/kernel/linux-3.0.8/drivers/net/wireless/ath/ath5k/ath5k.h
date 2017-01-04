#define _ATH5K_H
#define CHAN_DEBUG	0
#define PCI_DEVICE_ID_ATHEROS_AR5210 		0x0007
#define PCI_DEVICE_ID_ATHEROS_AR5311 		0x0011
#define PCI_DEVICE_ID_ATHEROS_AR5211 		0x0012
#define PCI_DEVICE_ID_ATHEROS_AR5212 		0x0013
#define PCI_DEVICE_ID_3COM_3CRDAG675 		0x0013
#define PCI_DEVICE_ID_3COM_2_3CRPAG175 		0x0013
#define PCI_DEVICE_ID_ATHEROS_AR5210_AP 	0x0207
#define PCI_DEVICE_ID_ATHEROS_AR5212_IBM	0x1014
#define PCI_DEVICE_ID_ATHEROS_AR5210_DEFAULT 	0x1107
#define PCI_DEVICE_ID_ATHEROS_AR5212_DEFAULT 	0x1113
#define PCI_DEVICE_ID_ATHEROS_AR5211_DEFAULT 	0x1112
#define PCI_DEVICE_ID_ATHEROS_AR5212_FPGA 	0xf013
#define PCI_DEVICE_ID_ATHEROS_AR5211_LEGACY 	0xff12
#define PCI_DEVICE_ID_ATHEROS_AR5211_FPGA11B 	0xf11b
#define PCI_DEVICE_ID_ATHEROS_AR5312_REV2 	0x0052
#define PCI_DEVICE_ID_ATHEROS_AR5312_REV7 	0x0057
#define PCI_DEVICE_ID_ATHEROS_AR5312_REV8 	0x0058
#define PCI_DEVICE_ID_ATHEROS_AR5212_0014 	0x0014
#define PCI_DEVICE_ID_ATHEROS_AR5212_0015 	0x0015
#define PCI_DEVICE_ID_ATHEROS_AR5212_0016 	0x0016
#define PCI_DEVICE_ID_ATHEROS_AR5212_0017 	0x0017
#define PCI_DEVICE_ID_ATHEROS_AR5212_0018 	0x0018
#define PCI_DEVICE_ID_ATHEROS_AR5212_0019 	0x0019
#define PCI_DEVICE_ID_ATHEROS_AR2413 		0x001a
#define PCI_DEVICE_ID_ATHEROS_AR5413 		0x001b
#define PCI_DEVICE_ID_ATHEROS_AR5424 		0x001c
#define PCI_DEVICE_ID_ATHEROS_AR5416 		0x0023
#define PCI_DEVICE_ID_ATHEROS_AR5418 		0x0024
#define ATH5K_PRINTF(fmt, ...)   printk("%s: " fmt, __func__, ##__VA_ARGS__)
#define ATH5K_PRINTK(_sc, _level, _fmt, ...) \
printk(_level "ath5k %s: " _fmt, \
((_sc) && (_sc)->hw) ? wiphy_name((_sc)->hw->wiphy) : "", \
##__VA_ARGS__)
#define ATH5K_PRINTK_LIMIT(_sc, _level, _fmt, ...) do  while (0)
#define ATH5K_INFO(_sc, _fmt, ...) \
ATH5K_PRINTK(_sc, KERN_INFO, _fmt, ##__VA_ARGS__)
#define ATH5K_WARN(_sc, _fmt, ...) \
ATH5K_PRINTK_LIMIT(_sc, KERN_WARNING, _fmt, ##__VA_ARGS__)
#define ATH5K_ERR(_sc, _fmt, ...) \
ATH5K_PRINTK_LIMIT(_sc, KERN_ERR, _fmt, ##__VA_ARGS__)
#define AR5K_REG_SM(_val, _flags)					\
(((_val) << _flags##_S) & (_flags))
#define AR5K_REG_MS(_val, _flags)					\
(((_val) & (_flags)) >> _flags##_S)
#define AR5K_REG_WRITE_BITS(ah, _reg, _flags, _val)			\
ath5k_hw_reg_write(ah, (ath5k_hw_reg_read(ah, _reg) & ~(_flags)) | \
(((_val) << _flags##_S) & (_flags)), _reg)
#define AR5K_REG_MASKED_BITS(ah, _reg, _flags, _mask)			\
ath5k_hw_reg_write(ah, (ath5k_hw_reg_read(ah, _reg) &		\
(_mask)) | (_flags), _reg)
#define AR5K_REG_ENABLE_BITS(ah, _reg, _flags)				\
ath5k_hw_reg_write(ah, ath5k_hw_reg_read(ah, _reg) | (_flags), _reg)
#define AR5K_REG_DISABLE_BITS(ah, _reg, _flags)			\
ath5k_hw_reg_write(ah, ath5k_hw_reg_read(ah, _reg) & ~(_flags), _reg)
#define AR5K_PHY_READ(ah, _reg)					\
ath5k_hw_reg_read(ah, (ah)->ah_phy + ((_reg) << 2))
#define AR5K_PHY_WRITE(ah, _reg, _val)					\
ath5k_hw_reg_write(ah, _val, (ah)->ah_phy + ((_reg) << 2))
#define AR5K_REG_READ_Q(ah, _reg, _queue)				\
(ath5k_hw_reg_read(ah, _reg) & (1 << _queue))			\
#define AR5K_REG_WRITE_Q(ah, _reg, _queue)				\
ath5k_hw_reg_write(ah, (1 << _queue), _reg)
#define AR5K_Q_ENABLE_BITS(_reg, _queue) do  while (0)
#define AR5K_Q_DISABLE_BITS(_reg, _queue) do  while (0)
#define AR5K_REG_WAIT(_i) do  while (0)
#define AR5K_TUNE_DMA_BEACON_RESP		2
#define AR5K_TUNE_SW_BEACON_RESP		10
#define AR5K_TUNE_ADDITIONAL_SWBA_BACKOFF	0
#define AR5K_TUNE_RADAR_ALERT			false
#define AR5K_TUNE_MIN_TX_FIFO_THRES		1
#define AR5K_TUNE_MAX_TX_FIFO_THRES	((IEEE80211_MAX_FRAME_LEN / 64) + 1)
#define AR5K_TUNE_REGISTER_TIMEOUT		20000
#define AR5K_TUNE_RSSI_THRES			129
#define AR5K_TUNE_BMISS_THRES			7
#define AR5K_TUNE_REGISTER_DWELL_TIME		20000
#define AR5K_TUNE_BEACON_INTERVAL		100
#define AR5K_TUNE_AIFS				2
#define AR5K_TUNE_AIFS_11B			2
#define AR5K_TUNE_AIFS_XR			0
#define AR5K_TUNE_CWMIN				15
#define AR5K_TUNE_CWMIN_11B			31
#define AR5K_TUNE_CWMIN_XR			3
#define AR5K_TUNE_CWMAX				1023
#define AR5K_TUNE_CWMAX_11B			1023
#define AR5K_TUNE_CWMAX_XR			7
#define AR5K_TUNE_NOISE_FLOOR			-72
#define AR5K_TUNE_CCA_MAX_GOOD_VALUE		-95
#define AR5K_TUNE_MAX_TXPOWER			63
#define AR5K_TUNE_DEFAULT_TXPOWER		25
#define AR5K_TUNE_TPC_TXPOWER			false
#define ATH5K_TUNE_CALIBRATION_INTERVAL_FULL    10000
#define ATH5K_TUNE_CALIBRATION_INTERVAL_ANI	1000
#define ATH5K_TUNE_CALIBRATION_INTERVAL_NF	60000
#define ATH5K_TX_COMPLETE_POLL_INT		3000
#define AR5K_INIT_CARR_SENSE_EN			1
#if defined(__BIG_ENDIAN)
#define AR5K_INIT_CFG	(		\
AR5K_CFG_SWTD | AR5K_CFG_SWRD	\
)
#define AR5K_INIT_CFG	0x00000000
#define	AR5K_INIT_CYCRSSI_THR1			2
#define AR5K_INIT_RETRY_SHORT			7
#define AR5K_INIT_RETRY_LONG			4
#define AR5K_INIT_SLOT_TIME_TURBO		6
#define AR5K_INIT_SLOT_TIME_DEFAULT		9
#define	AR5K_INIT_SLOT_TIME_HALF_RATE		13
#define	AR5K_INIT_SLOT_TIME_QUARTER_RATE	21
#define	AR5K_INIT_SLOT_TIME_B			20
#define AR5K_SLOT_TIME_MAX			0xffff
#define	AR5K_INIT_SIFS_TURBO			6
#define	AR5K_INIT_SIFS_DEFAULT_BG		10
#define	AR5K_INIT_SIFS_DEFAULT_A		16
#define	AR5K_INIT_SIFS_HALF_RATE		32
#define AR5K_INIT_SIFS_QUARTER_RATE		64
#define	AR5K_INIT_OFDM_PREAMPLE_TIME		20
#define	AR5K_INIT_OFDM_PREAMBLE_TIME_MIN	14
#define	AR5K_INIT_OFDM_SYMBOL_TIME		4
#define	AR5K_INIT_OFDM_PLCP_BITS		22
#define AR5K_INIT_RX_LAT_MAX			63
#define	AR5K_INIT_TX_LAT_A			54
#define	AR5K_INIT_TX_LAT_BG			384
#define	AR5K_INIT_TX_LAT_MIN			32
#define AR5K_INIT_TX_LATENCY_5210		54
#define	AR5K_INIT_RX_LATENCY_5210		29
#define AR5K_INIT_TXF2TXD_START_DEFAULT		14
#define AR5K_INIT_TXF2TXD_START_DELAY_10MHZ	12
#define AR5K_INIT_TXF2TXD_START_DELAY_5MHZ	13
#define	AR5K_SWITCH_SETTLING			5760
#define	AR5K_SWITCH_SETTLING_TURBO		7168
#define	AR5K_AGC_SETTLING			28
#define	AR5K_AGC_SETTLING_TURBO			37
enum ath5k_version ;
enum ath5k_radio ;
enum ath5k_srev_type ;
struct ath5k_srev_name ;
#define AR5K_SREV_UNKNOWN	0xffff
#define AR5K_SREV_AR5210	0x00
#define AR5K_SREV_AR5311	0x10
#define AR5K_SREV_AR5311A	0x20
#define AR5K_SREV_AR5311B	0x30
#define AR5K_SREV_AR5211	0x40
#define AR5K_SREV_AR5212	0x50
#define AR5K_SREV_AR5312_R2	0x52
#define AR5K_SREV_AR5212_V4	0x54
#define AR5K_SREV_AR5213	0x55
#define AR5K_SREV_AR5312_R7	0x57
#define AR5K_SREV_AR2313_R8	0x58
#define AR5K_SREV_AR5213A	0x59
#define AR5K_SREV_AR2413	0x78
#define AR5K_SREV_AR2414	0x70
#define AR5K_SREV_AR2315_R6 0x86
#define AR5K_SREV_AR2315_R7 0x87
#define AR5K_SREV_AR5424	0x90
#define AR5K_SREV_AR2317_R1 0x90
#define AR5K_SREV_AR2317_R2 0x91
#define AR5K_SREV_AR5413	0xa4
#define AR5K_SREV_AR5414	0xa0
#define AR5K_SREV_AR2415	0xb0
#define AR5K_SREV_AR5416	0xc0
#define AR5K_SREV_AR5418	0xca
#define AR5K_SREV_AR2425	0xe0
#define AR5K_SREV_AR2417	0xf0
#define AR5K_SREV_RAD_5110	0x00
#define AR5K_SREV_RAD_5111	0x10
#define AR5K_SREV_RAD_5111A	0x15
#define AR5K_SREV_RAD_2111	0x20
#define AR5K_SREV_RAD_5112	0x30
#define AR5K_SREV_RAD_5112A	0x35
#define	AR5K_SREV_RAD_5112B	0x36
#define AR5K_SREV_RAD_2112	0x40
#define AR5K_SREV_RAD_2112A	0x45
#define	AR5K_SREV_RAD_2112B	0x46
#define AR5K_SREV_RAD_2413	0x50
#define AR5K_SREV_RAD_5413	0x60
#define AR5K_SREV_RAD_2316	0x70
#define AR5K_SREV_RAD_2317	0x80
#define AR5K_SREV_RAD_5424	0xa0
#define AR5K_SREV_RAD_2425	0xa2
#define AR5K_SREV_RAD_5133	0xc0
#define AR5K_SREV_PHY_5211	0x30
#define AR5K_SREV_PHY_5212	0x41
#define	AR5K_SREV_PHY_5212A	0x42
#define AR5K_SREV_PHY_5212B	0x43
#define AR5K_SREV_PHY_2413	0x45
#define AR5K_SREV_PHY_5413	0x61
#define AR5K_SREV_PHY_2425	0x70
#define MODULATION_XR 		0x00000200
#define MODULATION_TURBO	0x00000080
enum ath5k_driver_mode ;
enum ath5k_ant_mode ;
enum ath5k_bw_mode ;
struct ath5k_tx_status ;
#define AR5K_TXSTAT_ALTRATE	0x80
#define AR5K_TXERR_XRETRY	0x01
#define AR5K_TXERR_FILT		0x02
#define AR5K_TXERR_FIFO		0x04
enum ath5k_tx_queue ;
#define	AR5K_NUM_TX_QUEUES		10
#define	AR5K_NUM_TX_QUEUES_NOQCU	2
enum ath5k_tx_queue_subtype ;
enum ath5k_tx_queue_id ;
#define AR5K_TXQ_FLAG_TXOKINT_ENABLE		0x0001
#define AR5K_TXQ_FLAG_TXERRINT_ENABLE		0x0002
#define AR5K_TXQ_FLAG_TXEOLINT_ENABLE		0x0004
#define AR5K_TXQ_FLAG_TXDESCINT_ENABLE		0x0008
#define AR5K_TXQ_FLAG_TXURNINT_ENABLE		0x0010
#define AR5K_TXQ_FLAG_CBRORNINT_ENABLE		0x0020
#define AR5K_TXQ_FLAG_CBRURNINT_ENABLE		0x0040
#define AR5K_TXQ_FLAG_QTRIGINT_ENABLE		0x0080
#define AR5K_TXQ_FLAG_TXNOFRMINT_ENABLE		0x0100
#define AR5K_TXQ_FLAG_BACKOFF_DISABLE		0x0200
#define AR5K_TXQ_FLAG_RDYTIME_EXP_POLICY_ENABLE	0x0300
#define AR5K_TXQ_FLAG_FRAG_BURST_BACKOFF_ENABLE	0x0800
#define AR5K_TXQ_FLAG_POST_FR_BKOFF_DIS		0x1000
#define AR5K_TXQ_FLAG_COMPRESSION_ENABLE	0x2000
struct ath5k_txq_info ;
enum ath5k_pkt_type ;
#define AR5K_TXPOWER_OFDM(_r, _v)	(			\
((0 & 1) << ((_v) + 6)) |				\
(((ah->ah_txpower.txp_rates_power_table[(_r)]) & 0x3f) << (_v))	\
)
#define AR5K_TXPOWER_CCK(_r, _v)	(			\
(ah->ah_txpower.txp_rates_power_table[(_r)] & 0x3f) << (_v)	\
)
enum ath5k_dmasize ;
struct ath5k_rx_status ;
#define AR5K_RXERR_CRC		0x01
#define AR5K_RXERR_PHY		0x02
#define AR5K_RXERR_FIFO		0x04
#define AR5K_RXERR_DECRYPT	0x08
#define AR5K_RXERR_MIC		0x10
#define AR5K_RXKEYIX_INVALID	((u8) - 1)
#define AR5K_TXKEYIX_INVALID	((u32) - 1)
#define AR5K_BEACON_PERIOD	0x0000ffff
#define AR5K_BEACON_ENA		0x00800000
#define AR5K_BEACON_RESET_TSF	0x01000000
#define TSF_TO_TU(_tsf) (u32)((_tsf) >> 10)
enum ath5k_rfgain ;
struct ath5k_gain ;
#define AR5K_SLOT_TIME_9	396
#define AR5K_SLOT_TIME_20	880
#define AR5K_SLOT_TIME_MAX	0xffff
#define	CHANNEL_CW_INT	0x0008
#define	CHANNEL_CCK	0x0020
#define	CHANNEL_OFDM	0x0040
#define	CHANNEL_2GHZ	0x0080
#define	CHANNEL_5GHZ	0x0100
#define	CHANNEL_PASSIVE	0x0200
#define	CHANNEL_DYN	0x0400
#define	CHANNEL_XR	0x0800
#define	CHANNEL_A	(CHANNEL_5GHZ|CHANNEL_OFDM)
#define	CHANNEL_B	(CHANNEL_2GHZ|CHANNEL_CCK)
#define	CHANNEL_G	(CHANNEL_2GHZ|CHANNEL_OFDM)
#define	CHANNEL_X	(CHANNEL_5GHZ|CHANNEL_OFDM|CHANNEL_XR)
#define	CHANNEL_ALL	(CHANNEL_OFDM|CHANNEL_CCK|CHANNEL_2GHZ|CHANNEL_5GHZ)
#define CHANNEL_MODES		CHANNEL_ALL
#define IS_CHAN_XR(_c)	((_c->hw_value & CHANNEL_XR) != 0)
#define IS_CHAN_B(_c)	((_c->hw_value & CHANNEL_B) != 0)
struct ath5k_athchan_2ghz ;
#define AR5K_MAX_RATES 32
#define ATH5K_RATE_CODE_1M	0x1B
#define ATH5K_RATE_CODE_2M	0x1A
#define ATH5K_RATE_CODE_5_5M	0x19
#define ATH5K_RATE_CODE_11M	0x18
#define ATH5K_RATE_CODE_6M	0x0B
#define ATH5K_RATE_CODE_9M	0x0F
#define ATH5K_RATE_CODE_12M	0x0A
#define ATH5K_RATE_CODE_18M	0x0E
#define ATH5K_RATE_CODE_24M	0x09
#define ATH5K_RATE_CODE_36M	0x0D
#define ATH5K_RATE_CODE_48M	0x08
#define ATH5K_RATE_CODE_54M	0x0C
#define ATH5K_RATE_CODE_XR_500K	0x07
#define ATH5K_RATE_CODE_XR_1M	0x02
#define ATH5K_RATE_CODE_XR_2M	0x06
#define ATH5K_RATE_CODE_XR_3M	0x01
#define AR5K_SET_SHORT_PREAMBLE 0x04
#define AR5K_KEYCACHE_SIZE	8
#define	AR5K_RSSI_EP_MULTIPLIER	(1<<7)
#define AR5K_ASSERT_ENTRY(_e, _s) do  while (0)
enum ath5k_int ;
enum ath5k_calibration_mask ;
enum ath5k_power_mode ;
#define AR5K_LED_INIT	0
#define AR5K_LED_SCAN	1
#define AR5K_LED_AUTH	2
#define AR5K_LED_ASSOC	3
#define AR5K_LED_RUN	4
#define AR5K_SOFTLED_PIN	0
#define AR5K_SOFTLED_ON		0
#define AR5K_SOFTLED_OFF	1
enum ath5k_capability_type ;
struct ath5k_capabilities ;
#define ATH5K_NF_CAL_HIST_MAX	8
struct ath5k_nfcal_hist
;
struct ath5k_avg_val ;
#define AR5K_MAX_GPIO		10
#define AR5K_MAX_RF_BANKS	8
struct ath5k_hw ;
struct ath_bus_ops ;
extern const struct ieee80211_ops ath5k_hw_ops;
int ath5k_init_softc(struct ath5k_softc *sc, const struct ath_bus_ops *bus_ops);
void ath5k_deinit_softc(struct ath5k_softc *sc);
int ath5k_hw_init(struct ath5k_softc *sc);
void ath5k_hw_deinit(struct ath5k_hw *ah);
int ath5k_sysfs_register(struct ath5k_softc *sc);
void ath5k_sysfs_unregister(struct ath5k_softc *sc);
struct ath5k_buf;
struct ath5k_txq;
void set_beacon_filter(struct ieee80211_hw *hw, bool enable);
bool ath_any_vif_assoc(struct ath5k_softc *sc);
void ath5k_tx_queue(struct ieee80211_hw *hw, struct sk_buff *skb,
struct ath5k_txq *txq);
int ath5k_init_hw(struct ath5k_softc *sc);
int ath5k_stop_hw(struct ath5k_softc *sc);
void ath5k_mode_setup(struct ath5k_softc *sc, struct ieee80211_vif *vif);
void ath5k_update_bssid_mask_and_opmode(struct ath5k_softc *sc,
struct ieee80211_vif *vif);
int ath5k_chan_set(struct ath5k_softc *sc, struct ieee80211_channel *chan);
void ath5k_beacon_update_timers(struct ath5k_softc *sc, u64 bc_tsf);
int ath5k_beacon_update(struct ieee80211_hw *hw, struct ieee80211_vif *vif);
void ath5k_beacon_config(struct ath5k_softc *sc);
void ath5k_txbuf_free_skb(struct ath5k_softc *sc, struct ath5k_buf *bf);
void ath5k_rxbuf_free_skb(struct ath5k_softc *sc, struct ath5k_buf *bf);
const char *ath5k_chip_name(enum ath5k_srev_type type, u_int16_t val);
int ath5k_hw_read_srev(struct ath5k_hw *ah);
int ath5k_init_leds(struct ath5k_softc *sc);
void ath5k_led_enable(struct ath5k_softc *sc);
void ath5k_led_off(struct ath5k_softc *sc);
void ath5k_unregister_leds(struct ath5k_softc *sc);
int ath5k_hw_nic_wakeup(struct ath5k_hw *ah, int flags, bool initial);
int ath5k_hw_on_hold(struct ath5k_hw *ah);
int ath5k_hw_reset(struct ath5k_hw *ah, enum nl80211_iftype op_mode,
struct ieee80211_channel *channel, bool fast, bool skip_pcu);
int ath5k_hw_register_timeout(struct ath5k_hw *ah, u32 reg, u32 flag, u32 val,
bool is_set);
unsigned int ath5k_hw_htoclock(struct ath5k_hw *ah, unsigned int usec);
unsigned int ath5k_hw_clocktoh(struct ath5k_hw *ah, unsigned int clock);
void ath5k_hw_set_clockrate(struct ath5k_hw *ah);
void ath5k_hw_start_rx_dma(struct ath5k_hw *ah);
u32 ath5k_hw_get_rxdp(struct ath5k_hw *ah);
int ath5k_hw_set_rxdp(struct ath5k_hw *ah, u32 phys_addr);
int ath5k_hw_start_tx_dma(struct ath5k_hw *ah, unsigned int queue);
int ath5k_hw_stop_beacon_queue(struct ath5k_hw *ah, unsigned int queue);
u32 ath5k_hw_get_txdp(struct ath5k_hw *ah, unsigned int queue);
int ath5k_hw_set_txdp(struct ath5k_hw *ah, unsigned int queue,
u32 phys_addr);
int ath5k_hw_update_tx_triglevel(struct ath5k_hw *ah, bool increase);
bool ath5k_hw_is_intr_pending(struct ath5k_hw *ah);
int ath5k_hw_get_isr(struct ath5k_hw *ah, enum ath5k_int *interrupt_mask);
enum ath5k_int ath5k_hw_set_imr(struct ath5k_hw *ah, enum ath5k_int new_mask);
void ath5k_hw_update_mib_counters(struct ath5k_hw *ah);
void ath5k_hw_dma_init(struct ath5k_hw *ah);
int ath5k_hw_dma_stop(struct ath5k_hw *ah);
int ath5k_eeprom_init(struct ath5k_hw *ah);
void ath5k_eeprom_detach(struct ath5k_hw *ah);
int ath5k_hw_get_frame_duration(struct ath5k_hw *ah,
int len, struct ieee80211_rate *rate, bool shortpre);
unsigned int ath5k_hw_get_default_slottime(struct ath5k_hw *ah);
unsigned int ath5k_hw_get_default_sifs(struct ath5k_hw *ah);
extern int ath5k_hw_set_opmode(struct ath5k_hw *ah, enum nl80211_iftype opmode);
void ath5k_hw_set_coverage_class(struct ath5k_hw *ah, u8 coverage_class);
int ath5k_hw_set_lladdr(struct ath5k_hw *ah, const u8 *mac);
void ath5k_hw_set_bssid(struct ath5k_hw *ah);
void ath5k_hw_set_bssid_mask(struct ath5k_hw *ah, const u8 *mask);
void ath5k_hw_set_mcast_filter(struct ath5k_hw *ah, u32 filter0, u32 filter1);
u32 ath5k_hw_get_rx_filter(struct ath5k_hw *ah);
void ath5k_hw_set_rx_filter(struct ath5k_hw *ah, u32 filter);
void ath5k_hw_start_rx_pcu(struct ath5k_hw *ah);
void ath5k_hw_stop_rx_pcu(struct ath5k_hw *ah);
u64 ath5k_hw_get_tsf64(struct ath5k_hw *ah);
void ath5k_hw_set_tsf64(struct ath5k_hw *ah, u64 tsf64);
void ath5k_hw_reset_tsf(struct ath5k_hw *ah);
void ath5k_hw_init_beacon(struct ath5k_hw *ah, u32 next_beacon, u32 interval);
bool ath5k_hw_check_beacon_timers(struct ath5k_hw *ah, int intval);
void ath5k_hw_pcu_init(struct ath5k_hw *ah, enum nl80211_iftype op_mode,
u8 mode);
int ath5k_hw_get_tx_queueprops(struct ath5k_hw *ah, int queue,
struct ath5k_txq_info *queue_info);
int ath5k_hw_set_tx_queueprops(struct ath5k_hw *ah, int queue,
const struct ath5k_txq_info *queue_info);
int ath5k_hw_setup_tx_queue(struct ath5k_hw *ah,
enum ath5k_tx_queue queue_type,
struct ath5k_txq_info *queue_info);
void ath5k_hw_set_tx_retry_limits(struct ath5k_hw *ah,
unsigned int queue);
u32 ath5k_hw_num_tx_pending(struct ath5k_hw *ah, unsigned int queue);
void ath5k_hw_release_tx_queue(struct ath5k_hw *ah, unsigned int queue);
int ath5k_hw_reset_tx_queue(struct ath5k_hw *ah, unsigned int queue);
int ath5k_hw_set_ifs_intervals(struct ath5k_hw *ah, unsigned int slot_time);
int ath5k_hw_init_queues(struct ath5k_hw *ah);
int ath5k_hw_init_desc_functions(struct ath5k_hw *ah);
int ath5k_hw_setup_rx_desc(struct ath5k_hw *ah, struct ath5k_desc *desc,
u32 size, unsigned int flags);
int ath5k_hw_setup_mrr_tx_desc(struct ath5k_hw *ah, struct ath5k_desc *desc,
unsigned int tx_rate1, u_int tx_tries1, u_int tx_rate2,
u_int tx_tries2, unsigned int tx_rate3, u_int tx_tries3);
void ath5k_hw_set_ledstate(struct ath5k_hw *ah, unsigned int state);
int ath5k_hw_set_gpio_input(struct ath5k_hw *ah, u32 gpio);
int ath5k_hw_set_gpio_output(struct ath5k_hw *ah, u32 gpio);
u32 ath5k_hw_get_gpio(struct ath5k_hw *ah, u32 gpio);
int ath5k_hw_set_gpio(struct ath5k_hw *ah, u32 gpio, u32 val);
void ath5k_hw_set_gpio_intr(struct ath5k_hw *ah, unsigned int gpio,
u32 interrupt_level);
void ath5k_rfkill_hw_start(struct ath5k_hw *ah);
void ath5k_rfkill_hw_stop(struct ath5k_hw *ah);
int ath5k_hw_set_capabilities(struct ath5k_hw *ah);
int ath5k_hw_get_capability(struct ath5k_hw *ah,
enum ath5k_capability_type cap_type, u32 capability,
u32 *result);
int ath5k_hw_enable_pspoll(struct ath5k_hw *ah, u8 *bssid, u16 assoc_id);
int ath5k_hw_disable_pspoll(struct ath5k_hw *ah);
int ath5k_hw_write_initvals(struct ath5k_hw *ah, u8 mode, bool change_channel);
u16 ath5k_hw_radio_revision(struct ath5k_hw *ah, unsigned int chan);
int ath5k_hw_phy_disable(struct ath5k_hw *ah);
enum ath5k_rfgain ath5k_hw_gainf_calibrate(struct ath5k_hw *ah);
int ath5k_hw_rfgain_opt_init(struct ath5k_hw *ah);
bool ath5k_channel_ok(struct ath5k_hw *ah, u16 freq, unsigned int flags);
void ath5k_hw_init_nfcal_hist(struct ath5k_hw *ah);
int ath5k_hw_phy_calibrate(struct ath5k_hw *ah,
struct ieee80211_channel *channel);
void ath5k_hw_update_noise_floor(struct ath5k_hw *ah);
bool ath5k_hw_chan_has_spur_noise(struct ath5k_hw *ah,
struct ieee80211_channel *channel);
void ath5k_hw_set_antenna_mode(struct ath5k_hw *ah, u8 ant_mode);
void ath5k_hw_set_antenna_switch(struct ath5k_hw *ah, u8 ee_mode);
int ath5k_hw_set_txpower_limit(struct ath5k_hw *ah, u8 txpower);
int ath5k_hw_phy_init(struct ath5k_hw *ah, struct ieee80211_channel *channel,
u8 mode, bool fast);
static inline struct ath_common *ath5k_hw_common(struct ath5k_hw *ah)
static inline struct ath_regulatory *ath5k_hw_regulatory(struct ath5k_hw *ah)
#define AR5K_AR2315_PCI_BASE	((void __iomem *)0xb0100000)
static inline void __iomem *ath5k_ahb_reg(struct ath5k_hw *ah, u16 reg)
static inline u32 ath5k_hw_reg_read(struct ath5k_hw *ah, u16 reg)
static inline void ath5k_hw_reg_write(struct ath5k_hw *ah, u32 val, u16 reg)
static inline u32 ath5k_hw_reg_read(struct ath5k_hw *ah, u16 reg)
static inline void ath5k_hw_reg_write(struct ath5k_hw *ah, u32 val, u16 reg)
static inline enum ath_bus_type ath5k_get_bus_type(struct ath5k_hw *ah)
static inline void ath5k_read_cachesize(struct ath_common *common, int *csz)
static inline bool ath5k_hw_nvram_read(struct ath5k_hw *ah, u32 off, u16 *data)
static inline u32 ath5k_hw_bitswap(u32 val, unsigned int bits)
