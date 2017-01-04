static snd_pcm_sframes_t copy_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
int snd_pcm_plugin_build_copy(struct snd_pcm_substream *plug,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin)
