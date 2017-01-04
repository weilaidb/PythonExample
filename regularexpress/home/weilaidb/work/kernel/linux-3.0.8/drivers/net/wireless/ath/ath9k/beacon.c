#define FUDGE 2
static void ath9k_reset_beacon_status(struct ath_softc *sc)
int ath_beaconq_config(struct ath_softc *sc)
static void ath_beacon_setup(struct ath_softc *sc, struct ath_vif *avp,
struct ath_buf *bf, int rateidx)
static void ath_tx_cabq(struct ieee80211_hw *hw, struct sk_buff *skb)
static struct ath_buf *ath_beacon_generate(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
int ath_beacon_alloc(struct ath_softc *sc, struct ieee80211_vif *vif)
void ath_beacon_return(struct ath_softc *sc, struct ath_vif *avp)
void ath_beacon_tasklet(unsigned long data)
static void ath9k_beacon_init(struct ath_softc *sc,
u32 next_beacon,
u32 beacon_period)
static void ath_beacon_config_ap(struct ath_softc *sc,
struct ath_beacon_config *conf)
static void ath_beacon_config_sta(struct ath_softc *sc,
struct ath_beacon_config *conf)
static void ath_beacon_config_adhoc(struct ath_softc *sc,
struct ath_beacon_config *conf)
static bool ath9k_allow_beacon_config(struct ath_softc *sc,
struct ieee80211_vif *vif)
void ath_beacon_config(struct ath_softc *sc, struct ieee80211_vif *vif)
static bool ath_has_valid_bslot(struct ath_softc *sc)
void ath_set_beacon(struct ath_softc *sc)
void ath9k_set_beaconing_status(struct ath_softc *sc, bool status)
