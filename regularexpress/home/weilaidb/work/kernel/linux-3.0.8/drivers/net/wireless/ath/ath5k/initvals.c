struct ath5k_ini ;
struct ath5k_ini_mode ;
static const struct ath5k_ini ar5210_ini[] = ;
static const struct ath5k_ini ar5211_ini[] = ;
static const struct ath5k_ini_mode ar5211_ini_mode[] = ;
static const struct ath5k_ini ar5212_ini_common_start[] = ;
static const struct ath5k_ini_mode ar5212_ini_mode_start[] = ;
static const struct ath5k_ini_mode rf5111_ini_mode_end[] = ;
static const struct ath5k_ini rf5111_ini_common_end[] = ;
static const struct ath5k_ini_mode rf5112_ini_mode_end[] = ;
static const struct ath5k_ini rf5112_ini_common_end[] = ;
static const struct ath5k_ini_mode rf5413_ini_mode_end[] = ;
static const struct ath5k_ini rf5413_ini_common_end[] = ;
static const struct ath5k_ini_mode rf2413_ini_mode_end[] = ;
static const struct ath5k_ini rf2413_ini_common_end[] = ;
static const struct ath5k_ini_mode rf2425_ini_mode_end[] = ;
static const struct ath5k_ini rf2425_ini_common_end[] = ;
static const struct ath5k_ini rf5111_ini_bbgain[] = ;
static const struct ath5k_ini rf5112_ini_bbgain[] = ;
static void ath5k_hw_ini_registers(struct ath5k_hw *ah, unsigned int size,
const struct ath5k_ini *ini_regs, bool skip_pcu)
static void ath5k_hw_ini_mode_registers(struct ath5k_hw *ah,
unsigned int size, const struct ath5k_ini_mode *ini_mode,
u8 mode)
int ath5k_hw_write_initvals(struct ath5k_hw *ah, u8 mode, bool skip_pcu)
