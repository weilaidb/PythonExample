#define _WLC_RATE_H_
extern const u8 rate_info[];
extern const struct wlc_rateset cck_ofdm_mimo_rates;
extern const struct wlc_rateset ofdm_mimo_rates;
extern const struct wlc_rateset cck_ofdm_rates;
extern const struct wlc_rateset ofdm_rates;
extern const struct wlc_rateset cck_rates;
extern const struct wlc_rateset gphy_legacy_rates;
extern const struct wlc_rateset wlc_lrs_rates;
extern const struct wlc_rateset rate_limit_1_2;
typedef struct mcs_info  mcs_info_t;
#define WLC_MAXMCS	32
#define MCS_TABLE_SIZE	33
extern const mcs_info_t mcs_table[];
#define MCS_INVALID	0xFF
#define MCS_CR_MASK	0x07
#define MCS_MOD_MASK	0x38
#define MCS_MOD_SHIFT	3
#define MCS_TXS_MASK	0xc0
#define MCS_TXS_SHIFT	6
#define MCS_CR(_mcs)	(mcs_table[_mcs].tx_phy_ctl3 & MCS_CR_MASK)
#define MCS_MOD(_mcs)	((mcs_table[_mcs].tx_phy_ctl3 & MCS_MOD_MASK) >> MCS_MOD_SHIFT)
#define MCS_TXS(_mcs)	((mcs_table[_mcs].tx_phy_ctl3 & MCS_TXS_MASK) >> MCS_TXS_SHIFT)
#define MCS_RATE(_mcs, _is40, _sgi)	(_sgi ? \
(_is40 ? mcs_table[_mcs].phy_rate_40_sgi : mcs_table[_mcs].phy_rate_20_sgi) : \
(_is40 ? mcs_table[_mcs].phy_rate_40 : mcs_table[_mcs].phy_rate_20))
#define VALID_MCS(_mcs)	((_mcs < MCS_TABLE_SIZE))
#define	WLC_RATE_MASK_FULL 0xff
#define WLC_RATE_500K_TO_BPS(rate)	((rate) * 500000)
typedef u32 ratespec_t;
#define RSPEC_RATE_MASK		0x0000007F
#define RSPEC_MIMORATE		0x08000000
#define RSPEC_BW_MASK		0x00000700
#define RSPEC_BW_SHIFT		8
#define RSPEC_STF_MASK		0x00003800
#define RSPEC_STF_SHIFT		11
#define RSPEC_CT_MASK		0x0000C000
#define RSPEC_CT_SHIFT		14
#define RSPEC_STC_MASK		0x00300000
#define RSPEC_STC_SHIFT		20
#define RSPEC_LDPC_CODING	0x00400000
#define RSPEC_SHORT_GI		0x00800000
#define RSPEC_OVERRIDE		0x80000000
#define RSPEC_OVERRIDE_MCS_ONLY 0x40000000
#define WLC_HTPHY		127
#define RSPEC_ACTIVE(rspec)	(rspec & (RSPEC_RATE_MASK | RSPEC_MIMORATE))
#define RSPEC2RATE(rspec)      	((rspec & RSPEC_MIMORATE) ? \
MCS_RATE((rspec & RSPEC_RATE_MASK), RSPEC_IS40MHZ(rspec), RSPEC_ISSGI(rspec)) : \
(rspec & RSPEC_RATE_MASK))
#define RSPEC2RATE500K(rspec)	((rspec & RSPEC_MIMORATE) ? \
MCS_RATE((rspec & RSPEC_RATE_MASK), state->is40bw, RSPEC_ISSGI(rspec))/500 : \
(rspec & RSPEC_RATE_MASK))
#define CRSPEC2RATE500K(rspec)	((rspec & RSPEC_MIMORATE) ? \
MCS_RATE((rspec & RSPEC_RATE_MASK), RSPEC_IS40MHZ(rspec), RSPEC_ISSGI(rspec))/500 :\
(rspec & RSPEC_RATE_MASK))
#define RSPEC2KBPS(rspec)	(IS_MCS(rspec) ? RSPEC2RATE(rspec) : RSPEC2RATE(rspec)*500)
#define RSPEC_PHYTXBYTE2(rspec)	((rspec & 0xff00) >> 8)
#define RSPEC_GET_BW(rspec)	((rspec & RSPEC_BW_MASK) >> RSPEC_BW_SHIFT)
#define RSPEC_IS40MHZ(rspec)	((((rspec & RSPEC_BW_MASK) >> RSPEC_BW_SHIFT) == \
PHY_TXC1_BW_40MHZ) || (((rspec & RSPEC_BW_MASK) >> \
RSPEC_BW_SHIFT) == PHY_TXC1_BW_40MHZ_DUP))
#define RSPEC_ISSGI(rspec)	((rspec & RSPEC_SHORT_GI) == RSPEC_SHORT_GI)
#define RSPEC_MIMOPLCP3(rspec)	((rspec & 0xf00000) >> 16)
#define PLCP3_ISSGI(plcp)	(plcp & (RSPEC_SHORT_GI >> 16))
#define RSPEC_STC(rspec)	((rspec & RSPEC_STC_MASK) >> RSPEC_STC_SHIFT)
#define RSPEC_STF(rspec)	((rspec & RSPEC_STF_MASK) >> RSPEC_STF_SHIFT)
#define PLCP3_ISSTBC(plcp)	((plcp & (RSPEC_STC_MASK) >> 16) == 0x10)
#define PLCP3_STC_MASK          0x30
#define PLCP3_STC_SHIFT         4
#define	IS_MCS(r)     	(r & RSPEC_MIMORATE)
#define	IS_OFDM(r)     	(!IS_MCS(r) && (rate_info[(r) & RSPEC_RATE_MASK] & WLC_RATE_FLAG))
#define	IS_CCK(r)	(!IS_MCS(r) && ( \
((r) & WLC_RATE_MASK) == WLC_RATE_1M || \
((r) & WLC_RATE_MASK) == WLC_RATE_2M || \
((r) & WLC_RATE_MASK) == WLC_RATE_5M5 || \
((r) & WLC_RATE_MASK) == WLC_RATE_11M))
#define IS_SINGLE_STREAM(mcs)	(((mcs) <= HIGHEST_SINGLE_STREAM_MCS) || ((mcs) == 32))
#define CCK_RSPEC(cck)		((cck) & RSPEC_RATE_MASK)
#define OFDM_RSPEC(ofdm)	(((ofdm) & RSPEC_RATE_MASK) |\
(PHY_TXC1_MODE_CDD << RSPEC_STF_SHIFT))
#define LEGACY_RSPEC(rate)	(IS_CCK(rate) ? CCK_RSPEC(rate) : OFDM_RSPEC(rate))
#define MCS_RSPEC(mcs)		(((mcs) & RSPEC_RATE_MASK) | RSPEC_MIMORATE | \
(IS_SINGLE_STREAM(mcs) ? (PHY_TXC1_MODE_CDD << RSPEC_STF_SHIFT) : \
(PHY_TXC1_MODE_SDM << RSPEC_STF_SHIFT)))
extern const u8 ofdm_rate_lookup[];
#define OFDM_PHY2MAC_RATE(rlpt)		(ofdm_rate_lookup[rlpt & 0x7])
#define CCK_PHY2MAC_RATE(signal)	(signal/5)
#define WLC_RATES_CCK_OFDM	0
#define WLC_RATES_CCK		1
#define WLC_RATES_OFDM		2
struct wlc_rateset;
extern bool wlc_rate_hwrs_filter_sort_validate(struct wlc_rateset *rs,
const struct wlc_rateset *hw_rs,
bool check_brate,
u8 txstreams);
extern void wlc_rateset_copy(const struct wlc_rateset *src,
struct wlc_rateset *dst);
extern ratespec_t wlc_compute_rspec(d11rxhdr_t *rxh, u8 *plcp);
extern void wlc_rateset_filter(struct wlc_rateset *src, struct wlc_rateset *dst,
bool basic_only, u8 rates, uint xmask,
bool mcsallow);
extern void wlc_rateset_default(struct wlc_rateset *rs_tgt,
const struct wlc_rateset *rs_hw, uint phy_type,
int bandtype, bool cck_only, uint rate_mask,
bool mcsallow, u8 bw, u8 txstreams);
extern s16 wlc_rate_legacy_phyctl(uint rate);
extern void wlc_rateset_mcs_upd(struct wlc_rateset *rs, u8 txstreams);
extern void wlc_rateset_mcs_clear(struct wlc_rateset *rateset);
extern void wlc_rateset_mcs_build(struct wlc_rateset *rateset, u8 txstreams);
extern void wlc_rateset_bw_mcs_filter(struct wlc_rateset *rateset, u8 bw);
