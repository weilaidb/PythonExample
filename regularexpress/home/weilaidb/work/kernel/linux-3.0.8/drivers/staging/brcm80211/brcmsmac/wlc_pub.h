#define _wlc_pub_h_
#define	WLC_NUMRATES	16
#define	MAXMULTILIST	32
#define	D11_PHY_HDR_LEN	6
#define	PHY_TYPE_A	0
#define	PHY_TYPE_G	2
#define	PHY_TYPE_N	4
#define	PHY_TYPE_LP	5
#define	PHY_TYPE_SSN	6
#define	PHY_TYPE_LCN	8
#define	PHY_TYPE_LCNXN	9
#define	PHY_TYPE_HT	7
#define WLC_10_MHZ	10
#define WLC_20_MHZ	20
#define WLC_40_MHZ	40
#define CHSPEC_WLC_BW(chanspec)	(CHSPEC_IS40(chanspec) ? WLC_40_MHZ : \
CHSPEC_IS20(chanspec) ? WLC_20_MHZ : \
WLC_10_MHZ)
#define	WLC_RSSI_MINVAL		-200
#define	WLC_RSSI_NO_SIGNAL	-91
#define	WLC_RSSI_VERY_LOW	-80
#define	WLC_RSSI_LOW		-70
#define	WLC_RSSI_GOOD		-68
#define	WLC_RSSI_VERY_GOOD	-58
#define	WLC_RSSI_EXCELLENT	-57
#define WLC_PHYTYPE(_x) (_x)
#define MA_WINDOW_SZ		8
#define WLC_SNR_INVALID		0
#define WLC_TXPWR_MAX		(127)
#define	WLC_RATE_FLAG	0x80
#define	WLC_RATE_MASK	0x7f
#define	ANT_RX_DIV_FORCE_0		0
#define	ANT_RX_DIV_FORCE_1		1
#define	ANT_RX_DIV_START_1		2
#define	ANT_RX_DIV_START_0		3
#define	ANT_RX_DIV_ENABLE		3
#define ANT_RX_DIV_DEF		ANT_RX_DIV_START_0
#define ANT_TX_FORCE_0		0
#define ANT_TX_FORCE_1		1
#define ANT_TX_LAST_RX		3
#define ANT_TX_DEF			3
#define TXCORE_POLICY_ALL	0x1
#define TXCHAIN_DEF		0x1
#define TXCHAIN_DEF_NPHY	0x3
#define TXCHAIN_DEF_HTPHY	0x7
#define RXCHAIN_DEF		0x1
#define RXCHAIN_DEF_NPHY	0x3
#define RXCHAIN_DEF_HTPHY	0x7
#define ANTSWITCH_NONE		0
#define ANTSWITCH_TYPE_1	1
#define ANTSWITCH_TYPE_2	2
#define ANTSWITCH_TYPE_3	3
#define RXBUFSZ		PKTBUFSZ
#define AIDMAPSZ	(roundup(MAXSCB, NBBY)/NBBY)
struct ieee80211_tx_queue_params;
typedef struct wlc_tunables  wlc_tunables_t;
typedef struct wlc_rateset  wlc_rateset_t;
struct rsn_parms ;
#define SSID_FMT_BUF_LEN	((4 * IEEE80211_MAX_SSID_LEN) + 1)
#define RSN_FLAGS_SUPPORTED		0x1
#define RSN_FLAGS_PREAUTH		0x2
#define AMPDU_DEF_MPDU_DENSITY	6
#define HT_CAP	(IEEE80211_HT_CAP_SM_PS |\
IEEE80211_HT_CAP_SUP_WIDTH_20_40 | IEEE80211_HT_CAP_GRN_FLD |\
IEEE80211_HT_CAP_MAX_AMSDU | IEEE80211_HT_CAP_DSSSCCK40)
typedef struct wlc_bss_info  wlc_bss_info_t;
struct wlc_if;
#define WLC_ENOIOCTL	1
#define WLC_EINVAL	2
#define WLC_ETOOSMALL	3
#define WLC_ETOOBIG	4
#define WLC_ERANGE	5
#define WLC_EDOWN	6
#define WLC_EUP		7
#define WLC_ENOMEM	8
#define WLC_EBUSY	9
#define IOVF_MFG	(1<<3)
#define IOVF_WHL	(1<<4)
#define IOVF_NTRL	(1<<5)
#define IOVF_SET_UP	(1<<6)
#define IOVF_SET_DOWN	(1<<7)
#define IOVF_SET_CLK	(1<<8)
#define IOVF_SET_BAND	(1<<9)
#define IOVF_GET_UP	(1<<10)
#define IOVF_GET_DOWN	(1<<11)
#define IOVF_GET_CLK	(1<<12)
#define IOVF_GET_BAND	(1<<13)
#define IOVF_OPEN_ALLOW	(1<<14)
typedef int (*watchdog_fn_t) (void *handle);
typedef int (*down_fn_t) (void *handle);
typedef int (*dump_fn_t) (void *handle, struct bcmstrbuf *b);
typedef int (*iovar_fn_t) (void *handle, const bcm_iovar_t *vi,
u32 actionid, const char *name, void *params,
uint plen, void *arg, int alen, int vsize,
struct wlc_if *wlcif);
#define MAC80211_PROMISC_BCNS	(1 << 0)
#define MAC80211_SCAN		(1 << 1)
struct wlc_pub ;
typedef struct wl_rxsts  wl_rxsts_t;
#define WL_RXS_CRC_ERROR		0x00000001
#define WL_RXS_RUNT_ERROR		0x00000002
#define WL_RXS_ALIGN_ERROR		0x00000004
#define WL_RXS_OVERSIZE_ERROR		0x00000008
#define WL_RXS_WEP_ICV_ERROR		0x00000010
#define WL_RXS_WEP_ENCRYPTED		0x00000020
#define WL_RXS_PLCP_SHORT		0x00000040
#define WL_RXS_DECRYPT_ERR		0x00000080
#define WL_RXS_OTHER_ERR		0x80000000
#define WL_RXS_PHY_A			0x00000000
#define WL_RXS_PHY_B			0x00000001
#define WL_RXS_PHY_G			0x00000002
#define WL_RXS_PHY_N			0x00000004
#define WL_RXS_ENCODING_CCK		0x00000000
#define WL_RXS_ENCODING_OFDM		0x00000001
#define WL_RXS_UNUSED_STUB		0x0
#define WL_RXS_PREAMBLE_SHORT		0x00000001
#define WL_RXS_PREAMBLE_LONG		0x00000002
#define WL_RXS_PREAMBLE_MIMO_MM		0x00000003
#define WL_RXS_PREAMBLE_MIMO_GF		0x00000004
#define WL_RXS_NFRM_AMPDU_FIRST		0x00000001
#define WL_RXS_NFRM_AMPDU_SUB		0x00000002
#define WL_RXS_NFRM_AMSDU_FIRST		0x00000004
#define WL_RXS_NFRM_AMSDU_SUB		0x00000008
struct wlc_info;
struct wlc_hw_info;
struct wlc_bsscfg;
struct wlc_if;
#define	AP_ENAB(pub)	(0)
#define APSTA_ENAB(pub)	(0)
#define STA_ONLY(pub)	(!AP_ENAB(pub))
#define AP_ONLY(pub)	(AP_ENAB(pub) && !APSTA_ENAB(pub))
#define ENAB_1x1	0x01
#define ENAB_2x2	0x02
#define ENAB_3x3	0x04
#define ENAB_4x4	0x08
#define SUPPORT_11N	(ENAB_1x1|ENAB_2x2)
#define SUPPORT_HT	(ENAB_1x1|ENAB_2x2|ENAB_3x3)
#if ((defined(NCONF) && (NCONF != 0)) || (defined(LCNCONF) && (LCNCONF != 0)) || \
(defined(HTCONF) && (HTCONF != 0)) || (defined(SSLPNCONF) && (SSLPNCONF != 0)))
#define N_ENAB(pub) ((pub)->_n_enab & SUPPORT_11N)
#define N_REQD(pub) ((pub)->_n_reqd)
#define N_ENAB(pub)	0
#define N_REQD(pub)	0
#if (defined(HTCONF) && (HTCONF != 0))
#define HT_ENAB(pub) (((pub)->_n_enab & SUPPORT_HT) == SUPPORT_HT)
#define HT_ENAB(pub) 0
#define AMPDU_AGG_HOST	1
#define AMPDU_ENAB(pub) ((pub)->_ampdu)
#define EDCF_ENAB(pub) (WME_ENAB(pub))
#define QOS_ENAB(pub) (WME_ENAB(pub) || N_ENAB(pub))
#define MONITOR_ENAB(wlc)	((wlc)->monitor)
#define PROMISC_ENAB(wlc)	((wlc)->promisc)
#define	WLC_PREC_COUNT		16
extern const u8 wlc_prio2prec_map[];
#define WLC_PRIO_TO_PREC(pri)	wlc_prio2prec_map[(pri) & 7]
#define WLC_PRIO_TO_HI_PREC(pri)	min(WLC_PRIO_TO_PREC(pri) + 1, WLC_PREC_COUNT - 1)
extern const u8 wme_fifo2ac[];
#define WME_PRIO2AC(prio)	wme_fifo2ac[prio2fifo[(prio)]]
#define WLC_PREC_BMP_ALL		MAXBITVAL(WLC_PREC_COUNT)
#define WLC_PREC_BMP_AC_BE	(NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_BE)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_BE)) |	\
NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_EE)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_EE)))
#define WLC_PREC_BMP_AC_BK	(NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_BK)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_BK)) |	\
NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_NONE)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_NONE)))
#define WLC_PREC_BMP_AC_VI	(NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_CL)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_CL)) |	\
NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_VI)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_VI)))
#define WLC_PREC_BMP_AC_VO	(NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_VO)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_VO)) |	\
NBITVAL(WLC_PRIO_TO_PREC(PRIO_8021D_NC)) |	\
NBITVAL(WLC_PRIO_TO_HI_PREC(PRIO_8021D_NC)))
#define WME_ENAB(pub) ((pub)->_wme != OFF)
#define WME_AUTO(wlc) ((wlc)->pub->_wme == AUTO)
#define WLC_USE_COREFLAGS	0xffffffff
#define	WLC_PROT_G_SPEC		1
#define	WLC_PROT_G_OVR		2
#define	WLC_PROT_G_USER		3
#define	WLC_PROT_OVERLAP	4
#define	WLC_PROT_N_USER		10
#define	WLC_PROT_N_CFG		11
#define	WLC_PROT_N_CFG_OVR	12
#define	WLC_PROT_N_NONGF	13
#define	WLC_PROT_N_NONGF_OVR	14
#define	WLC_PROT_N_PAM_OVR	15
#define	WLC_PROT_N_OBSS		16
extern void *wlc_attach(struct wl_info *wl, u16 vendor, u16 device, uint unit,
bool piomode, void *regsva, uint bustype, void *btparam,
uint *perr);
extern uint wlc_detach(struct wlc_info *wlc);
extern int wlc_up(struct wlc_info *wlc);
extern uint wlc_down(struct wlc_info *wlc);
extern int wlc_set(struct wlc_info *wlc, int cmd, int arg);
extern int wlc_get(struct wlc_info *wlc, int cmd, int *arg);
extern int wlc_iovar_getint(struct wlc_info *wlc, const char *name, int *arg);
extern int wlc_iovar_setint(struct wlc_info *wlc, const char *name, int arg);
extern bool wlc_chipmatch(u16 vendor, u16 device);
extern void wlc_init(struct wlc_info *wlc);
extern void wlc_reset(struct wlc_info *wlc);
extern void wlc_intrson(struct wlc_info *wlc);
extern u32 wlc_intrsoff(struct wlc_info *wlc);
extern void wlc_intrsrestore(struct wlc_info *wlc, u32 macintmask);
extern bool wlc_intrsupd(struct wlc_info *wlc);
extern bool wlc_isr(struct wlc_info *wlc, bool *wantdpc);
extern bool wlc_dpc(struct wlc_info *wlc, bool bounded);
extern bool wlc_sendpkt_mac80211(struct wlc_info *wlc, struct sk_buff *sdu,
struct ieee80211_hw *hw);
extern int wlc_iovar_op(struct wlc_info *wlc, const char *name, void *params,
int p_len, void *arg, int len, bool set,
struct wlc_if *wlcif);
extern int wlc_ioctl(struct wlc_info *wlc, int cmd, void *arg, int len,
struct wlc_if *wlcif);
extern bool wlc_aggregatable(struct wlc_info *wlc, u8 tid);
extern void wlc_statsupd(struct wlc_info *wlc);
extern void wlc_protection_upd(struct wlc_info *wlc, uint idx, int val);
extern int wlc_get_header_len(void);
extern void wlc_mac_bcn_promisc_change(struct wlc_info *wlc, bool promisc);
extern void wlc_set_addrmatch(struct wlc_info *wlc, int match_reg_offset,
const u8 *addr);
extern void wlc_wme_setparams(struct wlc_info *wlc, u16 aci,
const struct ieee80211_tx_queue_params *arg,
bool suspend);
extern struct wlc_pub *wlc_pub(void *wlc);
extern void wlc_mhf(struct wlc_info *wlc, u8 idx, u16 mask, u16 val,
int bands);
extern void wlc_rate_lookup_init(struct wlc_info *wlc, wlc_rateset_t *rateset);
extern void wlc_default_rateset(struct wlc_info *wlc, wlc_rateset_t *rs);
struct ieee80211_sta;
extern void wlc_ampdu_flush(struct wlc_info *wlc, struct ieee80211_sta *sta,
u16 tid);
extern void wlc_set_ps_ctrl(struct wlc_info *wlc);
extern void wlc_mctrl(struct wlc_info *wlc, u32 mask, u32 val);
extern int wlc_iovar_check(struct wlc_pub *pub, const bcm_iovar_t *vi,
void *arg,
int len, bool set);
extern int wlc_module_register(struct wlc_pub *pub, const bcm_iovar_t *iovars,
const char *name, void *hdl, iovar_fn_t iovar_fn,
watchdog_fn_t watchdog_fn, down_fn_t down_fn);
extern int wlc_module_unregister(struct wlc_pub *pub, const char *name,
void *hdl);
extern void wlc_suspend_mac_and_wait(struct wlc_info *wlc);
extern void wlc_enable_mac(struct wlc_info *wlc);
extern void wlc_associate_upd(struct wlc_info *wlc, bool state);
extern void wlc_scan_start(struct wlc_info *wlc);
extern void wlc_scan_stop(struct wlc_info *wlc);
extern int wlc_get_curband(struct wlc_info *wlc);
extern void wlc_wait_for_tx_completion(struct wlc_info *wlc, bool drop);
#if defined(BCMDBG)
extern int wlc_iocregchk(struct wlc_info *wlc, uint band);
extern bool wlc_check_radio_disabled(struct wlc_info *wlc);
extern bool wlc_radio_monitor_stop(struct wlc_info *wlc);
#if defined(BCMDBG)
extern int wlc_format_ssid(char *buf, const unsigned char ssid[], uint ssid_len);
#define	MAXBANDS		2
#define BAND_2G_INDEX		0
#define BAND_5G_INDEX		1
#define BAND_2G_NAME		"2.4G"
#define BAND_5G_NAME		"5G"
#define WLC_RPCTX_PARAMS		32
