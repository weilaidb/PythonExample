#define	SIGN_BIT	(0x80)
#define	QUANT_MASK	(0xf)
#define	NSEGS		(8)
#define	SEG_SHIFT	(4)
#define	SEG_MASK	(0x70)
static inline int val_seg(int val)
#define	BIAS		(0x84)
static unsigned char linear2ulaw(int pcm_val)
static int ulaw2linear(unsigned char u_val)
typedef void (*mulaw_f)(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames);
struct mulaw_priv ;
static inline void cvt_s16_to_native(struct mulaw_priv *data,
unsigned char *dst, u16 sample)
static void mulaw_decode(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static inline signed short cvt_native_to_s16(struct mulaw_priv *data,
unsigned char *src)
static void mulaw_encode(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t mulaw_transfer(struct snd_pcm_plugin *plugin,
const struct snd_pcm_plugin_channel *src_channels,
struct snd_pcm_plugin_channel *dst_channels,
snd_pcm_uframes_t frames)
static void init_data(struct mulaw_priv *data, snd_pcm_format_t format)
int snd_pcm_plugin_build_mulaw(struct snd_pcm_substream *plug,
struct snd_pcm_plugin_format *src_format,
struct snd_pcm_plugin_format *dst_format,
struct snd_pcm_plugin **r_plugin)
