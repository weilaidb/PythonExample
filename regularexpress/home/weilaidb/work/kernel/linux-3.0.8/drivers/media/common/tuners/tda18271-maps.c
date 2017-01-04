struct tda18271_pll_map ;
struct tda18271_map ;
static struct tda18271_pll_map tda18271c1_main_pll[] = ;
static struct tda18271_pll_map tda18271c2_main_pll[] = ;
static struct tda18271_pll_map tda18271c1_cal_pll[] = ;
static struct tda18271_pll_map tda18271c2_cal_pll[] = ;
static struct tda18271_map tda18271_bp_filter[] = ;
static struct tda18271_map tda18271c1_km[] = ;
static struct tda18271_map tda18271c2_km[] = ;
static struct tda18271_map tda18271_rf_band[] = ;
static struct tda18271_map tda18271_gain_taper[] = ;
static struct tda18271_map tda18271c1_rf_cal[] = ;
static struct tda18271_map tda18271c2_rf_cal[] = ;
static struct tda18271_map tda18271_ir_measure[] = ;
static struct tda18271_map tda18271_rf_cal_dc_over_dt[] = ;
struct tda18271_thermo_map ;
static struct tda18271_thermo_map tda18271_thermometer[] = ;
int tda18271_lookup_thermometer(struct dvb_frontend *fe)
struct tda18271_cid_target_map ;
static struct tda18271_cid_target_map tda18271_cid_target[] = ;
int tda18271_lookup_cid_target(struct dvb_frontend *fe,
u32 *freq, u8 *cid_target, u16 *count_limit)
static struct tda18271_rf_tracking_filter_cal tda18271_rf_band_template[] = ;
int tda18271_lookup_rf_band(struct dvb_frontend *fe, u32 *freq, u8 *rf_band)
struct tda18271_map_layout ;
int tda18271_lookup_pll_map(struct dvb_frontend *fe,
enum tda18271_map_type map_type,
u32 *freq, u8 *post_div, u8 *div)
int tda18271_lookup_map(struct dvb_frontend *fe,
enum tda18271_map_type map_type,
u32 *freq, u8 *val)
static struct tda18271_std_map tda18271c1_std_map = ;
static struct tda18271_std_map tda18271c2_std_map = ;
static struct tda18271_map_layout tda18271c1_map_layout = ;
static struct tda18271_map_layout tda18271c2_map_layout = ;
int tda18271_assign_map_layout(struct dvb_frontend *fe)
