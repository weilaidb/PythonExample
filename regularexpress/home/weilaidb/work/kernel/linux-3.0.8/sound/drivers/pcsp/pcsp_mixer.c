static int pcsp_enable_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcsp_enable_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcsp_enable_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcsp_treble_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcsp_treble_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcsp_treble_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcsp_pcspkr_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcsp_pcspkr_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcsp_pcspkr_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define PCSP_MIXER_CONTROL(ctl_type, ctl_name) \
static struct snd_kcontrol_new __devinitdata snd_pcsp_controls_pcm[] = ;
static struct snd_kcontrol_new __devinitdata snd_pcsp_controls_spkr[] = ;
static int __devinit snd_pcsp_ctls_add(struct snd_pcsp *chip,
struct snd_kcontrol_new *ctls, int num)
int __devinit snd_pcsp_new_mixer(struct snd_pcsp *chip, int nopcm)
