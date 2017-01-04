enum CT_SUM_CTL ;
enum CT_AMIXER_CTL ;
enum CTALSA_MIXER_CTL ;
#define VOL_MIXER_START		MIXER_MASTER_P
#define VOL_MIXER_END		MIXER_SPDIFI_C
#define VOL_MIXER_NUM		(VOL_MIXER_END - VOL_MIXER_START + 1)
#define SWH_MIXER_START		MIXER_PCM_C_S
#define SWH_MIXER_END		MIXER_DIGITAL_IO_S
#define SWH_CAPTURE_START	MIXER_PCM_C_S
#define SWH_CAPTURE_END		MIXER_SPDIFI_C_S
#define CHN_NUM		2
struct ct_kcontrol_init ;
static struct ct_kcontrol_init
ct_kcontrol_init_table[NUM_CTALSA_MIXERS] = ;
static void
ct_mixer_recording_select(struct ct_mixer *mixer, enum CT_AMIXER_CTL type);
static void
ct_mixer_recording_unselect(struct ct_mixer *mixer, enum CT_AMIXER_CTL type);
static struct snd_kcontrol *kctls[2] = ;
static enum CT_AMIXER_CTL get_amixer_index(enum CTALSA_MIXER_CTL alsa_index)
static enum CT_AMIXER_CTL get_recording_amixer(enum CT_AMIXER_CTL index)
static unsigned char
get_switch_state(struct ct_mixer *mixer, enum CTALSA_MIXER_CTL type)
static void
set_switch_state(struct ct_mixer *mixer,
enum CTALSA_MIXER_CTL type, unsigned char state)
#define VOL_SCALE	0x1c
#define VOL_MAX		0x100
static const DECLARE_TLV_DB_SCALE(ct_vol_db_scale, -6400, 25, 1);
static int ct_alsa_mix_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ct_alsa_mix_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ct_alsa_mix_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vol_ctl = ;
static void
do_line_mic_switch(struct ct_atc *atc, enum CTALSA_MIXER_CTL type)
static void
do_digit_io_switch(struct ct_atc *atc, int state)
static void do_switch(struct ct_atc *atc, enum CTALSA_MIXER_CTL type, int state)
static int ct_alsa_mix_switch_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ct_alsa_mix_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ct_alsa_mix_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new swh_ctl = ;
static int ct_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ct_spdif_get_mask(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ct_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ct_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new iec958_mask_ctl = ;
static struct snd_kcontrol_new iec958_default_ctl = ;
static struct snd_kcontrol_new iec958_ctl = ;
#define NUM_IEC958_CTL 3
static int
ct_mixer_kcontrol_new(struct ct_mixer *mixer, struct snd_kcontrol_new *new)
static int ct_mixer_kcontrols_create(struct ct_mixer *mixer)
static void
ct_mixer_recording_select(struct ct_mixer *mixer, enum CT_AMIXER_CTL type)
static void
ct_mixer_recording_unselect(struct ct_mixer *mixer, enum CT_AMIXER_CTL type)
static int ct_mixer_get_resources(struct ct_mixer *mixer)
static int ct_mixer_get_mem(struct ct_mixer **rmixer)
static int ct_mixer_topology_build(struct ct_mixer *mixer)
static int mixer_set_input_port(struct amixer *amixer, struct rsc *rsc)
static enum CT_AMIXER_CTL port_to_amixer(enum MIXER_PORT_T type)
static int mixer_get_output_ports(struct ct_mixer *mixer,
enum MIXER_PORT_T type,
struct rsc **rleft, struct rsc **rright)
static int mixer_set_input_left(struct ct_mixer *mixer,
enum MIXER_PORT_T type, struct rsc *rsc)
static int
mixer_set_input_right(struct ct_mixer *mixer,
enum MIXER_PORT_T type, struct rsc *rsc)
static int mixer_resume(struct ct_mixer *mixer)
int ct_mixer_destroy(struct ct_mixer *mixer)
int ct_mixer_create(struct ct_atc *atc, struct ct_mixer **rmixer)
int ct_alsa_mix_create(struct ct_atc *atc,
enum CTALSADEVS device,
const char *device_name)
