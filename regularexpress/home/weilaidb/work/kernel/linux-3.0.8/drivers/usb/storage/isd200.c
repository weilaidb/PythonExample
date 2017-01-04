MODULE_DESCRIPTION("Driver for In-System Design, Inc. ISD200 ASIC");
MODULE_AUTHOR("Björn Stenberg <bjorn@haxx.se>");
MODULE_LICENSE("GPL");
static int isd200_Initialization(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id isd200_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, isd200_usb_ids);
#undef UNUSUAL_DEV
#undef USUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev isd200_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
#undef USUAL_DEV
#define ISD200_ENUM_BSY_TIMEOUT		35
#define ISD200_ENUM_DETECT_TIMEOUT      30
#define ISD200_DEFAULT_TIMEOUT		30
#define DF_ATA_DEVICE		0x0001
#define DF_MEDIA_STATUS_ENABLED	0x0002
#define DF_REMOVABLE_MEDIA	0x0004
#define CAPABILITY_DMA		0x01
#define CAPABILITY_LBA		0x02
#define COMMANDSET_REMOVABLE	0x02
#define COMMANDSET_MEDIA_STATUS 0x10
#define ATA_ADDRESS_DEVHEAD_STD      0xa0
#define ATA_ADDRESS_DEVHEAD_LBA_MODE 0x40
#define ATA_ADDRESS_DEVHEAD_SLAVE    0x10
#define ACTION_SELECT_0	     0x01
#define ACTION_SELECT_1	     0x02
#define ACTION_SELECT_2	     0x04
#define ACTION_SELECT_3	     0x08
#define ACTION_SELECT_4	     0x10
#define ACTION_SELECT_5	     0x20
#define ACTION_SELECT_6	     0x40
#define ACTION_SELECT_7	     0x80
#define REG_ALTERNATE_STATUS	0x01
#define REG_DEVICE_CONTROL	0x01
#define REG_ERROR		0x02
#define REG_FEATURES		0x02
#define REG_SECTOR_COUNT	0x04
#define REG_SECTOR_NUMBER	0x08
#define REG_CYLINDER_LOW	0x10
#define REG_CYLINDER_HIGH	0x20
#define REG_DEVICE_HEAD		0x40
#define REG_STATUS		0x80
#define REG_COMMAND		0x80
#define ATA_REG_ERROR_OFFSET		1
#define ATA_REG_LCYL_OFFSET		4
#define ATA_REG_HCYL_OFFSET		5
#define ATA_REG_STATUS_OFFSET		7
#define ATA_ERROR_MEDIA_CHANGE		0x20
#define ATA_COMMAND_GET_MEDIA_STATUS	0xDA
#define ATA_COMMAND_MEDIA_EJECT		0xED
#define ATA_DC_DISABLE_INTERRUPTS	0x02
#define ATA_DC_RESET_CONTROLLER		0x04
#define ATA_DC_REENABLE_CONTROLLER	0x00
#define ISD200_ERROR		-1
#define ISD200_GOOD		 0
#define ISD200_TRANSPORT_GOOD       0
#define ISD200_TRANSPORT_FAILED     1
#define ISD200_TRANSPORT_ERROR      2
#define	ACTION_READ_STATUS	0
#define	ACTION_RESET		1
#define	ACTION_REENABLE		2
#define	ACTION_SOFT_RESET	3
#define	ACTION_ENUM		4
#define	ACTION_IDENTIFY		5
union ata_cdb ;
#define DIRECT_ACCESS_DEVICE	    0x00
#define DEVICE_REMOVABLE		0x80
struct inquiry_data  __attribute__ ((packed));
#define INQUIRYDATABUFFERSIZE 36
#define ATACFG_TIMING	  0x0f
#define ATACFG_ATAPI_RESET     0x10
#define ATACFG_MASTER	  0x20
#define ATACFG_BLOCKSIZE       0xa0
#define ATACFGE_LAST_LUN       0x07
#define ATACFGE_DESC_OVERRIDE  0x08
#define ATACFGE_STATE_SUSPEND  0x10
#define ATACFGE_SKIP_BOOT      0x20
#define ATACFGE_CONF_DESC2     0x40
#define ATACFGE_INIT_STATUS    0x80
#define CFG_CAPABILITY_SRST    0x01
struct isd200_config __attribute__ ((packed));
struct isd200_info ;
struct read_capacity_data ;
struct read_block_limits ;
#define SENSE_ERRCODE	   0x7f
#define SENSE_ERRCODE_VALID     0x80
#define SENSE_FLAG_SENSE_KEY    0x0f
#define SENSE_FLAG_BAD_LENGTH   0x20
#define SENSE_FLAG_END_OF_MEDIA 0x40
#define SENSE_FLAG_FILE_MARK    0x80
struct sense_data  __attribute__ ((packed));
#define SENSE_BUFFER_SIZE 18
static void isd200_build_sense(struct us_data *us, struct scsi_cmnd *srb)
static void isd200_set_srb(struct isd200_info *info,
enum dma_data_direction dir, void* buff, unsigned bufflen)
static void isd200_srb_set_bufflen(struct scsi_cmnd *srb, unsigned bufflen)
static int isd200_action( struct us_data *us, int action,
void* pointer, int value )
static int isd200_read_regs( struct us_data *us )
static void isd200_invoke_transport( struct us_data *us,
struct scsi_cmnd *srb,
union ata_cdb *ataCdb )
static void isd200_log_config( struct isd200_info* info )
static int isd200_write_config( struct us_data *us )
static int isd200_read_config( struct us_data *us )
static int isd200_atapi_soft_reset( struct us_data *us )
static int isd200_srst( struct us_data *us )
static int isd200_try_enum(struct us_data *us, unsigned char master_slave,
int detect )
static int isd200_manual_enum(struct us_data *us)
static void isd200_fix_driveid(u16 *id)
static void isd200_dump_driveid(u16 *id)
static int isd200_get_inquiry_data( struct us_data *us )
static int isd200_scsi_to_ata(struct scsi_cmnd *srb, struct us_data *us,
union ata_cdb * ataCdb)
static void isd200_free_info_ptrs(void *info_)
static int isd200_init_info(struct us_data *us)
static int isd200_Initialization(struct us_data *us)
static void isd200_ata_command(struct scsi_cmnd *srb, struct us_data *us)
static int isd200_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver isd200_driver = ;
static int __init isd200_init(void)
static void __exit isd200_exit(void)
module_init(isd200_init);
module_exit(isd200_exit);
