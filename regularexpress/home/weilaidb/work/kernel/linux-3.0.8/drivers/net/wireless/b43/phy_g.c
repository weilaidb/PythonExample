static const s8 b43_tssi2dbm_g_table[] = ;
static const u8 b43_radio_channel_codes_bg[] = ;
static void b43_calc_nrssi_threshold(struct b43_wldev *dev);
#define bitrev4(tmp) (bitrev8(tmp) >> 4)
static inline u16 channel2freq_bg(u8 channel)
static void generate_rfatt_list(struct b43_wldev *dev,
struct b43_rfatt_list *list)
static void generate_bbatt_list(struct b43_wldev *dev,
struct b43_bbatt_list *list)
static void b43_shm_clear_tssi(struct b43_wldev *dev)
static void b43_synth_pu_workaround(struct b43_wldev *dev, u8 channel)
void b43_gphy_set_baseband_attenuation(struct b43_wldev *dev,
u16 baseband_attenuation)
static void b43_set_txpower_g(struct b43_wldev *dev,
const struct b43_bbatt *bbatt,
const struct b43_rfatt *rfatt, u8 tx_control)
static void b43_gphy_tssi_power_lt_init(struct b43_wldev *dev)
static void b43_gphy_gain_lt_init(struct b43_wldev *dev)
static void b43_set_all_gains(struct b43_wldev *dev,
s16 first, s16 second, s16 third)
static void b43_set_original_gains(struct b43_wldev *dev)
backup[3] = b43_phy_read(dev, 0x0814);
backup[4] = b43_phy_read(dev, 0x0815);
}
backup[5] = b43_phy_read(dev, 0x005A);
backup[6] = b43_phy_read(dev, 0x0059);
backup[7] = b43_phy_read(dev, 0x0058);
backup[8] = b43_phy_read(dev, 0x000A);
backup[9] = b43_phy_read(dev, 0x0003);
backup[10] = b43_radio_read16(dev, 0x007A);
backup[11] = b43_radio_read16(dev, 0x0043);
b43_phy_mask(dev, 0x0429, 0x7FFF);
b43_phy_maskset(dev, 0x0001, 0x3FFF, 0x4000);
b43_phy_set(dev, 0x0811, 0x000C);
b43_phy_maskset(dev, 0x0812, 0xFFF3, 0x0004);
b43_phy_mask(dev, 0x0802, ~(0x1 | 0x2));
if (phy->rev >= 6)
b43_radio_set(dev, 0x007A, 0x0070);
b43_radio_set(dev, 0x007A, 0x0080);
udelay(30);
v47F = (s16) ((b43_phy_read(dev, 0x047F) >> 8) & 0x003F);
if (v47F >= 0x20)
v47F -= 0x40;
if (v47F == 31)  else
b43_radio_write16(dev, 0x007B, saved);
if (phy->rev >= 6)
if (phy->rev != 1)
b43_phy_write(dev, 0x005A, backup[5]);
b43_phy_write(dev, 0x0059, backup[6]);
b43_phy_write(dev, 0x0058, backup[7]);
b43_phy_write(dev, 0x000A, backup[8]);
b43_phy_write(dev, 0x0003, backup[9]);
b43_radio_write16(dev, 0x0043, backup[11]);
b43_radio_write16(dev, 0x007A, backup[10]);
b43_phy_write(dev, 0x0802, b43_phy_read(dev, 0x0802) | 0x1 | 0x2);
b43_phy_set(dev, 0x0429, 0x8000);
b43_set_original_gains(dev);
if (phy->rev >= 6)
b43_phy_write(dev, 0x0001, backup[0]);
b43_phy_write(dev, 0x0812, backup[2]);
b43_phy_write(dev, 0x0811, backup[1]);
}
static void b43_calc_nrssi_slope(struct b43_wldev *dev)
static void b43_calc_nrssi_threshold(struct b43_wldev *dev)
static void _stack_save(u32 *_stackptr, size_t *stackidx,
u8 id, u16 offset, u16 value)
static u16 _stack_restore(u32 *stackptr, u8 id, u16 offset)
#define phy_stacksave(offset)					\
do  while (0)
#define phy_stackrestore(offset)				\
do  while (0)
#define radio_stacksave(offset)						\
do  while (0)
#define radio_stackrestore(offset)					\
do  while (0)
#define ofdmtab_stacksave(table, offset)			\
do  while (0)
#define ofdmtab_stackrestore(table, offset)			\
do  while (0)
static void
b43_radio_interference_mitigation_enable(struct b43_wldev *dev, int mode)
static void
b43_radio_interference_mitigation_disable(struct b43_wldev *dev, int mode)
#undef phy_stacksave
#undef phy_stackrestore
#undef radio_stacksave
#undef radio_stackrestore
#undef ofdmtab_stacksave
#undef ofdmtab_stackrestore
static u16 b43_radio_core_calibration_value(struct b43_wldev *dev)
#define LPD(L, P, D)	(((L) << 2) | ((P) << 1) | ((D) << 0))
static u16 radio2050_rfover_val(struct b43_wldev *dev,
u16 phy_register, unsigned int lpd)
struct init2050_saved_values ;
static u16 b43_radio_init2050(struct b43_wldev *dev)
static void b43_phy_initb5(struct b43_wldev *dev)
static void b43_phy_initb6(struct b43_wldev *dev)
static void b43_calc_loopback_gain(struct b43_wldev *dev)
static void b43_hardware_pctl_early_init(struct b43_wldev *dev)
static void b43_hardware_pctl_init_gphy(struct b43_wldev *dev)
static void b43_phy_init_pctl(struct b43_wldev *dev)
static void b43_phy_initg(struct b43_wldev *dev)
void b43_gphy_channel_switch(struct b43_wldev *dev,
unsigned int channel,
bool synthetic_pu_workaround)
static void default_baseband_attenuation(struct b43_wldev *dev,
struct b43_bbatt *bb)
static void default_radio_attenuation(struct b43_wldev *dev,
struct b43_rfatt *rf)
static u16 default_tx_control(struct b43_wldev *dev)
static u8 b43_gphy_aci_detect(struct b43_wldev *dev, u8 channel)
static u8 b43_gphy_aci_scan(struct b43_wldev *dev)
static s32 b43_tssi2dbm_ad(s32 num, s32 den)
static s8 b43_tssi2dbm_entry(s8 entry[], u8 index,
s16 pab0, s16 pab1, s16 pab2)
u8 *b43_generate_dyn_tssi2dbm_tab(struct b43_wldev *dev,
s16 pab0, s16 pab1, s16 pab2)
static int b43_gphy_init_tssi2dbm_table(struct b43_wldev *dev)
static int b43_gphy_op_allocate(struct b43_wldev *dev)
static void b43_gphy_op_prepare_structs(struct b43_wldev *dev)
static void b43_gphy_op_free(struct b43_wldev *dev)
static int b43_gphy_op_prepare_hardware(struct b43_wldev *dev)
static int b43_gphy_op_init(struct b43_wldev *dev)
static void b43_gphy_op_exit(struct b43_wldev *dev)
static u16 b43_gphy_op_read(struct b43_wldev *dev, u16 reg)
static void b43_gphy_op_write(struct b43_wldev *dev, u16 reg, u16 value)
static u16 b43_gphy_op_radio_read(struct b43_wldev *dev, u16 reg)
static void b43_gphy_op_radio_write(struct b43_wldev *dev, u16 reg, u16 value)
static bool b43_gphy_op_supports_hwpctl(struct b43_wldev *dev)
static void b43_gphy_op_software_rfkill(struct b43_wldev *dev,
bool blocked)
static int b43_gphy_op_switch_channel(struct b43_wldev *dev,
unsigned int new_channel)
static unsigned int b43_gphy_op_get_default_chan(struct b43_wldev *dev)
static void b43_gphy_op_set_rx_antenna(struct b43_wldev *dev, int antenna)
static int b43_gphy_op_interf_mitigation(struct b43_wldev *dev,
enum b43_interference_mitigation mode)
static s8 b43_gphy_estimate_power_out(struct b43_wldev *dev, s8 tssi)
static void b43_put_attenuation_into_ranges(struct b43_wldev *dev,
int *_bbatt, int *_rfatt)
static void b43_gphy_op_adjust_txpower(struct b43_wldev *dev)
static enum b43_txpwr_result b43_gphy_op_recalc_txpower(struct b43_wldev *dev,
bool ignore_tssi)
static void b43_gphy_op_pwork_15sec(struct b43_wldev *dev)
static void b43_gphy_op_pwork_60sec(struct b43_wldev *dev)
const struct b43_phy_operations b43_phyops_g = ;
