#define _wlc_bmac_h_
typedef struct wlc_bmac_state  wlc_bmac_state_t;
enum ;
extern int wlc_bmac_attach(struct wlc_info *wlc, u16 vendor, u16 device,
uint unit, bool piomode, void *regsva, uint bustype,
void *btparam);
extern int wlc_bmac_detach(struct wlc_info *wlc);
extern void wlc_bmac_watchdog(void *arg);
extern void wlc_bmac_copyto_objmem(struct wlc_hw_info *wlc_hw,
uint offset, const void *buf, int len,
u32 sel);
extern void wlc_bmac_copyfrom_objmem(struct wlc_hw_info *wlc_hw, uint offset,
void *buf, int len, u32 sel);
#define wlc_bmac_copyfrom_shm(wlc_hw, offset, buf, len)                 \
wlc_bmac_copyfrom_objmem(wlc_hw, offset, buf, len, OBJADDR_SHM_SEL)
#define wlc_bmac_copyto_shm(wlc_hw, offset, buf, len)                   \
wlc_bmac_copyto_objmem(wlc_hw, offset, buf, len, OBJADDR_SHM_SEL)
extern void wlc_bmac_core_phypll_reset(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_core_phypll_ctl(struct wlc_hw_info *wlc_hw, bool on);
extern void wlc_bmac_phyclk_fgc(struct wlc_hw_info *wlc_hw, bool clk);
extern void wlc_bmac_macphyclk_set(struct wlc_hw_info *wlc_hw, bool clk);
extern void wlc_bmac_phy_reset(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_corereset(struct wlc_hw_info *wlc_hw, u32 flags);
extern void wlc_bmac_reset(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_init(struct wlc_hw_info *wlc_hw, chanspec_t chanspec,
bool mute);
extern int wlc_bmac_up_prep(struct wlc_hw_info *wlc_hw);
extern int wlc_bmac_up_finish(struct wlc_hw_info *wlc_hw);
extern int wlc_bmac_down_prep(struct wlc_hw_info *wlc_hw);
extern int wlc_bmac_down_finish(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_switch_macfreq(struct wlc_hw_info *wlc_hw, u8 spurmode);
extern void wlc_bmac_set_chanspec(struct wlc_hw_info *wlc_hw,
chanspec_t chanspec,
bool mute, struct txpwr_limits *txpwr);
extern int wlc_bmac_xmtfifo_sz_get(struct wlc_hw_info *wlc_hw, uint fifo,
uint *blocks);
extern void wlc_bmac_mhf(struct wlc_hw_info *wlc_hw, u8 idx, u16 mask,
u16 val, int bands);
extern void wlc_bmac_mctrl(struct wlc_hw_info *wlc_hw, u32 mask, u32 val);
extern u16 wlc_bmac_mhf_get(struct wlc_hw_info *wlc_hw, u8 idx, int bands);
extern void wlc_bmac_txant_set(struct wlc_hw_info *wlc_hw, u16 phytxant);
extern u16 wlc_bmac_get_txant(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_antsel_type_set(struct wlc_hw_info *wlc_hw,
u8 antsel_type);
extern int wlc_bmac_state_get(struct wlc_hw_info *wlc_hw,
wlc_bmac_state_t *state);
extern void wlc_bmac_write_shm(struct wlc_hw_info *wlc_hw, uint offset, u16 v);
extern u16 wlc_bmac_read_shm(struct wlc_hw_info *wlc_hw, uint offset);
extern void wlc_bmac_write_template_ram(struct wlc_hw_info *wlc_hw, int offset,
int len, void *buf);
extern void wlc_bmac_copyfrom_vars(struct wlc_hw_info *wlc_hw, char **buf,
uint *len);
extern void wlc_bmac_hw_etheraddr(struct wlc_hw_info *wlc_hw,
u8 *ea);
extern bool wlc_bmac_radio_read_hwdisabled(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_set_shortslot(struct wlc_hw_info *wlc_hw, bool shortslot);
extern void wlc_bmac_band_stf_ss_set(struct wlc_hw_info *wlc_hw, u8 stf_mode);
extern void wlc_bmac_wait_for_wake(struct wlc_hw_info *wlc_hw);
extern void wlc_ucode_wake_override_set(struct wlc_hw_info *wlc_hw,
u32 override_bit);
extern void wlc_ucode_wake_override_clear(struct wlc_hw_info *wlc_hw,
u32 override_bit);
extern void wlc_bmac_set_addrmatch(struct wlc_hw_info *wlc_hw,
int match_reg_offset,
const u8 *addr);
extern void wlc_bmac_write_hw_bcntemplates(struct wlc_hw_info *wlc_hw,
void *bcn, int len, bool both);
extern void wlc_bmac_read_tsf(struct wlc_hw_info *wlc_hw, u32 *tsf_l_ptr,
u32 *tsf_h_ptr);
extern void wlc_bmac_set_cwmin(struct wlc_hw_info *wlc_hw, u16 newmin);
extern void wlc_bmac_set_cwmax(struct wlc_hw_info *wlc_hw, u16 newmax);
extern void wlc_bmac_retrylimit_upd(struct wlc_hw_info *wlc_hw, u16 SRL,
u16 LRL);
extern void wlc_bmac_fifoerrors(struct wlc_hw_info *wlc_hw);
extern void wlc_bmac_bw_set(struct wlc_hw_info *wlc_hw, u16 bw);
extern void wlc_bmac_pllreq(struct wlc_hw_info *wlc_hw, bool set,
mbool req_bit);
extern void wlc_bmac_hw_up(struct wlc_hw_info *wlc_hw);
extern u16 wlc_bmac_rate_shm_offset(struct wlc_hw_info *wlc_hw, u8 rate);
extern void wlc_bmac_antsel_set(struct wlc_hw_info *wlc_hw, u32 antsel_avail);
