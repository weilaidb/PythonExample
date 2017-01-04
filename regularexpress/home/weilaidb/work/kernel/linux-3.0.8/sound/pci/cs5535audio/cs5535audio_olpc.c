#define DRV_NAME "cs5535audio-olpc"
void olpc_analog_input(struct snd_ac97 *ac97, int on)
void olpc_mic_bias(struct snd_ac97 *ac97, int on)
static int olpc_dc_info(struct snd_kcontrol *kctl,
struct snd_ctl_elem_info *uinfo)
static int olpc_dc_get(struct snd_kcontrol *kctl, struct snd_ctl_elem_value *v)
static int olpc_dc_put(struct snd_kcontrol *kctl, struct snd_ctl_elem_value *v)
static int olpc_mic_info(struct snd_kcontrol *kctl,
struct snd_ctl_elem_info *uinfo)
static int olpc_mic_get(struct snd_kcontrol *kctl, struct snd_ctl_elem_value *v)
static int olpc_mic_put(struct snd_kcontrol *kctl, struct snd_ctl_elem_value *v)
static struct snd_kcontrol_new olpc_cs5535audio_ctls[] __devinitdata = ;
void __devinit olpc_prequirks(struct snd_card *card,
struct snd_ac97_template *ac97)
int __devinit olpc_quirks(struct snd_card *card, struct snd_ac97 *ac97)
void __devexit olpc_quirks_cleanup(void)
