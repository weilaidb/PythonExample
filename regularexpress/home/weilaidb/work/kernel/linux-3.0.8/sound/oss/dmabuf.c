#define BE_CONSERVATIVE
#define SAMPLE_ROUNDUP 0
#define DMAP_FREE_ON_CLOSE      0
#define DMAP_KEEP_ON_CLOSE      1
extern int sound_dmap_flag;
static void dma_reset_output(int dev);
static void dma_reset_input(int dev);
static int local_start_dma(struct audio_operations *adev, unsigned long physaddr, int count, int dma_mode);
static int debugmem;
static int dma_buffsize = DSP_BUFFSIZE;
static long dmabuf_timeout(struct dma_buffparms *dmap)
static int sound_alloc_dmap(struct dma_buffparms *dmap)
static void sound_free_dmap(struct dma_buffparms *dmap)
static int sound_start_dma(struct dma_buffparms *dmap, unsigned long physaddr, int count, int dma_mode)
static void dma_init_buffers(struct dma_buffparms *dmap)
static int open_dmap(struct audio_operations *adev, int mode, struct dma_buffparms *dmap)
static void close_dmap(struct audio_operations *adev, struct dma_buffparms *dmap)
static unsigned int default_set_bits(int dev, unsigned int bits)
static int default_set_speed(int dev, int speed)
static short default_set_channels(int dev, short channels)
static void check_driver(struct audio_driver *d)
int DMAbuf_open(int dev, int mode)
void DMAbuf_reset(int dev)
static void dma_reset_output(int dev)
static void dma_reset_input(int dev)
void DMAbuf_launch_output(int dev, struct dma_buffparms *dmap)
int DMAbuf_sync(int dev)
int DMAbuf_release(int dev, int mode)
int DMAbuf_activate_recording(int dev, struct dma_buffparms *dmap)
int DMAbuf_getrdbuffer(int dev, char **buf, int *len, int dontblock)
int DMAbuf_rmchars(int dev, int buff_no, int c)
int DMAbuf_get_buffer_pointer(int dev, struct dma_buffparms *dmap, int direction)
void DMAbuf_start_devices(unsigned int devmask)
int DMAbuf_space_in_queue(int dev)
static int output_sleep(int dev, int dontblock)
static int find_output_space(int dev, char **buf, int *size)
int DMAbuf_getwrbuffer(int dev, char **buf, int *size, int dontblock)
int DMAbuf_move_wrpointer(int dev, int l)
int DMAbuf_start_dma(int dev, unsigned long physaddr, int count, int dma_mode)
EXPORT_SYMBOL(DMAbuf_start_dma);
static int local_start_dma(struct audio_operations *adev, unsigned long physaddr, int count, int dma_mode)
static void finish_output_interrupt(int dev, struct dma_buffparms *dmap)
static void do_outputintr(int dev, int dummy)
void DMAbuf_outputintr(int dev, int notify_only)
EXPORT_SYMBOL(DMAbuf_outputintr);
static void do_inputintr(int dev)
void DMAbuf_inputintr(int dev)
EXPORT_SYMBOL(DMAbuf_inputintr);
void DMAbuf_init(int dev, int dma1, int dma2)
static unsigned int poll_input(struct file * file, int dev, poll_table *wait)
static unsigned int poll_output(struct file * file, int dev, poll_table *wait)
unsigned int DMAbuf_poll(struct file * file, int dev, poll_table *wait)
void DMAbuf_deinit(int dev)
