#define	TIMER_INTERVAL_WATCHDOG_BMAC	1000
#define	SYNTHPU_DLY_APHY_US	3700
#define	SYNTHPU_DLY_BPHY_US	1050
#define	SYNTHPU_DLY_NPHY_US	2048
#define	SYNTHPU_DLY_LPPHY_US	300
#define	SYNTHPU_DLY_PHY_US_QT	100
#define WLC_RM_WAIT_TX_SUSPEND		4
#define	ANTCNT			10
#define DMAREG(wlc_hw, direction, fifonum) \
((direction == DMA_TX) ? \
(void *)&(wlc_hw->regs->fifo64regs[fifonum].dmaxmt) : \
(void *)&(wlc_hw->regs->fifo64regs[fifonum].dmarcv))
#define XMTFIFOTBL_STARTREV	20
static u16 xmtfifo_sz[][NFIFO] = ;
static void wlc_clkctl_clk(struct wlc_hw_info *wlc, uint mode);
static void wlc_coreinit(struct wlc_info *wlc);
static void wlc_write_inits(struct wlc_hw_info *wlc_hw,
const struct d11init *inits);
static void wlc_ucode_write(struct wlc_hw_info *wlc_hw, const u32 ucode[],
const uint nbytes);
static void wlc_ucode_download(struct wlc_hw_info *wlc);
static void wlc_ucode_txant_set(struct wlc_hw_info *wlc_hw);
static bool wlc_bmac_dotxstatus(struct wlc_hw_info *wlc, tx_status_t *txs,
u32 s2);
static bool wlc_bmac_txstatus(struct wlc_hw_info *wlc, bool bound, bool *fatal);
static bool wlc_bmac_recv(struct wlc_hw_info *wlc_hw, uint fifo, bool bound);
static void wlc_flushqueues(struct wlc_info *wlc);
static void wlc_write_mhf(struct wlc_hw_info *wlc_hw, u16 *mhfs);
static void wlc_mctrl_reset(struct wlc_hw_info *wlc_hw);
static void wlc_corerev_fifofixup(struct wlc_hw_info *wlc_hw);
static bool wlc_bmac_tx_fifo_suspended(struct wlc_hw_info *wlc_hw,
uint tx_fifo);
static void wlc_bmac_tx_fifo_suspend(struct wlc_hw_info *wlc_hw, uint tx_fifo);
static void wlc_bmac_tx_fifo_resume(struct wlc_hw_info *wlc_hw, uint tx_fifo);
static int wlc_bmac_bandtype(struct wlc_hw_info *wlc_hw);
static void wlc_bmac_info_init(struct wlc_hw_info *wlc_hw);
static void wlc_bmac_xtal(struct wlc_hw_info *wlc_hw, bool want);
static u16 wlc_bmac_read_objmem(struct wlc_hw_info *wlc_hw, uint offset,
u32 sel);
static void wlc_bmac_write_objmem(struct wlc_hw_info *wlc_hw, uint offset,
u16 v, u32 sel);
static void wlc_bmac_core_phy_clk(struct wlc_hw_info *wlc_hw, bool clk);
static bool wlc_bmac_attach_dmapio(struct wlc_info *wlc, uint j, bool wme);
static void wlc_bmac_detach_dmapio(struct wlc_hw_info *wlc_hw);
static void wlc_ucode_bsinit(struct wlc_hw_info *wlc_hw);
static bool wlc_validboardtype(struct wlc_hw_info *wlc);
static bool wlc_isgoodchip(struct wlc_hw_info *wlc_hw);
static bool wlc_bmac_validate_chip_access(struct wlc_hw_info *wlc_hw);
static char *wlc_get_macaddr(struct wlc_hw_info *wlc_hw);
static void wlc_mhfdef(struct wlc_info *wlc, u16 *mhfs, u16 mhf2_init);
static void wlc_mctrl_write(struct wlc_hw_info *wlc_hw);
static void wlc_bmac_mute(struct wlc_hw_info *wlc_hw, bool want, mbool flags);
static void wlc_ucode_mute_override_set(struct wlc_hw_info *wlc_hw);
static void wlc_ucode_mute_override_clear(struct wlc_hw_info *wlc_hw);
static u32 wlc_wlintrsoff(struct wlc_info *wlc);
static void wlc_wlintrsrestore(struct wlc_info *wlc, u32 macintmask);
static void wlc_gpio_init(struct wlc_info *wlc);
static void wlc_write_hw_bcntemplate0(struct wlc_hw_info *wlc_hw, void *bcn,
int len);
static void wlc_write_hw_bcntemplate1(struct wlc_hw_info *wlc_hw, void *bcn,
int len);
static void wlc_bmac_bsinit(struct wlc_info *wlc, chanspec_t chanspec);
static u32 wlc_setband_inact(struct wlc_info *wlc, uint bandunit);
static void wlc_bmac_setband(struct wlc_hw_info *wlc_hw, uint bandunit,
chanspec_t chanspec);
static void wlc_bmac_update_slot_timing(struct wlc_hw_info *wlc_hw,
bool shortslot);
static void wlc_upd_ofdm_pctl1_table(struct wlc_hw_info *wlc_hw);
static u16 wlc_bmac_ofdm_ratetable_offset(struct wlc_hw_info *wlc_hw,
u8 rate);
void wlc_bmac_set_shortslot(struct wlc_hw_info *wlc_hw, bool shortslot)
static void wlc_bmac_update_slot_timing(struct wlc_hw_info *wlc_hw,
bool shortslot)
static void WLBANDINITFN(wlc_ucode_bsinit) (struct wlc_hw_info *wlc_hw)
static u32 WLBANDINITFN(wlc_setband_inact) (struct wlc_info *wlc, uint bandunit)
static bool
wlc_bmac_recv(struct wlc_hw_info *wlc_hw, uint fifo, bool bound)
bool wlc_dpc(struct wlc_info *wlc, bool bounded)
void wlc_bmac_watchdog(void *arg)
void
wlc_bmac_set_chanspec(struct wlc_hw_info *wlc_hw, chanspec_t chanspec,
bool mute, struct txpwr_limits *txpwr)
int wlc_bmac_state_get(struct wlc_hw_info *wlc_hw, wlc_bmac_state_t *state)
static bool wlc_bmac_attach_dmapio(struct wlc_info *wlc, uint j, bool wme)
static void wlc_bmac_detach_dmapio(struct wlc_hw_info *wlc_hw)
int wlc_bmac_attach(struct wlc_info *wlc, u16 vendor, u16 device, uint unit,
bool piomode, void *regsva, uint bustype, void *btparam)
static void wlc_bmac_info_init(struct wlc_hw_info *wlc_hw)
int wlc_bmac_detach(struct wlc_info *wlc)
void wlc_bmac_reset(struct wlc_hw_info *wlc_hw)
void
wlc_bmac_init(struct wlc_hw_info *wlc_hw, chanspec_t chanspec,
bool mute)
int wlc_bmac_up_prep(struct wlc_hw_info *wlc_hw)
int wlc_bmac_up_finish(struct wlc_hw_info *wlc_hw)
int wlc_bmac_down_prep(struct wlc_hw_info *wlc_hw)
int wlc_bmac_down_finish(struct wlc_hw_info *wlc_hw)
void wlc_bmac_wait_for_wake(struct wlc_hw_info *wlc_hw)
void wlc_bmac_hw_etheraddr(struct wlc_hw_info *wlc_hw, u8 *ea)
static int wlc_bmac_bandtype(struct wlc_hw_info *wlc_hw)
static void wlc_clkctl_clk(struct wlc_hw_info *wlc_hw, uint mode)
static void
wlc_mhfdef(struct wlc_info *wlc, u16 *mhfs, u16 mhf2_init)
void
wlc_bmac_mhf(struct wlc_hw_info *wlc_hw, u8 idx, u16 mask, u16 val,
int bands)
u16 wlc_bmac_mhf_get(struct wlc_hw_info *wlc_hw, u8 idx, int bands)
static void wlc_write_mhf(struct wlc_hw_info *wlc_hw, u16 *mhfs)
static void wlc_mctrl_reset(struct wlc_hw_info *wlc_hw)
void wlc_bmac_mctrl(struct wlc_hw_info *wlc_hw, u32 mask, u32 val)
static void wlc_mctrl_write(struct wlc_hw_info *wlc_hw)
void wlc_ucode_wake_override_set(struct wlc_hw_info *wlc_hw, u32 override_bit)
void wlc_ucode_wake_override_clear(struct wlc_hw_info *wlc_hw, u32 override_bit)
static void wlc_ucode_mute_override_set(struct wlc_hw_info *wlc_hw)
static void wlc_ucode_mute_override_clear(struct wlc_hw_info *wlc_hw)
void
wlc_bmac_set_addrmatch(struct wlc_hw_info *wlc_hw, int match_reg_offset,
const u8 *addr)
void
wlc_bmac_write_template_ram(struct wlc_hw_info *wlc_hw, int offset, int len,
void *buf)
void wlc_bmac_set_cwmin(struct wlc_hw_info *wlc_hw, u16 newmin)
void wlc_bmac_set_cwmax(struct wlc_hw_info *wlc_hw, u16 newmax)
void wlc_bmac_bw_set(struct wlc_hw_info *wlc_hw, u16 bw)
static void
wlc_write_hw_bcntemplate0(struct wlc_hw_info *wlc_hw, void *bcn, int len)
static void
wlc_write_hw_bcntemplate1(struct wlc_hw_info *wlc_hw, void *bcn, int len)
void
wlc_bmac_write_hw_bcntemplates(struct wlc_hw_info *wlc_hw, void *bcn, int len,
bool both)
static void WLBANDINITFN(wlc_bmac_upd_synthpu) (struct wlc_hw_info *wlc_hw)
static void
WLBANDINITFN(wlc_bmac_bsinit) (struct wlc_info *wlc, chanspec_t chanspec)
static void wlc_bmac_core_phy_clk(struct wlc_hw_info *wlc_hw, bool clk)
void wlc_bmac_core_phypll_reset(struct wlc_hw_info *wlc_hw)
void wlc_bmac_phyclk_fgc(struct wlc_hw_info *wlc_hw, bool clk)
void wlc_bmac_macphyclk_set(struct wlc_hw_info *wlc_hw, bool clk)
void wlc_bmac_phy_reset(struct wlc_hw_info *wlc_hw)
static void
WLBANDINITFN(wlc_bmac_setband) (struct wlc_hw_info *wlc_hw, uint bandunit,
chanspec_t chanspec)
void WLBANDINITFN(wlc_setxband) (struct wlc_hw_info *wlc_hw, uint bandunit)
static bool wlc_isgoodchip(struct wlc_hw_info *wlc_hw)
static bool wlc_validboardtype(struct wlc_hw_info *wlc_hw)
static char *wlc_get_macaddr(struct wlc_hw_info *wlc_hw)
bool wlc_bmac_radio_read_hwdisabled(struct wlc_hw_info *wlc_hw)
void wlc_bmac_hw_up(struct wlc_hw_info *wlc_hw)
static bool wlc_dma_rxreset(struct wlc_hw_info *wlc_hw, uint fifo)
void wlc_bmac_corereset(struct wlc_hw_info *wlc_hw, u32 flags)
static void wlc_corerev_fifofixup(struct wlc_hw_info *wlc_hw)
static void wlc_coreinit(struct wlc_info *wlc)
void wlc_bmac_switch_macfreq(struct wlc_hw_info *wlc_hw, u8 spurmode)
static void wlc_gpio_init(struct wlc_info *wlc)
static void wlc_ucode_download(struct wlc_hw_info *wlc_hw)
static void wlc_ucode_write(struct wlc_hw_info *wlc_hw, const u32 ucode[],
const uint nbytes)
static void wlc_write_inits(struct wlc_hw_info *wlc_hw,
const struct d11init *inits)
static void wlc_ucode_txant_set(struct wlc_hw_info *wlc_hw)
void wlc_bmac_txant_set(struct wlc_hw_info *wlc_hw, u16 phytxant)
u16 wlc_bmac_get_txant(struct wlc_hw_info *wlc_hw)
void wlc_bmac_antsel_type_set(struct wlc_hw_info *wlc_hw, u8 antsel_type)
void wlc_bmac_fifoerrors(struct wlc_hw_info *wlc_hw)
void wlc_intrson(struct wlc_info *wlc)
static u32 wlc_wlintrsoff(struct wlc_info *wlc)
static void wlc_wlintrsrestore(struct wlc_info *wlc, u32 macintmask)
u32 wlc_intrsoff(struct wlc_info *wlc)
void wlc_intrsrestore(struct wlc_info *wlc, u32 macintmask)
static void wlc_bmac_mute(struct wlc_hw_info *wlc_hw, bool on, mbool flags)
int wlc_bmac_xmtfifo_sz_get(struct wlc_hw_info *wlc_hw, uint fifo, uint *blocks)
static bool wlc_bmac_tx_fifo_suspended(struct wlc_hw_info *wlc_hw, uint tx_fifo)
static void wlc_bmac_tx_fifo_suspend(struct wlc_hw_info *wlc_hw, uint tx_fifo)
static void wlc_bmac_tx_fifo_resume(struct wlc_hw_info *wlc_hw, uint tx_fifo)
static inline u32 wlc_intstatus(struct wlc_info *wlc, bool in_isr)
bool wlc_intrsupd(struct wlc_info *wlc)
bool wlc_isr(struct wlc_info *wlc, bool *wantdpc)
static bool
wlc_bmac_dotxstatus(struct wlc_hw_info *wlc_hw, tx_status_t *txs, u32 s2)
static bool
wlc_bmac_txstatus(struct wlc_hw_info *wlc_hw, bool bound, bool *fatal)
void wlc_suspend_mac_and_wait(struct wlc_info *wlc)
void wlc_enable_mac(struct wlc_info *wlc)
static void wlc_upd_ofdm_pctl1_table(struct wlc_hw_info *wlc_hw)
static u16 wlc_bmac_ofdm_ratetable_offset(struct wlc_hw_info *wlc_hw, u8 rate)
void wlc_bmac_band_stf_ss_set(struct wlc_hw_info *wlc_hw, u8 stf_mode)
void
wlc_bmac_read_tsf(struct wlc_hw_info *wlc_hw, u32 *tsf_l_ptr,
u32 *tsf_h_ptr)
static bool wlc_bmac_validate_chip_access(struct wlc_hw_info *wlc_hw)
#define PHYPLL_WAIT_US	100000
void wlc_bmac_core_phypll_ctl(struct wlc_hw_info *wlc_hw, bool on)
void wlc_coredisable(struct wlc_hw_info *wlc_hw)
static void wlc_bmac_xtal(struct wlc_hw_info *wlc_hw, bool want)
static void wlc_flushqueues(struct wlc_info *wlc)
u16 wlc_bmac_read_shm(struct wlc_hw_info *wlc_hw, uint offset)
void wlc_bmac_write_shm(struct wlc_hw_info *wlc_hw, uint offset, u16 v)
static u16
wlc_bmac_read_objmem(struct wlc_hw_info *wlc_hw, uint offset, u32 sel)
static void
wlc_bmac_write_objmem(struct wlc_hw_info *wlc_hw, uint offset, u16 v, u32 sel)
void
wlc_bmac_copyto_objmem(struct wlc_hw_info *wlc_hw, uint offset, const void *buf,
int len, u32 sel)
void
wlc_bmac_copyfrom_objmem(struct wlc_hw_info *wlc_hw, uint offset, void *buf,
int len, u32 sel)
void wlc_bmac_copyfrom_vars(struct wlc_hw_info *wlc_hw, char **buf, uint *len)
void wlc_bmac_retrylimit_upd(struct wlc_hw_info *wlc_hw, u16 SRL, u16 LRL)
void wlc_bmac_pllreq(struct wlc_hw_info *wlc_hw, bool set, mbool req_bit)
u16 wlc_bmac_rate_shm_offset(struct wlc_hw_info *wlc_hw, u8 rate)
void wlc_bmac_antsel_set(struct wlc_hw_info *wlc_hw, u32 antsel_avail)
