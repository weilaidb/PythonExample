#define SISUSB_DONTSYNC
static int sisusb_first_vc = 0;
static int sisusb_last_vc = 0;
module_param_named(first, sisusb_first_vc, int, 0);
module_param_named(last, sisusb_last_vc, int, 0);
MODULE_PARM_DESC(first, "Number of first console to take over (1 - MAX_NR_CONSOLES)");
MODULE_PARM_DESC(last, "Number of last console to take over (1 - MAX_NR_CONSOLES)");
static struct usb_driver sisusb_driver;
static void
sisusb_free_buffers(struct sisusb_usb_data *sisusb)
static void
sisusb_free_urbs(struct sisusb_usb_data *sisusb)
static int
sisusb_all_free(struct sisusb_usb_data *sisusb)
static void
sisusb_kill_all_busy(struct sisusb_usb_data *sisusb)
static int
sisusb_wait_all_out_complete(struct sisusb_usb_data *sisusb)
static int
sisusb_outurb_available(struct sisusb_usb_data *sisusb)
static int
sisusb_get_free_outbuf(struct sisusb_usb_data *sisusb)
static int
sisusb_alloc_outbuf(struct sisusb_usb_data *sisusb)
static void
sisusb_free_outbuf(struct sisusb_usb_data *sisusb, int index)
static void
sisusb_bulk_completeout(struct urb *urb)
static int
sisusb_bulkout_msg(struct sisusb_usb_data *sisusb, int index, unsigned int pipe, void *data,
int len, int *actual_length, int timeout, unsigned int tflags)
static void
sisusb_bulk_completein(struct urb *urb)
static int
sisusb_bulkin_msg(struct sisusb_usb_data *sisusb, unsigned int pipe, void *data,
int len, int *actual_length, int timeout, unsigned int tflags)
static int sisusb_send_bulk_msg(struct sisusb_usb_data *sisusb, int ep, int len,
char *kernbuffer, const char __user *userbuffer, int index,
ssize_t *bytes_written, unsigned int tflags, int async)
static int sisusb_recv_bulk_msg(struct sisusb_usb_data *sisusb, int ep, int len,
void *kernbuffer, char __user *userbuffer, ssize_t *bytes_read,
unsigned int tflags)
static int sisusb_send_packet(struct sisusb_usb_data *sisusb, int len,
struct sisusb_packet *packet)
static int sisusb_send_bridge_packet(struct sisusb_usb_data *sisusb, int len,
struct sisusb_packet *packet,
unsigned int tflags)
static int sisusb_write_memio_byte(struct sisusb_usb_data *sisusb, int type,
u32 addr, u8 data)
static int sisusb_write_memio_word(struct sisusb_usb_data *sisusb, int type,
u32 addr, u16 data)
static int sisusb_write_memio_24bit(struct sisusb_usb_data *sisusb, int type,
u32 addr, u32 data)
static int sisusb_write_memio_long(struct sisusb_usb_data *sisusb, int type,
u32 addr, u32 data)
static int sisusb_write_mem_bulk(struct sisusb_usb_data *sisusb, u32 addr,
char *kernbuffer, int length,
const char __user *userbuffer, int index,
ssize_t *bytes_written)
static int sisusb_read_memio_byte(struct sisusb_usb_data *sisusb, int type,
u32 addr, u8 *data)
static int sisusb_read_memio_word(struct sisusb_usb_data *sisusb, int type,
u32 addr, u16 *data)
static int sisusb_read_memio_24bit(struct sisusb_usb_data *sisusb, int type,
u32 addr, u32 *data)
static int sisusb_read_memio_long(struct sisusb_usb_data *sisusb, int type,
u32 addr, u32 *data)
static int sisusb_read_mem_bulk(struct sisusb_usb_data *sisusb, u32 addr,
char *kernbuffer, int length,
char __user *userbuffer, ssize_t *bytes_read)
int
sisusb_setreg(struct sisusb_usb_data *sisusb, int port, u8 data)
int
sisusb_getreg(struct sisusb_usb_data *sisusb, int port, u8 *data)
int
sisusb_setidxreg(struct sisusb_usb_data *sisusb, int port, u8 index, u8 data)
int
sisusb_getidxreg(struct sisusb_usb_data *sisusb, int port, u8 index, u8 *data)
int
sisusb_setidxregandor(struct sisusb_usb_data *sisusb, int port, u8 idx,
u8 myand, u8 myor)
static int
sisusb_setidxregmask(struct sisusb_usb_data *sisusb, int port, u8 idx,
u8 data, u8 mask)
int
sisusb_setidxregor(struct sisusb_usb_data *sisusb, int port, u8 index, u8 myor)
int
sisusb_setidxregand(struct sisusb_usb_data *sisusb, int port, u8 idx, u8 myand)
int
sisusb_writeb(struct sisusb_usb_data *sisusb, u32 adr, u8 data)
int
sisusb_readb(struct sisusb_usb_data *sisusb, u32 adr, u8 *data)
int
sisusb_copy_memory(struct sisusb_usb_data *sisusb, char *src,
u32 dest, int length, size_t *bytes_written)
int
sisusb_read_memory(struct sisusb_usb_data *sisusb, char *dest,
u32 src, int length, size_t *bytes_written)
static void
sisusb_testreadwrite(struct sisusb_usb_data *sisusb)
static int
sisusb_write_pci_config(struct sisusb_usb_data *sisusb, int regnum, u32 data)
static int
sisusb_read_pci_config(struct sisusb_usb_data *sisusb, int regnum, u32 *data)
static int
sisusb_clear_vram(struct sisusb_usb_data *sisusb, u32 address, int length)
#define GETREG(r,d)     sisusb_read_memio_byte(sisusb, SISUSB_TYPE_IO, r, d)
#define SETREG(r,d)	sisusb_write_memio_byte(sisusb, SISUSB_TYPE_IO, r, d)
#define SETIREG(r,i,d)	sisusb_setidxreg(sisusb, r, i, d)
#define GETIREG(r,i,d)  sisusb_getidxreg(sisusb, r, i, d)
#define SETIREGOR(r,i,o)	sisusb_setidxregor(sisusb, r, i, o)
#define SETIREGAND(r,i,a)	sisusb_setidxregand(sisusb, r, i, a)
#define SETIREGANDOR(r,i,a,o)	sisusb_setidxregandor(sisusb, r, i, a, o)
#define READL(a,d)	sisusb_read_memio_long(sisusb, SISUSB_TYPE_MEM, a, d)
#define WRITEL(a,d)	sisusb_write_memio_long(sisusb, SISUSB_TYPE_MEM, a, d)
#define READB(a,d)	sisusb_read_memio_byte(sisusb, SISUSB_TYPE_MEM, a, d)
#define WRITEB(a,d)	sisusb_write_memio_byte(sisusb, SISUSB_TYPE_MEM, a, d)
static int
sisusb_triggersr16(struct sisusb_usb_data *sisusb, u8 ramtype)
static int
sisusb_getbuswidth(struct sisusb_usb_data *sisusb, int *bw, int *chab)
static int
sisusb_verify_mclk(struct sisusb_usb_data *sisusb)
static int
sisusb_set_rank(struct sisusb_usb_data *sisusb, int *iret, int index,
u8 rankno, u8 chab, const u8 dramtype[][5],
int bw)
static int
sisusb_check_rbc(struct sisusb_usb_data *sisusb, int *iret, u32 inc, int testn)
static int
sisusb_check_ranks(struct sisusb_usb_data *sisusb, int *iret, int rankno,
int idx, int bw, const u8 rtype[][5])
static int
sisusb_get_sdram_size(struct sisusb_usb_data *sisusb, int *iret, int bw,
int chab)
static int
sisusb_setup_screen(struct sisusb_usb_data *sisusb, int clrall, int drwfr)
static int
sisusb_set_default_mode(struct sisusb_usb_data *sisusb, int touchengines)
static int
sisusb_init_gfxcore(struct sisusb_usb_data *sisusb)
#undef SETREG
#undef GETREG
#undef SETIREG
#undef GETIREG
#undef SETIREGOR
#undef SETIREGAND
#undef SETIREGANDOR
#undef READL
#undef WRITEL
static void
sisusb_get_ramconfig(struct sisusb_usb_data *sisusb)
static int
sisusb_do_init_gfxdevice(struct sisusb_usb_data *sisusb)
static int
sisusb_init_gfxdevice(struct sisusb_usb_data *sisusb, int initscreen)
int
sisusb_reset_text_mode(struct sisusb_usb_data *sisusb, int init)
static int
sisusb_open(struct inode *inode, struct file *file)
void
sisusb_delete(struct kref *kref)
static int
sisusb_release(struct inode *inode, struct file *file)
static ssize_t
sisusb_read(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static ssize_t
sisusb_write(struct file *file, const char __user *buffer, size_t count,
loff_t *ppos)
static loff_t
sisusb_lseek(struct file *file, loff_t offset, int orig)
static int
sisusb_handle_command(struct sisusb_usb_data *sisusb, struct sisusb_command *y,
unsigned long arg)
static long
sisusb_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long
sisusb_compat_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
static const struct file_operations usb_sisusb_fops = ;
static struct usb_class_driver usb_sisusb_class = ;
static int sisusb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void sisusb_disconnect(struct usb_interface *intf)
static const struct usb_device_id sisusb_table[] = ;
MODULE_DEVICE_TABLE (usb, sisusb_table);
static struct usb_driver sisusb_driver = ;
static int __init usb_sisusb_init(void)
static void __exit usb_sisusb_exit(void)
module_init(usb_sisusb_init);
module_exit(usb_sisusb_exit);
MODULE_AUTHOR("Thomas Winischhofer <thomas@winischhofer.net>");
MODULE_DESCRIPTION("sisusbvga - Driver for Net2280/SiS315-based USB2VGA dongles");
MODULE_LICENSE("GPL");
