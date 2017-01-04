#define snd_pcm_plug_first(plug) ((plug)->runtime->oss.plugin_first)
#define snd_pcm_plug_last(plug) ((plug)->runtime->oss.plugin_last)
static int rate_match(unsigned int src_rate, unsigned int dst_rate)
static int snd_pcm_plugin_alloc(struct snd_pcm_plugin *plugin, snd_pcm_uframes_t frames)
int snd_pcm_plug_alloc(struct snd_pcm_substream *plug, snd_pcm_uframes_t frames)
snd_pcm_sframes_t snd_pcm_plugin_client_channels(struct snd_pcm_plugin *plugin,
snd_pcm_uframes_t frames,
struct snd_pcm_plugin_channel **channels)
int snd_pcm_plugin_build(struct snd_pcm_substream *plug,
const char *name,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
size_t extra,
struct snd_pcm_plugin **ret)
int snd_pcm_plugin_free(struct snd_pcm_plugin *plugin)
snd_pcm_sframes_t snd_pcm_plug_client_size(struct snd_pcm_substream *plug, snd_pcm_uframes_t drv_frames)
snd_pcm_sframes_t snd_pcm_plug_slave_size(struct snd_pcm_substream *plug, snd_pcm_uframes_t clt_frames)
static int snd_pcm_plug_formats(struct snd_mask *mask, snd_pcm_format_t format)
static snd_pcm_format_t preferred_formats[] = ;
snd_pcm_format_t snd_pcm_plug_slave_format(snd_pcm_format_t format,
struct snd_mask *format_mask)
int snd_pcm_plug_format_plugins(struct snd_pcm_substream *plug,
struct snd_pcm_hw_params *params,
struct snd_pcm_hw_params *slave_params)
snd_pcm_sframes_t snd_pcm_plug_client_channels_buf(struct snd_pcm_substream *plug,
char *buf,
snd_pcm_uframes_t count,
struct snd_pcm_plugin_channel **channels)
snd_pcm_sframes_t snd_pcm_plug_write_transfer(struct snd_pcm_substream *plug, struct snd_pcm_plugin_channel *src_channels, snd_pcm_uframes_t size)
snd_pcm_sframes_t snd_pcm_plug_read_transfer(struct snd_pcm_substream *plug, struct snd_pcm_plugin_channel *dst_channels_final, snd_pcm_uframes_t size)
int snd_pcm_area_silence(const struct snd_pcm_channel_area *dst_area, size_t dst_offset,
size_t samples, snd_pcm_format_t format)
int snd_pcm_area_copy(const struct snd_pcm_channel_area *src_area, size_t src_offset,
const struct snd_pcm_channel_area *dst_area, size_t dst_offset,
size_t samples, snd_pcm_format_t format)
