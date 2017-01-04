MODULE_DESCRIPTION("Driver for SCM Microsystems (a.k.a. Shuttle) USB-ATAPI cable");
MODULE_AUTHOR("Daniel Drake <dsd@gentoo.org>, Robert Baruch <autophile@starband.net>");
MODULE_LICENSE("GPL");
#define USBAT_DEV_HP8200	0x01
#define USBAT_DEV_FLASH		0x02
#define USBAT_EPP_PORT		0x10
#define USBAT_EPP_REGISTER	0x30
#define USBAT_ATA		0x40
#define USBAT_ISA		0x50
#define USBAT_CMD_READ_REG		0x00
#define USBAT_CMD_WRITE_REG		0x01
#define USBAT_CMD_READ_BLOCK	0x02
#define USBAT_CMD_WRITE_BLOCK	0x03
#define USBAT_CMD_COND_READ_BLOCK	0x04
#define USBAT_CMD_COND_WRITE_BLOCK	0x05
#define USBAT_CMD_WRITE_REGS	0x07
#define USBAT_CMD_EXEC_CMD	0x80
#define USBAT_CMD_SET_FEAT	0x81
#define USBAT_CMD_UIO		0x82
#define USBAT_UIO_READ	1
#define USBAT_UIO_WRITE	0
#define USBAT_QUAL_FCQ	0x20
#define USBAT_QUAL_ALQ	0x10
#define USBAT_FLASH_MEDIA_NONE	0
#define USBAT_FLASH_MEDIA_CF	1
#define USBAT_FLASH_MEDIA_SAME	0
#define USBAT_FLASH_MEDIA_CHANGED	1
#define USBAT_ATA_DATA      0x10
#define USBAT_ATA_FEATURES  0x11
#define USBAT_ATA_ERROR     0x11
#define USBAT_ATA_SECCNT    0x12
#define USBAT_ATA_SECNUM    0x13
#define USBAT_ATA_LBA_ME    0x14
#define USBAT_ATA_LBA_HI    0x15
#define USBAT_ATA_DEVICE    0x16
#define USBAT_ATA_STATUS    0x17
#define USBAT_ATA_CMD       0x17
#define USBAT_ATA_ALTSTATUS 0x0E
#define USBAT_UIO_EPAD		0x80
#define USBAT_UIO_CDT		0x40
#define USBAT_UIO_1		0x20
#define USBAT_UIO_0		0x10
#define USBAT_UIO_EPP_ATA	0x08
#define USBAT_UIO_UI1		0x04
#define USBAT_UIO_UI0		0x02
#define USBAT_UIO_INTR_ACK	0x01
#define USBAT_UIO_DRVRST	0x80
#define USBAT_UIO_ACKD		0x40
#define USBAT_UIO_OE1		0x20
#define USBAT_UIO_OE0		0x10
#define USBAT_UIO_ADPRST	0x01
#define USBAT_FEAT_ETEN	0x80
#define USBAT_FEAT_U1	0x08
#define USBAT_FEAT_U0	0x04
#define USBAT_FEAT_ET1	0x02
#define USBAT_FEAT_ET2	0x01
struct usbat_info ;
#define short_pack(LSB,MSB) ( ((u16)(LSB)) | ( ((u16)(MSB))<<8 ) )
#define LSB_of(s) ((s)&0xFF)
#define MSB_of(s) ((s)>>8)
static int transferred = 0;
static int usbat_flash_transport(struct scsi_cmnd * srb, struct us_data *us);
static int usbat_hp8200e_transport(struct scsi_cmnd *srb, struct us_data *us);
static int init_usbat_cd(struct us_data *us);
static int init_usbat_flash(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id usbat_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, usbat_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev usbat_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static void usbat_pack_ata_sector_cmd(unsigned char *buf,
unsigned char thistime,
u32 sector, unsigned char cmd)
static int usbat_get_device_type(struct us_data *us)
static int usbat_read(struct us_data *us,
unsigned char access,
unsigned char reg,
unsigned char *content)
static int usbat_write(struct us_data *us,
unsigned char access,
unsigned char reg,
unsigned char content)
static int usbat_bulk_read(struct us_data *us,
void* buf,
unsigned int len,
int use_sg)
static int usbat_bulk_write(struct us_data *us,
void* buf,
unsigned int len,
int use_sg)
static int usbat_execute_command(struct us_data *us,
unsigned char *commands,
unsigned int len)
static int usbat_get_status(struct us_data *us, unsigned char *status)
static int usbat_check_status(struct us_data *us)
static int usbat_set_shuttle_features(struct us_data *us,
unsigned char external_trigger,
unsigned char epp_control,
unsigned char mask_byte,
unsigned char test_pattern,
unsigned char subcountH,
unsigned char subcountL)
static int usbat_wait_not_busy(struct us_data *us, int minutes)
static int usbat_read_block(struct us_data *us,
void* buf,
unsigned short len,
int use_sg)
static int usbat_write_block(struct us_data *us,
unsigned char access,
void* buf,
unsigned short len,
int minutes,
int use_sg)
static int usbat_hp8200e_rw_block_test(struct us_data *us,
unsigned char access,
unsigned char *registers,
unsigned char *data_out,
unsigned short num_registers,
unsigned char data_reg,
unsigned char status_reg,
unsigned char timeout,
unsigned char qualifier,
int direction,
void *buf,
unsigned short len,
int use_sg,
int minutes)
static int usbat_multiple_write(struct us_data *us,
unsigned char *registers,
unsigned char *data_out,
unsigned short num_registers)
static int usbat_read_blocks(struct us_data *us,
void* buffer,
int len,
int use_sg)
static int usbat_write_blocks(struct us_data *us,
void* buffer,
int len,
int use_sg)
static int usbat_read_user_io(struct us_data *us, unsigned char *data_flags)
static int usbat_write_user_io(struct us_data *us,
unsigned char enable_flags,
unsigned char data_flags)
static int usbat_device_reset(struct us_data *us)
static int usbat_device_enable_cdt(struct us_data *us)
static int usbat_flash_check_media_present(unsigned char *uio)
static int usbat_flash_check_media_changed(unsigned char *uio)
static int usbat_flash_check_media(struct us_data *us,
struct usbat_info *info)
static int usbat_identify_device(struct us_data *us,
struct usbat_info *info)
static int usbat_set_transport(struct us_data *us,
struct usbat_info *info,
int devicetype)
static int usbat_flash_get_sector_count(struct us_data *us,
struct usbat_info *info)
static int usbat_flash_read_data(struct us_data *us,
struct usbat_info *info,
u32 sector,
u32 sectors)
static int usbat_flash_write_data(struct us_data *us,
struct usbat_info *info,
u32 sector,
u32 sectors)
static int usbat_hp8200e_handle_read10(struct us_data *us,
unsigned char *registers,
unsigned char *data,
struct scsi_cmnd *srb)
static int usbat_select_and_test_registers(struct us_data *us)
static int init_usbat(struct us_data *us, int devicetype)
static int usbat_hp8200e_transport(struct scsi_cmnd *srb, struct us_data *us)
static int usbat_flash_transport(struct scsi_cmnd * srb, struct us_data *us)
static int init_usbat_cd(struct us_data *us)
static int init_usbat_flash(struct us_data *us)
static int usbat_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver usbat_driver = ;
static int __init usbat_init(void)
static void __exit usbat_exit(void)
module_init(usbat_init);
module_exit(usbat_exit);
