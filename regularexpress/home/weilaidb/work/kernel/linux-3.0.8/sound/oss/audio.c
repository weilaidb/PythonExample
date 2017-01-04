#define NEUTRAL8	0x80
#define NEUTRAL16	0x00
static int             dma_ioctl(int dev, unsigned int cmd, void __user *arg);
static int set_format(int dev, int fmt)
int audio_open(int dev, struct file *file)
static void sync_output(int dev)
void audio_release(int dev, struct file *file)
static void translate_bytes(const unsigned char *table, unsigned char *buff, int n)
int audio_write(int dev, struct file *file, const char __user *buf, int count)
int audio_read(int dev, struct file *file, char __user *buf, int count)
int audio_ioctl(int dev, struct file *file, unsigned int cmd, void __user *arg)
void audio_init_devices(void)
void reorganize_buffers(int dev, struct dma_buffparms *dmap, int recording)
static int dma_subdivide(int dev, struct dma_buffparms *dmap, int fact)
static int dma_set_fragment(int dev, struct dma_buffparms *dmap, int fact)
static int dma_ioctl(int dev, unsigned int cmd, void __user *arg)
