static void snd_ak4531_proc_init(struct snd_card *card, struct snd_ak4531 *ak4531);
#define snd_ak4531_proc_init(card,ak)
#define AK4531_SINGLE(xname, xindex, reg, shift, mask, invert) \
#define AK4531_SINGLE_TLV(xname, xindex, reg, shift, mask, invert, xtlv)    \
static int snd_ak4531_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4531_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ak4531_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define AK4531_DOUBLE(xname, xindex, left_reg, right_reg, left_shift, right_shift, mask, invert) \
#define AK4531_DOUBLE_TLV(xname, xindex, left_reg, right_reg, left_shift, right_shift, mask, invert, xtlv) \
static int snd_ak4531_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4531_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ak4531_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define AK4531_INPUT_SW(xname, xindex, reg1, reg2, left_shift, right_shift) \
static int snd_ak4531_info_input_sw(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4531_get_input_sw(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ak4531_put_input_sw(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_master, -6200, 200, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_mono, -2800, 400, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_input, -5000, 200, 0);
static struct snd_kcontrol_new snd_ak4531_controls[] __devinitdata = ;
static int snd_ak4531_free(struct snd_ak4531 *ak4531)
static int snd_ak4531_dev_free(struct snd_device *device)
static u8 snd_ak4531_initial_map[0x19 + 1] = ;
int __devinit snd_ak4531_mixer(struct snd_card *card,
struct snd_ak4531 *_ak4531,
struct snd_ak4531 **rak4531)
void snd_ak4531_suspend(struct snd_ak4531 *ak4531)
void snd_ak4531_resume(struct snd_ak4531 *ak4531)
static void snd_ak4531_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit
snd_ak4531_proc_init(struct snd_card *card, struct snd_ak4531 *ak4531)
