const u8 rate_info[WLC_MAXRATE + 1] = ;
const mcs_info_t mcs_table[MCS_TABLE_SIZE] = ;
typedef struct legacy_phycfg  legacy_phycfg_t;
#define LEGACY_PHYCFG_TABLE_SIZE	12
static const legacy_phycfg_t legacy_phycfg_table[LEGACY_PHYCFG_TABLE_SIZE] = ;
const wlc_rateset_t cck_ofdm_mimo_rates = ;
const wlc_rateset_t ofdm_mimo_rates = ;
const wlc_rateset_t cck_ofdm_40bw_mimo_rates = ;
const wlc_rateset_t ofdm_40bw_mimo_rates = ;
const wlc_rateset_t cck_ofdm_rates = ;
const wlc_rateset_t gphy_legacy_rates = ;
const wlc_rateset_t ofdm_rates = ;
const wlc_rateset_t cck_rates = ;
static bool wlc_rateset_valid(wlc_rateset_t *rs, bool check_brate);
static bool wlc_rateset_valid(wlc_rateset_t *rs, bool check_brate)
void wlc_rateset_mcs_upd(wlc_rateset_t *rs, u8 txstreams)
bool
wlc_rate_hwrs_filter_sort_validate(wlc_rateset_t *rs,
const wlc_rateset_t *hw_rs,
bool check_brate, u8 txstreams)
ratespec_t wlc_compute_rspec(d11rxhdr_t *rxh, u8 *plcp)
void wlc_rateset_copy(const wlc_rateset_t *src, wlc_rateset_t *dst)
void
wlc_rateset_filter(wlc_rateset_t *src, wlc_rateset_t *dst, bool basic_only,
u8 rates, uint xmask, bool mcsallow)
void
wlc_rateset_default(wlc_rateset_t *rs_tgt, const wlc_rateset_t *rs_hw,
uint phy_type, int bandtype, bool cck_only, uint rate_mask,
bool mcsallow, u8 bw, u8 txstreams)
s16 wlc_rate_legacy_phyctl(uint rate)
void wlc_rateset_mcs_clear(wlc_rateset_t *rateset)
void wlc_rateset_mcs_build(wlc_rateset_t *rateset, u8 txstreams)
void wlc_rateset_bw_mcs_filter(wlc_rateset_t *rateset, u8 bw)
