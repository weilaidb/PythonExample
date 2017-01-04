static const char *wmi_cmd_to_name(enum wmi_cmd_id wmi_cmd)
struct wmi *ath9k_init_wmi(struct ath9k_htc_priv *priv)
void ath9k_deinit_wmi(struct ath9k_htc_priv *priv)
void ath9k_wmi_event_drain(struct ath9k_htc_priv *priv)
void ath9k_wmi_event_tasklet(unsigned long data)
void ath9k_fatal_work(struct work_struct *work)
static void ath9k_wmi_rsp_callback(struct wmi *wmi, struct sk_buff *skb)
static void ath9k_wmi_ctrl_rx(void *priv, struct sk_buff *skb,
enum htc_endpoint_id epid)
static void ath9k_wmi_ctrl_tx(void *priv, struct sk_buff *skb,
enum htc_endpoint_id epid, bool txok)
int ath9k_wmi_connect(struct htc_target *htc, struct wmi *wmi,
enum htc_endpoint_id *wmi_ctrl_epid)
static int ath9k_wmi_cmd_issue(struct wmi *wmi,
struct sk_buff *skb,
enum wmi_cmd_id cmd, u16 len)
int ath9k_wmi_cmd(struct wmi *wmi, enum wmi_cmd_id cmd_id,
u8 *cmd_buf, u32 cmd_len,
u8 *rsp_buf, u32 rsp_len,
u32 timeout)
