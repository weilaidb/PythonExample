#define SET_CHANNEL 0
#define PCM_FRONT_CHANNEL 0
#define PCM_REAR_CHANNEL 1
#define PCM_CENTER_LFE_CHANNEL 2
#define PCM_SIDE_CHANNEL 3
#define CONTROL_FRONT_CHANNEL 0
#define CONTROL_REAR_CHANNEL 3
#define CONTROL_CENTER_LFE_CHANNEL 1
#define CONTROL_SIDE_CHANNEL 2
static struct snd_pcm_hardware snd_p16v_playback_hw = ;
static struct snd_pcm_hardware snd_p16v_capture_hw = ;
static void snd_p16v_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int snd_p16v_pcm_open_playback_channel(struct snd_pcm_substream *substream, int channel_id)
static int snd_p16v_pcm_open_capture_channel(struct snd_pcm_substream *substream, int channel_id)
static int snd_p16v_pcm_close_playback(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_close_capture(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_open_playback_front(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_open_capture(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_hw_params_playback(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_p16v_pcm_hw_params_capture(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_p16v_pcm_hw_free_playback(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_hw_free_capture(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_prepare_playback(struct snd_pcm_substream *substream)
static int snd_p16v_pcm_prepare_capture(struct snd_pcm_substream *substream)
static void snd_p16v_intr_enable(struct snd_emu10k1 *emu, unsigned int intrenb)
static void snd_p16v_intr_disable(struct snd_emu10k1 *emu, unsigned int intrenb)
static int snd_p16v_pcm_trigger_playback(struct snd_pcm_substream *substream,
int cmd)
static int snd_p16v_pcm_trigger_capture(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_p16v_pcm_pointer_playback(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_p16v_pcm_pointer_capture(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_p16v_playback_front_ops = ;
static struct snd_pcm_ops snd_p16v_capture_ops = ;
int snd_p16v_free(struct snd_emu10k1 *chip)
int __devinit snd_p16v_pcm(struct snd_emu10k1 *emu, int device, struct snd_pcm **rpcm)
static int snd_p16v_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_p16v_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_p16v_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_p16v_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_p16v_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_p16v_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_p16v_capture_channel_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_p16v_capture_channel_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_p16v_capture_channel_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(snd_p16v_db_scale1, -5175, 25, 1);
#define P16V_VOL(xname,xreg,xhl)
static struct snd_kcontrol_new p16v_mixer_controls[] __devinitdata = ;
int __devinit snd_p16v_mixer(struct snd_emu10k1 *emu)
#define NUM_CHS	1
int __devinit snd_p16v_alloc_pm_buffer(struct snd_emu10k1 *emu)
void snd_p16v_free_pm_buffer(struct snd_emu10k1 *emu)
void snd_p16v_suspend(struct snd_emu10k1 *emu)
void snd_p16v_resume(struct snd_emu10k1 *emu)
