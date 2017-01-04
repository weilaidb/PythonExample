MODULE_AUTHOR("Tony Olech");
MODULE_DESCRIPTION("FTDI ELAN driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v;module_param(n, int, 0444)
static int distrust_firmware = 1;
module_param(distrust_firmware, bool, 0);
MODULE_PARM_DESC(distrust_firmware, "true to distrust firmware power/overcurren"
"t setup");
extern struct platform_driver u132_platform_driver;
static struct workqueue_struct *status_queue;
static struct workqueue_struct *command_queue;
static struct workqueue_struct *respond_queue;
static struct mutex ftdi_module_lock;
static int ftdi_instances = 0;
static struct list_head ftdi_static_list;
#define USB_FTDI_ELAN_VENDOR_ID 0x0403
#define USB_FTDI_ELAN_PRODUCT_ID 0xd6ea
static const struct usb_device_id ftdi_elan_table[] = ;
MODULE_DEVICE_TABLE(usb, ftdi_elan_table);
#define USB_FTDI_ELAN_MINOR_BASE 192
#define COMMAND_BITS 5
#define COMMAND_SIZE (1<<COMMAND_BITS)
#define COMMAND_MASK (COMMAND_SIZE-1)
struct u132_command ;
#define RESPOND_BITS 5
#define RESPOND_SIZE (1<<RESPOND_BITS)
#define RESPOND_MASK (RESPOND_SIZE-1)
struct u132_respond ;
struct u132_target ;
struct usb_ftdi ;
#define kref_to_usb_ftdi(d) container_of(d, struct usb_ftdi, kref)
#define platform_device_to_usb_ftdi(d) container_of(d, struct usb_ftdi, \
platform_dev)
static struct usb_driver ftdi_elan_driver;
static void ftdi_elan_delete(struct kref *kref)
static void ftdi_elan_put_kref(struct usb_ftdi *ftdi)
static void ftdi_elan_get_kref(struct usb_ftdi *ftdi)
static void ftdi_elan_init_kref(struct usb_ftdi *ftdi)
static void ftdi_status_requeue_work(struct usb_ftdi *ftdi, unsigned int delta)
static void ftdi_status_queue_work(struct usb_ftdi *ftdi, unsigned int delta)
static void ftdi_status_cancel_work(struct usb_ftdi *ftdi)
static void ftdi_command_requeue_work(struct usb_ftdi *ftdi, unsigned int delta)
static void ftdi_command_queue_work(struct usb_ftdi *ftdi, unsigned int delta)
static void ftdi_command_cancel_work(struct usb_ftdi *ftdi)
static void ftdi_response_requeue_work(struct usb_ftdi *ftdi,
unsigned int delta)
static void ftdi_respond_queue_work(struct usb_ftdi *ftdi, unsigned int delta)
static void ftdi_response_cancel_work(struct usb_ftdi *ftdi)
void ftdi_elan_gone_away(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(ftdi_elan_gone_away);
static void ftdi_release_platform_dev(struct device *dev)
static void ftdi_elan_do_callback(struct usb_ftdi *ftdi,
struct u132_target *target, u8 *buffer, int length);
static void ftdi_elan_kick_command_queue(struct usb_ftdi *ftdi);
static void ftdi_elan_kick_respond_queue(struct usb_ftdi *ftdi);
static int ftdi_elan_setupOHCI(struct usb_ftdi *ftdi);
static int ftdi_elan_checkingPCI(struct usb_ftdi *ftdi);
static int ftdi_elan_enumeratePCI(struct usb_ftdi *ftdi);
static int ftdi_elan_synchronize(struct usb_ftdi *ftdi);
static int ftdi_elan_stuck_waiting(struct usb_ftdi *ftdi);
static int ftdi_elan_command_engine(struct usb_ftdi *ftdi);
static int ftdi_elan_respond_engine(struct usb_ftdi *ftdi);
static int ftdi_elan_hcd_init(struct usb_ftdi *ftdi)
static void ftdi_elan_abandon_completions(struct usb_ftdi *ftdi)
static void ftdi_elan_abandon_targets(struct usb_ftdi *ftdi)
static void ftdi_elan_flush_targets(struct usb_ftdi *ftdi)
static void ftdi_elan_cancel_targets(struct usb_ftdi *ftdi)
static void ftdi_elan_kick_command_queue(struct usb_ftdi *ftdi)
static void ftdi_elan_command_work(struct work_struct *work)
static void ftdi_elan_kick_respond_queue(struct usb_ftdi *ftdi)
static void ftdi_elan_respond_work(struct work_struct *work)
static void ftdi_elan_status_work(struct work_struct *work)
static int ftdi_elan_open(struct inode *inode, struct file *file)
static int ftdi_elan_release(struct inode *inode, struct file *file)
static ssize_t ftdi_elan_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static void ftdi_elan_write_bulk_callback(struct urb *urb)
static int fill_buffer_with_all_queued_commands(struct usb_ftdi *ftdi,
char *buf, int command_size, int total_size)
static int ftdi_elan_total_command_size(struct usb_ftdi *ftdi, int command_size)
static int ftdi_elan_command_engine(struct usb_ftdi *ftdi)
static void ftdi_elan_do_callback(struct usb_ftdi *ftdi,
struct u132_target *target, u8 *buffer, int length)
static char *have_ed_set_response(struct usb_ftdi *ftdi,
struct u132_target *target, u16 ed_length, int ed_number, int ed_type,
char *b)
static char *have_ed_get_response(struct usb_ftdi *ftdi,
struct u132_target *target, u16 ed_length, int ed_number, int ed_type,
char *b)
static int ftdi_elan_respond_engine(struct usb_ftdi *ftdi)
static ssize_t ftdi_elan_write(struct file *file,
const char __user *user_buffer, size_t count,
loff_t *ppos)
static const struct file_operations ftdi_elan_fops = ;
static struct usb_class_driver ftdi_elan_jtag_class = ;
#define cPCIu132rd 0x0
#define cPCIu132wr 0x1
#define cPCIiord 0x2
#define cPCIiowr 0x3
#define cPCImemrd 0x6
#define cPCImemwr 0x7
#define cPCIcfgrd 0xA
#define cPCIcfgwr 0xB
#define cPCInull 0xF
#define cU132cmd_status 0x0
#define cU132flash 0x1
#define cPIDsetup 0x0
#define cPIDout 0x1
#define cPIDin 0x2
#define cPIDinonce 0x3
#define cCCnoerror 0x0
#define cCCcrc 0x1
#define cCCbitstuff 0x2
#define cCCtoggle 0x3
#define cCCstall 0x4
#define cCCnoresp 0x5
#define cCCbadpid1 0x6
#define cCCbadpid2 0x7
#define cCCdataoverrun 0x8
#define cCCdataunderrun 0x9
#define cCCbuffoverrun 0xC
#define cCCbuffunderrun 0xD
#define cCCnotaccessed 0xF
static int ftdi_elan_write_reg(struct usb_ftdi *ftdi, u32 data)
static int ftdi_elan_write_config(struct usb_ftdi *ftdi, int config_offset,
u8 width, u32 data)
static int ftdi_elan_write_pcimem(struct usb_ftdi *ftdi, int mem_offset,
u8 width, u32 data)
int usb_ftdi_elan_write_pcimem(struct platform_device *pdev, int mem_offset,
u8 width, u32 data)
EXPORT_SYMBOL_GPL(usb_ftdi_elan_write_pcimem);
static int ftdi_elan_read_reg(struct usb_ftdi *ftdi, u32 *data)
static int ftdi_elan_read_config(struct usb_ftdi *ftdi, int config_offset,
u8 width, u32 *data)
static int ftdi_elan_read_pcimem(struct usb_ftdi *ftdi, int mem_offset,
u8 width, u32 *data)
int usb_ftdi_elan_read_pcimem(struct platform_device *pdev, int mem_offset,
u8 width, u32 *data)
EXPORT_SYMBOL_GPL(usb_ftdi_elan_read_pcimem);
static int ftdi_elan_edset_setup(struct usb_ftdi *ftdi, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
int usb_ftdi_elan_edset_setup(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
EXPORT_SYMBOL_GPL(usb_ftdi_elan_edset_setup);
static int ftdi_elan_edset_input(struct usb_ftdi *ftdi, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
int usb_ftdi_elan_edset_input(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
EXPORT_SYMBOL_GPL(usb_ftdi_elan_edset_input);
static int ftdi_elan_edset_empty(struct usb_ftdi *ftdi, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
int usb_ftdi_elan_edset_empty(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
EXPORT_SYMBOL_GPL(usb_ftdi_elan_edset_empty);
static int ftdi_elan_edset_output(struct usb_ftdi *ftdi, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
int usb_ftdi_elan_edset_output(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
EXPORT_SYMBOL_GPL(usb_ftdi_elan_edset_output);
static int ftdi_elan_edset_single(struct usb_ftdi *ftdi, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
int usb_ftdi_elan_edset_single(struct platform_device *pdev, u8 ed_number,
void *endp, struct urb *urb, u8 address, u8 ep_number, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
EXPORT_SYMBOL_GPL(usb_ftdi_elan_edset_single);
static int ftdi_elan_edset_flush(struct usb_ftdi *ftdi, u8 ed_number,
void *endp)
int usb_ftdi_elan_edset_flush(struct platform_device *pdev, u8 ed_number,
void *endp)
EXPORT_SYMBOL_GPL(usb_ftdi_elan_edset_flush);
static int ftdi_elan_flush_input_fifo(struct usb_ftdi *ftdi)
static int ftdi_elan_synchronize_flush(struct usb_ftdi *ftdi)
static int ftdi_elan_synchronize_reset(struct usb_ftdi *ftdi)
static int ftdi_elan_synchronize(struct usb_ftdi *ftdi)
static int ftdi_elan_stuck_waiting(struct usb_ftdi *ftdi)
static int ftdi_elan_checkingPCI(struct usb_ftdi *ftdi)
#define ftdi_read_pcimem(ftdi, member, data) ftdi_elan_read_pcimem(ftdi, \
offsetof(struct ohci_regs, member), 0, data);
#define ftdi_write_pcimem(ftdi, member, data) ftdi_elan_write_pcimem(ftdi, \
offsetof(struct ohci_regs, member), 0, data);
#define OHCI_CONTROL_INIT OHCI_CTRL_CBSR
#define OHCI_INTR_INIT (OHCI_INTR_MIE | OHCI_INTR_UE | OHCI_INTR_RD | \
OHCI_INTR_WDH)
static int ftdi_elan_check_controller(struct usb_ftdi *ftdi, int quirk)
static int ftdi_elan_setup_controller(struct usb_ftdi *ftdi, int fn)
static int ftdi_elan_close_controller(struct usb_ftdi *ftdi, int fn)
static int ftdi_elan_found_controller(struct usb_ftdi *ftdi, int fn, int quirk)
static int ftdi_elan_enumeratePCI(struct usb_ftdi *ftdi)
static int ftdi_elan_setupOHCI(struct usb_ftdi *ftdi)
static int ftdi_elan_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void ftdi_elan_disconnect(struct usb_interface *interface)
static struct usb_driver ftdi_elan_driver = ;
static int __init ftdi_elan_init(void)
static void __exit ftdi_elan_exit(void)
module_init(ftdi_elan_init);
module_exit(ftdi_elan_exit);
