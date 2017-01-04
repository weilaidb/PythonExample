int modparam_force_new_ani;
module_param_named(force_new_ani, modparam_force_new_ani, int, 0444);
MODULE_PARM_DESC(force_new_ani, "Force new ANI for AR5008, AR9001, AR9002");
static void ar9002_hw_init_mode_regs(struct ath_hw *ah)
void ar9002_hw_cck_chan14_spread(struct ath_hw *ah)
static void ar9280_20_hw_init_rxgain_ini(struct ath_hw *ah)
static void ar9280_20_hw_init_txgain_ini(struct ath_hw *ah)
static void ar9002_hw_init_mode_gain_regs(struct ath_hw *ah)
static void ar9002_hw_configpcipowersave(struct ath_hw *ah,
int restore,
int power_off)
static int ar9002_hw_get_radiorev(struct ath_hw *ah)
int ar9002_hw_rf_claim(struct ath_hw *ah)
void ar9002_hw_enable_async_fifo(struct ath_hw *ah)
void ar9002_hw_update_async_fifo(struct ath_hw *ah)
void ar9002_hw_enable_wep_aggregation(struct ath_hw *ah)
void ar9002_hw_attach_ops(struct ath_hw *ah)
void ar9002_hw_load_ani_reg(struct ath_hw *ah, struct ath9k_channel *chan)
