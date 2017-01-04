static int submit_audio_in_urb(struct snd_line6_pcm *line6pcm)
int line6_submit_audio_in_all_urbs(struct snd_line6_pcm *line6pcm)
void line6_unlink_audio_in_urbs(struct snd_line6_pcm *line6pcm)
static void wait_clear_audio_in_urbs(struct snd_line6_pcm *line6pcm)
void line6_unlink_wait_clear_audio_in_urbs(struct snd_line6_pcm *line6pcm)
void line6_capture_copy(struct snd_line6_pcm *line6pcm, char *fbuf, int fsize)
void line6_capture_check_period(struct snd_line6_pcm *line6pcm, int length)
static void audio_in_callback(struct urb *urb)
static int snd_line6_capture_open(struct snd_pcm_substream *substream)
static int snd_line6_capture_close(struct snd_pcm_substream *substream)
static int snd_line6_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_line6_capture_hw_free(struct snd_pcm_substream *substream)
int snd_line6_capture_trigger(struct snd_line6_pcm *line6pcm, int cmd)
static snd_pcm_uframes_t
snd_line6_capture_pointer(struct snd_pcm_substream *substream)
struct snd_pcm_ops snd_line6_capture_ops = ;
int line6_create_audio_in_urbs(struct snd_line6_pcm *line6pcm)
