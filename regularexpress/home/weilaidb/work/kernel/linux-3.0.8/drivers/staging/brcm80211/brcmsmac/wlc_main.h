#define _wlc_h_
#define MA_WINDOW_SZ		8
#define	WL_HWRXOFF		38
#define	INVCHANNEL		255
#define	MAXCOREREV		28
#define WLC_MAXMODULES		22
#define WLC_BITSCNT(x)	bcm_bitcount((u8 *)&(x), sizeof(u8))
#define	WLC_MAX_MAC_SUSPEND	83000
#define WLC_PRB_RESP_TIMEOUT	0
#define TXOFF (D11_TXH_LEN + D11_PHY_HDR_LEN)
struct wlc_bss_list ;
#define	SW_TIMER_MAC_STAT_UPD		30
#if CONF_MSK(D11CONF, 0x4f) || CONF_GE(D11CONF, MAXCOREREV)
#error "Configuration for D11CONF includes unsupported versions."
#define	VALID_COREREV(corerev)	CONF_HAS(D11CONF, corerev)
#define WLC_SHORTSLOT_AUTO	-1
#define WLC_SHORTSLOT_OFF	0
#define WLC_SHORTSLOT_ON	1
#define WLC_LONG_PREAMBLE	(0)
#define WLC_SHORT_PREAMBLE	(1 << 0)
#define WLC_GF_PREAMBLE		(1 << 1)
#define WLC_MM_PREAMBLE		(1 << 2)
#define WLC_IS_MIMO_PREAMBLE(_pre) (((_pre) == WLC_GF_PREAMBLE) || ((_pre) == WLC_MM_PREAMBLE))
#define WLC_BARKER_SHORT_ALLOWED	0
#define WLC_TX_FIFO_CLEAR(wlc, fifo) ((wlc)->tx_prec_map &= ~(wlc)->fifo2prec_map[fifo])
#define WLC_TX_FIFO_ENAB(wlc, fifo)  ((wlc)->tx_prec_map |= (wlc)->fifo2prec_map[fifo])
#define TXFID_QUEUE_MASK	0x0007
#define TXFID_SEQ_MASK		0x7FE0
#define TXFID_SEQ_SHIFT		5
#define	TXFID_RATE_PROBE_MASK	0x8000
#define TXFID_RATE_MASK		0x0018
#define TXFID_RATE_SHIFT	3
#define BOARDREV_PROMOTABLE	0xFF
#define BOARDREV_PROMOTED	1
#define WSEC_ENABLED(wsec) ((wsec) & (WEP_ENABLED | TKIP_ENABLED | AES_ENABLED))
#define WLC_SW_KEYS(wlc, bsscfg) ((((wlc)->wsec_swkeys) || \
((bsscfg)->wsec & WSEC_SWFLAG)))
#define WLC_PORTOPEN(cfg) \
(((cfg)->WPA_auth != WPA_AUTH_DISABLED && WSEC_ENABLED((cfg)->wsec)) ? \
(cfg)->wsec_portopen : true)
#define PS_ALLOWED(wlc)	wlc_ps_allowed(wlc)
#define DATA_BLOCK_TX_SUPR	(1 << 4)
extern const u8 prio2fifo[];
#define WLC_WAKE_OVERRIDE_CLKCTL	0x01
#define WLC_WAKE_OVERRIDE_PHYREG	0x02
#define WLC_WAKE_OVERRIDE_MACSUSPEND	0x04
#define WLC_WAKE_OVERRIDE_TXFIFO	0x08
#define WLC_WAKE_OVERRIDE_FORCEFAST	0x10
#define	I_ERRORS	(I_PC | I_PD | I_DE | I_RO | I_XU)
#define	DEF_RXINTMASK	(I_RI)
#define	DEF_MACINTMASK	(MI_TXSTOP | MI_TBTT | MI_ATIMWINEND | MI_PMQ | \
MI_PHYTXERR | MI_DMAINT | MI_TFS | MI_BG_NOISE | \
MI_CCA | MI_TO | MI_GP0 | MI_RFDISABLE | MI_PWRUP)
#define	RETRY_SHORT_DEF			7
#define	RETRY_SHORT_MAX			255
#define	RETRY_LONG_DEF			4
#define	RETRY_SHORT_FB			3
#define	RETRY_LONG_FB			2
#define	MAXTXPKTS		6
#define	MAXTXFRAMEBURST		8
#define	MAXFRAMEBURST_TXOP	10000
#define EDCF_SHORT_S            0
#define EDCF_SFB_S              4
#define EDCF_LONG_S             8
#define EDCF_LFB_S              12
#define EDCF_SHORT_M            BITFIELD_MASK(4)
#define EDCF_SFB_M              BITFIELD_MASK(4)
#define EDCF_LONG_M             BITFIELD_MASK(4)
#define EDCF_LFB_M              BITFIELD_MASK(4)
#define WLC_WME_RETRY_SHORT_GET(wlc, ac)    GFIELD(wlc->wme_retries[ac], EDCF_SHORT)
#define WLC_WME_RETRY_SFB_GET(wlc, ac)      GFIELD(wlc->wme_retries[ac], EDCF_SFB)
#define WLC_WME_RETRY_LONG_GET(wlc, ac)     GFIELD(wlc->wme_retries[ac], EDCF_LONG)
#define WLC_WME_RETRY_LFB_GET(wlc, ac)      GFIELD(wlc->wme_retries[ac], EDCF_LFB)
#define WLC_WME_RETRY_SHORT_SET(wlc, ac, val) \
(wlc->wme_retries[ac] = SFIELD(wlc->wme_retries[ac], EDCF_SHORT, val))
#define WLC_WME_RETRY_SFB_SET(wlc, ac, val) \
(wlc->wme_retries[ac] = SFIELD(wlc->wme_retries[ac], EDCF_SFB, val))
#define WLC_WME_RETRY_LONG_SET(wlc, ac, val) \
(wlc->wme_retries[ac] = SFIELD(wlc->wme_retries[ac], EDCF_LONG, val))
#define WLC_WME_RETRY_LFB_SET(wlc, ac, val) \
(wlc->wme_retries[ac] = SFIELD(wlc->wme_retries[ac], EDCF_LFB, val))
#define WLC_PLLREQ_SHARED	0x1
#define WLC_PLLREQ_RADIO_MON	0x2
#define WLC_PLLREQ_FLIP		0x4
#define AP_ACTIVE(wlc)	(0)
#define DEVICEREMOVED(wlc)      \
((wlc->hw->clk) ?   \
((R_REG(&wlc->hw->regs->maccontrol) & \
(MCTL_PSM_JMP_0 | MCTL_IHR_EN)) != MCTL_IHR_EN) : \
(ai_deviceremoved(wlc->hw->sih)))
#define WLCWLUNIT(wlc)		((wlc)->pub->unit)
struct wlc_protection ;
struct wlc_stf ;
#define WLC_STF_SS_STBC_TX(wlc, scb) \
(((wlc)->stf->txstreams > 1) && (((wlc)->band->band_stf_stbc_tx == ON) || \
(SCB_STBC_CAP((scb)) &&					\
(wlc)->band->band_stf_stbc_tx == AUTO &&			\
isset(&((wlc)->stf->ss_algo_channel), PHY_TXC1_MODE_STBC))))
#define WLC_STBC_CAP_PHY(wlc) (WLCISNPHY(wlc->band) && NREV_GE(wlc->band->phyrev, 3))
#define WLC_SGI_CAP_PHY(wlc) ((WLCISNPHY(wlc->band) && NREV_GE(wlc->band->phyrev, 3)) || \
WLCISLCNPHY(wlc->band))
#define WLC_CHAN_PHYTYPE(x)     (((x) & RXS_CHAN_PHYTYPE_MASK) >> RXS_CHAN_PHYTYPE_SHIFT)
#define WLC_CHAN_CHANNEL(x)     (((x) & RXS_CHAN_ID_MASK) >> RXS_CHAN_ID_SHIFT)
#define WLC_RX_CHANNEL(rxh)	(WLC_CHAN_CHANNEL((rxh)->RxChan))
#define WLC_BSS_HT		0x0020
#define TXQ_STOP_FOR_PRIOFC_MASK	0x000000FF
#define TXQ_STOP_FOR_PKT_DRAIN		0x00000100
#define TXQ_STOP_FOR_AMPDU_FLOW_CNTRL	0x00000200
#define WLC_HT_WEP_RESTRICT	0x01
#define WLC_HT_TKIP_RESTRICT	0x02
struct wlccore ;
struct wlcband ;
typedef void (*pkcb_fn_t) (struct wlc_info *wlc, uint txstatus, void *arg);
struct pkt_cb ;
struct modulecb ;
struct dumpcb_s ;
struct wlc_if ;
#define WLC_IF_LINKED		0x02
struct wlc_hwband ;
struct wlc_hw_info ;
struct wlc_txq_info ;
struct wlc_info ;
struct antsel_info ;
#define	CHANNEL_BANDUNIT(wlc, ch) (((ch) <= CH_MAX_2G_CHANNEL) ? BAND_2G_INDEX : BAND_5G_INDEX)
#define	OTHERBANDUNIT(wlc)	((uint)((wlc)->band->bandunit ? BAND_2G_INDEX : BAND_5G_INDEX))
#define IS_MBAND_UNLOCKED(wlc) \
((NBANDS(wlc) > 1) && !(wlc)->bandlocked)
#define WLC_BAND_PI_RADIO_CHANSPEC wlc_phy_chanspec_get(wlc->band->pi)
#define	TXPKTPENDTOT(wlc) ((wlc)->core->txpktpend[0] + (wlc)->core->txpktpend[1] + \
(wlc)->core->txpktpend[2] + (wlc)->core->txpktpend[3])
#define TXPKTPENDGET(wlc, fifo)		((wlc)->core->txpktpend[(fifo)])
#define TXPKTPENDINC(wlc, fifo, val)	((wlc)->core->txpktpend[(fifo)] += (val))
#define TXPKTPENDDEC(wlc, fifo, val)	((wlc)->core->txpktpend[(fifo)] -= (val))
#define TXPKTPENDCLR(wlc, fifo)		((wlc)->core->txpktpend[(fifo)] = 0)
#define TXAVAIL(wlc, fifo)		(*(wlc)->core->txavail[(fifo)])
#define GETNEXTTXP(wlc, _queue)								\
dma_getnexttxp((wlc)->hw->di[(_queue)], HNDDMA_RANGE_TRANSMITTED)
#define WLC_IS_MATCH_SSID(wlc, ssid1, ssid2, len1, len2) \
((len1 == len2) && !memcmp(ssid1, ssid2, len1))
extern void wlc_fatal_error(struct wlc_info *wlc);
extern void wlc_bmac_rpc_watchdog(struct wlc_info *wlc);
extern void wlc_recv(struct wlc_info *wlc, struct sk_buff *p);
extern bool wlc_dotxstatus(struct wlc_info *wlc, tx_status_t *txs, u32 frm_tx2);
extern void wlc_txfifo(struct wlc_info *wlc, uint fifo, struct sk_buff *p,
bool commit, s8 txpktpend);
extern void wlc_txfifo_complete(struct wlc_info *wlc, uint fifo, s8 txpktpend);
extern void wlc_txq_enq(void *ctx, struct scb *scb, struct sk_buff *sdu,
uint prec);
extern void wlc_info_init(struct wlc_info *wlc, int unit);
extern void wlc_print_txstatus(tx_status_t *txs);
extern int wlc_xmtfifo_sz_get(struct wlc_info *wlc, uint fifo, uint *blocks);
extern void wlc_write_template_ram(struct wlc_info *wlc, int offset, int len,
void *buf);
extern void wlc_write_hw_bcntemplates(struct wlc_info *wlc, void *bcn, int len,
bool both);
extern void wlc_set_cwmin(struct wlc_info *wlc, u16 newmin);
extern void wlc_set_cwmax(struct wlc_info *wlc, u16 newmax);
extern void wlc_pllreq(struct wlc_info *wlc, bool set, mbool req_bit);
extern void wlc_reset_bmac_done(struct wlc_info *wlc);
#if defined(BCMDBG)
extern void wlc_print_rxh(d11rxhdr_t *rxh);
extern void wlc_print_hdrs(struct wlc_info *wlc, const char *prefix, u8 *frame,
d11txh_t *txh, d11rxhdr_t *rxh, uint len);
extern void wlc_print_txdesc(d11txh_t *txh);
#define wlc_print_txdesc(a)
#if defined(BCMDBG)
extern void wlc_print_dot11_mac_hdr(u8 *buf, int len);
extern void wlc_setxband(struct wlc_hw_info *wlc_hw, uint bandunit);
extern void wlc_coredisable(struct wlc_hw_info *wlc_hw);
extern bool wlc_valid_rate(struct wlc_info *wlc, ratespec_t rate, int band,
bool verbose);
extern void wlc_ap_upd(struct wlc_info *wlc);
extern void wlc_shm_ssid_upd(struct wlc_info *wlc, struct wlc_bsscfg *cfg);
extern int wlc_set_gmode(struct wlc_info *wlc, u8 gmode, bool config);
extern void wlc_mac_bcn_promisc_change(struct wlc_info *wlc, bool promisc);
extern void wlc_mac_bcn_promisc(struct wlc_info *wlc);
extern void wlc_mac_promisc(struct wlc_info *wlc);
extern void wlc_txflowcontrol(struct wlc_info *wlc, struct wlc_txq_info *qi,
bool on, int prio);
extern void wlc_txflowcontrol_override(struct wlc_info *wlc,
struct wlc_txq_info *qi,
bool on, uint override);
extern bool wlc_txflowcontrol_prio_isset(struct wlc_info *wlc,
struct wlc_txq_info *qi, int prio);
extern void wlc_send_q(struct wlc_info *wlc);
extern int wlc_prep_pdu(struct wlc_info *wlc, struct sk_buff *pdu, uint *fifo);
extern u16 wlc_calc_lsig_len(struct wlc_info *wlc, ratespec_t ratespec,
uint mac_len);
extern ratespec_t wlc_rspec_to_rts_rspec(struct wlc_info *wlc, ratespec_t rspec,
bool use_rspec, u16 mimo_ctlchbw);
extern u16 wlc_compute_rtscts_dur(struct wlc_info *wlc, bool cts_only,
ratespec_t rts_rate, ratespec_t frame_rate,
u8 rts_preamble_type,
u8 frame_preamble_type, uint frame_len,
bool ba);
extern void wlc_tbtt(struct wlc_info *wlc, d11regs_t *regs);
extern void wlc_inval_dma_pkts(struct wlc_hw_info *hw,
struct ieee80211_sta *sta,
void (*dma_callback_fn));
#if defined(BCMDBG)
extern void wlc_dump_ie(struct wlc_info *wlc, bcm_tlv_t *ie,
struct bcmstrbuf *b);
extern void wlc_reprate_init(struct wlc_info *wlc);
extern void wlc_bsscfg_reprate_init(struct wlc_bsscfg *bsscfg);
extern void wlc_write_shm(struct wlc_info *wlc, uint offset, u16 v);
extern u16 wlc_read_shm(struct wlc_info *wlc, uint offset);
extern void wlc_copyto_shm(struct wlc_info *wlc, uint offset, const void *buf,
int len);
extern void wlc_update_beacon(struct wlc_info *wlc);
extern void wlc_bss_update_beacon(struct wlc_info *wlc,
struct wlc_bsscfg *bsscfg);
extern void wlc_update_probe_resp(struct wlc_info *wlc, bool suspend);
extern void wlc_bss_update_probe_resp(struct wlc_info *wlc,
struct wlc_bsscfg *cfg, bool suspend);
extern bool wlc_ismpc(struct wlc_info *wlc);
extern bool wlc_is_non_delay_mpc(struct wlc_info *wlc);
extern void wlc_radio_mpc_upd(struct wlc_info *wlc);
extern bool wlc_prec_enq(struct wlc_info *wlc, struct pktq *q, void *pkt,
int prec);
extern bool wlc_prec_enq_head(struct wlc_info *wlc, struct pktq *q,
struct sk_buff *pkt, int prec, bool head);
extern u16 wlc_phytxctl1_calc(struct wlc_info *wlc, ratespec_t rspec);
extern void wlc_compute_plcp(struct wlc_info *wlc, ratespec_t rate, uint length,
u8 *plcp);
extern uint wlc_calc_frame_time(struct wlc_info *wlc, ratespec_t ratespec,
u8 preamble_type, uint mac_len);
extern void wlc_set_chanspec(struct wlc_info *wlc, chanspec_t chanspec);
extern bool wlc_timers_init(struct wlc_info *wlc, int unit);
extern const bcm_iovar_t wlc_iovars[];
extern int wlc_doiovar(void *hdl, const bcm_iovar_t *vi, u32 actionid,
const char *name, void *params, uint p_len, void *arg,
int len, int val_size, struct wlc_if *wlcif);
#if defined(BCMDBG)
extern void wlc_print_ies(struct wlc_info *wlc, u8 *ies, uint ies_len);
extern int wlc_set_nmode(struct wlc_info *wlc, s32 nmode);
extern void wlc_mimops_action_ht_send(struct wlc_info *wlc,
struct wlc_bsscfg *bsscfg,
u8 mimops_mode);
extern void wlc_switch_shortslot(struct wlc_info *wlc, bool shortslot);
extern void wlc_set_bssid(struct wlc_bsscfg *cfg);
extern void wlc_edcf_setparams(struct wlc_info *wlc, bool suspend);
extern void wlc_set_ratetable(struct wlc_info *wlc);
extern int wlc_set_mac(struct wlc_bsscfg *cfg);
extern void wlc_beacon_phytxctl_txant_upd(struct wlc_info *wlc,
ratespec_t bcn_rate);
extern void wlc_mod_prb_rsp_rate_table(struct wlc_info *wlc, uint frame_len);
extern ratespec_t wlc_lowest_basic_rspec(struct wlc_info *wlc,
wlc_rateset_t *rs);
extern void wlc_radio_disable(struct wlc_info *wlc);
extern void wlc_bcn_li_upd(struct wlc_info *wlc);
extern int wlc_get_revision_info(struct wlc_info *wlc, void *buf, uint len);
extern void wlc_set_home_chanspec(struct wlc_info *wlc, chanspec_t chanspec);
extern void wlc_watchdog_upd(struct wlc_info *wlc, bool tbtt);
extern bool wlc_ps_allowed(struct wlc_info *wlc);
extern bool wlc_stay_awake(struct wlc_info *wlc);
extern void wlc_wme_initparams_sta(struct wlc_info *wlc, wme_param_ie_t *pe);
