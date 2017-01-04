#define LINUX_B43_PHY_COMMON_H_
struct b43_wldev;
struct b43_c32 ;
#define CORDIC_CONVERT(value)	(((value) >= 0) ? \
((((value) >> 15) + 1) >> 1) : \
-((((-(value)) >> 15) + 1) >> 1))
#define B43_PHYROUTE			0x0C00
#define  B43_PHYROUTE_BASE		0x0000
#define  B43_PHYROUTE_OFDM_GPHY		0x0400
#define  B43_PHYROUTE_EXT_GPHY		0x0800
#define  B43_PHYROUTE_N_BMODE		0x0C00
#define B43_PHY_CCK(reg)		((reg) | B43_PHYROUTE_BASE)
#define B43_PHY_N(reg)			((reg) | B43_PHYROUTE_BASE)
#define B43_PHY_N_BMODE(reg)		((reg) | B43_PHYROUTE_N_BMODE)
#define B43_PHY_OFDM(reg)		((reg) | B43_PHYROUTE_OFDM_GPHY)
#define B43_PHY_EXTG(reg)		((reg) | B43_PHYROUTE_EXT_GPHY)
#define B43_PHYVER_ANALOG		0xF000
#define B43_PHYVER_ANALOG_SHIFT		12
#define B43_PHYVER_TYPE			0x0F00
#define B43_PHYVER_TYPE_SHIFT		8
#define B43_PHYVER_VERSION		0x00FF
#define B43_MAX_WRITES_IN_ROW		24
enum b43_interference_mitigation ;
enum ;
enum b43_txpwr_result ;
struct b43_phy_operations ;
struct b43_phy_a;
struct b43_phy_g;
struct b43_phy_n;
struct b43_phy_lp;
struct b43_phy {
const struct b43_phy_operations *ops;
struct ;
int b43_phy_allocate(struct b43_wldev *dev);
void b43_phy_free(struct b43_wldev *dev);
int b43_phy_init(struct b43_wldev *dev);
void b43_phy_exit(struct b43_wldev *dev);
bool b43_has_hardware_pctl(struct b43_wldev *dev);
u16 b43_phy_read(struct b43_wldev *dev, u16 reg);
void b43_phy_write(struct b43_wldev *dev, u16 reg, u16 value);
void b43_phy_copy(struct b43_wldev *dev, u16 destreg, u16 srcreg);
void b43_phy_mask(struct b43_wldev *dev, u16 offset, u16 mask);
void b43_phy_set(struct b43_wldev *dev, u16 offset, u16 set);
void b43_phy_maskset(struct b43_wldev *dev, u16 offset, u16 mask, u16 set);
u16 b43_radio_read(struct b43_wldev *dev, u16 reg);
#define b43_radio_read16	b43_radio_read
void b43_radio_write(struct b43_wldev *dev, u16 reg, u16 value);
#define b43_radio_write16	b43_radio_write
void b43_radio_mask(struct b43_wldev *dev, u16 offset, u16 mask);
void b43_radio_set(struct b43_wldev *dev, u16 offset, u16 set);
void b43_radio_maskset(struct b43_wldev *dev, u16 offset, u16 mask, u16 set);
void b43_radio_lock(struct b43_wldev *dev);
void b43_radio_unlock(struct b43_wldev *dev);
void b43_phy_lock(struct b43_wldev *dev);
void b43_phy_unlock(struct b43_wldev *dev);
int b43_switch_channel(struct b43_wldev *dev, unsigned int new_channel);
#define B43_DEFAULT_CHANNEL	UINT_MAX
void b43_software_rfkill(struct b43_wldev *dev, bool blocked);
void b43_phy_txpower_check(struct b43_wldev *dev, unsigned int flags);
enum b43_phy_txpower_check_flags ;
struct work_struct;
void b43_phy_txpower_adjust_work(struct work_struct *work);
int b43_phy_shm_tssi_read(struct b43_wldev *dev, u16 shm_offset);
void b43_phyop_switch_analog_generic(struct b43_wldev *dev, bool on);
bool b43_channel_type_is_40mhz(enum nl80211_channel_type channel_type);
struct b43_c32 b43_cordic(int theta);
