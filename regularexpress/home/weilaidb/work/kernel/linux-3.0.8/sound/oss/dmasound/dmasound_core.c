#define DMASOUND_CORE_REVISION 1
#define DMASOUND_CORE_EDITION 6
static DEFINE_MUTEX(dmasound_core_mutex);
int dmasound_catchRadius = 0;
module_param(dmasound_catchRadius, int, 0);
static unsigned int numWriteBufs = DEFAULT_N_BUFFERS;
module_param(numWriteBufs, int, 0);
static unsigned int writeBufSize = DEFAULT_BUFF_SIZE ;
module_param(writeBufSize, int, 0);
MODULE_LICENSE("GPL");
static int sq_unit = -1;
static int mixer_unit = -1;
static int state_unit = -1;
static int irq_installed;
static fmode_t shared_resource_owner;
static int shared_resources_initialised;
struct sound_settings dmasound = ;
static inline void sound_silence(void)
static inline int sound_set_format(int format)
static int sound_set_speed(int speed)
static int sound_set_stereo(int stereo)
static ssize_t sound_copy_translate(TRANS *trans, const u_char __user *userPtr,
size_t userCount, u_char frame[],
ssize_t *frameUsed, ssize_t frameLeft)
static struct  mixer;
static int mixer_open(struct inode *inode, struct file *file)
static int mixer_release(struct inode *inode, struct file *file)
static int mixer_ioctl(struct file *file, u_int cmd, u_long arg)
static long mixer_unlocked_ioctl(struct file *file, u_int cmd, u_long arg)
static const struct file_operations mixer_fops =
;
static void mixer_init(void)
struct sound_queue dmasound_write_sq;
static void sq_reset_output(void) ;
static int sq_allocate_buffers(struct sound_queue *sq, int num, int size)
static void sq_release_buffers(struct sound_queue *sq)
static int sq_setup(struct sound_queue *sq)
static inline void sq_play(void)
static ssize_t sq_write(struct file *file, const char __user *src, size_t uLeft,
loff_t *ppos)
static unsigned int sq_poll(struct file *file, struct poll_table_struct *wait)
static inline void sq_init_waitqueue(struct sound_queue *sq)
static int sq_open2(struct sound_queue *sq, struct file *file, fmode_t mode,
int numbufs, int bufsize)
#define write_sq_init_waitqueue()	sq_init_waitqueue(&write_sq)
#define write_sq_release_buffers()	sq_release_buffers(&write_sq)
#define write_sq_open(file)	\
sq_open2(&write_sq, file, FMODE_WRITE, numWriteBufs, writeBufSize )
static int sq_open(struct inode *inode, struct file *file)
static void sq_reset_output(void)
static void sq_reset(void)
static int sq_fsync(struct file *filp, struct dentry *dentry)
static int sq_release(struct inode *inode, struct file *file)
static int shared_resources_are_mine(fmode_t md)
static int queues_are_quiescent(void)
static int set_queue_frags(struct sound_queue *sq, int bufs, int size)
static int sq_ioctl(struct file *file, u_int cmd, u_long arg)
static long sq_unlocked_ioctl(struct file *file, u_int cmd, u_long arg)
static const struct file_operations sq_fops =
;
static int sq_init(void)
#define STAT_BUFF_LEN 768
#define LOW_LEVEL_STAT_ALLOC 162
static struct  state;
static char *get_afmt_string(int afmt)
static int state_open(struct inode *inode, struct file *file)
static int state_release(struct inode *inode, struct file *file)
static ssize_t state_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static const struct file_operations state_fops = ;
static int state_init(void)
int dmasound_init(void)
void dmasound_deinit(void)
static int dmasound_setup(char *str)
__setup("dmasound=", dmasound_setup);
char dmasound_ulaw2dma8[] = ;
char dmasound_alaw2dma8[] = ;
EXPORT_SYMBOL(dmasound);
EXPORT_SYMBOL(dmasound_init);
EXPORT_SYMBOL(dmasound_deinit);
EXPORT_SYMBOL(dmasound_write_sq);
EXPORT_SYMBOL(dmasound_catchRadius);
EXPORT_SYMBOL(dmasound_ulaw2dma8);
EXPORT_SYMBOL(dmasound_alaw2dma8);
