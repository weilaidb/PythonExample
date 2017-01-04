static int snd_pcm_ioctl_delay_compat(struct snd_pcm_substream *substream,
s32 __user *src)
static int snd_pcm_ioctl_rewind_compat(struct snd_pcm_substream *substream,
u32 __user *src)
static int snd_pcm_ioctl_forward_compat(struct snd_pcm_substream *substream,
u32 __user *src)
struct snd_pcm_hw_params32 ;
struct snd_pcm_sw_params32 ;
static snd_pcm_uframes_t recalculate_boundary(struct snd_pcm_runtime *runtime)
static int snd_pcm_ioctl_sw_params_compat(struct snd_pcm_substream *substream,
struct snd_pcm_sw_params32 __user *src)
struct snd_pcm_channel_info32 ;
static int snd_pcm_ioctl_channel_info_compat(struct snd_pcm_substream *substream,
struct snd_pcm_channel_info32 __user *src)
struct snd_pcm_status32  __attribute__((packed));
static int snd_pcm_status_user_compat(struct snd_pcm_substream *substream,
struct snd_pcm_status32 __user *src)
static int snd_pcm_ioctl_hw_params_compat(struct snd_pcm_substream *substream,
int refine,
struct snd_pcm_hw_params32 __user *data32)
struct snd_xferi32 ;
static int snd_pcm_ioctl_xferi_compat(struct snd_pcm_substream *substream,
int dir, struct snd_xferi32 __user *data32)
struct snd_xfern32 ;
static int snd_pcm_ioctl_xfern_compat(struct snd_pcm_substream *substream,
int dir, struct snd_xfern32 __user *data32)
struct snd_pcm_mmap_status32  __attribute__((packed));
struct snd_pcm_mmap_control32 ;
struct snd_pcm_sync_ptr32  __attribute__((packed));
static int snd_pcm_ioctl_sync_ptr_compat(struct snd_pcm_substream *substream,
struct snd_pcm_sync_ptr32 __user *src)
enum ;
static long snd_pcm_ioctl_compat(struct file *file, unsigned int cmd, unsigned long arg)
