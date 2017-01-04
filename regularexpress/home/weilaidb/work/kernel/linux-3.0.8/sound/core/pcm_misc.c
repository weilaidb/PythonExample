#define SND_PCM_FORMAT_UNKNOWN (-1)
struct pcm_format_data ;
#define INT	__force int
static struct pcm_format_data pcm_formats[(INT)SNDRV_PCM_FORMAT_LAST+1] = ;
int snd_pcm_format_signed(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_signed);
int snd_pcm_format_unsigned(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_unsigned);
int snd_pcm_format_linear(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_linear);
int snd_pcm_format_little_endian(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_little_endian);
int snd_pcm_format_big_endian(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_big_endian);
int snd_pcm_format_width(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_width);
int snd_pcm_format_physical_width(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_physical_width);
ssize_t snd_pcm_format_size(snd_pcm_format_t format, size_t samples)
EXPORT_SYMBOL(snd_pcm_format_size);
const unsigned char *snd_pcm_format_silence_64(snd_pcm_format_t format)
EXPORT_SYMBOL(snd_pcm_format_silence_64);
int snd_pcm_format_set_silence(snd_pcm_format_t format, void *data, unsigned int samples)
EXPORT_SYMBOL(snd_pcm_format_set_silence);
int snd_pcm_limit_hw_rates(struct snd_pcm_runtime *runtime)
EXPORT_SYMBOL(snd_pcm_limit_hw_rates);
unsigned int snd_pcm_rate_to_rate_bit(unsigned int rate)
EXPORT_SYMBOL(snd_pcm_rate_to_rate_bit);
