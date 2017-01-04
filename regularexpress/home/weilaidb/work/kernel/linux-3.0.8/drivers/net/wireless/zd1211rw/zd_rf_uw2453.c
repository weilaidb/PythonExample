#define UW2453_REGWRITE(reg, val) ((((reg) & 0xf) << 20) | ((val) & 0xfffff))
static const u8 uw2453_std_synth[] = ;
static const u16 uw2453_synth_divide[] = ;
#define CHAN_TO_PAIRIDX(a) ((a - 1) / 2)
#define RF_CHANPAIR(a,b) [CHAN_TO_PAIRIDX(a)]
static const u16 uw2453_std_vco_cfg[][7] = ;
static const u16 uw2453_autocal_synth[] = ;
static const u16 UW2453_AUTOCAL_VCO_CFG = 0x6662;
static u32 uw2453_txgain[] = ;
struct uw2453_priv ;
#define UW2453_PRIV(rf) ((struct uw2453_priv *) (rf)->priv)
static int uw2453_synth_set_channel(struct zd_chip *chip, int channel,
bool autocal)
static int uw2453_write_vco_cfg(struct zd_chip *chip, u16 value)
static int uw2453_init_mode(struct zd_chip *chip)
static int uw2453_set_tx_gain_level(struct zd_chip *chip, int channel)
static int uw2453_init_hw(struct zd_rf *rf)
static int uw2453_set_channel(struct zd_rf *rf, u8 channel)
static int uw2453_switch_radio_on(struct zd_rf *rf)
static int uw2453_switch_radio_off(struct zd_rf *rf)
static void uw2453_clear(struct zd_rf *rf)
int zd_rf_init_uw2453(struct zd_rf *rf)
