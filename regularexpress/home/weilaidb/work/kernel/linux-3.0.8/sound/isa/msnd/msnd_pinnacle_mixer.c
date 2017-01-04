#define MSND_MIXER_VOLUME	0
#define MSND_MIXER_PCM		1
#define MSND_MIXER_AUX		2
#define MSND_MIXER_IMIX		3
#define MSND_MIXER_SYNTH	4
#define MSND_MIXER_SPEAKER	5
#define MSND_MIXER_LINE		6
#define MSND_MIXER_MIC		7
#define MSND_MIXER_RECLEV	11
#define MSND_MIXER_IGAIN	12
#define MSND_MIXER_OGAIN	13
#define MSND_MIXER_DIGITAL	17
#define MSND_MASK_VOLUME	(1 << MSND_MIXER_VOLUME)
#define MSND_MASK_SYNTH		(1 << MSND_MIXER_SYNTH)
#define MSND_MASK_PCM		(1 << MSND_MIXER_PCM)
#define MSND_MASK_SPEAKER	(1 << MSND_MIXER_SPEAKER)
#define MSND_MASK_LINE		(1 << MSND_MIXER_LINE)
#define MSND_MASK_MIC		(1 << MSND_MIXER_MIC)
#define MSND_MASK_IMIX		(1 << MSND_MIXER_IMIX)
#define MSND_MASK_RECLEV	(1 << MSND_MIXER_RECLEV)
#define MSND_MASK_IGAIN		(1 << MSND_MIXER_IGAIN)
#define MSND_MASK_OGAIN		(1 << MSND_MIXER_OGAIN)
#define MSND_MASK_AUX		(1 << MSND_MIXER_AUX)
#define MSND_MASK_DIGITAL	(1 << MSND_MIXER_DIGITAL)
static int snd_msndmix_info_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_msndmix_get_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_msndmix_set_mux(struct snd_msnd *chip, int val)
static int snd_msndmix_put_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_msndmix_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_msndmix_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define update_volm(a, b)						\
do  while (0);
#define update_potm(d, s, ar)						\
do  while (0);
#define update_pot(d, s, ar)						\
do  while (0);
static int snd_msndmix_set(struct snd_msnd *dev, int d, int left, int right)
static int snd_msndmix_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define DUMMY_VOLUME(xname, xindex, addr) \
static struct snd_kcontrol_new snd_msnd_controls[] = ;
int __devinit snd_msndmix_new(struct snd_card *card)
EXPORT_SYMBOL(snd_msndmix_new);
void snd_msndmix_setup(struct snd_msnd *dev)
EXPORT_SYMBOL(snd_msndmix_setup);
int snd_msndmix_force_recsrc(struct snd_msnd *dev, int recsrc)
EXPORT_SYMBOL(snd_msndmix_force_recsrc);
