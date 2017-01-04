static int dvb_ca_en50221_debug;
module_param_named(cam_debug, dvb_ca_en50221_debug, int, 0644);
MODULE_PARM_DESC(cam_debug, "enable verbose debug messages");
#define dprintk if (dvb_ca_en50221_debug) printk
#define INIT_TIMEOUT_SECS 10
#define HOST_LINK_BUF_SIZE 0x200
#define RX_BUFFER_SIZE 65535
#define MAX_RX_PACKETS_PER_ITERATION 10
#define CTRLIF_DATA      0
#define CTRLIF_COMMAND   1
#define CTRLIF_STATUS    1
#define CTRLIF_SIZE_LOW  2
#define CTRLIF_SIZE_HIGH 3
#define CMDREG_HC        1
#define CMDREG_SW        2
#define CMDREG_SR        4
#define CMDREG_RS        8
#define CMDREG_FRIE   0x40
#define CMDREG_DAIE   0x80
#define IRQEN (CMDREG_DAIE)
#define STATUSREG_RE     1
#define STATUSREG_WE     2
#define STATUSREG_FR  0x40
#define STATUSREG_DA  0x80
#define STATUSREG_TXERR (STATUSREG_RE|STATUSREG_WE)
#define DVB_CA_SLOTSTATE_NONE           0
#define DVB_CA_SLOTSTATE_UNINITIALISED  1
#define DVB_CA_SLOTSTATE_RUNNING        2
#define DVB_CA_SLOTSTATE_INVALID        3
#define DVB_CA_SLOTSTATE_WAITREADY      4
#define DVB_CA_SLOTSTATE_VALIDATE       5
#define DVB_CA_SLOTSTATE_WAITFR         6
#define DVB_CA_SLOTSTATE_LINKINIT       7
struct dvb_ca_slot ;
struct dvb_ca_private ;
static void dvb_ca_en50221_thread_wakeup(struct dvb_ca_private *ca);
static int dvb_ca_en50221_read_data(struct dvb_ca_private *ca, int slot, u8 * ebuf, int ecount);
static int dvb_ca_en50221_write_data(struct dvb_ca_private *ca, int slot, u8 * ebuf, int ecount);
static char *findstr(char * haystack, int hlen, char * needle, int nlen)
static int dvb_ca_en50221_check_camstatus(struct dvb_ca_private *ca, int slot)
static int dvb_ca_en50221_wait_if_status(struct dvb_ca_private *ca, int slot,
u8 waitfor, int timeout_hz)
static int dvb_ca_en50221_link_init(struct dvb_ca_private *ca, int slot)
static int dvb_ca_en50221_read_tuple(struct dvb_ca_private *ca, int slot,
int *address, int *tupleType, int *tupleLength, u8 * tuple)
static int dvb_ca_en50221_parse_attributes(struct dvb_ca_private *ca, int slot)
static int dvb_ca_en50221_set_configoption(struct dvb_ca_private *ca, int slot)
static int dvb_ca_en50221_read_data(struct dvb_ca_private *ca, int slot, u8 * ebuf, int ecount)
static int dvb_ca_en50221_write_data(struct dvb_ca_private *ca, int slot, u8 * buf, int bytes_write)
EXPORT_SYMBOL(dvb_ca_en50221_camchange_irq);
static int dvb_ca_en50221_slot_shutdown(struct dvb_ca_private *ca, int slot)
EXPORT_SYMBOL(dvb_ca_en50221_camready_irq);
void dvb_ca_en50221_camchange_irq(struct dvb_ca_en50221 *pubca, int slot, int change_type)
EXPORT_SYMBOL(dvb_ca_en50221_frda_irq);
void dvb_ca_en50221_camready_irq(struct dvb_ca_en50221 *pubca, int slot)
void dvb_ca_en50221_frda_irq(struct dvb_ca_en50221 *pubca, int slot)
static void dvb_ca_en50221_thread_wakeup(struct dvb_ca_private *ca)
static void dvb_ca_en50221_thread_update_delay(struct dvb_ca_private *ca)
static int dvb_ca_en50221_thread(void *data)
static int dvb_ca_en50221_io_do_ioctl(struct file *file,
unsigned int cmd, void *parg)
static long dvb_ca_en50221_io_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t dvb_ca_en50221_io_write(struct file *file,
const char __user * buf, size_t count, loff_t * ppos)
static int dvb_ca_en50221_io_read_condition(struct dvb_ca_private *ca,
int *result, int *_slot)
static ssize_t dvb_ca_en50221_io_read(struct file *file, char __user * buf,
size_t count, loff_t * ppos)
static int dvb_ca_en50221_io_open(struct inode *inode, struct file *file)
static int dvb_ca_en50221_io_release(struct inode *inode, struct file *file)
static unsigned int dvb_ca_en50221_io_poll(struct file *file, poll_table * wait)
EXPORT_SYMBOL(dvb_ca_en50221_init);
static const struct file_operations dvb_ca_fops = ;
static struct dvb_device dvbdev_ca = ;
int dvb_ca_en50221_init(struct dvb_adapter *dvb_adapter,
struct dvb_ca_en50221 *pubca, int flags, int slot_count)
EXPORT_SYMBOL(dvb_ca_en50221_release);
void dvb_ca_en50221_release(struct dvb_ca_en50221 *pubca)
