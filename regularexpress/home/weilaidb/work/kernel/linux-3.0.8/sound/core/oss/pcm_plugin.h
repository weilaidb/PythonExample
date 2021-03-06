#define __PCM_PLUGIN_H
#define snd_pcm_plug_stream(plug) ((plug)->stream)
enum snd_pcm_plugin_action ;
struct snd_pcm_channel_area ;
struct snd_pcm_plugin_channel ;
struct snd_pcm_plugin_format ;
struct snd_pcm_plugin ;
int snd_pcm_plugin_build(struct snd_pcm_substream *handle,
const char *name,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
size_t extra,
struct snd_pcm_plugin **ret);
int snd_pcm_plugin_free(struct snd_pcm_plugin *plugin);
int snd_pcm_plugin_clear(struct snd_pcm_plugin **first);
int snd_pcm_plug_alloc(struct snd_pcm_substream *plug, snd_pcm_uframes_t frames);
snd_pcm_sframes_t snd_pcm_plug_client_size(struct snd_pcm_substream *handle, snd_pcm_uframes_t drv_size);
snd_pcm_sframes_t snd_pcm_plug_slave_size(struct snd_pcm_substream *handle, snd_pcm_uframes_t clt_size);
#define FULL ROUTE_PLUGIN_RESOLUTION
#define HALF ROUTE_PLUGIN_RESOLUTION / 2
int snd_pcm_plugin_build_io(struct snd_pcm_substream *handle,
struct snd_pcm_hw_params *params,
struct snd_pcm_plugin **r_plugin);
int snd_pcm_plugin_build_linear(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin);
int snd_pcm_plugin_build_mulaw(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin);
int snd_pcm_plugin_build_rate(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin);
int snd_pcm_plugin_build_route(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin);
int snd_pcm_plugin_build_copy(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin);
int snd_pcm_plug_format_plugins(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_pcm_hw_params *slave_params);
snd_pcm_format_t snd_pcm_plug_slave_format(snd_pcm_format_t format,
struct snd_mask *format_mask);
int snd_pcm_plugin_append(struct snd_pcm_plugin *plugin);
snd_pcm_sframes_t snd_pcm_plug_write_transfer(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_channel *src_channels,
snd_pcm_uframes_t size);
snd_pcm_sframes_t snd_pcm_plug_read_transfer(struct snd_pcm_substream *handle,
struct snd_pcm_plugin_channel *dst_channels_final,
snd_pcm_uframes_t size);
snd_pcm_sframes_t snd_pcm_plug_client_channels_buf(struct snd_pcm_substream *handle,
char *buf, snd_pcm_uframes_t count,
struct snd_pcm_plugin_channel **channels);
snd_pcm_sframes_t snd_pcm_plugin_client_channels(struct snd_pcm_plugin *plugin,
snd_pcm_uframes_t frames,
struct snd_pcm_plugin_channel **channels);
int snd_pcm_area_silence(const struct snd_pcm_channel_area *dst_channel,
size_t dst_offset,
size_t samples, snd_pcm_format_t format);
int snd_pcm_area_copy(const struct snd_pcm_channel_area *src_channel,
size_t src_offset,
const struct snd_pcm_channel_area *dst_channel,
size_t dst_offset,
size_t samples, snd_pcm_format_t format);
void *snd_pcm_plug_buf_alloc(struct snd_pcm_substream *plug, snd_pcm_uframes_t size);
void snd_pcm_plug_buf_unlock(struct snd_pcm_substream *plug, void *ptr);
snd_pcm_sframes_t snd_pcm_oss_write3(struct snd_pcm_substream *substream,
const char *ptr, snd_pcm_uframes_t size,
int in_kernel);
snd_pcm_sframes_t snd_pcm_oss_read3(struct snd_pcm_substream *substream,
char *ptr, snd_pcm_uframes_t size, int in_kernel);
snd_pcm_sframes_t snd_pcm_oss_writev3(struct snd_pcm_substream *substream,
void **bufs, snd_pcm_uframes_t frames,
int in_kernel);
snd_pcm_sframes_t snd_pcm_oss_readv3(struct snd_pcm_substream *substream,
void **bufs, snd_pcm_uframes_t frames,
int in_kernel);
static inline snd_pcm_sframes_t snd_pcm_plug_client_size(struct snd_pcm_substream *handle, snd_pcm_uframes_t drv_size)
static inline snd_pcm_sframes_t snd_pcm_plug_slave_size(struct snd_pcm_substream *handle, snd_pcm_uframes_t clt_size)
static inline int snd_pcm_plug_slave_format(int format, struct snd_mask *format_mask)
#define pdprintf(fmt, args...) printk(KERN_DEBUG "plugin: " fmt, ##args)
#define pdprintf(fmt, args...)
