#define RSN_CAP_4_REPLAY_CNTRS		2
#define RSN_CAP_16_REPLAY_CNTRS		3
#define WPA_CAP_4_REPLAY_CNTRS		RSN_CAP_4_REPLAY_CNTRS
#define WPA_CAP_16_REPLAY_CNTRS		RSN_CAP_16_REPLAY_CNTRS
#define ALLPRIO		-1
#define SSID_FMT_BUF_LEN	((4 * IEEE80211_MAX_SSID_LEN) + 1)
#define	TIMER_INTERVAL_WATCHDOG	1000
#define	TIMER_INTERVAL_RADIOCHK	800
#define	WLC_MPC_MAX_DELAYCNT	10
#define	WLC_MPC_MIN_DELAYCNT	1
#define	WLC_MPC_THRESHOLD	3
#define	BEACON_INTERVAL_DEFAULT	100
#define	DTIM_INTERVAL_DEFAULT	3
#define	BEACON_INTERVAL_DEF_QT	20
#define	DTIM_INTERVAL_DEF_QT	1
#define	TBTT_ALIGN_LEEWAY_US	100
#define WLC_WATCHDOG_TBTT(wlc) \
(wlc->stas_associated > 0 && wlc->PM != PM_OFF && wlc->pub->align_wd_tbtt)
#define BCMCFID(wlc, fid) wlc_bmac_write_shm((wlc)->hw, M_BCMC_FID, (fid))
#define WLC_WAR16165(wlc) (wlc->pub->sih->bustype == PCI_BUS && \
(!AP_ENAB(wlc->pub)) && (wlc->war16165))
uint wl_msg_level =
#if defined(BCMDBG)
WL_ERROR_VAL;
0;
#define WLC_BASIC_RATE(wlc, rspec)	(IS_MCS(rspec) ? \
(wlc)->band->basic_rate[mcs_table[rspec & RSPEC_RATE_MASK].leg_ofdm] : \
(wlc)->band->basic_rate[rspec & RSPEC_RATE_MASK])
#define FRAMETYPE(r, mimoframe)	(IS_MCS(r) ? mimoframe	: (IS_CCK(r) ? FT_CCK : FT_OFDM))
#define RFDISABLE_DEFAULT	10000000
#define WLC_TEMPSENSE_PERIOD		10
#define SCAN_IN_PROGRESS(x)	0
#define EPI_VERSION_NUM		0x054b0b00
static struct wlc_info *wlc_info_dbg = (struct wlc_info *) (NULL);
enum ;
const bcm_iovar_t wlc_iovars[] = ;
const u8 prio2fifo[NUMPRIO] = ;
#define	_WLC_PREC_NONE		0
#define	_WLC_PREC_BK		2
#define	_WLC_PREC_BE		4
#define	_WLC_PREC_EE		6
#define	_WLC_PREC_CL		8
#define	_WLC_PREC_VI		10
#define	_WLC_PREC_VO		12
#define	_WLC_PREC_NC		14
const u8 wlc_prio2prec_map[] = ;
#define WLC_TX_FIFO_CHECK(wlc, fifo) (TXPKTPENDGET((wlc), (fifo)) ||	\
(TXPKTPENDGET((wlc), (fifo)) == 0 && \
((wlc)->tx_prec_map & (wlc)->fifo2prec_map[(fifo)]) == \
(wlc)->fifo2prec_map[(fifo)]))
const u8 wme_fifo2ac[] = ;
static const u8 wme_ac2fifo[] = ;
static bool in_send_q = false;
#define wme_shmemacindex(ac)	wme_ac2fifo[ac]
static const char *fifo_names[] = ;
static const char fifo_names[6][0];
static const u8 acbitmap2maxprio[] = ;
#define SIFS(band) ((band)->bandtype == WLC_BAND_5G ? APHY_SIFS_TIME : BPHY_SIFS_TIME);
#define WLC_REPLAY_CNTRS_VALUE	WPA_CAP_16_REPLAY_CNTRS
static u16 wlc_d11hdrs_mac80211(struct wlc_info *wlc,
struct ieee80211_hw *hw,
struct sk_buff *p,
struct scb *scb, uint frag,
uint nfrags, uint queue,
uint next_frag_len,
wsec_key_t *key,
ratespec_t rspec_override);
static void wlc_bss_default_init(struct wlc_info *wlc);
static void wlc_ucode_mac_upd(struct wlc_info *wlc);
static ratespec_t mac80211_wlc_set_nrate(struct wlc_info *wlc,
struct wlcband *cur_band, u32 int_val);
static void wlc_tx_prec_map_init(struct wlc_info *wlc);
static void wlc_watchdog(void *arg);
static void wlc_watchdog_by_timer(void *arg);
static u16 wlc_rate_shm_offset(struct wlc_info *wlc, u8 rate);
static int wlc_set_rateset(struct wlc_info *wlc, wlc_rateset_t *rs_arg);
static int wlc_iovar_rangecheck(struct wlc_info *wlc, u32 val,
const bcm_iovar_t *vi);
static u8 wlc_local_constraint_qdbm(struct wlc_info *wlc);
static struct wlc_txq_info *wlc_txq_alloc(struct wlc_info *wlc);
static void wlc_txq_free(struct wlc_info *wlc,
struct wlc_txq_info *qi);
static void wlc_txflowcontrol_signal(struct wlc_info *wlc,
struct wlc_txq_info *qi,
bool on, int prio);
static void wlc_txflowcontrol_reset(struct wlc_info *wlc);
static void wlc_compute_cck_plcp(struct wlc_info *wlc, ratespec_t rate,
uint length, u8 *plcp);
static void wlc_compute_ofdm_plcp(ratespec_t rate, uint length, u8 *plcp);
static void wlc_compute_mimo_plcp(ratespec_t rate, uint length, u8 *plcp);
static u16 wlc_compute_frame_dur(struct wlc_info *wlc, ratespec_t rate,
u8 preamble_type, uint next_frag_len);
static u64 wlc_recover_tsf64(struct wlc_info *wlc, struct wlc_d11rxhdr *rxh);
static void wlc_recvctl(struct wlc_info *wlc,
d11rxhdr_t *rxh, struct sk_buff *p);
static uint wlc_calc_frame_len(struct wlc_info *wlc, ratespec_t rate,
u8 preamble_type, uint dur);
static uint wlc_calc_ack_time(struct wlc_info *wlc, ratespec_t rate,
u8 preamble_type);
static uint wlc_calc_cts_time(struct wlc_info *wlc, ratespec_t rate,
u8 preamble_type);
static void wlc_setband(struct wlc_info *wlc, uint bandunit);
static chanspec_t wlc_init_chanspec(struct wlc_info *wlc);
static void wlc_bandinit_ordered(struct wlc_info *wlc, chanspec_t chanspec);
static void wlc_bsinit(struct wlc_info *wlc);
static int wlc_duty_cycle_set(struct wlc_info *wlc, int duty_cycle, bool isOFDM,
bool writeToShm);
static void wlc_radio_hwdisable_upd(struct wlc_info *wlc);
static bool wlc_radio_monitor_start(struct wlc_info *wlc);
static void wlc_radio_timer(void *arg);
static void wlc_radio_enable(struct wlc_info *wlc);
static void wlc_radio_upd(struct wlc_info *wlc);
static uint wlc_calc_ba_time(struct wlc_info *wlc, ratespec_t rate,
u8 preamble_type);
static void wlc_update_mimo_band_bwcap(struct wlc_info *wlc, u8 bwcap);
static void wlc_ht_update_sgi_rx(struct wlc_info *wlc, int val);
static void wlc_ht_update_ldpc(struct wlc_info *wlc, s8 val);
static void wlc_war16165(struct wlc_info *wlc, bool tx);
static void wlc_wme_retries_write(struct wlc_info *wlc);
static bool wlc_attach_stf_ant_init(struct wlc_info *wlc);
static uint wlc_attach_module(struct wlc_info *wlc);
static void wlc_detach_module(struct wlc_info *wlc);
static void wlc_timers_deinit(struct wlc_info *wlc);
static void wlc_down_led_upd(struct wlc_info *wlc);
static uint wlc_down_del_timer(struct wlc_info *wlc);
static void wlc_ofdm_rateset_war(struct wlc_info *wlc);
static int _wlc_ioctl(struct wlc_info *wlc, int cmd, void *arg, int len,
struct wlc_if *wlcif);
bool wlc_ps_allowed(struct wlc_info *wlc)
void wlc_reset(struct wlc_info *wlc)
void wlc_fatal_error(struct wlc_info *wlc)
static chanspec_t wlc_init_chanspec(struct wlc_info *wlc)
struct scb global_scb;
static void wlc_init_scb(struct wlc_info *wlc, struct scb *scb)
void wlc_init(struct wlc_info *wlc)
void wlc_mac_bcn_promisc_change(struct wlc_info *wlc, bool promisc)
void wlc_mac_bcn_promisc(struct wlc_info *wlc)
void wlc_mac_promisc(struct wlc_info *wlc)
void wlc_set_ps_ctrl(struct wlc_info *wlc)
int wlc_set_mac(struct wlc_bsscfg *cfg)
void wlc_set_bssid(struct wlc_bsscfg *cfg)
void wlc_switch_shortslot(struct wlc_info *wlc, bool shortslot)
static u8 wlc_local_constraint_qdbm(struct wlc_info *wlc)
void wlc_set_home_chanspec(struct wlc_info *wlc, chanspec_t chanspec)
static void wlc_set_phy_chanspec(struct wlc_info *wlc, chanspec_t chanspec)
void wlc_set_chanspec(struct wlc_info *wlc, chanspec_t chanspec)
#if defined(BCMDBG)
static int wlc_get_current_txpwr(struct wlc_info *wlc, void *pwr, uint len)
static u32 wlc_watchdog_backup_bi(struct wlc_info *wlc)
void wlc_watchdog_upd(struct wlc_info *wlc, bool tbtt)
ratespec_t wlc_lowest_basic_rspec(struct wlc_info *wlc, wlc_rateset_t *rs)
void wlc_beacon_phytxctl_txant_upd(struct wlc_info *wlc, ratespec_t bcn_rspec)
void wlc_protection_upd(struct wlc_info *wlc, uint idx, int val)
static void wlc_ht_update_sgi_rx(struct wlc_info *wlc, int val)
static void wlc_ht_update_ldpc(struct wlc_info *wlc, s8 val)
static void wlc_ucode_mac_upd(struct wlc_info *wlc)
static void wlc_bandinit_ordered(struct wlc_info *wlc, chanspec_t chanspec)
static void WLBANDINITFN(wlc_bsinit) (struct wlc_info *wlc)
static void WLBANDINITFN(wlc_setband) (struct wlc_info *wlc, uint bandunit)
void wlc_wme_initparams_sta(struct wlc_info *wlc, wme_param_ie_t *pe)
void wlc_wme_setparams(struct wlc_info *wlc, u16 aci,
const struct ieee80211_tx_queue_params *params,
bool suspend)
void wlc_edcf_setparams(struct wlc_info *wlc, bool suspend)
bool wlc_timers_init(struct wlc_info *wlc, int unit)
void wlc_info_init(struct wlc_info *wlc, int unit)
static bool wlc_state_bmac_sync(struct wlc_info *wlc)
static uint wlc_attach_module(struct wlc_info *wlc)
struct wlc_pub *wlc_pub(void *wlc)
#define CHIP_SUPPORTS_11N(wlc) 	1
void *wlc_attach(struct wl_info *wl, u16 vendor, u16 device, uint unit,
bool piomode, void *regsva, uint bustype, void *btparam,
uint *perr)
static void wlc_attach_antgain_init(struct wlc_info *wlc)
static bool wlc_attach_stf_ant_init(struct wlc_info *wlc)
static void wlc_timers_deinit(struct wlc_info *wlc)
static void wlc_detach_module(struct wlc_info *wlc)
uint wlc_detach(struct wlc_info *wlc)
void wlc_ap_upd(struct wlc_info *wlc)
static void wlc_radio_hwdisable_upd(struct wlc_info *wlc)
bool wlc_is_non_delay_mpc(struct wlc_info *wlc)
bool wlc_ismpc(struct wlc_info *wlc)
void wlc_radio_mpc_upd(struct wlc_info *wlc)
static void wlc_radio_upd(struct wlc_info *wlc)
static void wlc_down_led_upd(struct wlc_info *wlc)
bool wlc_check_radio_disabled(struct wlc_info *wlc)
void wlc_radio_disable(struct wlc_info *wlc)
static void wlc_radio_enable(struct wlc_info *wlc)
static void wlc_radio_timer(void *arg)
static bool wlc_radio_monitor_start(struct wlc_info *wlc)
bool wlc_radio_monitor_stop(struct wlc_info *wlc)
static void wlc_watchdog_by_timer(void *arg)
static void wlc_watchdog(void *arg)
int wlc_up(struct wlc_info *wlc)
static void wlc_tx_prec_map_init(struct wlc_info *wlc)
static uint wlc_down_del_timer(struct wlc_info *wlc)
uint wlc_down(struct wlc_info *wlc)
int wlc_set_gmode(struct wlc_info *wlc, u8 gmode, bool config)
static int wlc_nmode_validate(struct wlc_info *wlc, s32 nmode)
int wlc_set_nmode(struct wlc_info *wlc, s32 nmode)
static int wlc_set_rateset(struct wlc_info *wlc, wlc_rateset_t *rs_arg)
int wlc_set(struct wlc_info *wlc, int cmd, int arg)
int wlc_get(struct wlc_info *wlc, int cmd, int *arg)
static void wlc_ofdm_rateset_war(struct wlc_info *wlc)
int
wlc_ioctl(struct wlc_info *wlc, int cmd, void *arg, int len,
struct wlc_if *wlcif)
static int
_wlc_ioctl(struct wlc_info *wlc, int cmd, void *arg, int len,
struct wlc_if *wlcif)
#if defined(BCMDBG)
int wlc_iocregchk(struct wlc_info *wlc, uint band)
static const bcm_iovar_t *wlc_iovar_lookup(const bcm_iovar_t *table,
const char *name)
int wlc_iovar_getint(struct wlc_info *wlc, const char *name, int *arg)
int wlc_iovar_setint(struct wlc_info *wlc, const char *name, int arg)
int wlc_module_register(struct wlc_pub *pub, const bcm_iovar_t *iovars,
const char *name, void *hdl, iovar_fn_t i_fn,
watchdog_fn_t w_fn, down_fn_t d_fn)
int wlc_module_unregister(struct wlc_pub *pub, const char *name, void *hdl)
static void wlc_wme_retries_write(struct wlc_info *wlc)
int
wlc_iovar_op(struct wlc_info *wlc, const char *name,
void *params, int p_len, void *arg, int len,
bool set, struct wlc_if *wlcif)
int
wlc_iovar_check(struct wlc_pub *pub, const bcm_iovar_t *vi, void *arg, int len,
bool set)
int
wlc_doiovar(void *hdl, const bcm_iovar_t *vi, u32 actionid,
const char *name, void *params, uint p_len, void *arg, int len,
int val_size, struct wlc_if *wlcif)
static int
wlc_iovar_rangecheck(struct wlc_info *wlc, u32 val, const bcm_iovar_t *vi)
static const char *supr_reason[] = ;
static void wlc_print_txs_status(u16 s)
void wlc_print_txstatus(tx_status_t *txs)
void wlc_statsupd(struct wlc_info *wlc)
bool wlc_chipmatch(u16 vendor, u16 device)
#if defined(BCMDBG)
void wlc_print_txdesc(d11txh_t *txh)
#if defined(BCMDBG)
void wlc_print_rxh(d11rxhdr_t *rxh)
#if defined(BCMDBG)
int wlc_format_ssid(char *buf, const unsigned char ssid[], uint ssid_len)
static u16 wlc_rate_shm_offset(struct wlc_info *wlc, u8 rate)
bool
wlc_prec_enq(struct wlc_info *wlc, struct pktq *q, void *pkt, int prec)
bool
wlc_prec_enq_head(struct wlc_info *wlc, struct pktq *q, struct sk_buff *pkt,
int prec, bool head)
void wlc_txq_enq(void *ctx, struct scb *scb, struct sk_buff *sdu,
uint prec)
bool
wlc_sendpkt_mac80211(struct wlc_info *wlc, struct sk_buff *sdu,
struct ieee80211_hw *hw)
void wlc_send_q(struct wlc_info *wlc)
static inline u16
bcmc_fid_generate(struct wlc_info *wlc, struct wlc_bsscfg *bsscfg,
d11txh_t *txh)
void
wlc_txfifo(struct wlc_info *wlc, uint fifo, struct sk_buff *p, bool commit,
s8 txpktpend)
void
wlc_compute_plcp(struct wlc_info *wlc, ratespec_t rspec, uint length, u8 *plcp)
static void wlc_compute_mimo_plcp(ratespec_t rspec, uint length, u8 *plcp)
static void
wlc_compute_ofdm_plcp(ratespec_t rspec, u32 length, u8 *plcp)
static void wlc_cck_plcp_set(struct wlc_info *wlc, int rate_500, uint length,
u8 *plcp)
static void wlc_compute_cck_plcp(struct wlc_info *wlc, ratespec_t rspec,
uint length, u8 *plcp)
static u16
wlc_compute_frame_dur(struct wlc_info *wlc, ratespec_t rate, u8 preamble_type,
uint next_frag_len)
u16
wlc_compute_rtscts_dur(struct wlc_info *wlc, bool cts_only, ratespec_t rts_rate,
ratespec_t frame_rate, u8 rts_preamble_type,
u8 frame_preamble_type, uint frame_len, bool ba)
u16 wlc_phytxctl1_calc(struct wlc_info *wlc, ratespec_t rspec)
ratespec_t
wlc_rspec_to_rts_rspec(struct wlc_info *wlc, ratespec_t rspec, bool use_rspec,
u16 mimo_ctlchbw)
static u16
wlc_d11hdrs_mac80211(struct wlc_info *wlc, struct ieee80211_hw *hw,
struct sk_buff *p, struct scb *scb, uint frag,
uint nfrags, uint queue, uint next_frag_len,
wsec_key_t *key, ratespec_t rspec_override)
void wlc_tbtt(struct wlc_info *wlc, d11regs_t *regs)
static void wlc_war16165(struct wlc_info *wlc, bool tx)
bool
wlc_dotxstatus(struct wlc_info *wlc, tx_status_t *txs, u32 frm_tx2)
void
wlc_txfifo_complete(struct wlc_info *wlc, uint fifo, s8 txpktpend)
void wlc_bcn_li_upd(struct wlc_info *wlc)
static u64 wlc_recover_tsf64(struct wlc_info *wlc, struct wlc_d11rxhdr *rxh)
static void
prep_mac80211_status(struct wlc_info *wlc, d11rxhdr_t *rxh, struct sk_buff *p,
struct ieee80211_rx_status *rx_status)
static void
wlc_recvctl(struct wlc_info *wlc, d11rxhdr_t *rxh, struct sk_buff *p)
void wlc_recv(struct wlc_info *wlc, struct sk_buff *p)
u16
wlc_calc_lsig_len(struct wlc_info *wlc, ratespec_t ratespec, uint mac_len)
uint
wlc_calc_frame_time(struct wlc_info *wlc, ratespec_t ratespec, u8 preamble_type,
uint mac_len)
static uint
wlc_calc_frame_len(struct wlc_info *wlc, ratespec_t ratespec, u8 preamble_type,
uint dur)
static uint
wlc_calc_ba_time(struct wlc_info *wlc, ratespec_t rspec, u8 preamble_type)
static uint
wlc_calc_ack_time(struct wlc_info *wlc, ratespec_t rspec, u8 preamble_type)
static uint
wlc_calc_cts_time(struct wlc_info *wlc, ratespec_t rspec, u8 preamble_type)
void wlc_rate_lookup_init(struct wlc_info *wlc, wlc_rateset_t *rateset)
static void wlc_write_rate_shm(struct wlc_info *wlc, u8 rate, u8 basic_rate)
static const wlc_rateset_t *wlc_rateset_get_hwrs(struct wlc_info *wlc)
void wlc_set_ratetable(struct wlc_info *wlc)
bool wlc_valid_rate(struct wlc_info *wlc, ratespec_t rspec, int band,
bool verbose)
static void wlc_update_mimo_band_bwcap(struct wlc_info *wlc, u8 bwcap)
void wlc_mod_prb_rsp_rate_table(struct wlc_info *wlc, uint frame_len)
static void
wlc_bcn_prb_template(struct wlc_info *wlc, u16 type, ratespec_t bcn_rspec,
struct wlc_bsscfg *cfg, u16 *buf, int *len)
int wlc_get_header_len()
void wlc_bss_update_beacon(struct wlc_info *wlc, struct wlc_bsscfg *cfg)
void wlc_update_beacon(struct wlc_info *wlc)
void wlc_shm_ssid_upd(struct wlc_info *wlc, struct wlc_bsscfg *cfg)
void wlc_update_probe_resp(struct wlc_info *wlc, bool suspend)
void
wlc_bss_update_probe_resp(struct wlc_info *wlc, struct wlc_bsscfg *cfg,
bool suspend)
int wlc_prep_pdu(struct wlc_info *wlc, struct sk_buff *pdu, uint *fifop)
void wlc_reprate_init(struct wlc_info *wlc)
void wlc_bsscfg_reprate_init(struct wlc_bsscfg *bsscfg)
int wlc_get_revision_info(struct wlc_info *wlc, void *buf, uint len)
void wlc_default_rateset(struct wlc_info *wlc, wlc_rateset_t *rs)
static void wlc_bss_default_init(struct wlc_info *wlc)
static ratespec_t
mac80211_wlc_set_nrate(struct wlc_info *wlc, struct wlcband *cur_band,
u32 int_val)
static int
wlc_duty_cycle_set(struct wlc_info *wlc, int duty_cycle, bool isOFDM,
bool writeToShm)
u16 wlc_read_shm(struct wlc_info *wlc, uint offset)
void wlc_write_shm(struct wlc_info *wlc, uint offset, u16 v)
void wlc_copyto_shm(struct wlc_info *wlc, uint offset, const void *buf, int len)
void wlc_mctrl(struct wlc_info *wlc, u32 mask, u32 val)
void wlc_mhf(struct wlc_info *wlc, u8 idx, u16 mask, u16 val, int bands)
int wlc_xmtfifo_sz_get(struct wlc_info *wlc, uint fifo, uint *blocks)
void wlc_write_template_ram(struct wlc_info *wlc, int offset, int len,
void *buf)
void wlc_write_hw_bcntemplates(struct wlc_info *wlc, void *bcn, int len,
bool both)
void
wlc_set_addrmatch(struct wlc_info *wlc, int match_reg_offset,
const u8 *addr)
void wlc_set_cwmin(struct wlc_info *wlc, u16 newmin)
void wlc_set_cwmax(struct wlc_info *wlc, u16 newmax)
void wlc_pllreq(struct wlc_info *wlc, bool set, mbool req_bit)
void wlc_reset_bmac_done(struct wlc_info *wlc)
bool
wlc_txflowcontrol_prio_isset(struct wlc_info *wlc, struct wlc_txq_info *q,
int prio)
void wlc_txflowcontrol(struct wlc_info *wlc, struct wlc_txq_info *qi,
bool on, int prio)
void
wlc_txflowcontrol_override(struct wlc_info *wlc, struct wlc_txq_info *qi,
bool on, uint override)
static void wlc_txflowcontrol_reset(struct wlc_info *wlc)
static void
wlc_txflowcontrol_signal(struct wlc_info *wlc, struct wlc_txq_info *qi, bool on,
int prio)
static struct wlc_txq_info *wlc_txq_alloc(struct wlc_info *wlc)
static void wlc_txq_free(struct wlc_info *wlc, struct wlc_txq_info *qi)
void wlc_scan_start(struct wlc_info *wlc)
void wlc_scan_stop(struct wlc_info *wlc)
void wlc_associate_upd(struct wlc_info *wlc, bool state)
void wlc_inval_dma_pkts(struct wlc_hw_info *hw,
struct ieee80211_sta *sta,
void (*dma_callback_fn))
int wlc_get_curband(struct wlc_info *wlc)
void wlc_wait_for_tx_completion(struct wlc_info *wlc, bool drop)
