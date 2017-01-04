struct snd_timer_info32 ;
static int snd_timer_user_info_compat(struct file *file,
struct snd_timer_info32 __user *_info)
struct snd_timer_status32 ;
static int snd_timer_user_status_compat(struct file *file,
struct snd_timer_status32 __user *_status)
enum ;
static long snd_timer_user_ioctl_compat(struct file *file, unsigned int cmd, unsigned long arg)
