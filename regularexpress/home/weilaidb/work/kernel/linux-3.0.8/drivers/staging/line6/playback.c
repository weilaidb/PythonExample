static void change_volume(struct urb *urb_out, int volume[],
int bytes_per_frame)
static void create_impulse_test_signal(struct snd_line6_pcm *line6pcm,
struct urb *urb_out, int bytes_per_frame)
static void add_monitor_signal(struct urb *urb_out, unsigned char *signal,
int volume, int bytes_per_frame)
static int submit_audio_out_urb(struct snd_line6_pcm *line6pcm)
int line6_submit_audio_out_all_urbs(struct snd_line6_pcm *line6pcm)
void line6_unlink_audio_out_urbs(struct snd_line6_pcm *line6pcm)
static void wait_clear_audio_out_urbs(struct snd_line6_pcm *line6pcm)
void line6_unlink_wait_clear_audio_out_urbs(struct snd_line6_pcm *line6pcm)
static void audio_out_callback(struct urb *urb)
static int snd_line6_playback_open(struct snd_pcm_substream *substream)
static int snd_line6_playback_close(struct snd_pcm_substream *substream)
static int snd_line6_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_line6_playback_hw_free(struct snd_pcm_substream *substream)
int snd_line6_playback_trigger(struct snd_line6_pcm *line6pcm, int cmd)
static snd_pcm_uframes_t
snd_line6_playback_pointer(struct snd_pcm_substream *substream)
struct snd_pcm_ops snd_line6_playback_ops = ;
int line6_create_audio_out_urbs(struct snd_line6_pcm *line6pcm)
