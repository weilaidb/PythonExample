struct wlc_phy_shim_info ;
wlc_phy_shim_info_t *wlc_phy_shim_attach(struct wlc_hw_info *wlc_hw,
void *wl, void *wlc)
void wlc_phy_shim_detach(wlc_phy_shim_info_t *physhim)
struct wlapi_timer *wlapi_init_timer(wlc_phy_shim_info_t *physhim,
void (*fn) (void *arg), void *arg,
const char *name)
void wlapi_free_timer(wlc_phy_shim_info_t *physhim, struct wlapi_timer *t)
void
wlapi_add_timer(wlc_phy_shim_info_t *physhim, struct wlapi_timer *t, uint ms,
int periodic)
bool wlapi_del_timer(wlc_phy_shim_info_t *physhim, struct wlapi_timer *t)
void wlapi_intrson(wlc_phy_shim_info_t *physhim)
u32 wlapi_intrsoff(wlc_phy_shim_info_t *physhim)
void wlapi_intrsrestore(wlc_phy_shim_info_t *physhim, u32 macintmask)
void wlapi_bmac_write_shm(wlc_phy_shim_info_t *physhim, uint offset, u16 v)
u16 wlapi_bmac_read_shm(wlc_phy_shim_info_t *physhim, uint offset)
void
wlapi_bmac_mhf(wlc_phy_shim_info_t *physhim, u8 idx, u16 mask,
u16 val, int bands)
void wlapi_bmac_corereset(wlc_phy_shim_info_t *physhim, u32 flags)
void wlapi_suspend_mac_and_wait(wlc_phy_shim_info_t *physhim)
void wlapi_switch_macfreq(wlc_phy_shim_info_t *physhim, u8 spurmode)
void wlapi_enable_mac(wlc_phy_shim_info_t *physhim)
void wlapi_bmac_mctrl(wlc_phy_shim_info_t *physhim, u32 mask, u32 val)
void wlapi_bmac_phy_reset(wlc_phy_shim_info_t *physhim)
void wlapi_bmac_bw_set(wlc_phy_shim_info_t *physhim, u16 bw)
u16 wlapi_bmac_get_txant(wlc_phy_shim_info_t *physhim)
void wlapi_bmac_phyclk_fgc(wlc_phy_shim_info_t *physhim, bool clk)
void wlapi_bmac_macphyclk_set(wlc_phy_shim_info_t *physhim, bool clk)
void wlapi_bmac_core_phypll_ctl(wlc_phy_shim_info_t *physhim, bool on)
void wlapi_bmac_core_phypll_reset(wlc_phy_shim_info_t *physhim)
void wlapi_bmac_ucode_wake_override_phyreg_set(wlc_phy_shim_info_t *physhim)
void wlapi_bmac_ucode_wake_override_phyreg_clear(wlc_phy_shim_info_t *physhim)
void
wlapi_bmac_write_template_ram(wlc_phy_shim_info_t *physhim, int offset,
int len, void *buf)
u16 wlapi_bmac_rate_shm_offset(wlc_phy_shim_info_t *physhim, u8 rate)
void wlapi_ucode_sample_init(wlc_phy_shim_info_t *physhim)
void
wlapi_copyfrom_objmem(wlc_phy_shim_info_t *physhim, uint offset, void *buf,
int len, u32 sel)
void
wlapi_copyto_objmem(wlc_phy_shim_info_t *physhim, uint offset, const void *buf,
int l, u32 sel)
