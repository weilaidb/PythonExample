#define MIN_SPATIAL_EXPANSION	0
#define MAX_SPATIAL_EXPANSION	1
#define WLC_STF_SS_STBC_RX(wlc) (WLCISNPHY(wlc->band) && \
NREV_GT(wlc->band->phyrev, 3) && NREV_LE(wlc->band->phyrev, 6))
static bool wlc_stf_stbc_tx_set(struct wlc_info *wlc, s32 int_val);
static int wlc_stf_txcore_set(struct wlc_info *wlc, u8 Nsts, u8 val);
static int wlc_stf_spatial_policy_set(struct wlc_info *wlc, int val);
static void wlc_stf_stbc_rx_ht_update(struct wlc_info *wlc, int val);
static void _wlc_stf_phy_txant_upd(struct wlc_info *wlc);
static u16 _wlc_stf_phytxchain_sel(struct wlc_info *wlc, ratespec_t rspec);
#define NSTS_1	1
#define NSTS_2	2
#define NSTS_3	3
#define NSTS_4	4
const u8 txcore_default[5] = ;
static void wlc_stf_stbc_rx_ht_update(struct wlc_info *wlc, int val)
void wlc_tempsense_upd(struct wlc_info *wlc)
void
wlc_stf_ss_algo_channel_get(struct wlc_info *wlc, u16 *ss_algo_channel,
chanspec_t chanspec)
static bool wlc_stf_stbc_tx_set(struct wlc_info *wlc, s32 int_val)
bool wlc_stf_stbc_rx_set(struct wlc_info *wlc, s32 int_val)
static int wlc_stf_txcore_set(struct wlc_info *wlc, u8 Nsts, u8 core_mask)
static int wlc_stf_spatial_policy_set(struct wlc_info *wlc, int val)
int wlc_stf_txchain_set(struct wlc_info *wlc, s32 int_val, bool force)
int wlc_stf_ss_update(struct wlc_info *wlc, struct wlcband *band)
int wlc_stf_attach(struct wlc_info *wlc)
void wlc_stf_detach(struct wlc_info *wlc)
int wlc_stf_ant_txant_validate(struct wlc_info *wlc, s8 val)
static void _wlc_stf_phy_txant_upd(struct wlc_info *wlc)
void wlc_stf_phy_txant_upd(struct wlc_info *wlc)
void wlc_stf_phy_chain_calc(struct wlc_info *wlc)
static u16 _wlc_stf_phytxchain_sel(struct wlc_info *wlc, ratespec_t rspec)
u16 wlc_stf_phytxchain_sel(struct wlc_info *wlc, ratespec_t rspec)
u16 wlc_stf_d11hdrs_phyctl_txant(struct wlc_info *wlc, ratespec_t rspec)
