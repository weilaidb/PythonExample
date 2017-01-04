#define DACA_I2C_ADDR	0x4d
#define DACA_REG_SR	0x01
#define DACA_REG_AVOL	0x02
#define DACA_REG_GCFG	0x03
#define DACA_VOL_MAX	0x38
struct pmac_daca ;
static int daca_init_client(struct pmac_keywest *i2c)
static int daca_set_volume(struct pmac_daca *mix)
#define daca_info_deemphasis		snd_ctl_boolean_mono_info
static int daca_get_deemphasis(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int daca_put_deemphasis(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int daca_info_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int daca_get_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int daca_put_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define daca_info_amp	daca_info_deemphasis
static int daca_get_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int daca_put_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new daca_mixers[] = ;
static void daca_resume(struct snd_pmac *chip)
static void daca_cleanup(struct snd_pmac *chip)
int __devinit snd_pmac_daca_init(struct snd_pmac *chip)
