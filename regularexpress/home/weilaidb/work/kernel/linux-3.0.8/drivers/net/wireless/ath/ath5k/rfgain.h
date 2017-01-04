struct ath5k_ini_rfgain ;
static const struct ath5k_ini_rfgain rfgain_5111[] = ;
static const struct ath5k_ini_rfgain rfgain_5112[] = ;
static const struct ath5k_ini_rfgain rfgain_2413[] = ;
static const struct ath5k_ini_rfgain rfgain_2316[] = ;
static const struct ath5k_ini_rfgain rfgain_5413[] = ;
static const struct ath5k_ini_rfgain rfgain_2425[] = ;
#define AR5K_GAIN_CRN_FIX_BITS_5111		4
#define AR5K_GAIN_CRN_FIX_BITS_5112		7
#define AR5K_GAIN_CRN_MAX_FIX_BITS		AR5K_GAIN_CRN_FIX_BITS_5112
#define AR5K_GAIN_DYN_ADJUST_HI_MARGIN		15
#define AR5K_GAIN_DYN_ADJUST_LO_MARGIN		20
#define AR5K_GAIN_CCK_PROBE_CORR		5
#define AR5K_GAIN_CCK_OFDM_GAIN_DELTA		15
#define AR5K_GAIN_STEP_COUNT			10
#define AR5K_GAIN_CHECK_ADJUST(_g) 		\
((_g)->g_current <= (_g)->g_low || (_g)->g_current >= (_g)->g_high)
struct ath5k_gain_opt_step ;
struct ath5k_gain_opt ;
static const struct ath5k_gain_opt rfgain_opt_5111 = ;
static const struct ath5k_gain_opt rfgain_opt_5112 = ;
