struct linear_priv ;
static inline void do_convert(struct linear_priv *data,
unsigned char *dst, unsigned char *src)
static void convert(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t linear_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static void init_data(struct linear_priv *data,
snd_pcm_format_t src_format, snd_pcm_format_t dst_format)
int snd_pcm_plugin_build_linear(struct snd_pcm_substream *plug,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin)
