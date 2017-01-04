static int iwm_rx_check_udma_hdr(struct iwm_udma_in_hdr *hdr)
static inline int iwm_rx_resp_size(struct iwm_udma_in_hdr *hdr)
static int iwm_ntf_error(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_umac_alive(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_init_complete(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_tx_credit_update(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_umac_reset(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_lmac_version(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_tx(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_calib_res(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_calib_complete(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_calib_cfg(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_wifi_status(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static struct iwm_rx_ticket_node *
iwm_rx_ticket_node_alloc(struct iwm_priv *iwm, struct iwm_rx_ticket *ticket)
static void iwm_rx_ticket_node_free(struct iwm_rx_ticket_node *ticket_node)
static struct iwm_rx_packet *iwm_rx_packet_get(struct iwm_priv *iwm, u16 id)
static struct iwm_rx_packet *iwm_rx_packet_alloc(struct iwm_priv *iwm, u8 *buf,
u32 size, u16 id)
void iwm_rx_free(struct iwm_priv *iwm)
static int iwm_ntf_rx_ticket(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_rx_packet(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_mlme_assoc_start(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static u8 iwm_is_open_wep_profile(struct iwm_priv *iwm)
static int iwm_mlme_assoc_complete(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_mlme_profile_invalidate(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
#define IWM_DISCONNECT_INTERVAL	(5 * HZ)
static int iwm_mlme_connection_terminated(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_mlme_scan_complete(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_mlme_update_sta_table(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_mlme_medium_lost(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_mlme_update_bss_table(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_mlme_remove_bss(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_mlme_mgt_frame(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_mlme(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
#define IWM_STATS_UPDATE_INTERVAL		(2 * HZ)
static int iwm_ntf_statistics(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_ntf_eeprom_proxy(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_channel_info_list(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_stop_resume_tx(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_ntf_wifi_if_wrapper(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
#define CT_KILL_DELAY (30 * HZ)
static int iwm_ntf_card_state(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd)
static int iwm_rx_handle_wifi(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size)
int iwm_rx_handle_resp(struct iwm_priv *iwm, u8 *buf, unsigned long buf_size,
struct iwm_wifi_cmd *cmd)
static int iwm_rx_handle_nonwifi(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size)
static int iwm_rx_handle_umac(struct iwm_priv *iwm, u8 *buf,
unsigned long buf_size)
int iwm_rx_handle(struct iwm_priv *iwm, u8 *buf, unsigned long buf_size)
static const iwm_handler iwm_umac_handlers[] =
;
static const iwm_handler iwm_lmac_handlers[] =
;
void iwm_rx_setup_handlers(struct iwm_priv *iwm)
static void iwm_remove_iv(struct sk_buff *skb, u32 hdr_total_len)
static void iwm_rx_adjust_packet(struct iwm_priv *iwm,
struct iwm_rx_packet *packet,
struct iwm_rx_ticket_node *ticket_node)
static void classify8023(struct sk_buff *skb)
static void iwm_rx_process_amsdu(struct iwm_priv *iwm, struct sk_buff *skb)
static void iwm_rx_process_packet(struct iwm_priv *iwm,
struct iwm_rx_packet *packet,
struct iwm_rx_ticket_node *ticket_node)
void iwm_rx_worker(struct work_struct *work)
