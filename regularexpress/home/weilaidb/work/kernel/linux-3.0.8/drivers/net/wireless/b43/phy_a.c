static inline u16 channel2freq_a(u8 channel)
static inline u16 freq_r3A_value(u16 frequency)
static void b43_radio_set_tx_iq(struct b43_wldev *dev)
static void aphy_channel_switch(struct b43_wldev *dev, unsigned int channel)
static void b43_radio_init2060(struct b43_wldev *dev)
static void b43_phy_rssiagc(struct b43_wldev *dev, u8 enable)
static void b43_phy_ww(struct b43_wldev *dev)
static void hardware_pctl_init_aphy(struct b43_wldev *dev)
void b43_phy_inita(struct b43_wldev *dev)
static int b43_aphy_init_tssi2dbm_table(struct b43_wldev *dev)
static int b43_aphy_op_allocate(struct b43_wldev *dev)
static void b43_aphy_op_prepare_structs(struct b43_wldev *dev)
static void b43_aphy_op_free(struct b43_wldev *dev)
static int b43_aphy_op_init(struct b43_wldev *dev)
static inline u16 adjust_phyreg(struct b43_wldev *dev, u16 offset)
static u16 b43_aphy_op_read(struct b43_wldev *dev, u16 reg)
static void b43_aphy_op_write(struct b43_wldev *dev, u16 reg, u16 value)
static u16 b43_aphy_op_radio_read(struct b43_wldev *dev, u16 reg)
static void b43_aphy_op_radio_write(struct b43_wldev *dev, u16 reg, u16 value)
static bool b43_aphy_op_supports_hwpctl(struct b43_wldev *dev)
static void b43_aphy_op_software_rfkill(struct b43_wldev *dev,
bool blocked)
static int b43_aphy_op_switch_channel(struct b43_wldev *dev,
unsigned int new_channel)
static unsigned int b43_aphy_op_get_default_chan(struct b43_wldev *dev)
static void b43_aphy_op_set_rx_antenna(struct b43_wldev *dev, int antenna)
static void b43_aphy_op_adjust_txpower(struct b43_wldev *dev)
static enum b43_txpwr_result b43_aphy_op_recalc_txpower(struct b43_wldev *dev,
bool ignore_tssi)
static void b43_aphy_op_pwork_15sec(struct b43_wldev *dev)
static void b43_aphy_op_pwork_60sec(struct b43_wldev *dev)
const struct b43_phy_operations b43_phyops_a = ;