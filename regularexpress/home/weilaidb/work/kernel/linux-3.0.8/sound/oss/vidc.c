#define _SIOC_TYPE(x)	_IOC_TYPE(x)
#define _SIOC_NR(x)	_IOC_NR(x)
#define VIDC_SOUND_CLOCK	(250000)
#define VIDC_SOUND_CLOCK_EXT	(176400)
static int		vidc_busy;
static int		vidc_adev;
static int		vidc_audio_rate;
static char		vidc_audio_format;
static char		vidc_audio_channels;
static unsigned char	vidc_level_l[SOUND_MIXER_NRDEVICES] = ;
static unsigned char	vidc_level_r[SOUND_MIXER_NRDEVICES] = ;
static unsigned int	vidc_audio_volume_l;
static unsigned int	vidc_audio_volume_r;
extern void	vidc_update_filler(int bits, int channels);
extern int	softoss_dev;
static void
vidc_mixer_set(int mdev, unsigned int level)
static int vidc_mixer_ioctl(int dev, unsigned int cmd, void __user *arg)
static unsigned int vidc_audio_set_format(int dev, unsigned int fmt)
#define my_abs(i) ((i)<0 ? -(i) : (i))
static int vidc_audio_set_speed(int dev, int rate)
static short vidc_audio_set_channels(int dev, short channels)
static int vidc_audio_open(int dev, int mode)
static void vidc_audio_close(int dev)
static void
vidc_audio_output_block(int dev, unsigned long buf, int total_count, int one)
static void
vidc_audio_start_input(int dev, unsigned long buf, int count, int intrflag)
static int vidc_audio_prepare_for_input(int dev, int bsize, int bcount)
static irqreturn_t vidc_audio_dma_interrupt(void)
static int vidc_audio_prepare_for_output(int dev, int bsize, int bcount)
static void vidc_audio_reset(int dev)
static int vidc_audio_local_qlen(int dev)
static void vidc_audio_trigger(int dev, int enable_bits)
static struct audio_driver vidc_audio_driver =
;
static struct mixer_operations vidc_mixer_operations = ;
void vidc_update_filler(int format, int channels)
static void __init attach_vidc(struct address_info *hw_config)
static int __init probe_vidc(struct address_info *hw_config)
static void __exit unload_vidc(struct address_info *hw_config)
static struct address_info cfg;
static int __init init_vidc(void)
static void __exit cleanup_vidc(void)
module_init(init_vidc);
module_exit(cleanup_vidc);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("VIDC20 audio driver");
MODULE_LICENSE("GPL");
