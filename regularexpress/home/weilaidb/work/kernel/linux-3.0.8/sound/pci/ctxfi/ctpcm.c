static struct snd_pcm_hardware ct_pcm_playback_hw = ;
static struct snd_pcm_hardware ct_spdif_passthru_playback_hw = ;
static struct snd_pcm_hardware ct_pcm_capture_hw = ;
static void ct_atc_pcm_interrupt(struct ct_atc_pcm *atc_pcm)
static void ct_atc_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int ct_pcm_playback_open(struct snd_pcm_substream *substream)
static int ct_pcm_playback_close(struct snd_pcm_substream *substream)
static int ct_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int ct_pcm_hw_free(struct snd_pcm_substream *substream)
static int ct_pcm_playback_prepare(struct snd_pcm_substream *substream)
static int
ct_pcm_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
ct_pcm_playback_pointer(struct snd_pcm_substream *substream)
static int ct_pcm_capture_open(struct snd_pcm_substream *substream)
static int ct_pcm_capture_close(struct snd_pcm_substream *substream)
static int ct_pcm_capture_prepare(struct snd_pcm_substream *substream)
static int
ct_pcm_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
ct_pcm_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops ct_pcm_playback_ops = ;
static struct snd_pcm_ops ct_pcm_capture_ops = ;
int ct_alsa_pcm_create(struct ct_atc *atc,
enum CTALSADEVS device,
const char *device_name)
