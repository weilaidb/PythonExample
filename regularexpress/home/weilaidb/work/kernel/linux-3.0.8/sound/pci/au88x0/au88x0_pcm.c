#define VORTEX_PCM_TYPE(x) (x->name[40])
static struct snd_pcm_hardware snd_vortex_playback_hw_adb = ;
static struct snd_pcm_hardware snd_vortex_playback_hw_a3d = ;
static struct snd_pcm_hardware snd_vortex_playback_hw_spdif = ;
static struct snd_pcm_hardware snd_vortex_playback_hw_wt = ;
static unsigned int au8830_channels[3] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_au8830_channels = ;
static int snd_vortex_pcm_open(struct snd_pcm_substream *substream)
static int snd_vortex_pcm_close(struct snd_pcm_substream *substream)
static int
snd_vortex_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_vortex_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_vortex_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_vortex_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_vortex_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_vortex_playback_ops = ;
static char *vortex_pcm_prettyname[VORTEX_PCM_LAST] = ;
static char *vortex_pcm_name[VORTEX_PCM_LAST] = ;
static int snd_vortex_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_vortex_spdif_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_vortex_spdif_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_vortex_spdif_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vortex_mixer_spdif[] __devinitdata = ;
static int __devinit snd_vortex_new_pcm(vortex_t *chip, int idx, int nr)
