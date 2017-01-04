#define _DEV_ATH_ATHVAR_H
#define	ATH_RXBUF	40
#define	ATH_TXBUF	200
#define ATH_BCBUF	4
#define ATH5K_TXQ_LEN_MAX	(ATH_TXBUF / 4)
#define ATH5K_TXQ_LEN_LOW	(ATH5K_TXQ_LEN_MAX / 2)
struct ath5k_buf ;
struct ath5k_txq ;
#define ATH5K_LED_MAX_NAME_LEN 31
struct ath5k_led
;
struct ath5k_rfkill ;
struct ath5k_statistics ;
#if CHAN_DEBUG
#define ATH_CHAN_MAX	(26+26+26+200+200)
#define ATH_CHAN_MAX	(14+14+14+252+20)
struct ath5k_vif ;
struct ath5k_softc ;
struct ath5k_vif_iter_data ;
void ath5k_vif_iter(void *data, u8 *mac, struct ieee80211_vif *vif);
#define ath5k_hw_hasbssidmask(_ah) \
(ath5k_hw_get_capability(_ah, AR5K_CAP_BSSIDMASK, 0, NULL) == 0)
#define ath5k_hw_hasveol(_ah) \
(ath5k_hw_get_capability(_ah, AR5K_CAP_VEOL, 0, NULL) == 0)
