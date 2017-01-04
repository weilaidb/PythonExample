#define _GELIC_WIRELESS_H
enum gelic_lv1_wl_event ;
enum gelic_eurus_command ;
enum gelic_eurus_bss_type ;
enum gelic_eurus_auth_method ;
enum gelic_eurus_opmode ;
struct gelic_eurus_common_cfg  __packed;
enum gelic_eurus_wep_security ;
struct gelic_eurus_wep_cfg  __packed;
enum gelic_eurus_wpa_security ;
enum gelic_eurus_wpa_psk_type ;
#define GELIC_WL_EURUS_PSK_MAX_LEN	64
#define WPA_PSK_LEN			32
struct gelic_eurus_wpa_cfg  __packed;
enum gelic_eurus_scan_capability ;
enum gelic_eurus_scan_sec_type ;
enum gelic_eurus_scan_sec_wep_type ;
enum gelic_eurus_scan_sec_wpa_type ;
struct gelic_eurus_scan_info  __packed;
#define GELIC_EURUS_MAX_SCAN  (16)
struct gelic_wl_scan_info ;
struct gelic_eurus_rssi_info  __packed;
enum gelic_wl_info_status_bit ;
enum gelic_wl_scan_state ;
enum gelic_wl_cipher_method ;
enum gelic_wl_wpa_level ;
enum gelic_wl_assoc_state ;
#define GELIC_WEP_KEYS 4
struct gelic_wl_info ;
#define GELIC_WL_BSS_MAX_ENT 32
#define GELIC_WL_ASSOC_RETRY 50
static inline struct gelic_port *wl_port(struct gelic_wl_info *wl)
static inline struct gelic_wl_info *port_wl(struct gelic_port *port)
struct gelic_eurus_cmd ;
#define GELIC_WL_PRIV_SET_PSK		(SIOCIWFIRSTPRIV + 0)
#define GELIC_WL_PRIV_GET_PSK		(SIOCIWFIRSTPRIV + 1)
extern int gelic_wl_driver_probe(struct gelic_card *card);
extern int gelic_wl_driver_remove(struct gelic_card *card);
extern void gelic_wl_interrupt(struct net_device *netdev, u64 status);
