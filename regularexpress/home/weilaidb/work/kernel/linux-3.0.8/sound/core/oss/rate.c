#define SHIFT	11
#define BITS	(1<<SHIFT)
#define R_MASK	(BITS-1)
struct rate_channel ;
typedef void (*rate_f)(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
int src_frames, int dst_frames);
struct rate_priv ;
static void rate_init(struct snd_pcm_plugin *plugin)
static void resample_expand(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
int src_frames, int dst_frames)
static void resample_shrink(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
int src_frames, int dst_frames)
static snd_pcm_sframes_t rate_src_frames(struct snd_pcm_plugin *plugin, snd_pcm_uframes_t frames)
static snd_pcm_sframes_t rate_dst_frames(struct snd_pcm_plugin *plugin, snd_pcm_uframes_t frames)
static snd_pcm_sframes_t rate_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static int rate_action(struct snd_pcm_plugin *plugin,
enum snd_pcm_plugin_action action,
unsigned long udata)
int snd_pcm_plugin_build_rate(struct snd_pcm_substream *plug,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin)
