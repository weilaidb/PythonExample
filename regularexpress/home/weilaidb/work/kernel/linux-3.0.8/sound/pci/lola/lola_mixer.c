static int __devinit lola_init_pin(struct lola *chip, struct lola_pin *pin,
int dir, int nid)
int __devinit lola_init_pins(struct lola *chip, int dir, int *nidp)
void lola_free_mixer(struct lola *chip)
int __devinit lola_init_mixer_widget(struct lola *chip, int nid)
static int lola_mixer_set_src_gain(struct lola *chip, unsigned int id,
unsigned short gain, bool on)
static int lola_mixer_set_mapping_gain(struct lola *chip,
unsigned int src, unsigned int dest,
unsigned short gain, bool on)
static int lola_mixer_set_dest_gains(struct lola *chip, unsigned int id,
unsigned int mask, unsigned short *gains)
static int set_analog_volume(struct lola *chip, int dir,
unsigned int idx, unsigned int val,
bool external_call);
int lola_setup_all_analog_gains(struct lola *chip, int dir, bool mute)
void lola_save_mixer(struct lola *chip)
void lola_restore_mixer(struct lola *chip)
static int set_analog_volume(struct lola *chip, int dir,
unsigned int idx, unsigned int val,
bool external_call)
int lola_set_src_config(struct lola *chip, unsigned int src_mask, bool update)
static int init_mixer_values(struct lola *chip)
static int lola_analog_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int lola_analog_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lola_analog_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lola_analog_vol_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *tlv)
static struct snd_kcontrol_new lola_analog_mixer __devinitdata = ;
static int __devinit create_analog_mixer(struct lola *chip, int dir, char *name)
static int lola_input_src_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int lola_input_src_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lola_input_src_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new lola_input_src_mixer __devinitdata = ;
static int __devinit create_input_src_mixer(struct lola *chip)
static int lola_src_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int lola_src_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lola_src_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(lola_src_gain_tlv, -8425, 25, 1);
static struct snd_kcontrol_new lola_src_gain_mixer __devinitdata = ;
static int __devinit create_src_gain_mixer(struct lola *chip,
int num, int ofs, char *name)
static int lola_dest_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int lola_dest_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lola_dest_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(lola_dest_gain_tlv, -8425, 25, 1);
static struct snd_kcontrol_new lola_dest_gain_mixer __devinitdata = ;
static int __devinit create_dest_gain_mixer(struct lola *chip,
int src_num, int src_ofs,
int num, int ofs, char *name)
int __devinit lola_create_mixer(struct lola *chip)
