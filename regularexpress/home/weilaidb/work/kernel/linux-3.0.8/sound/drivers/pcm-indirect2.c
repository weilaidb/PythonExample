void snd_pcm_indirect2_stat(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec)
static void
snd_pcm_indirect2_increase_min_periods(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
int isplay, int iscopy,
unsigned int bytes)
snd_pcm_uframes_t
snd_pcm_indirect2_pointer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec)
static void
snd_pcm_indirect2_playback_transfer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
snd_pcm_indirect2_copy_t copy,
snd_pcm_indirect2_zero_t zero)
void
snd_pcm_indirect2_playback_interrupt(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
snd_pcm_indirect2_copy_t copy,
snd_pcm_indirect2_zero_t zero)
static void
snd_pcm_indirect2_capture_transfer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
snd_pcm_indirect2_copy_t copy,
snd_pcm_indirect2_zero_t null)
void
snd_pcm_indirect2_capture_interrupt(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
snd_pcm_indirect2_copy_t copy,
snd_pcm_indirect2_zero_t null)
