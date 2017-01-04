static int nforce_wa;
module_param(nforce_wa, bool, 0444);
MODULE_PARM_DESC(nforce_wa, "Apply NForce chipset workaround "
"(expect bad sound)");
#define DMIX_WANTS_S16	1
static void pcsp_call_pcm_elapsed(unsigned long priv)
static DECLARE_TASKLET(pcsp_pcm_tasklet, pcsp_call_pcm_elapsed, 0);
static u64 pcsp_timer_update(struct snd_pcsp *chip)
static void pcsp_pointer_update(struct snd_pcsp *chip)
enum hrtimer_restart pcsp_do_timer(struct hrtimer *handle)
static int pcsp_start_playing(struct snd_pcsp *chip)
static void pcsp_stop_playing(struct snd_pcsp *chip)
void pcsp_sync_stop(struct snd_pcsp *chip)
static int snd_pcsp_playback_close(struct snd_pcm_substream *substream)
static int snd_pcsp_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_pcsp_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_pcsp_playback_prepare(struct snd_pcm_substream *substream)
static int snd_pcsp_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_pcsp_playback_pointer(struct snd_pcm_substream
*substream)
static struct snd_pcm_hardware snd_pcsp_playback = ;
static int snd_pcsp_playback_open(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_pcsp_playback_ops = ;
int __devinit snd_pcsp_new_pcm(struct snd_pcsp *chip)
