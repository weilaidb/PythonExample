#define B43legacy_MAIN_H_
#define P4D_BYT3S(magic, nr_bytes)	u8 __p4dding##magic[nr_bytes]
#define P4D_BYTES(line, nr_bytes)	P4D_BYT3S(line, nr_bytes)
#define PAD_BYTES(nr_bytes)		P4D_BYTES(__LINE__ , (nr_bytes))
static inline
u8 b43legacy_freq_to_channel_bg(int freq)
static inline
u8 b43legacy_freq_to_channel(struct b43legacy_wldev *dev,
int freq)
static inline
int b43legacy_channel_to_freq_bg(u8 channel)
static inline
int b43legacy_channel_to_freq(struct b43legacy_wldev *dev,
u8 channel)
static inline
int b43legacy_is_cck_rate(int rate)
static inline
int b43legacy_is_ofdm_rate(int rate)
void b43legacy_tsf_read(struct b43legacy_wldev *dev, u64 *tsf);
void b43legacy_tsf_write(struct b43legacy_wldev *dev, u64 tsf);
u32 b43legacy_shm_read32(struct b43legacy_wldev *dev,
u16 routing, u16 offset);
u16 b43legacy_shm_read16(struct b43legacy_wldev *dev,
u16 routing, u16 offset);
void b43legacy_shm_write32(struct b43legacy_wldev *dev,
u16 routing, u16 offset,
u32 value);
void b43legacy_shm_write16(struct b43legacy_wldev *dev,
u16 routing, u16 offset,
u16 value);
u32 b43legacy_hf_read(struct b43legacy_wldev *dev);
void b43legacy_hf_write(struct b43legacy_wldev *dev, u32 value);
void b43legacy_dummy_transmission(struct b43legacy_wldev *dev);
void b43legacy_wireless_core_reset(struct b43legacy_wldev *dev, u32 flags);
void b43legacy_mac_suspend(struct b43legacy_wldev *dev);
void b43legacy_mac_enable(struct b43legacy_wldev *dev);
void b43legacy_controller_restart(struct b43legacy_wldev *dev,
const char *reason);
