#define VERSION "1.0"
void btmrvl_interrupt(struct btmrvl_private *priv)
EXPORT_SYMBOL_GPL(btmrvl_interrupt);
void btmrvl_check_evtpkt(struct btmrvl_private *priv, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(btmrvl_check_evtpkt);
int btmrvl_process_event(struct btmrvl_private *priv, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(btmrvl_process_event);
int btmrvl_send_module_cfg_cmd(struct btmrvl_private *priv, int subcmd)
EXPORT_SYMBOL_GPL(btmrvl_send_module_cfg_cmd);
int btmrvl_enable_ps(struct btmrvl_private *priv)
EXPORT_SYMBOL_GPL(btmrvl_enable_ps);
static int btmrvl_enable_hs(struct btmrvl_private *priv)
int btmrvl_prepare_command(struct btmrvl_private *priv)
static int btmrvl_tx_pkt(struct btmrvl_private *priv, struct sk_buff *skb)
static void btmrvl_init_adapter(struct btmrvl_private *priv)
static void btmrvl_free_adapter(struct btmrvl_private *priv)
static int btmrvl_ioctl(struct hci_dev *hdev,
unsigned int cmd, unsigned long arg)
static void btmrvl_destruct(struct hci_dev *hdev)
static int btmrvl_send_frame(struct sk_buff *skb)
static int btmrvl_flush(struct hci_dev *hdev)
static int btmrvl_close(struct hci_dev *hdev)
static int btmrvl_open(struct hci_dev *hdev)
static int btmrvl_service_main_thread(void *data)
int btmrvl_register_hdev(struct btmrvl_private *priv)
EXPORT_SYMBOL_GPL(btmrvl_register_hdev);
struct btmrvl_private *btmrvl_add_card(void *card)
EXPORT_SYMBOL_GPL(btmrvl_add_card);
int btmrvl_remove_card(struct btmrvl_private *priv)
EXPORT_SYMBOL_GPL(btmrvl_remove_card);
MODULE_AUTHOR("Marvell International Ltd.");
MODULE_DESCRIPTION("Marvell Bluetooth driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL v2");
