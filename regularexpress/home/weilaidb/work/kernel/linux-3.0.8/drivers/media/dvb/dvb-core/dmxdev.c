static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
#define dprintk	if (debug) printk
static int dvb_dmxdev_buffer_write(struct dvb_ringbuffer *buf,
const u8 *src, size_t len)
static ssize_t dvb_dmxdev_buffer_read(struct dvb_ringbuffer *src,
int non_blocking, char __user *buf,
size_t count, loff_t *ppos)
static struct dmx_frontend *get_fe(struct dmx_demux *demux, int type)
static int dvb_dvr_open(struct inode *inode, struct file *file)
static int dvb_dvr_release(struct inode *inode, struct file *file)
static ssize_t dvb_dvr_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t dvb_dvr_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static int dvb_dvr_set_buffer_size(struct dmxdev *dmxdev,
unsigned long size)
static inline void dvb_dmxdev_filter_state_set(struct dmxdev_filter
*dmxdevfilter, int state)
static int dvb_dmxdev_set_buffer_size(struct dmxdev_filter *dmxdevfilter,
unsigned long size)
static void dvb_dmxdev_filter_timeout(unsigned long data)
static void dvb_dmxdev_filter_timer(struct dmxdev_filter *dmxdevfilter)
static int dvb_dmxdev_section_callback(const u8 *buffer1, size_t buffer1_len,
const u8 *buffer2, size_t buffer2_len,
struct dmx_section_filter *filter,
enum dmx_success success)
static int dvb_dmxdev_ts_callback(const u8 *buffer1, size_t buffer1_len,
const u8 *buffer2, size_t buffer2_len,
struct dmx_ts_feed *feed,
enum dmx_success success)
static int dvb_dmxdev_feed_stop(struct dmxdev_filter *dmxdevfilter)
static int dvb_dmxdev_feed_start(struct dmxdev_filter *filter)
static int dvb_dmxdev_feed_restart(struct dmxdev_filter *filter)
static int dvb_dmxdev_filter_stop(struct dmxdev_filter *dmxdevfilter)
static void dvb_dmxdev_delete_pids(struct dmxdev_filter *dmxdevfilter)
static inline int dvb_dmxdev_filter_reset(struct dmxdev_filter *dmxdevfilter)
static int dvb_dmxdev_start_feed(struct dmxdev *dmxdev,
struct dmxdev_filter *filter,
struct dmxdev_feed *feed)
static int dvb_dmxdev_filter_start(struct dmxdev_filter *filter)
static int dvb_demux_open(struct inode *inode, struct file *file)
static int dvb_dmxdev_filter_free(struct dmxdev *dmxdev,
struct dmxdev_filter *dmxdevfilter)
static inline void invert_mode(dmx_filter_t *filter)
static int dvb_dmxdev_add_pid(struct dmxdev *dmxdev,
struct dmxdev_filter *filter, u16 pid)
static int dvb_dmxdev_remove_pid(struct dmxdev *dmxdev,
struct dmxdev_filter *filter, u16 pid)
static int dvb_dmxdev_filter_set(struct dmxdev *dmxdev,
struct dmxdev_filter *dmxdevfilter,
struct dmx_sct_filter_params *params)
static int dvb_dmxdev_pes_filter_set(struct dmxdev *dmxdev,
struct dmxdev_filter *dmxdevfilter,
struct dmx_pes_filter_params *params)
static ssize_t dvb_dmxdev_read_sec(struct dmxdev_filter *dfil,
struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t
dvb_demux_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static int dvb_demux_do_ioctl(struct file *file,
unsigned int cmd, void *parg)
static long dvb_demux_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static unsigned int dvb_demux_poll(struct file *file, poll_table *wait)
static int dvb_demux_release(struct inode *inode, struct file *file)
static const struct file_operations dvb_demux_fops = ;
static struct dvb_device dvbdev_demux = ;
static int dvb_dvr_do_ioctl(struct file *file,
unsigned int cmd, void *parg)
static long dvb_dvr_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned int dvb_dvr_poll(struct file *file, poll_table *wait)
static const struct file_operations dvb_dvr_fops = ;
static struct dvb_device dvbdev_dvr = ;
int dvb_dmxdev_init(struct dmxdev *dmxdev, struct dvb_adapter *dvb_adapter)
EXPORT_SYMBOL(dvb_dmxdev_init);
void dvb_dmxdev_release(struct dmxdev *dmxdev)
EXPORT_SYMBOL(dvb_dmxdev_release);
