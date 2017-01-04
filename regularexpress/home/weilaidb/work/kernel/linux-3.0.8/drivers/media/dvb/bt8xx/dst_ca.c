#define DST_CA_ERROR		0
#define DST_CA_NOTICE		1
#define DST_CA_INFO		2
#define DST_CA_DEBUG		3
#define dprintk(x, y, z, format, arg...) do  while(0)
static DEFINE_MUTEX(dst_ca_mutex);
static unsigned int verbose = 5;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "verbose startup messages, default is 1 (yes)");
static int ca_set_slot_descr(void)
static int ca_set_pid(void)
static void put_command_and_length(u8 *data, int command, int length)
static void put_checksum(u8 *check_string, int length)
static int dst_ci_command(struct dst_state* state, u8 * data, u8 *ca_string, u8 len, int read)
static int dst_put_ci(struct dst_state *state, u8 *data, int len, u8 *ca_string, int read)
static int ca_get_app_info(struct dst_state *state)
static int ca_get_ca_info(struct dst_state *state)
static int ca_get_slot_caps(struct dst_state *state, struct ca_caps *p_ca_caps, void __user *arg)
static int ca_get_slot_descr(struct dst_state *state, struct ca_msg *p_ca_message, void __user *arg)
static int ca_get_slot_info(struct dst_state *state, struct ca_slot_info *p_ca_slot_info, void __user *arg)
static int ca_get_message(struct dst_state *state, struct ca_msg *p_ca_message, void __user *arg)
static int handle_dst_tag(struct dst_state *state, struct ca_msg *p_ca_message, struct ca_msg *hw_buffer, u32 length)
static int write_to_8820(struct dst_state *state, struct ca_msg *hw_buffer, u8 length, u8 reply)
static u32 asn_1_decode(u8 *asn_1_array)
static int debug_string(u8 *msg, u32 length, u32 offset)
static int ca_set_pmt(struct dst_state *state, struct ca_msg *p_ca_message, struct ca_msg *hw_buffer, u8 reply, u8 query)
static int dst_check_ca_pmt(struct dst_state *state, struct ca_msg *p_ca_message, struct ca_msg *hw_buffer)
static int ca_send_message(struct dst_state *state, struct ca_msg *p_ca_message, void __user *arg)
static long dst_ca_ioctl(struct file *file, unsigned int cmd, unsigned long ioctl_arg)
static int dst_ca_open(struct inode *inode, struct file *file)
static int dst_ca_release(struct inode *inode, struct file *file)
static ssize_t dst_ca_read(struct file *file, char __user *buffer, size_t length, loff_t *offset)
static ssize_t dst_ca_write(struct file *file, const char __user *buffer, size_t length, loff_t *offset)
static const struct file_operations dst_ca_fops = ;
static struct dvb_device dvbdev_ca = ;
struct dvb_device *dst_ca_attach(struct dst_state *dst, struct dvb_adapter *dvb_adapter)
EXPORT_SYMBOL(dst_ca_attach);
MODULE_DESCRIPTION("DST DVB-S/T/C Combo CA driver");
MODULE_AUTHOR("Manu Abraham");
MODULE_LICENSE("GPL");
