#define __SOUND_PCM_INDIRECT_H
struct snd_pcm_indirect ;
typedef void (*snd_pcm_indirect_copy_t)(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes);
static inline void
snd_pcm_indirect_playback_transfer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec,
snd_pcm_indirect_copy_t copy)
static inline snd_pcm_uframes_t
snd_pcm_indirect_playback_pointer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, unsigned int ptr)
static inline void
snd_pcm_indirect_capture_transfer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec,
snd_pcm_indirect_copy_t copy)
static inline snd_pcm_uframes_t
snd_pcm_indirect_capture_pointer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, unsigned int ptr)
