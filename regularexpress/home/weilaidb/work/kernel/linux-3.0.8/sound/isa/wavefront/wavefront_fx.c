#define FX_LSB_TRANSFER 0x01
#define FX_MSB_TRANSFER 0x02
#define FX_AUTO_INCR    0x04
#define WAIT_IDLE	0xff
static int
wavefront_fx_idle (snd_wavefront_t *dev)
static void
wavefront_fx_mute (snd_wavefront_t *dev, int onoff)
static int
wavefront_fx_memset (snd_wavefront_t *dev,
int page,
int addr,
int cnt,
unsigned short *data)
int
snd_wavefront_fx_detect (snd_wavefront_t *dev)
int
snd_wavefront_fx_open (struct snd_hwdep *hw, struct file *file)
int
snd_wavefront_fx_release (struct snd_hwdep *hw, struct file *file)
int
snd_wavefront_fx_ioctl (struct snd_hwdep *sdev, struct file *file,
unsigned int cmd, unsigned long arg)
int __devinit
snd_wavefront_fx_start (snd_wavefront_t *dev)
MODULE_FIRMWARE("yamaha/yss225_registers.bin");
