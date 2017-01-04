static const s8 b43legacy_tssi2dbm_b_table[] = ;
static const s8 b43legacy_tssi2dbm_g_table[] = ;
static void b43legacy_phy_initg(struct b43legacy_wldev *dev);
static inline
void b43legacy_voluntary_preempt(void)
void b43legacy_phy_lock(struct b43legacy_wldev *dev)
void b43legacy_phy_unlock(struct b43legacy_wldev *dev)
u16 b43legacy_phy_read(struct b43legacy_wldev *dev, u16 offset)
void b43legacy_phy_write(struct b43legacy_wldev *dev, u16 offset, u16 val)
void b43legacy_phy_calibrate(struct b43legacy_wldev *dev)
static void b43legacy_phy_init_pctl(struct b43legacy_wldev *dev)
static void b43legacy_phy_agcsetup(struct b43legacy_wldev *dev)
static void b43legacy_phy_setupg(struct b43legacy_wldev *dev)
static void b43legacy_phy_inita(struct b43legacy_wldev *dev)
static void b43legacy_phy_initb2(struct b43legacy_wldev *dev)
static void b43legacy_phy_initb4(struct b43legacy_wldev *dev)
static void b43legacy_phy_initb5(struct b43legacy_wldev *dev)
static void b43legacy_phy_initb6(struct b43legacy_wldev *dev)
static void b43legacy_calc_loopback_gain(struct b43legacy_wldev *dev)
static void b43legacy_phy_initg(struct b43legacy_wldev *dev)
static u16 b43legacy_phy_lo_b_r15_loop(struct b43legacy_wldev *dev)
void b43legacy_phy_lo_b_measure(struct b43legacy_wldev *dev)
static inline
u16 b43legacy_phy_lo_g_deviation_subval(struct b43legacy_wldev *dev,
u16 control)
static u32 b43legacy_phy_lo_g_singledeviation(struct b43legacy_wldev *dev,
u16 control)
static inline
void b43legacy_lo_write(struct b43legacy_wldev *dev,
struct b43legacy_lopair *pair)
static inline
struct b43legacy_lopair *b43legacy_find_lopair(struct b43legacy_wldev *dev,
u16 bbatt,
u16 rfatt,
u16 tx)
static inline
struct b43legacy_lopair *b43legacy_current_lopair(struct b43legacy_wldev *dev)
void b43legacy_phy_lo_adjust(struct b43legacy_wldev *dev, int fixed)
static void b43legacy_phy_lo_g_measure_txctl2(struct b43legacy_wldev *dev)
static
void b43legacy_phy_lo_g_state(struct b43legacy_wldev *dev,
const struct b43legacy_lopair *in_pair,
struct b43legacy_lopair *out_pair,
u16 r27)
void b43legacy_phy_set_baseband_attenuation(struct b43legacy_wldev *dev,
u16 bbatt)
u8 r27 = 0;
u16 r31;
oldchannel = phy->channel;
if (phy->gmode)
regstack[3] = b43legacy_read16(dev, 0x03E2);
b43legacy_write16(dev, 0x03E2, regstack[3] | 0x8000);
regstack[4] = b43legacy_read16(dev, B43legacy_MMIO_CHANNEL_EXT);
regstack[5] = b43legacy_phy_read(dev, 0x15);
regstack[6] = b43legacy_phy_read(dev, 0x2A);
regstack[7] = b43legacy_phy_read(dev, 0x35);
regstack[8] = b43legacy_phy_read(dev, 0x60);
regstack[9] = b43legacy_radio_read16(dev, 0x43);
regstack[10] = b43legacy_radio_read16(dev, 0x7A);
regstack[11] = b43legacy_radio_read16(dev, 0x52);
if (phy->gmode)
b43legacy_radio_selectchannel(dev, 6, 0);
if (phy->gmode)
b43legacy_radio_write16(dev, 0x0043, 0x0006);
b43legacy_phy_set_baseband_attenuation(dev, 2);
b43legacy_write16(dev, B43legacy_MMIO_CHANNEL_EXT, 0x0000);
b43legacy_phy_write(dev, 0x002E, 0x007F);
b43legacy_phy_write(dev, 0x080F, 0x0078);
b43legacy_phy_write(dev, 0x0035, regstack[7] & ~(1 << 7));
b43legacy_radio_write16(dev, 0x007A, regstack[10] & 0xFFF0);
b43legacy_phy_write(dev, 0x002B, 0x0203);
b43legacy_phy_write(dev, 0x002A, 0x08A3);
if (phy->gmode)
if (is_initializing)
b43legacy_phy_lo_g_measure_txctl2(dev);
b43legacy_phy_write(dev, 0x080F, 0x8078);
control.low = 0;
control.high = 0;
for (h = 0; h < 10; h++)
for (i = 10; i < 14; i++)
if (phy->gmode)  else
b43legacy_phy_write(dev, 0x0015, r27 | 0xEFA0);
b43legacy_phy_lo_adjust(dev, is_initializing);
b43legacy_phy_write(dev, 0x002E, 0x807F);
if (phy->gmode)
b43legacy_phy_write(dev, 0x002F, 0x0202);
else
b43legacy_phy_write(dev, 0x002F, 0x0101);
b43legacy_write16(dev, B43legacy_MMIO_CHANNEL_EXT, regstack[4]);
b43legacy_phy_write(dev, 0x0015, regstack[5]);
b43legacy_phy_write(dev, 0x002A, regstack[6]);
b43legacy_phy_write(dev, 0x0035, regstack[7]);
b43legacy_phy_write(dev, 0x0060, regstack[8]);
b43legacy_radio_write16(dev, 0x0043, regstack[9]);
b43legacy_radio_write16(dev, 0x007A, regstack[10]);
regstack[11] &= 0x00F0;
regstack[11] |= (b43legacy_radio_read16(dev, 0x52) & 0x000F);
b43legacy_radio_write16(dev, 0x52, regstack[11]);
b43legacy_write16(dev, 0x03E2, regstack[3]);
if (phy->gmode)
b43legacy_radio_selectchannel(dev, oldchannel, 1);
}
static
void b43legacy_phy_lo_mark_current_used(struct b43legacy_wldev *dev)
void b43legacy_phy_lo_mark_all_unused(struct b43legacy_wldev *dev)
static s8 b43legacy_phy_estimate_power_out(struct b43legacy_wldev *dev, s8 tssi)
dev->dev->bus->sprom.maxpwr_bg = max_pwr;
}
#define REG_MAX_PWR 20
max_pwr = min(REG_MAX_PWR * 4
- dev->dev->bus->sprom.antenna_gain.ghz24.a0
- 0x6, max_pwr);
desired_pwr = clamp_val(phy->power_level << 2, 0, max_pwr);
if (b43legacy_debug(dev, B43legacy_DBG_XMITPOWER))
b43legacydbg(dev->wl, "Current TX power output: " Q52_FMT
" dBm, Desired TX power output: " Q52_FMT
" dBm\n", Q52_ARG(estimated_pwr),
Q52_ARG(desired_pwr));
pwr_adjust = (desired_pwr - estimated_pwr) / 2;
radio_att_delta = -(pwr_adjust + 7) >> 3;
baseband_att_delta = -(pwr_adjust >> 1) - (4 * radio_att_delta);
if ((radio_att_delta == 0) && (baseband_att_delta == 0))
baseband_attenuation = phy->bbatt;
baseband_attenuation += baseband_att_delta;
radio_attenuation = phy->rfatt;
radio_attenuation += radio_att_delta;
if (radio_attenuation < 0)  else if (radio_attenuation > 9)  else
baseband_attenuation = clamp_val(baseband_attenuation, 0, 11);
txpower = phy->txctl1;
if ((phy->radio_ver == 0x2050) && (phy->radio_rev == 2))
phy->txctl1 = txpower;
baseband_attenuation = clamp_val(baseband_attenuation, 0, 11);
radio_attenuation = clamp_val(radio_attenuation, 0, 9);
phy->rfatt = radio_attenuation;
phy->bbatt = baseband_attenuation;
b43legacy_phy_lock(dev);
b43legacy_radio_lock(dev);
b43legacy_radio_set_txpower_bg(dev, baseband_attenuation,
radio_attenuation, txpower);
b43legacy_phy_lo_mark_current_used(dev);
b43legacy_radio_unlock(dev);
b43legacy_phy_unlock(dev);
}
static inline
s32 b43legacy_tssi2dbm_ad(s32 num, s32 den)
static inline
s8 b43legacy_tssi2dbm_entry(s8 entry [], u8 index, s16 pab0, s16 pab1, s16 pab2)
if ((s8)dev->dev->bus->sprom.itssi_bg != 0 &&
(s8)dev->dev->bus->sprom.itssi_bg != -1)
phy->idle_tssi = (s8)(dev->dev->bus->sprom.
itssi_bg);
else
phy->idle_tssi = 62;
dyn_tssi2dbm = kmalloc(64, GFP_KERNEL);
if (dyn_tssi2dbm == NULL)
for (idx = 0; idx < 64; idx++)
if (b43legacy_tssi2dbm_entry(dyn_tssi2dbm, idx, pab0,
pab1, pab2))
phy->tssi2dbm = dyn_tssi2dbm;
phy->dyn_tssi_tbl = 1;
} else
return 0;
}
int b43legacy_phy_init(struct b43legacy_wldev *dev)
void b43legacy_phy_set_antenna_diversity(struct b43legacy_wldev *dev)
void b43legacy_power_saving_ctl_bits(struct b43legacy_wldev *dev,
int bit25, int bit26)
