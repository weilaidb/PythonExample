#define FSG_VENDOR_ID	0x0525
#define FSG_PRODUCT_ID	0xa4a5
#undef VERBOSE_DEBUG
#undef DUMP_MSGS
#define VLDBG	LDBG
#define VLDBG(lun, fmt, args...) do  while (0)
#define LDBG(lun, fmt, args...)   dev_dbg (&(lun)->dev, fmt, ## args)
#define LERROR(lun, fmt, args...) dev_err (&(lun)->dev, fmt, ## args)
#define LWARN(lun, fmt, args...)  dev_warn(&(lun)->dev, fmt, ## args)
#define LINFO(lun, fmt, args...)  dev_info(&(lun)->dev, fmt, ## args)
#define DBG(d, fmt, args...)     dev_dbg(&(d)->gadget->dev , fmt , ## args)
#define VDBG(d, fmt, args...)    dev_vdbg(&(d)->gadget->dev , fmt , ## args)
#define ERROR(d, fmt, args...)   dev_err(&(d)->gadget->dev , fmt , ## args)
#define WARNING(d, fmt, args...) dev_warn(&(d)->gadget->dev , fmt , ## args)
#define INFO(d, fmt, args...)    dev_info(&(d)->gadget->dev , fmt , ## args)
#  define dump_msg(fsg, label,			\ buf, length) do  while (0)
#  define dump_cdb(fsg) do  while (0)
#  define dump_msg(fsg, label, \ buf, length) do  while (0)
#  ifdef VERBOSE_DEBUG
#    define dump_cdb(fsg)						\
print_hex_dump(KERN_DEBUG, "SCSI CDB: ", DUMP_PREFIX_NONE,	\
16, 1, (fsg)->cmnd, (fsg)->cmnd_size, 0)		\
#  else
#    define dump_cdb(fsg) do  while (0)
#  endif
struct fsg_bulk_cb_wrap ;
#define USB_BULK_CB_WRAP_LEN	31
#define USB_BULK_CB_SIG		0x43425355
#define USB_BULK_IN_FLAG	0x80
struct bulk_cs_wrap ;
#define USB_BULK_CS_WRAP_LEN	13
#define USB_BULK_CS_SIG		0x53425355
#define USB_STATUS_PASS		0
#define USB_STATUS_FAIL		1
#define USB_STATUS_PHASE_ERROR	2
#define USB_BULK_RESET_REQUEST		0xff
#define USB_BULK_GET_MAX_LUN_REQUEST	0xfe
struct interrupt_data ;
#define CBI_INTERRUPT_DATA_LEN		2
#define USB_CBI_ADSC_REQUEST		0x00
#define MAX_COMMAND_SIZE	16
#define SS_NO_SENSE				0
#define SS_COMMUNICATION_FAILURE		0x040800
#define SS_INVALID_COMMAND			0x052000
#define SS_INVALID_FIELD_IN_CDB			0x052400
#define SS_LOGICAL_BLOCK_ADDRESS_OUT_OF_RANGE	0x052100
#define SS_LOGICAL_UNIT_NOT_SUPPORTED		0x052500
#define SS_MEDIUM_NOT_PRESENT			0x023a00
#define SS_MEDIUM_REMOVAL_PREVENTED		0x055302
#define SS_NOT_READY_TO_READY_TRANSITION	0x062800
#define SS_RESET_OCCURRED			0x062900
#define SS_SAVING_PARAMETERS_NOT_SUPPORTED	0x053900
#define SS_UNRECOVERED_READ_ERROR		0x031100
#define SS_WRITE_ERROR				0x030c02
#define SS_WRITE_PROTECTED			0x072700
#define SK(x)		((u8) ((x) >> 16))
#define ASC(x)		((u8) ((x) >> 8))
#define ASCQ(x)		((u8) (x))
struct fsg_lun ;
#define fsg_lun_is_open(curlun)	((curlun)->filp != NULL)
static struct fsg_lun *fsg_lun_from_dev(struct device *dev)
#define EP0_BUFSIZE	256
#define DELAYED_STATUS	(EP0_BUFSIZE + 999)
#define FSG_NUM_BUFFERS	2
#define FSG_BUFLEN	((u32)16384)
#define FSG_MAX_LUNS	8
enum fsg_buffer_state ;
struct fsg_buffhd ;
enum fsg_state ;
enum data_direction ;
static inline u32 get_unaligned_be24(u8 *buf)
enum ;
static struct usb_otg_descriptor
fsg_otg_desc = ;
static struct usb_interface_descriptor
fsg_intf_desc = ;
static struct usb_endpoint_descriptor
fsg_fs_bulk_in_desc = ;
static struct usb_endpoint_descriptor
fsg_fs_bulk_out_desc = ;
static struct usb_endpoint_descriptor
fsg_fs_intr_in_desc = ;
#  define FSG_FS_FUNCTION_PRE_EP_ENTRIES	2
#  define FSG_FS_FUNCTION_PRE_EP_ENTRIES	1
static struct usb_descriptor_header *fsg_fs_function[] = ;
static struct usb_endpoint_descriptor
fsg_hs_bulk_in_desc = ;
static struct usb_endpoint_descriptor
fsg_hs_bulk_out_desc = ;
static struct usb_endpoint_descriptor
fsg_hs_intr_in_desc = ;
#  define FSG_HS_FUNCTION_PRE_EP_ENTRIES	2
#  define FSG_HS_FUNCTION_PRE_EP_ENTRIES	1
static struct usb_descriptor_header *fsg_hs_function[] = ;
static struct usb_endpoint_descriptor *
fsg_ep_desc(struct usb_gadget *g, struct usb_endpoint_descriptor *fs,
struct usb_endpoint_descriptor *hs)
static struct usb_string		fsg_strings[] = ;
static struct usb_gadget_strings	fsg_stringtab = ;
static int fsg_lun_open(struct fsg_lun *curlun, const char *filename)
static void fsg_lun_close(struct fsg_lun *curlun)
static int fsg_lun_fsync_sub(struct fsg_lun *curlun)
static void store_cdrom_address(u8 *dest, int msf, u32 addr)
static ssize_t fsg_show_ro(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t fsg_show_nofua(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t fsg_show_file(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t fsg_store_ro(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t fsg_store_nofua(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t fsg_store_file(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
