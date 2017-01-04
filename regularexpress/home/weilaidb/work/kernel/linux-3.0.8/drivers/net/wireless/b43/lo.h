#define B43_LO_H_
struct b43_wldev;
struct b43_loctl ;
#define B43_LOCTL_POISON	111
struct b43_lo_calib ;
#define B43_DC_LT_SIZE		32
struct b43_txpower_lo_control ;
#define B43_LO_CALIB_EXPIRE	(HZ * (30 - 2))
#define B43_LO_PWRVEC_EXPIRE	(HZ * (30 - 2))
#define B43_LO_TXCTL_EXPIRE	(HZ * (180 - 4))
void b43_lo_g_adjust(struct b43_wldev *dev);
void b43_lo_g_adjust_to(struct b43_wldev *dev,
u16 rfatt, u16 bbatt, u16 tx_control);
void b43_gphy_dc_lt_init(struct b43_wldev *dev, bool update_all);
void b43_lo_g_maintanance_work(struct b43_wldev *dev);
void b43_lo_g_cleanup(struct b43_wldev *dev);
void b43_lo_g_init(struct b43_wldev *dev);
