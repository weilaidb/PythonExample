enum ushc_request ;
enum ushc_request_type ;
#define USHC_GET_CAPS_VERSION_MASK 0xff
#define USHC_GET_CAPS_3V3      (1 << 8)
#define USHC_GET_CAPS_3V0      (1 << 9)
#define USHC_GET_CAPS_1V8      (1 << 10)
#define USHC_GET_CAPS_HIGH_SPD (1 << 16)
#define USHC_HOST_CTRL_4BIT     (1 << 1)
#define USHC_HOST_CTRL_HIGH_SPD (1 << 0)
#define USHC_PWR_CTRL_OFF 0x00
#define USHC_PWR_CTRL_3V3 0x01
#define USHC_PWR_CTRL_3V0 0x02
#define USHC_PWR_CTRL_1V8 0x03
#define USHC_READ_RESP_BUSY        (1 << 4)
#define USHC_READ_RESP_ERR_TIMEOUT (1 << 3)
#define USHC_READ_RESP_ERR_CRC     (1 << 2)
#define USHC_READ_RESP_ERR_DAT     (1 << 1)
#define USHC_READ_RESP_ERR_CMD     (1 << 0)
#define USHC_READ_RESP_ERR_MASK    0x0f
struct ushc_cbw  __attribute__((packed));
#define USHC_CBW_SIGNATURE 'C'
struct ushc_csw  __attribute__((packed));
#define USHC_CSW_SIGNATURE 'S'
struct ushc_int_data ;
#define USHC_INT_STATUS_SDIO_INT     (1 << 1)
#define USHC_INT_STATUS_CARD_PRESENT (1 << 0)
struct ushc_data ;
#define DISCONNECTED    0
#define INT_EN          1
#define IGNORE_NEXT_INT 2
static void data_callback(struct urb *urb);
static int ushc_hw_reset(struct ushc_data *ushc)
static int ushc_hw_get_caps(struct ushc_data *ushc)
static int ushc_hw_set_host_ctrl(struct ushc_data *ushc, u16 mask, u16 val)
static void int_callback(struct urb *urb)
static void cbw_callback(struct urb *urb)
static void data_callback(struct urb *urb)
static void csw_callback(struct urb *urb)
static void ushc_request(struct mmc_host *mmc, struct mmc_request *req)
static int ushc_set_power(struct ushc_data *ushc, unsigned char power_mode)
static int ushc_set_bus_width(struct ushc_data *ushc, int bus_width)
static int ushc_set_bus_freq(struct ushc_data *ushc, int clk, bool enable_hs)
static void ushc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int ushc_get_cd(struct mmc_host *mmc)
static void ushc_enable_sdio_irq(struct mmc_host *mmc, int enable)
static void ushc_clean_up(struct ushc_data *ushc)
static const struct mmc_host_ops ushc_ops = ;
static int ushc_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void ushc_disconnect(struct usb_interface *intf)
static struct usb_device_id ushc_id_table[] = ;
MODULE_DEVICE_TABLE(usb, ushc_id_table);
static struct usb_driver ushc_driver = ;
static int __init ushc_init(void)
module_init(ushc_init);
static void __exit ushc_exit(void)
module_exit(ushc_exit);
MODULE_DESCRIPTION("USB SD Host Controller driver");
MODULE_AUTHOR("David Vrabel <david.vrabel@csr.com>");
MODULE_LICENSE("GPL");
