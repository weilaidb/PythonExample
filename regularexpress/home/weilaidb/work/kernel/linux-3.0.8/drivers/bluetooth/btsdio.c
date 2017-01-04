#define VERSION "0.1"
static const struct sdio_device_id btsdio_table[] = ;
MODULE_DEVICE_TABLE(sdio, btsdio_table);
struct btsdio_data ;
#define REG_RDAT     0x00
#define REG_TDAT     0x00
#define REG_PC_RRT   0x10
#define REG_PC_WRT   0x11
#define REG_RTC_STAT 0x12
#define REG_RTC_SET  0x12
#define REG_INTRD    0x13
#define REG_CL_INTRD 0x13
#define REG_EN_INTRD 0x14
#define REG_MD_STAT  0x20
static int btsdio_tx_packet(struct btsdio_data *data, struct sk_buff *skb)
static void btsdio_work(struct work_struct *work)
static int btsdio_rx_packet(struct btsdio_data *data)
static void btsdio_interrupt(struct sdio_func *func)
static int btsdio_open(struct hci_dev *hdev)
static int btsdio_close(struct hci_dev *hdev)
static int btsdio_flush(struct hci_dev *hdev)
static int btsdio_send_frame(struct sk_buff *skb)
static void btsdio_destruct(struct hci_dev *hdev)
static int btsdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void btsdio_remove(struct sdio_func *func)
static struct sdio_driver btsdio_driver = ;
static int __init btsdio_init(void)
static void __exit btsdio_exit(void)
module_init(btsdio_init);
module_exit(btsdio_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Generic Bluetooth SDIO driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
