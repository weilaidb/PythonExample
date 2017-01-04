static struct b43_lo_calib *b43_find_lo_calib(struct b43_txpower_lo_control *lo,
const struct b43_bbatt *bbatt,
const struct b43_rfatt *rfatt)
static void b43_lo_write(struct b43_wldev *dev, struct b43_loctl *control)
static u16 lo_measure_feedthrough(struct b43_wldev *dev,
u16 lna, u16 pga, u16 trsw_rx)
static u16 lo_txctl_register_table(struct b43_wldev *dev,
u16 *value, u16 *pad_mix_gain)
static void lo_measure_txctl_values(struct b43_wldev *dev)
static void lo_read_power_vector(struct b43_wldev *dev)
static void lo_measure_gain_values(struct b43_wldev *dev,
s16 max_rx_gain, int use_trsw_rx)
struct lo_g_saved_values ;
static void lo_measure_setup(struct b43_wldev *dev,
struct lo_g_saved_values *sav)
static void lo_measure_restore(struct b43_wldev *dev,
struct lo_g_saved_values *sav)
struct b43_lo_g_statemachine ;
static int lo_probe_possible_loctls(struct b43_wldev *dev,
struct b43_loctl *probe_loctl,
struct b43_lo_g_statemachine *d)
static void lo_probe_loctls_statemachine(struct b43_wldev *dev,
struct b43_loctl *loctl,
int *max_rx_gain)
static
struct b43_lo_calib *b43_calibrate_lo_setting(struct b43_wldev *dev,
const struct b43_bbatt *bbatt,
const struct b43_rfatt *rfatt)
static
struct b43_lo_calib *b43_get_calib_lo_settings(struct b43_wldev *dev,
const struct b43_bbatt *bbatt,
const struct b43_rfatt *rfatt)
void b43_gphy_dc_lt_init(struct b43_wldev *dev, bool update_all)
static inline void b43_lo_fixup_rfatt(struct b43_rfatt *rf)
void b43_lo_g_adjust(struct b43_wldev *dev)
void b43_lo_g_adjust_to(struct b43_wldev *dev,
u16 rfatt, u16 bbatt, u16 tx_control)
void b43_lo_g_maintanance_work(struct b43_wldev *dev)
void b43_lo_g_cleanup(struct b43_wldev *dev)
void b43_lo_g_init(struct b43_wldev *dev)
