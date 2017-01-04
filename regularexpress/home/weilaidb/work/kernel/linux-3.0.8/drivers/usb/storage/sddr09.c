MODULE_DESCRIPTION("Driver for SanDisk SDDR-09 SmartMedia reader");
MODULE_AUTHOR("Andries Brouwer <aeb@cwi.nl>, Robert Baruch <autophile@starband.net>");
MODULE_LICENSE("GPL");
static int usb_stor_sddr09_dpcm_init(struct us_data *us);
static int sddr09_transport(struct scsi_cmnd *srb, struct us_data *us);
static int usb_stor_sddr09_init(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id sddr09_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, sddr09_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev sddr09_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
#define short_pack(lsb,msb) ( ((u16)(lsb)) | ( ((u16)(msb))<<8 ) )
#define LSB_of(s) ((s)&0xFF)
#define MSB_of(s) ((s)>>8)
struct nand_flash_dev ;
#define NAND_MFR_AMD		0x01
#define NAND_MFR_NATSEMI	0x8f
#define NAND_MFR_TOSHIBA	0x98
#define NAND_MFR_SAMSUNG	0xec
static inline char *nand_flash_manufacturer(int manuf_id)
static struct nand_flash_dev nand_flash_ids[] = ;
static struct nand_flash_dev *
nand_find_id(unsigned char id)
static unsigned char parity[256];
static unsigned char ecc2[256];
static void nand_init_ecc(void)
static void nand_compute_ecc(unsigned char *data, unsigned char *ecc)
static int nand_compare_ecc(unsigned char *data, unsigned char *ecc)
static void nand_store_ecc(unsigned char *data, unsigned char *ecc)
struct sddr09_card_info ;
#define CONTROL_SHIFT 6
#define LUN	1
#define	LUNBITS	(LUN << 5)
#define UNDEF    0xffffffff
#define SPARE    0xfffffffe
#define UNUSABLE 0xfffffffd
static const int erase_bad_lba_entries = 0;
static int
sddr09_send_command(struct us_data *us,
unsigned char request,
unsigned char direction,
unsigned char *xfer_data,
unsigned int xfer_len)
static int
sddr09_send_scsi_command(struct us_data *us,
unsigned char *command,
unsigned int command_len)
static int
sddr09_request_sense(struct us_data *us, unsigned char *sensebuf, int buflen)
static int
sddr09_readX(struct us_data *us, int x, unsigned long fromaddress,
int nr_of_pages, int bulklen, unsigned char *buf,
int use_sg)
static int
sddr09_read20(struct us_data *us, unsigned long fromaddress,
int nr_of_pages, int pageshift, unsigned char *buf, int use_sg)
static int
sddr09_read21(struct us_data *us, unsigned long fromaddress,
int count, int controlshift, unsigned char *buf, int use_sg)
static int
sddr09_read22(struct us_data *us, unsigned long fromaddress,
int nr_of_pages, int pageshift, unsigned char *buf, int use_sg)
static int
sddr09_erase(struct us_data *us, unsigned long Eaddress)
static int
sddr09_writeX(struct us_data *us,
unsigned long Waddress, unsigned long Eaddress,
int nr_of_pages, int bulklen, unsigned char *buf, int use_sg)
static int
sddr09_write_inplace(struct us_data *us, unsigned long address,
int nr_of_pages, int pageshift, unsigned char *buf,
int use_sg)
static int
sddr09_read_status(struct us_data *us, unsigned char *status)
static int
sddr09_read_data(struct us_data *us,
unsigned long address,
unsigned int sectors)
static unsigned int
sddr09_find_unused_pba(struct sddr09_card_info *info, unsigned int lba)
static int
sddr09_write_lba(struct us_data *us, unsigned int lba,
unsigned int page, unsigned int pages,
unsigned char *ptr, unsigned char *blockbuffer)
static int
sddr09_write_data(struct us_data *us,
unsigned long address,
unsigned int sectors)
static int
sddr09_read_control(struct us_data *us,
unsigned long address,
unsigned int blocks,
unsigned char *content,
int use_sg)
static int
sddr09_read_deviceID(struct us_data *us, unsigned char *deviceID)
static int
sddr09_get_wp(struct us_data *us, struct sddr09_card_info *info)
static struct nand_flash_dev *
sddr09_get_cardinfo(struct us_data *us, unsigned char flags)
static int
sddr09_read_map(struct us_data *us)
static void
sddr09_card_info_destructor(void *extra)
static int
sddr09_common_init(struct us_data *us)
static int
usb_stor_sddr09_dpcm_init(struct us_data *us)
static int dpcm_transport(struct scsi_cmnd *srb, struct us_data *us)
static int sddr09_transport(struct scsi_cmnd *srb, struct us_data *us)
static int
usb_stor_sddr09_init(struct us_data *us)
static int sddr09_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sddr09_driver = ;
static int __init sddr09_init(void)
static void __exit sddr09_exit(void)
module_init(sddr09_init);
module_exit(sddr09_exit);
