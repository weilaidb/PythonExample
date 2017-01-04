MODULE_DESCRIPTION("Driver for Alauda-based card readers");
MODULE_AUTHOR("Daniel Drake <dsd@gentoo.org>");
MODULE_LICENSE("GPL");
#define ALAUDA_STATUS_ERROR		0x01
#define ALAUDA_STATUS_READY		0x40
#define ALAUDA_GET_XD_MEDIA_STATUS	0x08
#define ALAUDA_GET_SM_MEDIA_STATUS	0x98
#define ALAUDA_ACK_XD_MEDIA_CHANGE	0x0a
#define ALAUDA_ACK_SM_MEDIA_CHANGE	0x9a
#define ALAUDA_GET_XD_MEDIA_SIG		0x86
#define ALAUDA_GET_SM_MEDIA_SIG		0x96
#define ALAUDA_BULK_CMD			0x40
#define ALAUDA_BULK_GET_REDU_DATA	0x85
#define ALAUDA_BULK_READ_BLOCK		0x94
#define ALAUDA_BULK_ERASE_BLOCK		0xa3
#define ALAUDA_BULK_WRITE_BLOCK		0xb4
#define ALAUDA_BULK_GET_STATUS2		0xb7
#define ALAUDA_BULK_RESET_MEDIA		0xe0
#define ALAUDA_PORT_XD			0x00
#define ALAUDA_PORT_SM			0x01
#define UNDEF    0xffff
#define SPARE    0xfffe
#define UNUSABLE 0xfffd
struct alauda_media_info ;
struct alauda_info ;
#define short_pack(lsb,msb) ( ((u16)(lsb)) | ( ((u16)(msb))<<8 ) )
#define LSB_of(s) ((s)&0xFF)
#define MSB_of(s) ((s)>>8)
#define MEDIA_PORT(us) us->srb->device->lun
#define MEDIA_INFO(us) ((struct alauda_info *)us->extra)->port[MEDIA_PORT(us)]
#define PBA_LO(pba) ((pba & 0xF) << 5)
#define PBA_HI(pba) (pba >> 3)
#define PBA_ZONE(pba) (pba >> 11)
static int init_alauda(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id alauda_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, alauda_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev alauda_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
struct alauda_card_info ;
static struct alauda_card_info alauda_card_ids[] = ;
static struct alauda_card_info *alauda_card_find_id(unsigned char id)
static unsigned char parity[256];
static unsigned char ecc2[256];
static void nand_init_ecc(void)
static void nand_compute_ecc(unsigned char *data, unsigned char *ecc)
static int nand_compare_ecc(unsigned char *data, unsigned char *ecc)
static void nand_store_ecc(unsigned char *data, unsigned char *ecc)
static void alauda_free_maps (struct alauda_media_info *media_info)
static int alauda_get_media_status(struct us_data *us, unsigned char *data)
static int alauda_ack_media(struct us_data *us)
static int alauda_get_media_signature(struct us_data *us, unsigned char *data)
static int alauda_reset_media(struct us_data *us)
static int alauda_init_media(struct us_data *us)
static int alauda_check_media(struct us_data *us)
static int alauda_check_status2(struct us_data *us)
static int alauda_get_redu_data(struct us_data *us, u16 pba, unsigned char *data)
static u16 alauda_find_unused_pba(struct alauda_media_info *info,
unsigned int zone)
static int alauda_read_map(struct us_data *us, unsigned int zone)
static void alauda_ensure_map_for_zone(struct us_data *us, unsigned int zone)
static int alauda_erase_block(struct us_data *us, u16 pba)
static int alauda_read_block_raw(struct us_data *us, u16 pba,
unsigned int page, unsigned int pages, unsigned char *data)
static int alauda_read_block(struct us_data *us, u16 pba,
unsigned int page, unsigned int pages, unsigned char *data)
static int alauda_write_block(struct us_data *us, u16 pba, unsigned char *data)
static int alauda_write_lba(struct us_data *us, u16 lba,
unsigned int page, unsigned int pages,
unsigned char *ptr, unsigned char *blockbuffer)
static int alauda_read_data(struct us_data *us, unsigned long address,
unsigned int sectors)
static int alauda_write_data(struct us_data *us, unsigned long address,
unsigned int sectors)
static void alauda_info_destructor(void *extra)
static int init_alauda(struct us_data *us)
static int alauda_transport(struct scsi_cmnd *srb, struct us_data *us)
static int alauda_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver alauda_driver = ;
static int __init alauda_init(void)
static void __exit alauda_exit(void)
module_init(alauda_init);
module_exit(alauda_exit);
