#define pcm_write(plug,buf,count) snd_pcm_oss_write3(plug,buf,count,1)
#define pcm_writev(plug,vec,count) snd_pcm_oss_writev3(plug,vec,count,1)
#define pcm_read(plug,buf,count) snd_pcm_oss_read3(plug,buf,count,1)
#define pcm_readv(plug,vec,count) snd_pcm_oss_readv3(plug,vec,count,1)
static snd_pcm_sframes_t io_playback_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t io_capture_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t io_src_channels(struct snd_pcm_plugin *plugin,
snd_pcm_uframes_t frames,
struct snd_pcm_plugin_channel **channels)
int snd_pcm_plugin_build_io(struct snd_pcm_substream *plug,
struct snd_pcm_hw_params *params,
struct snd_pcm_plugin **r_plugin)
