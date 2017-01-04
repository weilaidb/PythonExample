struct pmac_beep ;
void snd_pmac_beep_stop(struct snd_pmac *chip)
static short beep_wform[256] = ;
#define BEEP_SRATE	22050
#define BEEP_BUFLEN	512
#define BEEP_VOLUME	15
static int snd_pmac_beep_event(struct input_dev *dev, unsigned int type,
unsigned int code, int hz)
static int snd_pmac_info_beep(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_get_beep(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_put_beep(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_pmac_beep_mixer = ;
int __devinit snd_pmac_attach_beep(struct snd_pmac *chip)
void snd_pmac_detach_beep(struct snd_pmac *chip)
