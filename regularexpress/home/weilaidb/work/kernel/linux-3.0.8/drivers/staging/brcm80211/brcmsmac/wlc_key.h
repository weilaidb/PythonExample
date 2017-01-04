#define _wlc_key_h_
struct scb;
struct wlc_info;
struct wlc_bsscfg;
#define WSEC_MAX_KEYS		54
#define WLC_DEFAULT_KEYS	4
#define WSEC_MAX_WOWL_KEYS 5
#define WPA2_GTK_MAX	3
#define WLC_MAX_WSEC_KEYS(wlc) WSEC_MAX_KEYS
#define WSEC_MAX_DEFAULT_KEYS	4
#define WLC_MAX_WSEC_HW_KEYS(wlc) WSEC_MAX_RCMTA_KEYS
#define WLC_MAX_TKMIC_HW_KEYS(wlc) (WSEC_MAX_TKMIC_ENGINE_KEYS)
#define WSEC_HW_TKMIC_KEY(wlc, key, bsscfg) \
((((wlc)->machwcap & MCAP_TKIPMIC)) && \
(key) && ((key)->algo == CRYPTO_ALGO_TKIP) && \
!WSEC_SOFTKEY(wlc, key, bsscfg) && \
WSEC_KEY_INDEX(wlc, key) >= WLC_DEFAULT_KEYS && \
(WSEC_KEY_INDEX(wlc, key) < WSEC_MAX_TKMIC_ENGINE_KEYS))
#define WSEC_KEY_INDEX(wlc, key)	((key)->idx)
#define WSEC_SOFTKEY(wlc, key, bsscfg) (WLC_SW_KEYS(wlc, bsscfg) || \
WSEC_KEY_INDEX(wlc, key) >= WLC_MAX_WSEC_HW_KEYS(wlc))
#define WSEC_KEY(wlc, i)	(((wlc)->wsec_keys[i] && (wlc)->wsec_keys[i]->len) ? \
(wlc)->wsec_keys[i] : NULL)
#define WSEC_SCB_KEY_VALID(scb)	(((scb)->key && (scb)->key->len) ? true : false)
#define WSEC_BSS_DEFAULT_KEY(bsscfg) (((bsscfg)->wsec_index == -1) ? \
(struct wsec_key *)NULL:(bsscfg)->bss_def_keys[(bsscfg)->wsec_index])
#define WSEC_IBSS_MAX_PEERS	16
#define WSEC_IBSS_RCMTA_INDEX(idx) \
(((idx - WSEC_MAX_DEFAULT_KEYS) % WSEC_IBSS_MAX_PEERS) + WSEC_MAX_DEFAULT_KEYS)
#define WSEC_BSS_STA_KEY_GROUP_SIZE	5
typedef struct wsec_iv  wsec_iv_t;
#define WLC_NUMRXIVS	16
typedef struct wsec_key  wsec_key_t;
#define broken_roundup(x, y) ((((x) + ((y) - 1)) / (y)) * (y))
#define WSEC_BS_UPDATE		(1 << 0)
#define WSEC_PRIMARY_KEY	(1 << 1)
#define WSEC_TKIP_ERROR		(1 << 2)
#define WSEC_REPLAY_ERROR	(1 << 3)
#define WSEC_IBSS_PEER_GROUP_KEY	(1 << 7)
#define WSEC_ICV_ERROR		(1 << 8)
#define wlc_key_insert(a, b, c, d, e, f, g, h, i, j) (-EBADE)
#define wlc_key_update(a, b, c) do  while (0)
#define wlc_key_remove(a, b, c) do  while (0)
#define wlc_key_remove_all(a, b) do  while (0)
#define wlc_key_delete(a, b, c) do  while (0)
#define wlc_scb_key_delete(a, b) do  while (0)
#define wlc_key_lookup(a, b, c, d, e) (NULL)
#define wlc_key_hw_init_all(a) do  while (0)
#define wlc_key_hw_init(a, b, c)  do  while (0)
#define wlc_key_hw_wowl_init(a, b, c, d) do  while (0)
#define wlc_key_sw_wowl_update(a, b, c, d, e) do  while (0)
#define wlc_key_sw_wowl_create(a, b, c) (-EBADE)
#define wlc_key_iv_update(a, b, c, d, e) do  while (0)
#define wlc_key_iv_init(a, b, c) do  while (0)
#define wlc_key_set_error(a, b, c) (-EBADE)
#define wlc_key_dump_hw(a, b) (-EBADE)
#define wlc_key_dump_sw(a, b) (-EBADE)
#define wlc_key_defkeyflag(a) (0)
#define wlc_rcmta_add_bssid(a, b) do  while (0)
#define wlc_rcmta_del_bssid(a, b) do  while (0)
#define wlc_key_scb_delete(a, b) do  while (0)
