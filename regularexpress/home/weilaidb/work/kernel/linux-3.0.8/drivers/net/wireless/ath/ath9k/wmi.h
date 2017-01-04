#define WMI_H
struct wmi_event_txrate  __packed;
struct wmi_cmd_hdr  __packed;
struct wmi_fw_version  __packed;
struct wmi_event_swba ;
#define HTC_MAX_TX_STATUS 12
#define ATH9K_HTC_TXSTAT_ACK        BIT(0)
#define ATH9K_HTC_TXSTAT_FILT       BIT(1)
#define ATH9K_HTC_TXSTAT_RTC_CTS    BIT(2)
#define ATH9K_HTC_TXSTAT_MCS        BIT(3)
#define ATH9K_HTC_TXSTAT_CW40       BIT(4)
#define ATH9K_HTC_TXSTAT_SGI        BIT(5)
#define ATH9K_HTC_TXSTAT_RATE       0x0f
#define ATH9K_HTC_TXSTAT_RATE_S     0
#define ATH9K_HTC_TXSTAT_EPID       0xf0
#define ATH9K_HTC_TXSTAT_EPID_S     4
struct __wmi_event_txstatus ;
struct wmi_event_txstatus  __packed;
enum wmi_cmd_id ;
enum wmi_event_id ;
#define MAX_CMD_NUMBER 62
struct register_write ;
struct ath9k_htc_tx_event ;
struct wmi ;
struct wmi *ath9k_init_wmi(struct ath9k_htc_priv *priv);
void ath9k_deinit_wmi(struct ath9k_htc_priv *priv);
int ath9k_wmi_connect(struct htc_target *htc, struct wmi *wmi,
enum htc_endpoint_id *wmi_ctrl_epid);
int ath9k_wmi_cmd(struct wmi *wmi, enum wmi_cmd_id cmd_id,
u8 *cmd_buf, u32 cmd_len,
u8 *rsp_buf, u32 rsp_len,
u32 timeout);
void ath9k_wmi_event_tasklet(unsigned long data);
void ath9k_fatal_work(struct work_struct *work);
void ath9k_wmi_event_drain(struct ath9k_htc_priv *priv);
#define WMI_CMD(_wmi_cmd)						\
do  while (0)
#define WMI_CMD_BUF(_wmi_cmd, _buf)					\
do  while (0)
