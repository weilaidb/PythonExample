#define HTC_USB_H
#define MAJOR_VERSION_REQ 1
#define MINOR_VERSION_REQ 3
#define IS_AR7010_DEVICE(_v) (((_v) == AR9280_USB) || ((_v) == AR9287_USB))
#define AR9271_FIRMWARE       0x501000
#define AR9271_FIRMWARE_TEXT  0x903000
#define AR7010_FIRMWARE_TEXT  0x906000
#define FIRMWARE_DOWNLOAD       0x30
#define FIRMWARE_DOWNLOAD_COMP  0x31
#define ATH_USB_RX_STREAM_MODE_TAG 0x4e00
#define ATH_USB_TX_STREAM_MODE_TAG 0x697e
#define MAX_TX_URB_NUM  8
#define MAX_TX_BUF_NUM  256
#define MAX_TX_BUF_SIZE 32768
#define MAX_TX_AGGR_NUM 20
#define MAX_RX_URB_NUM  8
#define MAX_RX_BUF_SIZE 16384
#define MAX_PKT_NUM_IN_TRANSFER 10
#define MAX_REG_OUT_URB_NUM  1
#define MAX_REG_IN_URB_NUM   64
#define MAX_REG_IN_BUF_SIZE 64
#define USB_WLAN_TX_PIPE  1
#define USB_WLAN_RX_PIPE  2
#define USB_REG_IN_PIPE   3
#define USB_REG_OUT_PIPE  4
#define HIF_USB_MAX_RXPIPES 2
#define HIF_USB_MAX_TXPIPES 4
struct tx_buf ;
#define HIF_USB_TX_STOP  BIT(0)
#define HIF_USB_TX_FLUSH BIT(1)
struct hif_usb_tx ;
struct cmd_buf ;
#define HIF_USB_START BIT(0)
struct hif_device_usb ;
int ath9k_hif_usb_init(void);
void ath9k_hif_usb_exit(void);
