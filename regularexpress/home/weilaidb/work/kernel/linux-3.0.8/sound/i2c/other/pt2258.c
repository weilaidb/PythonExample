MODULE_AUTHOR("Jochen Voss <voss@seehuhn.de>");
MODULE_DESCRIPTION("PT2258 volume controller (Princeton Technology Corp.)");
MODULE_LICENSE("GPL");
#define PT2258_CMD_RESET 0xc0
#define PT2258_CMD_UNMUTE 0xf8
#define PT2258_CMD_MUTE 0xf9
static const unsigned char pt2258_channel_code[12] = ;
int snd_pt2258_reset(struct snd_pt2258 *pt)
static int pt2258_stereo_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pt2258_stereo_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pt2258_stereo_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define pt2258_switch_info	snd_ctl_boolean_mono_info
static int pt2258_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pt2258_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(pt2258_db_scale, -7900, 100, 0);
int snd_pt2258_build_controls(struct snd_pt2258 *pt)
EXPORT_SYMBOL(snd_pt2258_reset);
EXPORT_SYMBOL(snd_pt2258_build_controls);
