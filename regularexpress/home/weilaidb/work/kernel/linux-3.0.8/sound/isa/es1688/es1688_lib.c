MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("ESS ESx688 lowlevel module");
MODULE_LICENSE("GPL");
static int snd_es1688_dsp_command(struct snd_es1688 *chip, unsigned char val)
static int snd_es1688_dsp_get_byte(struct snd_es1688 *chip)
static int snd_es1688_write(struct snd_es1688 *chip,
unsigned char reg, unsigned char data)
static int snd_es1688_read(struct snd_es1688 *chip, unsigned char reg)
void snd_es1688_mixer_write(struct snd_es1688 *chip,
unsigned char reg, unsigned char data)
static unsigned char snd_es1688_mixer_read(struct snd_es1688 *chip, unsigned char reg)
int snd_es1688_reset(struct snd_es1688 *chip)
EXPORT_SYMBOL(snd_es1688_reset);
static int snd_es1688_probe(struct snd_es1688 *chip)
static int snd_es1688_init(struct snd_es1688 * chip, int enable)
static struct snd_ratnum clocks[2] = ;
static struct snd_pcm_hw_constraint_ratnums hw_constraints_clocks  = ;
static void snd_es1688_set_rate(struct snd_es1688 *chip, struct snd_pcm_substream *substream)
static int snd_es1688_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_es1688_trigger(struct snd_es1688 *chip, int cmd, unsigned char value)
static int snd_es1688_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_es1688_hw_free(struct snd_pcm_substream *substream)
static int snd_es1688_playback_prepare(struct snd_pcm_substream *substream)
static int snd_es1688_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_es1688_capture_prepare(struct snd_pcm_substream *substream)
static int snd_es1688_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static irqreturn_t snd_es1688_interrupt(int irq, void *dev_id)
static snd_pcm_uframes_t snd_es1688_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_es1688_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_es1688_playback =
;
static struct snd_pcm_hardware snd_es1688_capture =
;
static int snd_es1688_playback_open(struct snd_pcm_substream *substream)
static int snd_es1688_capture_open(struct snd_pcm_substream *substream)
static int snd_es1688_playback_close(struct snd_pcm_substream *substream)
static int snd_es1688_capture_close(struct snd_pcm_substream *substream)
static int snd_es1688_free(struct snd_es1688 *chip)
static int snd_es1688_dev_free(struct snd_device *device)
static const char *snd_es1688_chip_id(struct snd_es1688 *chip)
int snd_es1688_create(struct snd_card *card,
struct snd_es1688 *chip,
unsigned long port,
unsigned long mpu_port,
int irq,
int mpu_irq,
int dma8,
unsigned short hardware)
static struct snd_pcm_ops snd_es1688_playback_ops = ;
static struct snd_pcm_ops snd_es1688_capture_ops = ;
int snd_es1688_pcm(struct snd_card *card, struct snd_es1688 *chip,
int device, struct snd_pcm **rpcm)
static int snd_es1688_info_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es1688_get_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es1688_put_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define ES1688_SINGLE(xname, xindex, reg, shift, mask, invert) \
static int snd_es1688_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es1688_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es1688_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define ES1688_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
static int snd_es1688_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es1688_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es1688_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_es1688_controls[] = ;
#define ES1688_INIT_TABLE_SIZE (sizeof(snd_es1688_init_table)/2)
static unsigned char snd_es1688_init_table[][2] = ;
int snd_es1688_mixer(struct snd_card *card, struct snd_es1688 *chip)
EXPORT_SYMBOL(snd_es1688_mixer_write);
EXPORT_SYMBOL(snd_es1688_create);
EXPORT_SYMBOL(snd_es1688_pcm);
EXPORT_SYMBOL(snd_es1688_mixer);
static int __init alsa_es1688_init(void)
static void __exit alsa_es1688_exit(void)
module_init(alsa_es1688_init)
module_exit(alsa_es1688_exit)
