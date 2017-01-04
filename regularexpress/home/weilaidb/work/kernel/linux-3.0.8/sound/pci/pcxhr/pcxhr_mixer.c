#define __NO_VERSION__
#define PCXHR_LINE_CAPTURE_LEVEL_MIN   0
#define PCXHR_LINE_CAPTURE_LEVEL_MAX   255
#define PCXHR_LINE_CAPTURE_ZERO_LEVEL  224
#define PCXHR_LINE_PLAYBACK_LEVEL_MIN  0
#define PCXHR_LINE_PLAYBACK_LEVEL_MAX  128
#define PCXHR_LINE_PLAYBACK_ZERO_LEVEL 104
static const DECLARE_TLV_DB_SCALE(db_scale_analog_capture, -11200, 50, 1550);
static const DECLARE_TLV_DB_SCALE(db_scale_analog_playback, -10400, 100, 2400);
static const DECLARE_TLV_DB_SCALE(db_scale_a_hr222_capture, -11150, 50, 1600);
static const DECLARE_TLV_DB_SCALE(db_scale_a_hr222_playback, -2550, 50, 2400);
static int pcxhr_update_analog_audio_level(struct snd_pcxhr *chip,
int is_capture, int channel)
static int pcxhr_analog_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcxhr_analog_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_analog_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_analog_level = ;
#define pcxhr_sw_info		snd_ctl_boolean_stereo_info
static int pcxhr_audio_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_audio_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_output_switch = ;
#define PCXHR_DIGITAL_LEVEL_MIN		0x000
#define PCXHR_DIGITAL_LEVEL_MAX		0x1ff
#define PCXHR_DIGITAL_ZERO_LEVEL	0x1b7
static const DECLARE_TLV_DB_SCALE(db_scale_digital, -10975, 25, 1800);
#define MORE_THAN_ONE_STREAM_LEVEL	0x000001
#define VALID_STREAM_PAN_LEVEL_MASK	0x800000
#define VALID_STREAM_LEVEL_MASK		0x400000
#define VALID_STREAM_LEVEL_1_MASK	0x200000
#define VALID_STREAM_LEVEL_2_MASK	0x100000
static int pcxhr_update_playback_stream_level(struct snd_pcxhr* chip, int idx)
#define AUDIO_IO_HAS_MUTE_LEVEL		0x400000
#define AUDIO_IO_HAS_MUTE_MONITOR_1	0x200000
#define VALID_AUDIO_IO_DIGITAL_LEVEL	0x000001
#define VALID_AUDIO_IO_MONITOR_LEVEL	0x000002
#define VALID_AUDIO_IO_MUTE_LEVEL	0x000004
#define VALID_AUDIO_IO_MUTE_MONITOR_1	0x000008
static int pcxhr_update_audio_pipe_level(struct snd_pcxhr *chip,
int capture, int channel)
static int pcxhr_digital_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcxhr_pcm_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_pcm_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_pcxhr_pcm_vol =
;
static int pcxhr_pcm_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_pcm_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_pcm_switch = ;
static int pcxhr_monitor_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_monitor_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_monitor_vol = ;
static int pcxhr_monitor_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_monitor_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_monitor_sw = ;
#define PCXHR_SOURCE_AUDIO01_UER	0x000100
#define PCXHR_SOURCE_AUDIO01_SYNC	0x000200
#define PCXHR_SOURCE_AUDIO23_UER	0x000400
#define PCXHR_SOURCE_AUDIO45_UER	0x001000
#define PCXHR_SOURCE_AUDIO67_UER	0x040000
static int pcxhr_set_audio_source(struct snd_pcxhr* chip)
static int pcxhr_audio_src_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcxhr_audio_src_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_audio_src_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_audio_src = ;
static int pcxhr_clock_type_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcxhr_clock_type_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_clock_type_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_clock_type = ;
static int pcxhr_clock_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcxhr_clock_rate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_clock_rate = ;
static int pcxhr_iec958_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int pcxhr_iec958_capture_byte(struct snd_pcxhr *chip,
int aes_idx, unsigned char *aes_bits)
static int pcxhr_iec958_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_iec958_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pcxhr_iec958_update_byte(struct snd_pcxhr *chip,
int aes_idx, unsigned char aes_bits)
static int pcxhr_iec958_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pcxhr_control_playback_iec958_mask = ;
static struct snd_kcontrol_new pcxhr_control_playback_iec958 = ;
static struct snd_kcontrol_new pcxhr_control_capture_iec958_mask = ;
static struct snd_kcontrol_new pcxhr_control_capture_iec958 = ;
static void pcxhr_init_audio_levels(struct snd_pcxhr *chip)
int pcxhr_create_mixer(struct pcxhr_mgr *mgr)
