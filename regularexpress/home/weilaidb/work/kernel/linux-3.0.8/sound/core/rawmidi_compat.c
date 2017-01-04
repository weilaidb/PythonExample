struct snd_rawmidi_params32  __attribute__((packed));
static int snd_rawmidi_ioctl_params_compat(struct snd_rawmidi_file *rfile,
struct snd_rawmidi_params32 __user *src)
struct snd_rawmidi_status32  __attribute__((packed));
static int snd_rawmidi_ioctl_status_compat(struct snd_rawmidi_file *rfile,
struct snd_rawmidi_status32 __user *src)
enum ;
static long snd_rawmidi_ioctl_compat(struct file *file, unsigned int cmd, unsigned long arg)
