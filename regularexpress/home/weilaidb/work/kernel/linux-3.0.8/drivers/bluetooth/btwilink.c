#define DEBUG
#define VERSION               "1.0"
#define MAX_BT_CHNL_IDS		3
#define BT_REGISTER_TIMEOUT   6000
struct ti_st ;
static inline void ti_st_tx_complete(struct ti_st *hst, int pkt_type)
static void st_reg_completion_cb(void *priv_data, char data)
static long st_receive(void *priv_data, struct sk_buff *skb)
static struct st_proto_s ti_st_proto[MAX_BT_CHNL_IDS] = ;
static int ti_st_open(struct hci_dev *hdev)
static int ti_st_close(struct hci_dev *hdev)
static int ti_st_send_frame(struct sk_buff *skb)
static void ti_st_destruct(struct hci_dev *hdev)
static int bt_ti_probe(struct platform_device *pdev)
static int bt_ti_remove(struct platform_device *pdev)
static struct platform_driver btwilink_driver = ;
static int __init btwilink_init(void)
static void __exit btwilink_exit(void)
module_init(btwilink_init);
module_exit(btwilink_exit);
MODULE_AUTHOR("Raja Mani <raja_mani@ti.com>");
MODULE_DESCRIPTION("Bluetooth Driver for TI Shared Transport" VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
