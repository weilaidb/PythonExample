#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define HW_CH_BASE 4
#define HW_CH_0	"Hw1"
#define HW_CH_1	"Hw2"
#define HW_CH_2	"Hw3"
#define HW_CH_3	"Hw4"
static char *router_dmics[] = ;
static char *out_names_mrst[] = ;
static char *in_names_mrst[] = ;
static char *line_out_names_mfld[] = ;
static char *out_names_mfld[] = ;
static char *in_names_mfld[] = ;
struct snd_control_val intelmad_ctrl_val[MAX_VENDORS] = ;
static inline int snd_intelmad_volume_info(struct snd_ctl_elem_info *uinfo,
int control_type, int max, int min)
static int snd_intelmad_mute_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_intelmad_capture_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_intelmad_playback_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_intelmad_master_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_intelmad_device_info_mrst(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_intelmad_device_info_mfld(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_intelmad_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_volume_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_mute_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_device_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_device_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_device_dmic_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
void msic_set_bit(u8 index, unsigned int *available_dmics)
void msic_clear_bit(u8 index, unsigned int *available_dmics)
int msic_is_set_bit(u8 index, unsigned int *available_dmics)
static int snd_intelmad_device_dmic_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uval)
static int snd_intelmad_device_dmic_info_mfld(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
struct snd_kcontrol_new snd_intelmad_controls_mrst[MAX_CTRL] __devinitdata = ;
struct snd_kcontrol_new
snd_intelmad_controls_mfld[MAX_CTRL_MFLD] __devinitdata = ;
