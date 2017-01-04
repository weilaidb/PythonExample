#define BTM_HEADER_LEN			4
#define BTM_UPLD_SIZE			2312
#define WAIT_UNTIL_HS_STATE_CHANGED	5000
#define WAIT_UNTIL_CMD_RESP		5000
struct btmrvl_thread ;
struct btmrvl_device ;
struct btmrvl_adapter ;
struct btmrvl_private ;
#define MRVL_VENDOR_PKT			0xFE
#define BT_CMD_AUTO_SLEEP_MODE		0x23
#define BT_CMD_HOST_SLEEP_CONFIG	0x59
#define BT_CMD_HOST_SLEEP_ENABLE	0x5A
#define BT_CMD_MODULE_CFG_REQ		0x5B
#define MODULE_BRINGUP_REQ		0xF1
#define MODULE_BROUGHT_UP		0x00
#define MODULE_ALREADY_UP		0x0C
#define MODULE_SHUTDOWN_REQ		0xF2
#define BT_EVENT_POWER_STATE		0x20
#define BT_PS_ENABLE			0x02
#define BT_PS_DISABLE			0x03
#define BT_PS_SLEEP			0x01
#define OGF				0x3F
#define HS_ACTIVATED			0x01
#define HS_DEACTIVATED			0x00
#define PS_SLEEP			0x01
#define PS_AWAKE			0x00
struct btmrvl_cmd  __packed;
struct btmrvl_event  __packed;
int btmrvl_register_hdev(struct btmrvl_private *priv);
struct btmrvl_private *btmrvl_add_card(void *card);
int btmrvl_remove_card(struct btmrvl_private *priv);
void btmrvl_interrupt(struct btmrvl_private *priv);
void btmrvl_check_evtpkt(struct btmrvl_private *priv, struct sk_buff *skb);
int btmrvl_process_event(struct btmrvl_private *priv, struct sk_buff *skb);
int btmrvl_send_module_cfg_cmd(struct btmrvl_private *priv, int subcmd);
int btmrvl_enable_ps(struct btmrvl_private *priv);
int btmrvl_prepare_command(struct btmrvl_private *priv);
void btmrvl_debugfs_init(struct hci_dev *hdev);
void btmrvl_debugfs_remove(struct hci_dev *hdev);
