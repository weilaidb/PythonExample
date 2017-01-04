#define B43_MAIN_H_
#define P4D_BYT3S(magic, nr_bytes)	u8 __p4dding##magic[nr_bytes]
#define P4D_BYTES(line, nr_bytes)	P4D_BYT3S(line, nr_bytes)
#define PAD_BYTES(nr_bytes)		P4D_BYTES( __LINE__ , (nr_bytes))
extern int b43_modparam_verbose;
enum b43_verbosity ;
static inline u8 b43_freq_to_channel_5ghz(int freq)
static inline u8 b43_freq_to_channel_2ghz(int freq)
static inline int b43_channel_to_freq_5ghz(u8 channel)
static inline int b43_channel_to_freq_2ghz(u8 channel)
static inline int b43_is_cck_rate(int rate)
static inline int b43_is_ofdm_rate(int rate)
u8 b43_ieee80211_antenna_sanitize(struct b43_wldev *dev,
u8 antenna_nr);
void b43_tsf_read(struct b43_wldev *dev, u64 * tsf);
void b43_tsf_write(struct b43_wldev *dev, u64 tsf);
u32 b43_shm_read32(struct b43_wldev *dev, u16 routing, u16 offset);
u16 b43_shm_read16(struct b43_wldev *dev, u16 routing, u16 offset);
void b43_shm_write32(struct b43_wldev *dev, u16 routing, u16 offset, u32 value);
void b43_shm_write16(struct b43_wldev *dev, u16 routing, u16 offset, u16 value);
u64 b43_hf_read(struct b43_wldev *dev);
void b43_hf_write(struct b43_wldev *dev, u64 value);
void b43_dummy_transmission(struct b43_wldev *dev, bool ofdm, bool pa_on);
void b43_wireless_core_reset(struct b43_wldev *dev, u32 flags);
void b43_controller_restart(struct b43_wldev *dev, const char *reason);
#define B43_PS_ENABLED	(1 << 0)
#define B43_PS_DISABLED	(1 << 1)
#define B43_PS_AWAKE	(1 << 2)
#define B43_PS_ASLEEP	(1 << 3)
void b43_power_saving_ctl_bits(struct b43_wldev *dev, unsigned int ps_flags);
void b43_mac_suspend(struct b43_wldev *dev);
void b43_mac_enable(struct b43_wldev *dev);
void b43_mac_phy_clock_set(struct b43_wldev *dev, bool on);
struct b43_request_fw_context;
int b43_do_request_fw(struct b43_request_fw_context *ctx,
const char *name,
struct b43_firmware_file *fw);
void b43_do_release_fw(struct b43_firmware_file *fw);
