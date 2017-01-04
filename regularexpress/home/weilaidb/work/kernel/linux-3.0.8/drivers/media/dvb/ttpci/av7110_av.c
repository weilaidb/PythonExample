#define PROG_STREAM_MAP  0xBC
#define PRIVATE_STREAM1  0xBD
#define PADDING_STREAM	 0xBE
#define PRIVATE_STREAM2  0xBF
#define AUDIO_STREAM_S	 0xC0
#define AUDIO_STREAM_E	 0xDF
#define VIDEO_STREAM_S	 0xE0
#define VIDEO_STREAM_E	 0xEF
#define ECM_STREAM	 0xF0
#define EMM_STREAM	 0xF1
#define DSM_CC_STREAM	 0xF2
#define ISO13522_STREAM  0xF3
#define PROG_STREAM_DIR  0xFF
#define PTS_DTS_FLAGS	 0xC0
#define PTS_ONLY	 0x80
#define PTS_DTS		 0xC0
#define TS_SIZE		 188
#define TRANS_ERROR	 0x80
#define PAY_START	 0x40
#define TRANS_PRIO	 0x20
#define PID_MASK_HI	 0x1F
#define TRANS_SCRMBL1	 0x80
#define TRANS_SCRMBL2	 0x40
#define ADAPT_FIELD	 0x20
#define PAYLOAD		 0x10
#define COUNT_MASK	 0x0F
#define DISCON_IND	 0x80
#define RAND_ACC_IND	 0x40
#define ES_PRI_IND	 0x20
#define PCR_FLAG	 0x10
#define OPCR_FLAG	 0x08
#define SPLICE_FLAG	 0x04
#define TRANS_PRIV	 0x02
#define ADAP_EXT_FLAG	 0x01
#define LTW_FLAG	 0x80
#define PIECE_RATE	 0x40
#define SEAM_SPLICE	 0x20
static void p_to_t(u8 const *buf, long int length, u16 pid,
u8 *counter, struct dvb_demux_feed *feed);
static int write_ts_to_decoder(struct av7110 *av7110, int type, const u8 *buf, size_t len);
int av7110_record_cb(struct dvb_filter_pes2ts *p2t, u8 *buf, size_t len)
static int dvb_filter_pes2ts_cb(void *priv, unsigned char *data)
int av7110_av_start_record(struct av7110 *av7110, int av,
struct dvb_demux_feed *dvbdmxfeed)
int av7110_av_start_play(struct av7110 *av7110, int av)
int av7110_av_stop(struct av7110 *av7110, int av)
int av7110_pes_play(void *dest, struct dvb_ringbuffer *buf, int dlen)
int av7110_set_volume(struct av7110 *av7110, int volleft, int volright)
int av7110_set_vidmode(struct av7110 *av7110, enum av7110_video_mode mode)
static enum av7110_video_mode sw2mode[16] = ;
static int get_video_format(struct av7110 *av7110, u8 *buf, int count)
static inline long aux_ring_buffer_write(struct dvb_ringbuffer *rbuf,
const u8 *buf, unsigned long count)
static void play_video_cb(u8 *buf, int count, void *priv)
static void play_audio_cb(u8 *buf, int count, void *priv)
#define FREE_COND_TS (dvb_ringbuffer_free(rb) >= 4096)
static ssize_t ts_play(struct av7110 *av7110, const char __user *buf,
unsigned long count, int nonblock, int type)
#define FREE_COND (dvb_ringbuffer_free(&av7110->avout) >= 20 * 1024 && \
dvb_ringbuffer_free(&av7110->aout) >= 20 * 1024)
static ssize_t dvb_play(struct av7110 *av7110, const char __user *buf,
unsigned long count, int nonblock, int type)
static ssize_t dvb_play_kernel(struct av7110 *av7110, const u8 *buf,
unsigned long count, int nonblock, int type)
static ssize_t dvb_aplay(struct av7110 *av7110, const char __user *buf,
unsigned long count, int nonblock, int type)
void av7110_p2t_init(struct av7110_p2t *p, struct dvb_demux_feed *feed)
static void clear_p2t(struct av7110_p2t *p)
static int find_pes_header(u8 const *buf, long int length, int *frags)
void av7110_p2t_write(u8 const *buf, long int length, u16 pid, struct av7110_p2t *p)
static int write_ts_header2(u16 pid, u8 *counter, int pes_start, u8 *buf, u8 length)
static void p_to_t(u8 const *buf, long int length, u16 pid, u8 *counter,
struct dvb_demux_feed *feed)
static int write_ts_to_decoder(struct av7110 *av7110, int type, const u8 *buf, size_t len)
int av7110_write_to_decoder(struct dvb_demux_feed *feed, const u8 *buf, size_t len)
void dvb_video_add_event(struct av7110 *av7110, struct video_event *event)
static int dvb_video_get_event (struct av7110 *av7110, struct video_event *event, int flags)
static unsigned int dvb_video_poll(struct file *file, poll_table *wait)
static ssize_t dvb_video_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int dvb_audio_poll(struct file *file, poll_table *wait)
static ssize_t dvb_audio_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static u8 iframe_header[] = ;
#define MIN_IFRAME 400000
static int play_iframe(struct av7110 *av7110, char __user *buf, unsigned int len, int nonblock)
static int dvb_video_ioctl(struct file *file,
unsigned int cmd, void *parg)
static int dvb_audio_ioctl(struct file *file,
unsigned int cmd, void *parg)
static int dvb_video_open(struct inode *inode, struct file *file)
static int dvb_video_release(struct inode *inode, struct file *file)
static int dvb_audio_open(struct inode *inode, struct file *file)
static int dvb_audio_release(struct inode *inode, struct file *file)
static const struct file_operations dvb_video_fops = ;
static struct dvb_device dvbdev_video = ;
static const struct file_operations dvb_audio_fops = ;
static struct dvb_device dvbdev_audio = ;
int av7110_av_register(struct av7110 *av7110)
void av7110_av_unregister(struct av7110 *av7110)
int av7110_av_init(struct av7110 *av7110)
void av7110_av_exit(struct av7110 *av7110)
