#define valid_dma(n) ((n) >= 0 && (n) < MAX_DMA_CHANNELS && (n) != 4)
void *          sound_mem_blocks[MAX_MEM_BLOCKS];
static DEFINE_MUTEX(soundcard_mutex);
int             sound_nblocks = 0;
int             sound_dmap_flag = 1;
int             sound_dmap_flag = 0;
static char     dma_alloc_map[MAX_DMA_CHANNELS];
#define DMA_MAP_UNAVAIL		0
#define DMA_MAP_FREE		1
#define DMA_MAP_BUSY		2
unsigned long seq_time = 0;
extern struct class *sound_class;
static mixer_vol_table mixer_vols[MAX_MIXER_DEV];
static int num_mixer_volumes;
int *load_mixer_volumes(char *name, int *levels, int present)
EXPORT_SYMBOL(load_mixer_volumes);
static int set_mixer_levels(void __user * arg)
static int get_mixer_levels(void __user * arg)
#define PROC_BLOCK_SIZE (3*1024)
static ssize_t sound_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t sound_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static int sound_open(struct inode *inode, struct file *file)
static int sound_release(struct inode *inode, struct file *file)
static int get_mixer_info(int dev, void __user *arg)
static int get_old_mixer_info(int dev, void __user *arg)
static int sound_mixer_ioctl(int mixdev, unsigned int cmd, void __user *arg)
static long sound_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static unsigned int sound_poll(struct file *file, poll_table * wait)
static int sound_mmap(struct file *file, struct vm_area_struct *vma)
const struct file_operations oss_sound_fops = ;
static int create_special_devices(void)
static int dmabuf;
static int dmabug;
module_param(dmabuf, int, 0444);
module_param(dmabug, int, 0444);
struct oss_minor_dev  dev_list[] = ;
static int __init oss_init(void)
static void __exit oss_cleanup(void)
module_init(oss_init);
module_exit(oss_cleanup);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("OSS Sound subsystem");
MODULE_AUTHOR("Hannu Savolainen, et al.");
int sound_alloc_dma(int chn, char *deviceID)
EXPORT_SYMBOL(sound_alloc_dma);
int sound_open_dma(int chn, char *deviceID)
EXPORT_SYMBOL(sound_open_dma);
void sound_free_dma(int chn)
EXPORT_SYMBOL(sound_free_dma);
void sound_close_dma(int chn)
EXPORT_SYMBOL(sound_close_dma);
static void do_sequencer_timer(unsigned long dummy)
static DEFINE_TIMER(seq_timer, do_sequencer_timer, 0, 0);
void request_sound_timer(int count)
void sound_stop_timer(void)
void conf_printf(char *name, struct address_info *hw_config)
EXPORT_SYMBOL(conf_printf);
void conf_printf2(char *name, int base, int irq, int dma, int dma2)
EXPORT_SYMBOL(conf_printf2);
