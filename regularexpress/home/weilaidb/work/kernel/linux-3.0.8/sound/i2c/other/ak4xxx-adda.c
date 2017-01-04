MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("Routines for control of AK452x / AK43xx  AD/DA converters");
MODULE_LICENSE("GPL");
void snd_akm4xxx_write(struct snd_akm4xxx *ak, int chip, unsigned char reg,
unsigned char val)
EXPORT_SYMBOL(snd_akm4xxx_write);
static void ak4524_reset(struct snd_akm4xxx *ak, int state)
static void ak435X_reset(struct snd_akm4xxx *ak, int state)
static void ak4381_reset(struct snd_akm4xxx *ak, int state)
void snd_akm4xxx_reset(struct snd_akm4xxx *ak, int state)
EXPORT_SYMBOL(snd_akm4xxx_reset);
static const unsigned char vol_cvt_datt[128] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_vol_datt, -6350, 50, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_8bit, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_7bit, -6350, 50, 1);
static const DECLARE_TLV_DB_LINEAR(db_scale_linear, TLV_DB_GAIN_MUTE, 0);
void snd_akm4xxx_init(struct snd_akm4xxx *ak)
EXPORT_SYMBOL(snd_akm4xxx_init);
#define AK_IPGA 			(1<<20)
#define AK_VOL_CVT 			(1<<21)
#define AK_NEEDSMSB 			(1<<22)
#define AK_INVERT 			(1<<23)
#define AK_GET_CHIP(val)		(((val) >> 8) & 0xff)
#define AK_GET_ADDR(val)		((val) & 0xff)
#define AK_GET_SHIFT(val)		(((val) >> 16) & 0x0f)
#define AK_GET_VOL_CVT(val)		(((val) >> 21) & 1)
#define AK_GET_IPGA(val)		(((val) >> 20) & 1)
#define AK_GET_NEEDSMSB(val)		(((val) >> 22) & 1)
#define AK_GET_INVERT(val)		(((val) >> 23) & 1)
#define AK_GET_MASK(val)		(((val) >> 24) & 0xff)
#define AK_COMPOSE(chip,addr,shift,mask) \
(((chip) << 8) | (addr) | ((shift) << 16) | ((mask) << 24))
static int snd_akm4xxx_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_akm4xxx_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int put_ak_reg(struct snd_kcontrol *kcontrol, int addr,
unsigned char nval)
static int snd_akm4xxx_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_akm4xxx_stereo_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_akm4xxx_stereo_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_akm4xxx_stereo_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_akm4xxx_deemphasis_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_akm4xxx_deemphasis_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_akm4xxx_deemphasis_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ak4xxx_switch_info	snd_ctl_boolean_mono_info
static int ak4xxx_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ak4xxx_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define AK5365_NUM_INPUTS 5
static int ak4xxx_capture_num_inputs(struct snd_akm4xxx *ak, int mixer_ch)
static int ak4xxx_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ak4xxx_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ak4xxx_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int build_dac_controls(struct snd_akm4xxx *ak)
static int build_adc_controls(struct snd_akm4xxx *ak)
static int build_deemphasis(struct snd_akm4xxx *ak, int num_emphs)
static void proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int proc_init(struct snd_akm4xxx *ak)
static int proc_init(struct snd_akm4xxx *ak)
int snd_akm4xxx_build_controls(struct snd_akm4xxx *ak)
EXPORT_SYMBOL(snd_akm4xxx_build_controls);
static int __init alsa_akm4xxx_module_init(void)
static void __exit alsa_akm4xxx_module_exit(void)
module_init(alsa_akm4xxx_module_init)
module_exit(alsa_akm4xxx_module_exit)
