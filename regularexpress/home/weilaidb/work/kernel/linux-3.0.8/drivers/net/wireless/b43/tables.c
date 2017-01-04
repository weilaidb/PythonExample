const u32 b43_tab_rotor[] = ;
const u32 b43_tab_retard[] = ;
const u16 b43_tab_finefreqa[] = ;
const u16 b43_tab_finefreqg[] = ;
const u16 b43_tab_noisea2[] = ;
const u16 b43_tab_noisea3[] = ;
const u16 b43_tab_noiseg1[] = ;
const u16 b43_tab_noiseg2[] = ;
const u16 b43_tab_noisescalea2[] = ;
const u16 b43_tab_noisescalea3[] = ;
const u16 b43_tab_noisescaleg1[] = ;
const u16 b43_tab_noisescaleg2[] = ;
const u16 b43_tab_noisescaleg3[] = ;
const u16 b43_tab_sigmasqr1[] = ;
const u16 b43_tab_sigmasqr2[] = ;
const u16 b43_tab_rssiagc1[] = ;
const u16 b43_tab_rssiagc2[] = ;
static inline void assert_sizes(void)
u16 b43_ofdmtab_read16(struct b43_wldev *dev, u16 table, u16 offset)
void b43_ofdmtab_write16(struct b43_wldev *dev, u16 table,
u16 offset, u16 value)
u32 b43_ofdmtab_read32(struct b43_wldev *dev, u16 table, u16 offset)
void b43_ofdmtab_write32(struct b43_wldev *dev, u16 table,
u16 offset, u32 value)
u16 b43_gtab_read(struct b43_wldev *dev, u16 table, u16 offset)
void b43_gtab_write(struct b43_wldev *dev, u16 table, u16 offset, u16 value)
