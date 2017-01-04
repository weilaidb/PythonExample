void snd_pcm_timer_resolution_change(struct snd_pcm_substream *substream)
static unsigned long snd_pcm_timer_resolution(struct snd_timer * timer)
static int snd_pcm_timer_start(struct snd_timer * timer)
static int snd_pcm_timer_stop(struct snd_timer * timer)
static struct snd_timer_hardware snd_pcm_timer =
;
static void snd_pcm_timer_free(struct snd_timer *timer)
void snd_pcm_timer_init(struct snd_pcm_substream *substream)
void snd_pcm_timer_done(struct snd_pcm_substream *substream)
