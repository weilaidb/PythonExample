static int iwm_nonwifi_cmd_init(struct iwm_priv *iwm,
struct iwm_nonwifi_cmd *cmd,
struct iwm_udma_nonwifi_cmd *udma_cmd)
u16 iwm_alloc_wifi_cmd_seq(struct iwm_priv *iwm)
static void iwm_wifi_cmd_init(struct iwm_priv *iwm,
struct iwm_wifi_cmd *cmd,
struct iwm_udma_wifi_cmd *udma_cmd,
struct iwm_umac_cmd *umac_cmd,
struct iwm_lmac_cmd *lmac_cmd,
u16 payload_size)
void iwm_cmd_flush(struct iwm_priv *iwm)
struct iwm_wifi_cmd *iwm_get_pending_wifi_cmd(struct iwm_priv *iwm, u16 seq_num)
struct iwm_nonwifi_cmd *iwm_get_pending_nonwifi_cmd(struct iwm_priv *iwm,
u8 seq_num, u8 cmd_opcode)
static void iwm_build_udma_nonwifi_hdr(struct iwm_priv *iwm,
struct iwm_udma_out_nonwifi_hdr *hdr,
struct iwm_udma_nonwifi_cmd *cmd)
static int iwm_send_udma_nonwifi_cmd(struct iwm_priv *iwm,
struct iwm_nonwifi_cmd *cmd)
void iwm_udma_wifi_hdr_set_eop(struct iwm_priv *iwm, u8 *buf, u8 eop)
void iwm_build_udma_wifi_hdr(struct iwm_priv *iwm,
struct iwm_udma_out_wifi_hdr *hdr,
struct iwm_udma_wifi_cmd *cmd)
void iwm_build_umac_hdr(struct iwm_priv *iwm,
struct iwm_umac_fw_cmd_hdr *hdr,
struct iwm_umac_cmd *cmd)
static int iwm_send_udma_wifi_cmd(struct iwm_priv *iwm,
struct iwm_wifi_cmd *cmd)
int iwm_hal_send_target_cmd(struct iwm_priv *iwm,
struct iwm_udma_nonwifi_cmd *udma_cmd,
const void *payload)
static void iwm_build_lmac_hdr(struct iwm_priv *iwm, struct iwm_lmac_hdr *hdr,
struct iwm_lmac_cmd *cmd)
int iwm_hal_send_host_cmd(struct iwm_priv *iwm,
struct iwm_udma_wifi_cmd *udma_cmd,
struct iwm_umac_cmd *umac_cmd,
struct iwm_lmac_cmd *lmac_cmd,
const void *payload, u16 payload_size)
int iwm_hal_send_umac_cmd(struct iwm_priv *iwm,
struct iwm_udma_wifi_cmd *udma_cmd,
struct iwm_umac_cmd *umac_cmd,
const void *payload, u16 payload_size)
