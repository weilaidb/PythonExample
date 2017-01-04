static int pdacf_pcm_clear_sram(struct snd_pdacf *chip)
static int pdacf_pcm_trigger(struct snd_pcm_substream *subs, int cmd)
static int pdacf_pcm_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw_params)
static int pdacf_pcm_hw_free(struct snd_pcm_substream *subs)
static int pdacf_pcm_prepare(struct snd_pcm_substream *subs)
static struct snd_pcm_hardware pdacf_pcm_capture_hw = ;
static int pdacf_pcm_capture_open(struct snd_pcm_substream *subs)
static int pdacf_pcm_capture_close(struct snd_pcm_substream *subs)
static snd_pcm_uframes_t pdacf_pcm_capture_pointer(struct snd_pcm_substream *subs)
static struct snd_pcm_ops pdacf_pcm_capture_ops = ;
int snd_pdacf_pcm_new(struct snd_pdacf *chip)
