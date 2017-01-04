#define GF1_SINGLE(xname, xindex, shift, invert) \
#define snd_gf1_info_single	snd_ctl_boolean_mono_info
static int snd_gf1_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_gf1_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define ICS_DOUBLE(xname, xindex, addr) \
static int snd_ics_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ics_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ics_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_gf1_controls[] = ;
static struct snd_kcontrol_new snd_ics_controls[] = ;
int snd_gf1_new_mixer(struct snd_gus_card * gus)
