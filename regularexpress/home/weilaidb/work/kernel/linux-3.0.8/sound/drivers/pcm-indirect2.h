#define __SOUND_PCM_INDIRECT2_H
#define SND_PCM_INDIRECT2_STAT
struct snd_pcm_indirect2 ;
typedef size_t (*snd_pcm_indirect2_copy_t) (struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
size_t bytes);
typedef size_t (*snd_pcm_indirect2_zero_t) (struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec);
void snd_pcm_indirect2_stat(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec);
snd_pcm_uframes_t
snd_pcm_indirect2_pointer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec);
void
snd_pcm_indirect2_playback_interrupt(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
snd_pcm_indirect2_copy_t copy,
snd_pcm_indirect2_zero_t zero);
void
snd_pcm_indirect2_capture_interrupt(struct snd_pcm_substream *substream,
struct snd_pcm_indirect2 *rec,
snd_pcm_indirect2_copy_t copy,
snd_pcm_indirect2_zero_t null);
