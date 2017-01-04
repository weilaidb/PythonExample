#define DRIVER_VERSION "v0.4.3"
#define DRIVER_AUTHOR "John Fremlin <vii@penguinpowered.com>, Oliver Neukum <Oliver.Neukum@lrz.uni-muenchen.de>"
#define DRIVER_DESC "Microtek Scanmaker X6 USB scanner driver"
static int mts_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static void mts_usb_disconnect(struct usb_interface *intf);
static const struct usb_device_id mts_usb_ids[];
static struct usb_driver mts_usb_driver = ;
#define MTS_VERSION	"0.4.3"
#define MTS_NAME	"microtek usb (rev " MTS_VERSION "): "
#define MTS_WARNING(x...) \
printk( KERN_WARNING MTS_NAME x )
#define MTS_ERROR(x...) \
printk( KERN_ERR MTS_NAME x )
#define MTS_INT_ERROR(x...) \
MTS_ERROR(x)
#define MTS_MESSAGE(x...) \
printk( KERN_INFO MTS_NAME x )
#if defined MTS_DO_DEBUG
#define MTS_DEBUG(x...) \
printk( KERN_DEBUG MTS_NAME x )
#define MTS_DEBUG_GOT_HERE() \
MTS_DEBUG("got to %s:%d (%s)\n", __FILE__, (int)__LINE__, __func__ )
#define MTS_DEBUG_INT() \
do  while(0)
#define MTS_NUL_STATEMENT do  while(0)
#define MTS_DEBUG(x...)	MTS_NUL_STATEMENT
#define MTS_DEBUG_GOT_HERE() MTS_NUL_STATEMENT
#define MTS_DEBUG_INT() MTS_NUL_STATEMENT
#define MTS_INT_INIT()\
struct mts_transfer_context* context = (struct mts_transfer_context*)transfer->context; \
MTS_DEBUG_INT();\
static inline void mts_debug_dump(struct mts_desc* desc)
static inline void mts_show_command(struct scsi_cmnd *srb)
static inline void mts_show_command(struct scsi_cmnd * dummy)
static inline void mts_debug_dump(struct mts_desc* dummy)
static inline void mts_urb_abort(struct mts_desc* desc)
static int mts_slave_alloc (struct scsi_device *s)
static int mts_slave_configure (struct scsi_device *s)
static int mts_scsi_abort(struct scsi_cmnd *srb)
static int mts_scsi_host_reset(struct scsi_cmnd *srb)
static int
mts_scsi_queuecommand(struct Scsi_Host *shost, struct scsi_cmnd *srb);
static void mts_transfer_cleanup( struct urb *transfer );
static void mts_do_sg(struct urb * transfer);
static inline
void mts_int_submit_urb (struct urb* transfer,
int pipe,
void* data,
unsigned length,
usb_complete_t callback )
static void mts_transfer_cleanup( struct urb *transfer )
static void mts_transfer_done( struct urb *transfer )
static void mts_get_status( struct urb *transfer )
static void mts_data_done( struct urb* transfer )
static void mts_command_done( struct urb *transfer )
static void mts_do_sg (struct urb* transfer)
static const u8 mts_read_image_sig[] = ;
static const u8 mts_read_image_sig_len = 4;
static const unsigned char mts_direction[256/8] = ;
#define MTS_DIRECTION_IS_IN(x) ((mts_direction[x>>3] >> (x & 7)) & 1)
static void
mts_build_transfer_context(struct scsi_cmnd *srb, struct mts_desc* desc)
static int
mts_scsi_queuecommand_lck(struct scsi_cmnd *srb, mts_scsi_cmnd_callback callback)
static DEF_SCSI_QCMD(mts_scsi_queuecommand)
static struct scsi_host_template mts_scsi_host_template = ;
static const struct usb_device_id mts_usb_ids[] =
;
MODULE_DEVICE_TABLE (usb, mts_usb_ids);
static int mts_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void mts_usb_disconnect (struct usb_interface *intf)
static int __init microtek_drv_init(void)
static void __exit microtek_drv_exit(void)
module_init(microtek_drv_init);
module_exit(microtek_drv_exit);
MODULE_AUTHOR( DRIVER_AUTHOR );
MODULE_DESCRIPTION( DRIVER_DESC );
MODULE_LICENSE("GPL");
