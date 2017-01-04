#define HW_H
#define ATHEROS_VENDOR_ID	0x168c
#define AR5416_DEVID_PCI	0x0023
#define AR5416_DEVID_PCIE	0x0024
#define AR9160_DEVID_PCI	0x0027
#define AR9280_DEVID_PCI	0x0029
#define AR9280_DEVID_PCIE	0x002a
#define AR9285_DEVID_PCIE	0x002b
#define AR2427_DEVID_PCIE	0x002c
#define AR9287_DEVID_PCI	0x002d
#define AR9287_DEVID_PCIE	0x002e
#define AR9300_DEVID_PCIE	0x0030
#define AR9300_DEVID_AR9340	0x0031
#define AR9300_DEVID_AR9485_PCIE 0x0032
#define AR5416_AR9100_DEVID	0x000b
#define	AR_SUBVENDOR_ID_NOG	0x0e11
#define AR_SUBVENDOR_ID_NEW_A	0x7065
#define AR5416_MAGIC		0x19641014
#define AR9280_COEX2WIRE_SUBSYSID	0x309b
#define AT9285_COEX3WIRE_SA_SUBSYSID	0x30aa
#define AT9285_COEX3WIRE_DA_SUBSYSID	0x30ab
#define AR9300_NUM_BT_WEIGHTS   4
#define AR9300_NUM_WLAN_WEIGHTS 4
#define ATH_AMPDU_LIMIT_MAX        (64 * 1024 - 1)
#define	ATH_DEFAULT_NOISE_FLOOR -95
#define ATH9K_RSSI_BAD			-128
#define ATH9K_NUM_CHANNELS	38
#define REG_WRITE(_ah, _reg, _val) \
(_ah)->reg_ops.write((_ah), (_val), (_reg))
#define REG_READ(_ah, _reg) \
(_ah)->reg_ops.read((_ah), (_reg))
#define REG_READ_MULTI(_ah, _addr, _val, _cnt)		\
(_ah)->reg_ops.multi_read((_ah), (_addr), (_val), (_cnt))
#define REG_RMW(_ah, _reg, _set, _clr) \
(_ah)->reg_ops.rmw((_ah), (_reg), (_set), (_clr))
#define ENABLE_REGWRITE_BUFFER(_ah)					\
do  while (0)
#define REGWRITE_BUFFER_FLUSH(_ah)					\
do  while (0)
#define SM(_v, _f)  (((_v) << _f##_S) & _f)
#define MS(_v, _f)  (((_v) & _f) >> _f##_S)
#define REG_RMW_FIELD(_a, _r, _f, _v) \
REG_RMW(_a, _r, (((_v) << _f##_S) & _f), (_f))
#define REG_READ_FIELD(_a, _r, _f) \
(((REG_READ(_a, _r) & _f) >> _f##_S))
#define REG_SET_BIT(_a, _r, _f) \
REG_RMW(_a, _r, (_f), 0)
#define REG_CLR_BIT(_a, _r, _f) \
REG_RMW(_a, _r, 0, (_f))
#define DO_DELAY(x) do  while (0)
#define REG_WRITE_ARRAY(iniarray, column, regWr) \
ath9k_hw_write_array(ah, iniarray, column, &(regWr))
#define AR_GPIO_OUTPUT_MUX_AS_OUTPUT             0
#define AR_GPIO_OUTPUT_MUX_AS_PCIE_ATTENTION_LED 1
#define AR_GPIO_OUTPUT_MUX_AS_PCIE_POWER_LED     2
#define AR_GPIO_OUTPUT_MUX_AS_TX_FRAME           3
#define AR_GPIO_OUTPUT_MUX_AS_RX_CLEAR_EXTERNAL  4
#define AR_GPIO_OUTPUT_MUX_AS_MAC_NETWORK_LED    5
#define AR_GPIO_OUTPUT_MUX_AS_MAC_POWER_LED      6
#define AR_GPIOD_MASK               0x00001FFF
#define AR_GPIO_BIT(_gpio)          (1 << (_gpio))
#define BASE_ACTIVATE_DELAY         100
#define RTC_PLL_SETTLE_DELAY        (AR_SREV_9340(ah) ? 1000 : 100)
#define COEF_SCALE_S                24
#define HT40_CHANNEL_CENTER_SHIFT   10
#define ATH9K_ANTENNA0_CHAINMASK    0x1
#define ATH9K_ANTENNA1_CHAINMASK    0x2
#define ATH9K_NUM_DMA_DEBUG_REGS    8
#define ATH9K_NUM_QUEUES            10
#define MAX_RATE_POWER              63
#define AH_WAIT_TIMEOUT             100000
#define AH_TSF_WRITE_TIMEOUT        100
#define AH_TIME_QUANTUM             10
#define AR_KEYTABLE_SIZE            128
#define POWER_UP_TIME               10000
#define SPUR_RSSI_THRESH            40
#define CAB_TIMEOUT_VAL             10
#define BEACON_TIMEOUT_VAL          10
#define MIN_BEACON_TIMEOUT_VAL      1
#define SLEEP_SLOP                  3
#define INIT_CONFIG_STATUS          0x00000000
#define INIT_RSSI_THR               0x00000700
#define INIT_BCON_CNTRL_REG         0x00000000
#define TU_TO_USEC(_tu)             ((_tu) << 10)
#define ATH9K_HW_RX_HP_QDEPTH	16
#define ATH9K_HW_RX_LP_QDEPTH	128
#define PAPRD_GAIN_TABLE_ENTRIES    32
#define PAPRD_TABLE_SZ              24
enum ath_hw_txq_subtype ;
enum ath_ini_subsys ;
enum ath9k_hw_caps ;
struct ath9k_hw_capabilities ;
struct ath9k_ops_config ;
enum ath9k_int ;
#define CHANNEL_CW_INT    0x00002
#define CHANNEL_CCK       0x00020
#define CHANNEL_OFDM      0x00040
#define CHANNEL_2GHZ      0x00080
#define CHANNEL_5GHZ      0x00100
#define CHANNEL_PASSIVE   0x00200
#define CHANNEL_DYN       0x00400
#define CHANNEL_HALF      0x04000
#define CHANNEL_QUARTER   0x08000
#define CHANNEL_HT20      0x10000
#define CHANNEL_HT40PLUS  0x20000
#define CHANNEL_HT40MINUS 0x40000
#define CHANNEL_A           (CHANNEL_5GHZ|CHANNEL_OFDM)
#define CHANNEL_B           (CHANNEL_2GHZ|CHANNEL_CCK)
#define CHANNEL_G           (CHANNEL_2GHZ|CHANNEL_OFDM)
#define CHANNEL_G_HT20      (CHANNEL_2GHZ|CHANNEL_HT20)
#define CHANNEL_A_HT20      (CHANNEL_5GHZ|CHANNEL_HT20)
#define CHANNEL_G_HT40PLUS  (CHANNEL_2GHZ|CHANNEL_HT40PLUS)
#define CHANNEL_G_HT40MINUS (CHANNEL_2GHZ|CHANNEL_HT40MINUS)
#define CHANNEL_A_HT40PLUS  (CHANNEL_5GHZ|CHANNEL_HT40PLUS)
#define CHANNEL_A_HT40MINUS (CHANNEL_5GHZ|CHANNEL_HT40MINUS)
#define CHANNEL_ALL				\
(CHANNEL_OFDM|				\
CHANNEL_CCK|				\
CHANNEL_2GHZ |				\
CHANNEL_5GHZ |				\
CHANNEL_HT20 |				\
CHANNEL_HT40PLUS |			\
CHANNEL_HT40MINUS)
struct ath9k_hw_cal_data ;
struct ath9k_channel ;
#define IS_CHAN_G(_c) ((((_c)->channelFlags & (CHANNEL_G)) == CHANNEL_G) || \
(((_c)->channelFlags & CHANNEL_G_HT20) == CHANNEL_G_HT20) || \
(((_c)->channelFlags & CHANNEL_G_HT40PLUS) == CHANNEL_G_HT40PLUS) || \
(((_c)->channelFlags & CHANNEL_G_HT40MINUS) == CHANNEL_G_HT40MINUS))
#define IS_CHAN_OFDM(_c) (((_c)->channelFlags & CHANNEL_OFDM) != 0)
#define IS_CHAN_5GHZ(_c) (((_c)->channelFlags & CHANNEL_5GHZ) != 0)
#define IS_CHAN_2GHZ(_c) (((_c)->channelFlags & CHANNEL_2GHZ) != 0)
#define IS_CHAN_HALF_RATE(_c) (((_c)->channelFlags & CHANNEL_HALF) != 0)
#define IS_CHAN_QUARTER_RATE(_c) (((_c)->channelFlags & CHANNEL_QUARTER) != 0)
#define IS_CHAN_A_FAST_CLOCK(_ah, _c)			\
((((_c)->channelFlags & CHANNEL_5GHZ) != 0) &&	\
((_ah)->caps.hw_caps & ATH9K_HW_CAP_FASTCLOCK))
#define IS_CHAN_B(_c) ((_c)->chanmode == CHANNEL_B)
#define IS_CHAN_HT20(_c) (((_c)->chanmode == CHANNEL_A_HT20) ||	\
((_c)->chanmode == CHANNEL_G_HT20))
#define IS_CHAN_HT40(_c) (((_c)->chanmode == CHANNEL_A_HT40PLUS) ||	\
((_c)->chanmode == CHANNEL_A_HT40MINUS) ||	\
((_c)->chanmode == CHANNEL_G_HT40PLUS) ||	\
((_c)->chanmode == CHANNEL_G_HT40MINUS))
#define IS_CHAN_HT(_c) (IS_CHAN_HT20((_c)) || IS_CHAN_HT40((_c)))
enum ath9k_power_mode ;
enum ath9k_tp_scale ;
enum ser_reg_mode ;
enum ath9k_rx_qtype ;
struct ath9k_beacon_state ;
struct chan_centers ;
enum ;
struct ath9k_hw_version ;
#define ATH_MAX_GEN_TIMER	16
#define AR_GENTMR_BIT(_index)	(1 << (_index))
#define debruijn32 0x077CB531U
struct ath_gen_timer_configuration ;
struct ath_gen_timer ;
struct ath_gen_timer_table ;
struct ath_hw_antcomb_conf ;
struct ath_hw_radar_conf ;
struct ath_hw_private_ops ;
struct ath_hw_ops ;
struct ath_nf_limits ;
#define AH_USE_EEPROM   0x1
#define AH_UNPLUGGED    0x2
struct ath_hw ;
struct ath_bus_ops ;
static inline struct ath_common *ath9k_hw_common(struct ath_hw *ah)
static inline struct ath_regulatory *ath9k_hw_regulatory(struct ath_hw *ah)
static inline struct ath_hw_private_ops *ath9k_hw_private_ops(struct ath_hw *ah)
static inline struct ath_hw_ops *ath9k_hw_ops(struct ath_hw *ah)
static inline u8 get_streams(int mask)
const char *ath9k_hw_probe(u16 vendorid, u16 devid);
void ath9k_hw_deinit(struct ath_hw *ah);
int ath9k_hw_init(struct ath_hw *ah);
int ath9k_hw_reset(struct ath_hw *ah, struct ath9k_channel *chan,
struct ath9k_hw_cal_data *caldata, bool bChannelChange);
int ath9k_hw_fill_cap_info(struct ath_hw *ah);
u32 ath9k_regd_get_ctl(struct ath_regulatory *reg, struct ath9k_channel *chan);
void ath9k_hw_cfg_gpio_input(struct ath_hw *ah, u32 gpio);
u32 ath9k_hw_gpio_get(struct ath_hw *ah, u32 gpio);
void ath9k_hw_cfg_output(struct ath_hw *ah, u32 gpio,
u32 ah_signal_type);
void ath9k_hw_set_gpio(struct ath_hw *ah, u32 gpio, u32 val);
u32 ath9k_hw_getdefantenna(struct ath_hw *ah);
void ath9k_hw_setantenna(struct ath_hw *ah, u32 antenna);
bool ath9k_hw_wait(struct ath_hw *ah, u32 reg, u32 mask, u32 val, u32 timeout);
void ath9k_hw_write_array(struct ath_hw *ah, struct ar5416IniArray *array,
int column, unsigned int *writecnt);
u32 ath9k_hw_reverse_bits(u32 val, u32 n);
u16 ath9k_hw_computetxtime(struct ath_hw *ah,
u8 phy, int kbps,
u32 frameLen, u16 rateix, bool shortPreamble);
void ath9k_hw_get_channel_centers(struct ath_hw *ah,
struct ath9k_channel *chan,
struct chan_centers *centers);
u32 ath9k_hw_getrxfilter(struct ath_hw *ah);
void ath9k_hw_setrxfilter(struct ath_hw *ah, u32 bits);
bool ath9k_hw_phy_disable(struct ath_hw *ah);
bool ath9k_hw_disable(struct ath_hw *ah);
void ath9k_hw_set_txpowerlimit(struct ath_hw *ah, u32 limit, bool test);
void ath9k_hw_setopmode(struct ath_hw *ah);
void ath9k_hw_setmcastfilter(struct ath_hw *ah, u32 filter0, u32 filter1);
void ath9k_hw_setbssidmask(struct ath_hw *ah);
void ath9k_hw_write_associd(struct ath_hw *ah);
u32 ath9k_hw_gettsf32(struct ath_hw *ah);
u64 ath9k_hw_gettsf64(struct ath_hw *ah);
void ath9k_hw_settsf64(struct ath_hw *ah, u64 tsf64);
void ath9k_hw_reset_tsf(struct ath_hw *ah);
void ath9k_hw_set_tsfadjust(struct ath_hw *ah, u32 setting);
void ath9k_hw_init_global_settings(struct ath_hw *ah);
u32 ar9003_get_pll_sqsum_dvc(struct ath_hw *ah);
void ath9k_hw_set11nmac2040(struct ath_hw *ah);
void ath9k_hw_beaconinit(struct ath_hw *ah, u32 next_beacon, u32 beacon_period);
void ath9k_hw_set_sta_beacon_timers(struct ath_hw *ah,
const struct ath9k_beacon_state *bs);
bool ath9k_hw_check_alive(struct ath_hw *ah);
bool ath9k_hw_setpower(struct ath_hw *ah, enum ath9k_power_mode mode);
struct ath_gen_timer *ath_gen_timer_alloc(struct ath_hw *ah,
void (*trigger)(void *),
void (*overflow)(void *),
void *arg,
u8 timer_index);
void ath9k_hw_gen_timer_start(struct ath_hw *ah,
struct ath_gen_timer *timer,
u32 timer_next,
u32 timer_period);
void ath9k_hw_gen_timer_stop(struct ath_hw *ah, struct ath_gen_timer *timer);
void ath_gen_timer_free(struct ath_hw *ah, struct ath_gen_timer *timer);
void ath_gen_timer_isr(struct ath_hw *hw);
void ath9k_hw_name(struct ath_hw *ah, char *hw_name, size_t len);
void ath9k_hw_htc_resetinit(struct ath_hw *ah);
void ath9k_hw_get_delta_slope_vals(struct ath_hw *ah, u32 coef_scaled,
u32 *coef_mantissa, u32 *coef_exponent);
void ar9002_hw_cck_chan14_spread(struct ath_hw *ah);
int ar9002_hw_rf_claim(struct ath_hw *ah);
void ar9002_hw_enable_async_fifo(struct ath_hw *ah);
void ar9002_hw_update_async_fifo(struct ath_hw *ah);
void ar9002_hw_enable_wep_aggregation(struct ath_hw *ah);
void ar9003_hw_bb_watchdog_config(struct ath_hw *ah);
void ar9003_hw_bb_watchdog_read(struct ath_hw *ah);
void ar9003_hw_bb_watchdog_dbg_info(struct ath_hw *ah);
void ar9003_hw_disable_phy_restart(struct ath_hw *ah);
void ar9003_paprd_enable(struct ath_hw *ah, bool val);
void ar9003_paprd_populate_single_table(struct ath_hw *ah,
struct ath9k_hw_cal_data *caldata,
int chain);
int ar9003_paprd_create_curve(struct ath_hw *ah,
struct ath9k_hw_cal_data *caldata, int chain);
int ar9003_paprd_setup_gain_table(struct ath_hw *ah, int chain);
int ar9003_paprd_init_table(struct ath_hw *ah);
bool ar9003_paprd_is_done(struct ath_hw *ah);
void ar9003_hw_set_paprd_txdesc(struct ath_hw *ah, void *ds, u8 chains);
void ar5008_hw_attach_phy_ops(struct ath_hw *ah);
void ar9002_hw_attach_phy_ops(struct ath_hw *ah);
void ar9003_hw_attach_phy_ops(struct ath_hw *ah);
void ar9002_hw_attach_calib_ops(struct ath_hw *ah);
void ar9003_hw_attach_calib_ops(struct ath_hw *ah);
void ar9002_hw_attach_ops(struct ath_hw *ah);
void ar9003_hw_attach_ops(struct ath_hw *ah);
void ar9002_hw_load_ani_reg(struct ath_hw *ah, struct ath9k_channel *chan);
extern int modparam_force_new_ani;
void ath9k_ani_reset(struct ath_hw *ah, bool is_scanning);
void ath9k_hw_proc_mib_event(struct ath_hw *ah);
void ath9k_hw_ani_monitor(struct ath_hw *ah, struct ath9k_channel *chan);
#define ATH_PCIE_CAP_LINK_CTRL	0x70
#define ATH_PCIE_CAP_LINK_L0S	1
#define ATH_PCIE_CAP_LINK_L1	2
#define ATH9K_CLOCK_RATE_CCK		22
#define ATH9K_CLOCK_RATE_5GHZ_OFDM	40
#define ATH9K_CLOCK_RATE_2GHZ_OFDM	44
#define ATH9K_CLOCK_FAST_RATE_5GHZ_OFDM 44
