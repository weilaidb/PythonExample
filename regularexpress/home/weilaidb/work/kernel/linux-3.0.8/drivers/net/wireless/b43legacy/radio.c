static const u16 rcc_table[16] = ;
static u16 flip_4bit(u16 value)
static inline
u16 channel2freq_bg(u8 channel)
void b43legacy_radio_lock(struct b43legacy_wldev *dev)
void b43legacy_radio_unlock(struct b43legacy_wldev *dev)
u16 b43legacy_radio_read16(struct b43legacy_wldev *dev, u16 offset)
void b43legacy_radio_write16(struct b43legacy_wldev *dev, u16 offset, u16 val)
static void b43legacy_set_all_gains(struct b43legacy_wldev *dev,
s16 first, s16 second, s16 third)
static void b43legacy_set_original_gains(struct b43legacy_wldev *dev)
static void b43legacy_synth_pu_workaround(struct b43legacy_wldev *dev,
u8 channel)
u8 b43legacy_radio_aci_detect(struct b43legacy_wldev *dev, u8 channel)
u8 b43legacy_radio_aci_scan(struct b43legacy_wldev *dev)
b43legacy_phy_write(dev, 0x0020, (((u16)threshold) << 8)
| 0x001C);
if (phy->radio_rev >= 6)
break;
}
case B43legacy_PHYTYPE_G:
if (!phy->gmode ||
!(dev->dev->bus->sprom.boardflags_lo &
B43legacy_BFL_RSSI))  else
break;
default:
B43legacy_BUG_ON(1);
}
}
static void _stack_save(u32 *_stackptr, size_t *stackidx,
u8 id, u16 offset, u16 value)
static u16 _stack_restore(u32 *stackptr,
u8 id, u16 offset)
#define phy_stacksave(offset)					\
do  while (0)
#define phy_stackrestore(offset)				\
do  while (0)
#define radio_stacksave(offset)						\
do  while (0)
#define radio_stackrestore(offset)					\
do  while (0)
#define ilt_stacksave(offset)					\
do  while (0)
#define ilt_stackrestore(offset)				\
do  while (0)
static void
b43legacy_radio_interference_mitigation_enable(struct b43legacy_wldev *dev,
int mode)
static void
b43legacy_radio_interference_mitigation_disable(struct b43legacy_wldev *dev,
int mode)
#undef phy_stacksave
#undef phy_stackrestore
#undef radio_stacksave
#undef radio_stackrestore
#undef ilt_stacksave
#undef ilt_stackrestore
int b43legacy_radio_set_interference_mitigation(struct b43legacy_wldev *dev,
int mode)
u16 b43legacy_radio_calibrationvalue(struct b43legacy_wldev *dev)
#define LPD(L, P, D)    (((L) << 2) | ((P) << 1) | ((D) << 0))
static u16 b43legacy_get_812_value(struct b43legacy_wldev *dev, u8 lpd)
u16 b43legacy_radio_init2050(struct b43legacy_wldev *dev)
static inline
u16 freq_r3A_value(u16 frequency)
void b43legacy_radio_set_tx_iq(struct b43legacy_wldev *dev)
int b43legacy_radio_selectchannel(struct b43legacy_wldev *dev,
u8 channel,
int synthetic_pu_workaround)
void b43legacy_radio_set_txantenna(struct b43legacy_wldev *dev, u32 val)
}
void b43legacy_radio_set_txpower_bg(struct b43legacy_wldev *dev,
u16 baseband_attenuation,
u16 radio_attenuation,
u16 txpower)
u16 b43legacy_default_baseband_attenuation(struct b43legacy_wldev *dev)
u16 b43legacy_default_radio_attenuation(struct b43legacy_wldev *dev)
u16 b43legacy_default_txctl1(struct b43legacy_wldev *dev)
void b43legacy_radio_turn_on(struct b43legacy_wldev *dev)
void b43legacy_radio_turn_off(struct b43legacy_wldev *dev, bool force)
void b43legacy_radio_clear_tssi(struct b43legacy_wldev *dev)
