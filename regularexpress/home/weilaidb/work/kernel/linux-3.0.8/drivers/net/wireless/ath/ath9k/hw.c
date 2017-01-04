static bool ath9k_hw_set_reset_reg(struct ath_hw *ah, u32 type);
MODULE_AUTHOR("Atheros Communications");
MODULE_DESCRIPTION("Support for Atheros 802.11n wireless LAN cards.");
MODULE_SUPPORTED_DEVICE("Atheros 802.11n WLAN cards");
MODULE_LICENSE("Dual BSD/GPL");
static int __init ath9k_init(void)
module_init(ath9k_init);
static void __exit ath9k_exit(void)
module_exit(ath9k_exit);
static void ath9k_hw_init_cal_settings(struct ath_hw *ah)
static void ath9k_hw_init_mode_regs(struct ath_hw *ah)
static u32 ath9k_hw_compute_pll_control(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_init_mode_gain_regs(struct ath_hw *ah)
static void ath9k_hw_ani_cache_ini_regs(struct ath_hw *ah)
static void ath9k_hw_set_clockrate(struct ath_hw *ah)
static u32 ath9k_hw_mac_to_clks(struct ath_hw *ah, u32 usecs)
bool ath9k_hw_wait(struct ath_hw *ah, u32 reg, u32 mask, u32 val, u32 timeout)
EXPORT_SYMBOL(ath9k_hw_wait);
void ath9k_hw_write_array(struct ath_hw *ah, struct ar5416IniArray *array,
int column, unsigned int *writecnt)
u32 ath9k_hw_reverse_bits(u32 val, u32 n)
u16 ath9k_hw_computetxtime(struct ath_hw *ah,
u8 phy, int kbps,
u32 frameLen, u16 rateix,
bool shortPreamble)
EXPORT_SYMBOL(ath9k_hw_computetxtime);
void ath9k_hw_get_channel_centers(struct ath_hw *ah,
struct ath9k_channel *chan,
struct chan_centers *centers)
static void ath9k_hw_read_revisions(struct ath_hw *ah)
static void ath9k_hw_disablepcie(struct ath_hw *ah)
static void ath9k_hw_aspm_init(struct ath_hw *ah)
static bool ath9k_hw_chip_test(struct ath_hw *ah)
static void ath9k_hw_init_config(struct ath_hw *ah)
static void ath9k_hw_init_defaults(struct ath_hw *ah)
static int ath9k_hw_init_macaddr(struct ath_hw *ah)
static int ath9k_hw_post_init(struct ath_hw *ah)
static void ath9k_hw_attach_ops(struct ath_hw *ah)
static int __ath9k_hw_init(struct ath_hw *ah)
int ath9k_hw_init(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_init);
static void ath9k_hw_init_qos(struct ath_hw *ah)
u32 ar9003_get_pll_sqsum_dvc(struct ath_hw *ah)
EXPORT_SYMBOL(ar9003_get_pll_sqsum_dvc);
static void ath9k_hw_init_pll(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_init_interrupt_masks(struct ath_hw *ah,
enum nl80211_iftype opmode)
static void ath9k_hw_setslottime(struct ath_hw *ah, u32 us)
static void ath9k_hw_set_ack_timeout(struct ath_hw *ah, u32 us)
static void ath9k_hw_set_cts_timeout(struct ath_hw *ah, u32 us)
static bool ath9k_hw_set_global_txtimeout(struct ath_hw *ah, u32 tu)
void ath9k_hw_init_global_settings(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_init_global_settings);
void ath9k_hw_deinit(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_deinit);
u32 ath9k_regd_get_ctl(struct ath_regulatory *reg, struct ath9k_channel *chan)
static inline void ath9k_hw_set_dma(struct ath_hw *ah)
static void ath9k_hw_set_operating_mode(struct ath_hw *ah, int opmode)
void ath9k_hw_get_delta_slope_vals(struct ath_hw *ah, u32 coef_scaled,
u32 *coef_mantissa, u32 *coef_exponent)
static bool ath9k_hw_set_reset(struct ath_hw *ah, int type)
static bool ath9k_hw_set_reset_power_on(struct ath_hw *ah)
static bool ath9k_hw_set_reset_reg(struct ath_hw *ah, u32 type)
static bool ath9k_hw_chip_reset(struct ath_hw *ah,
struct ath9k_channel *chan)
static bool ath9k_hw_channel_change(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_apply_gpio_override(struct ath_hw *ah)
bool ath9k_hw_check_alive(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_check_alive);
int ath9k_hw_reset(struct ath_hw *ah, struct ath9k_channel *chan,
struct ath9k_hw_cal_data *caldata, bool bChannelChange)
EXPORT_SYMBOL(ath9k_hw_reset);
static void ath9k_set_power_sleep(struct ath_hw *ah, int setChip)
static void ath9k_set_power_network_sleep(struct ath_hw *ah, int setChip)
static bool ath9k_hw_set_power_awake(struct ath_hw *ah, int setChip)
bool ath9k_hw_setpower(struct ath_hw *ah, enum ath9k_power_mode mode)
EXPORT_SYMBOL(ath9k_hw_setpower);
void ath9k_hw_beaconinit(struct ath_hw *ah, u32 next_beacon, u32 beacon_period)
EXPORT_SYMBOL(ath9k_hw_beaconinit);
void ath9k_hw_set_sta_beacon_timers(struct ath_hw *ah,
const struct ath9k_beacon_state *bs)
EXPORT_SYMBOL(ath9k_hw_set_sta_beacon_timers);
int ath9k_hw_fill_cap_info(struct ath_hw *ah)
static void ath9k_hw_gpio_cfg_output_mux(struct ath_hw *ah,
u32 gpio, u32 type)
void ath9k_hw_cfg_gpio_input(struct ath_hw *ah, u32 gpio)
EXPORT_SYMBOL(ath9k_hw_cfg_gpio_input);
u32 ath9k_hw_gpio_get(struct ath_hw *ah, u32 gpio)
EXPORT_SYMBOL(ath9k_hw_gpio_get);
void ath9k_hw_cfg_output(struct ath_hw *ah, u32 gpio,
u32 ah_signal_type)
EXPORT_SYMBOL(ath9k_hw_cfg_output);
void ath9k_hw_set_gpio(struct ath_hw *ah, u32 gpio, u32 val)
EXPORT_SYMBOL(ath9k_hw_set_gpio);
u32 ath9k_hw_getdefantenna(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_getdefantenna);
void ath9k_hw_setantenna(struct ath_hw *ah, u32 antenna)
EXPORT_SYMBOL(ath9k_hw_setantenna);
u32 ath9k_hw_getrxfilter(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_getrxfilter);
void ath9k_hw_setrxfilter(struct ath_hw *ah, u32 bits)
EXPORT_SYMBOL(ath9k_hw_setrxfilter);
bool ath9k_hw_phy_disable(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_phy_disable);
bool ath9k_hw_disable(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_disable);
void ath9k_hw_set_txpowerlimit(struct ath_hw *ah, u32 limit, bool test)
EXPORT_SYMBOL(ath9k_hw_set_txpowerlimit);
void ath9k_hw_setopmode(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_setopmode);
void ath9k_hw_setmcastfilter(struct ath_hw *ah, u32 filter0, u32 filter1)
EXPORT_SYMBOL(ath9k_hw_setmcastfilter);
void ath9k_hw_write_associd(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_write_associd);
#define ATH9K_MAX_TSF_READ 10
u64 ath9k_hw_gettsf64(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_gettsf64);
void ath9k_hw_settsf64(struct ath_hw *ah, u64 tsf64)
EXPORT_SYMBOL(ath9k_hw_settsf64);
void ath9k_hw_reset_tsf(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_reset_tsf);
void ath9k_hw_set_tsfadjust(struct ath_hw *ah, u32 setting)
EXPORT_SYMBOL(ath9k_hw_set_tsfadjust);
void ath9k_hw_set11nmac2040(struct ath_hw *ah)
static const struct ath_gen_timer_configuration gen_tmr_configuration[] =
;
static u32 rightmost_index(struct ath_gen_timer_table *timer_table, u32 *mask)
u32 ath9k_hw_gettsf32(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_gettsf32);
struct ath_gen_timer *ath_gen_timer_alloc(struct ath_hw *ah,
void (*trigger)(void *),
void (*overflow)(void *),
void *arg,
u8 timer_index)
EXPORT_SYMBOL(ath_gen_timer_alloc);
void ath9k_hw_gen_timer_start(struct ath_hw *ah,
struct ath_gen_timer *timer,
u32 trig_timeout,
u32 timer_period)
EXPORT_SYMBOL(ath9k_hw_gen_timer_start);
void ath9k_hw_gen_timer_stop(struct ath_hw *ah, struct ath_gen_timer *timer)
EXPORT_SYMBOL(ath9k_hw_gen_timer_stop);
void ath_gen_timer_free(struct ath_hw *ah, struct ath_gen_timer *timer)
EXPORT_SYMBOL(ath_gen_timer_free);
void ath_gen_timer_isr(struct ath_hw *ah)
EXPORT_SYMBOL(ath_gen_timer_isr);
void ath9k_hw_htc_resetinit(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_htc_resetinit);
static struct  ath_mac_bb_names[] = ;
static struct  ath_rf_names[] = ;
static const char *ath9k_hw_mac_bb_name(u32 mac_bb_version)
static const char *ath9k_hw_rf_name(u16 rf_version)
void ath9k_hw_name(struct ath_hw *ah, char *hw_name, size_t len)
EXPORT_SYMBOL(ath9k_hw_name);
