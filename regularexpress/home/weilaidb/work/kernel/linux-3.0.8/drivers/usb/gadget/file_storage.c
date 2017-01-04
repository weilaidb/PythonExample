#define DRIVER_DESC		"File-backed Storage Gadget"
#define DRIVER_NAME		"g_file_storage"
#define DRIVER_VERSION		"1 September 2010"
static       char fsg_string_manufacturer[64];
static const char fsg_string_product[] = DRIVER_DESC;
static const char fsg_string_config[] = "Self-powered";
static const char fsg_string_interface[] = "Mass Storage";
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Alan Stern");
MODULE_LICENSE("Dual BSD/GPL");
static struct  mod_data = ;
module_param_array_named(file, mod_data.file, charp, &mod_data.num_filenames,
S_IRUGO);
MODULE_PARM_DESC(file, "names of backing files or devices");
module_param_named(serial, mod_data.serial, charp, S_IRUGO);
MODULE_PARM_DESC(serial, "USB serial number");
module_param_array_named(ro, mod_data.ro, bool, &mod_data.num_ros, S_IRUGO);
MODULE_PARM_DESC(ro, "true to force read-only");
module_param_array_named(nofua, mod_data.nofua, bool, &mod_data.num_nofuas,
S_IRUGO);
MODULE_PARM_DESC(nofua, "true to ignore SCSI WRITE(10,12) FUA bit");
module_param_named(luns, mod_data.nluns, uint, S_IRUGO);
MODULE_PARM_DESC(luns, "number of LUNs");
module_param_named(removable, mod_data.removable, bool, S_IRUGO);
MODULE_PARM_DESC(removable, "true to simulate removable media");
module_param_named(stall, mod_data.can_stall, bool, S_IRUGO);
MODULE_PARM_DESC(stall, "false to prevent bulk stalls");
module_param_named(cdrom, mod_data.cdrom, bool, S_IRUGO);
MODULE_PARM_DESC(cdrom, "true to emulate cdrom instead of disk");
module_param_named(transport, mod_data.transport_parm, charp, S_IRUGO);
MODULE_PARM_DESC(transport, "type of transport (BBB, CBI, or CB)");
module_param_named(protocol, mod_data.protocol_parm, charp, S_IRUGO);
MODULE_PARM_DESC(protocol, "type of protocol (RBC, 8020, QIC, UFI, "
"8070, or SCSI)");
module_param_named(vendor, mod_data.vendor, ushort, S_IRUGO);
MODULE_PARM_DESC(vendor, "USB Vendor ID");
module_param_named(product, mod_data.product, ushort, S_IRUGO);
MODULE_PARM_DESC(product, "USB Product ID");
module_param_named(release, mod_data.release, ushort, S_IRUGO);
MODULE_PARM_DESC(release, "USB release number");
module_param_named(buflen, mod_data.buflen, uint, S_IRUGO);
MODULE_PARM_DESC(buflen, "I/O buffer size");
#define transport_is_bbb()	(mod_data.transport_type == USB_PR_BULK)
#define transport_is_cbi()	(mod_data.transport_type == USB_PR_CBI)
#define protocol_is_scsi()	(mod_data.protocol_type == USB_SC_SCSI)
#define transport_is_bbb()	1
#define transport_is_cbi()	0
#define protocol_is_scsi()	1
struct fsg_dev ;
typedef void (*fsg_routine_t)(struct fsg_dev *);
static int exception_in_progress(struct fsg_dev *fsg)
static void set_bulk_out_req_length(struct fsg_dev *fsg,
struct fsg_buffhd *bh, unsigned int length)
static struct fsg_dev			*the_fsg;
static struct usb_gadget_driver		fsg_driver;
static int fsg_set_halt(struct fsg_dev *fsg, struct usb_ep *ep)
#define	CONFIG_VALUE		1
static struct usb_device_descriptor
device_desc = ;
static struct usb_config_descriptor
config_desc = ;
static struct usb_qualifier_descriptor
dev_qualifier = ;
static int populate_config_buf(struct usb_gadget *gadget,
u8 *buf, u8 type, unsigned index)
static void wakeup_thread(struct fsg_dev *fsg)
static void raise_exception(struct fsg_dev *fsg, enum fsg_state new_state)
static void fsg_disconnect(struct usb_gadget *gadget)
static int ep0_queue(struct fsg_dev *fsg)
static void ep0_complete(struct usb_ep *ep, struct usb_request *req)
static void bulk_in_complete(struct usb_ep *ep, struct usb_request *req)
static void bulk_out_complete(struct usb_ep *ep, struct usb_request *req)
static void intr_in_complete(struct usb_ep *ep, struct usb_request *req)
static void intr_in_complete(struct usb_ep *ep, struct usb_request *req)
static void received_cbi_adsc(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static void received_cbi_adsc(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int class_setup_req(struct fsg_dev *fsg,
const struct usb_ctrlrequest *ctrl)
static int standard_setup_req(struct fsg_dev *fsg,
const struct usb_ctrlrequest *ctrl)
static int fsg_setup(struct usb_gadget *gadget,
const struct usb_ctrlrequest *ctrl)
static void start_transfer(struct fsg_dev *fsg, struct usb_ep *ep,
struct usb_request *req, int *pbusy,
enum fsg_buffer_state *state)
static int sleep_thread(struct fsg_dev *fsg)
static int do_read(struct fsg_dev *fsg)
static int do_write(struct fsg_dev *fsg)
static int do_synchronize_cache(struct fsg_dev *fsg)
static void invalidate_sub(struct fsg_lun *curlun)
static int do_verify(struct fsg_dev *fsg)
static int do_inquiry(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int do_request_sense(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int do_read_capacity(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int do_read_header(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int do_read_toc(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int do_mode_sense(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int do_start_stop(struct fsg_dev *fsg)
static int do_prevent_allow(struct fsg_dev *fsg)
static int do_read_format_capacities(struct fsg_dev *fsg,
struct fsg_buffhd *bh)
static int do_mode_select(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int halt_bulk_in_endpoint(struct fsg_dev *fsg)
static int wedge_bulk_in_endpoint(struct fsg_dev *fsg)
static int throw_away_data(struct fsg_dev *fsg)
static int finish_reply(struct fsg_dev *fsg)
static int send_status(struct fsg_dev *fsg)
static int check_command(struct fsg_dev *fsg, int cmnd_size,
enum data_direction data_dir, unsigned int mask,
int needs_medium, const char *name)
static int do_scsi_command(struct fsg_dev *fsg)
static int received_cbw(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int get_next_command(struct fsg_dev *fsg)
static int enable_endpoint(struct fsg_dev *fsg, struct usb_ep *ep,
const struct usb_endpoint_descriptor *d)
static int alloc_request(struct fsg_dev *fsg, struct usb_ep *ep,
struct usb_request **preq)
static int do_set_interface(struct fsg_dev *fsg, int altsetting)
static int do_set_config(struct fsg_dev *fsg, u8 new_config)
static void handle_exception(struct fsg_dev *fsg)
static int fsg_main_thread(void *fsg_)
static DEVICE_ATTR(ro, 0444, fsg_show_ro, NULL);
static DEVICE_ATTR(nofua, 0644, fsg_show_nofua, NULL);
static DEVICE_ATTR(file, 0444, fsg_show_file, NULL);
static void fsg_release(struct kref *ref)
static void lun_release(struct device *dev)
static void fsg_unbind(struct usb_gadget *gadget)
static int __init check_parameters(struct fsg_dev *fsg)
static int __init fsg_bind(struct usb_gadget *gadget)
static void fsg_suspend(struct usb_gadget *gadget)
static void fsg_resume(struct usb_gadget *gadget)
static struct usb_gadget_driver		fsg_driver = ;
static int __init fsg_alloc(void)
static int __init fsg_init(void)
module_init(fsg_init);
static void __exit fsg_cleanup(void)
module_exit(fsg_cleanup);
