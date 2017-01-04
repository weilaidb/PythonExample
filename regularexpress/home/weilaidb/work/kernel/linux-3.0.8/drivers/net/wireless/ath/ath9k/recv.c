#define SKB_CB_ATHBUF(__skb)	(*((struct ath_buf **)__skb->cb))
static inline bool ath_is_alt_ant_ratio_better(int alt_ratio, int maxdelta,
int mindelta, int main_rssi_avg,
int alt_rssi_avg, int pkt_count)
static inline bool ath_ant_div_comb_alt_check(u8 div_group, int alt_ratio,
int curr_main_set, int curr_alt_set,
int alt_rssi_avg, int main_rssi_avg)
static inline bool ath9k_check_auto_sleep(struct ath_softc *sc)
static void ath_rx_buf_link(struct ath_softc *sc, struct ath_buf *bf)
static void ath_setdefantenna(struct ath_softc *sc, u32 antenna)
static void ath_opmode_init(struct ath_softc *sc)
static bool ath_rx_edma_buf_link(struct ath_softc *sc,
enum ath9k_rx_qtype qtype)
static void ath_rx_addbuffer_edma(struct ath_softc *sc,
enum ath9k_rx_qtype qtype, int size)
static void ath_rx_remove_buffer(struct ath_softc *sc,
enum ath9k_rx_qtype qtype)
static void ath_rx_edma_cleanup(struct ath_softc *sc)
static void ath_rx_edma_init_queue(struct ath_rx_edma *rx_edma, int size)
static int ath_rx_edma_init(struct ath_softc *sc, int nbufs)
static void ath_edma_start_recv(struct ath_softc *sc)
static void ath_edma_stop_recv(struct ath_softc *sc)
int ath_rx_init(struct ath_softc *sc, int nbufs)
void ath_rx_cleanup(struct ath_softc *sc)
u32 ath_calcrxfilter(struct ath_softc *sc)
int ath_startrecv(struct ath_softc *sc)
bool ath_stoprecv(struct ath_softc *sc)
void ath_flushrecv(struct ath_softc *sc)
static bool ath_beacon_dtim_pending_cab(struct sk_buff *skb)
static void ath_rx_ps_beacon(struct ath_softc *sc, struct sk_buff *skb)
static void ath_rx_ps(struct ath_softc *sc, struct sk_buff *skb)
static bool ath_edma_get_buffers(struct ath_softc *sc,
enum ath9k_rx_qtype qtype)
static struct ath_buf *ath_edma_get_next_rx_buf(struct ath_softc *sc,
struct ath_rx_status *rs,
enum ath9k_rx_qtype qtype)
static struct ath_buf *ath_get_next_rx_buf(struct ath_softc *sc,
struct ath_rx_status *rs)
static bool ath9k_rx_accept(struct ath_common *common,
struct ieee80211_hdr *hdr,
struct ieee80211_rx_status *rxs,
struct ath_rx_status *rx_stats,
bool *decrypt_error)
static int ath9k_process_rate(struct ath_common *common,
struct ieee80211_hw *hw,
struct ath_rx_status *rx_stats,
struct ieee80211_rx_status *rxs)
static void ath9k_process_rssi(struct ath_common *common,
struct ieee80211_hw *hw,
struct ieee80211_hdr *hdr,
struct ath_rx_status *rx_stats)
static int ath9k_rx_skb_preprocess(struct ath_common *common,
struct ieee80211_hw *hw,
struct ieee80211_hdr *hdr,
struct ath_rx_status *rx_stats,
struct ieee80211_rx_status *rx_status,
bool *decrypt_error)
static void ath9k_rx_skb_postprocess(struct ath_common *common,
struct sk_buff *skb,
struct ath_rx_status *rx_stats,
struct ieee80211_rx_status *rxs,
bool decrypt_error)
static void ath_lnaconf_alt_good_scan(struct ath_ant_comb *antcomb,
struct ath_hw_antcomb_conf ant_conf,
int main_rssi_avg)
static void ath_select_ant_div_from_quick_scan(struct ath_ant_comb *antcomb,
struct ath_hw_antcomb_conf *div_ant_conf,
int main_rssi_avg, int alt_rssi_avg,
int alt_ratio)
static void ath_ant_div_conf_fast_divbias(struct ath_hw_antcomb_conf *ant_conf,
struct ath_ant_comb *antcomb, int alt_ratio)
static void ath_ant_comb_scan(struct ath_softc *sc, struct ath_rx_status *rs)
int ath_rx_tasklet(struct ath_softc *sc, int flush, bool hp)
