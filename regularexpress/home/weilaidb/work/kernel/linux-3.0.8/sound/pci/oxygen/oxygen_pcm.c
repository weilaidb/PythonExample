#define BUFFER_BYTES_MAX		((1 << 16) * 4)
#define BUFFER_BYTES_MAX_MULTICH	((1 << 24) * 4)
#define PERIOD_BYTES_MIN		64
#define DEFAULT_BUFFER_BYTES		(BUFFER_BYTES_MAX / 2)
#define DEFAULT_BUFFER_BYTES_MULTICH	(1024 * 1024)
static const struct snd_pcm_hardware oxygen_stereo_hardware = ;
static const struct snd_pcm_hardware oxygen_multichannel_hardware = ;
static const struct snd_pcm_hardware oxygen_ac97_hardware = ;
static const struct snd_pcm_hardware *const oxygen_hardware[PCM_COUNT] = ;
static inline unsigned int
oxygen_substream_channel(struct snd_pcm_substream *substream)
static int oxygen_open(struct snd_pcm_substream *substream,
unsigned int channel)
static int oxygen_rec_a_open(struct snd_pcm_substream *substream)
static int oxygen_rec_b_open(struct snd_pcm_substream *substream)
static int oxygen_rec_c_open(struct snd_pcm_substream *substream)
static int oxygen_spdif_open(struct snd_pcm_substream *substream)
static int oxygen_multich_open(struct snd_pcm_substream *substream)
static int oxygen_ac97_open(struct snd_pcm_substream *substream)
static int oxygen_close(struct snd_pcm_substream *substream)
static unsigned int oxygen_format(struct snd_pcm_hw_params *hw_params)
static unsigned int oxygen_rate(struct snd_pcm_hw_params *hw_params)
static unsigned int oxygen_i2s_bits(struct snd_pcm_hw_params *hw_params)
static unsigned int oxygen_play_channels(struct snd_pcm_hw_params *hw_params)
static const unsigned int channel_base_registers[PCM_COUNT] = ;
static int oxygen_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static u16 get_mclk(struct oxygen *chip, unsigned int channel,
struct snd_pcm_hw_params *params)
static int oxygen_rec_a_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int oxygen_rec_b_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int oxygen_rec_c_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int oxygen_spdif_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int oxygen_multich_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int oxygen_hw_free(struct snd_pcm_substream *substream)
static int oxygen_spdif_hw_free(struct snd_pcm_substream *substream)
static int oxygen_prepare(struct snd_pcm_substream *substream)
static int oxygen_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t oxygen_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops oxygen_rec_a_ops = ;
static struct snd_pcm_ops oxygen_rec_b_ops = ;
static struct snd_pcm_ops oxygen_rec_c_ops = ;
static struct snd_pcm_ops oxygen_spdif_ops = ;
static struct snd_pcm_ops oxygen_multich_ops = ;
static struct snd_pcm_ops oxygen_ac97_ops = ;
static void oxygen_pcm_free(struct snd_pcm *pcm)
int oxygen_pcm_init(struct oxygen *chip)
