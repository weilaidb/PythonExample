#define BITRATE_MIN	 8000
#define BITRATE_TARGET	CONFIG_SND_AT73C213_TARGET_BITRATE
#define BITRATE_MAX	50000
static u8 snd_at73c213_original_image[18] =
;
struct snd_at73c213 ;
#define get_chip(card) ((struct snd_at73c213 *)card->private_data)
static int
snd_at73c213_write_reg(struct snd_at73c213 *chip, u8 reg, u8 val)
static struct snd_pcm_hardware snd_at73c213_playback_hw = ;
static int snd_at73c213_set_bitrate(struct snd_at73c213 *chip)
static int snd_at73c213_pcm_open(struct snd_pcm_substream *substream)
static int snd_at73c213_pcm_close(struct snd_pcm_substream *substream)
static int snd_at73c213_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_at73c213_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_at73c213_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_at73c213_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_at73c213_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops at73c213_playback_ops = ;
static int __devinit snd_at73c213_pcm_new(struct snd_at73c213 *chip, int device)
static irqreturn_t snd_at73c213_interrupt(int irq, void *dev_id)
static int snd_at73c213_mono_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_at73c213_mono_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_at73c213_stereo_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_at73c213_stereo_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_at73c213_stereo_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_at73c213_mono_switch_info	snd_ctl_boolean_mono_info
static int snd_at73c213_mono_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_at73c213_mono_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_at73c213_pa_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_at73c213_line_capture_volume_info(
struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_at73c213_aux_capture_volume_info(
struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
#define AT73C213_MONO_SWITCH(xname, xindex, reg, shift, mask, invert)	\
#define AT73C213_STEREO(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
static struct snd_kcontrol_new snd_at73c213_controls[] __devinitdata = ;
static int __devinit snd_at73c213_mixer(struct snd_at73c213 *chip)
static int __devinit snd_at73c213_ssc_init(struct snd_at73c213 *chip)
static int __devinit snd_at73c213_chip_init(struct snd_at73c213 *chip)
static int snd_at73c213_dev_free(struct snd_device *device)
static int __devinit snd_at73c213_dev_init(struct snd_card *card,
struct spi_device *spi)
static int __devinit snd_at73c213_probe(struct spi_device *spi)
static int __devexit snd_at73c213_remove(struct spi_device *spi)
static int snd_at73c213_suspend(struct spi_device *spi, pm_message_t msg)
static int snd_at73c213_resume(struct spi_device *spi)
#define snd_at73c213_suspend NULL
#define snd_at73c213_resume NULL
static struct spi_driver at73c213_driver = ;
static int __init at73c213_init(void)
module_init(at73c213_init);
static void __exit at73c213_exit(void)
module_exit(at73c213_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <egtvedt@samfundet.no>");
MODULE_DESCRIPTION("Sound driver for AT73C213 with Atmel SSC");
MODULE_LICENSE("GPL");
