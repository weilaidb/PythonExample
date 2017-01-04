MODULE_DESCRIPTION("Driver for ENE UB6250 reader");
MODULE_LICENSE("GPL");
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id ene_ub6250_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, ene_ub6250_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev ene_ub6250_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
#define ENE_BIN_CODE_LEN    0x800
#define REG_CARD_STATUS     0xFF83
#define REG_HW_TRAP1        0xFF89
#define SS_SUCCESS                  0x00
#define SS_NOT_READY                0x02
#define SS_MEDIUM_ERR               0x03
#define SS_HW_ERR                   0x04
#define SS_ILLEGAL_REQUEST          0x05
#define SS_UNIT_ATTENTION           0x06
#define SD_INIT1_PATTERN   1
#define SD_INIT2_PATTERN   2
#define SD_RW_PATTERN      3
#define MS_INIT_PATTERN    4
#define MSP_RW_PATTERN     5
#define MS_RW_PATTERN      6
#define SM_INIT_PATTERN    7
#define SM_RW_PATTERN      8
#define FDIR_WRITE         0
#define FDIR_READ          1
struct SD_STATUS ;
struct MS_STATUS ;
struct SM_STATUS ;
#define SD_BLOCK_LEN  9
struct ene_ub6250_info ;
static int ene_sd_init(struct us_data *us);
static int ene_load_bincode(struct us_data *us, unsigned char flag);
static void ene_ub6250_info_destructor(void *extra)
static int ene_send_scsi_cmd(struct us_data *us, u8 fDir, void *buf, int use_sg)
static int sd_scsi_test_unit_ready(struct us_data *us, struct scsi_cmnd *srb)
static int sd_scsi_inquiry(struct us_data *us, struct scsi_cmnd *srb)
static int sd_scsi_mode_sense(struct us_data *us, struct scsi_cmnd *srb)
static int sd_scsi_read_capacity(struct us_data *us, struct scsi_cmnd *srb)
static int sd_scsi_read(struct us_data *us, struct scsi_cmnd *srb)
static int sd_scsi_write(struct us_data *us, struct scsi_cmnd *srb)
static int ene_get_card_type(struct us_data *us, u16 index, void *buf)
static int ene_get_card_status(struct us_data *us, u8 *buf)
static int ene_load_bincode(struct us_data *us, unsigned char flag)
static int ene_sd_init(struct us_data *us)
static int ene_init(struct us_data *us)
static int sd_scsi_irp(struct us_data *us, struct scsi_cmnd *srb)
static int ene_transport(struct scsi_cmnd *srb, struct us_data *us)
static int ene_ub6250_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int ene_ub6250_resume(struct usb_interface *iface)
static int ene_ub6250_reset_resume(struct usb_interface *iface)
#define ene_ub6250_resume		NULL
#define ene_ub6250_reset_resume		NULL
static struct usb_driver ene_ub6250_driver = ;
static int __init ene_ub6250_init(void)
static void __exit ene_ub6250_exit(void)
module_init(ene_ub6250_init);
module_exit(ene_ub6250_exit);
