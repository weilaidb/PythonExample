static void zero_areas(struct snd_pcm_plugin_channel *dvp, int ndsts,
snd_pcm_uframes_t frames, snd_pcm_format_t format)
static inline void copy_area(const struct snd_pcm_plugin_channel *src_channel,
struct snd_pcm_plugin_channel *dst_channel,
snd_pcm_uframes_t frames, snd_pcm_format_t format)
static snd_pcm_sframes_t route_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
int snd_pcm_plugin_build_route(struct snd_pcm_substream *plug,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin)
