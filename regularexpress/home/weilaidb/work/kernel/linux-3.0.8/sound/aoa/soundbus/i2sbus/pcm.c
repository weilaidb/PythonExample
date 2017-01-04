static inline void get_pcm_info(struct i2sbus_dev *i2sdev, int in,
struct pcm_info **pi, struct pcm_info **other)
static int clock_and_divisors(int mclk, int sclk, int rate, int *out)
#define CHECK_RATE(rate)						\
do  while (0)
static int i2sbus_pcm_open(struct i2sbus_dev *i2sdev, int in)
#undef CHECK_RATE
static int i2sbus_pcm_close(struct i2sbus_dev *i2sdev, int in)
static void i2sbus_wait_for_stop(struct i2sbus_dev *i2sdev,
struct pcm_info *pi)
void i2sbus_wait_for_stop_both(struct i2sbus_dev *i2sdev)
static int i2sbus_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static inline int i2sbus_hw_free(struct snd_pcm_substream *substream, int in)
static int i2sbus_playback_hw_free(struct snd_pcm_substream *substream)
static int i2sbus_record_hw_free(struct snd_pcm_substream *substream)
static int i2sbus_pcm_prepare(struct i2sbus_dev *i2sdev, int in)
void i2sbus_pcm_prepare_both(struct i2sbus_dev *i2sdev)
static int i2sbus_pcm_trigger(struct i2sbus_dev *i2sdev, int in, int cmd)
static snd_pcm_uframes_t i2sbus_pcm_pointer(struct i2sbus_dev *i2sdev, int in)
static inline void handle_interrupt(struct i2sbus_dev *i2sdev, int in)
irqreturn_t i2sbus_tx_intr(int irq, void *devid)
irqreturn_t i2sbus_rx_intr(int irq, void *devid)
static int i2sbus_playback_open(struct snd_pcm_substream *substream)
static int i2sbus_playback_close(struct snd_pcm_substream *substream)
static int i2sbus_playback_prepare(struct snd_pcm_substream *substream)
static int i2sbus_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t i2sbus_playback_pointer(struct snd_pcm_substream
*substream)
static struct snd_pcm_ops i2sbus_playback_ops = ;
static int i2sbus_record_open(struct snd_pcm_substream *substream)
static int i2sbus_record_close(struct snd_pcm_substream *substream)
static int i2sbus_record_prepare(struct snd_pcm_substream *substream)
static int i2sbus_record_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t i2sbus_record_pointer(struct snd_pcm_substream
*substream)
static struct snd_pcm_ops i2sbus_record_ops = ;
static void i2sbus_private_free(struct snd_pcm *pcm)
int
i2sbus_attach_codec(struct soundbus_dev *dev, struct snd_card *card,
struct codec_info *ci, void *data)
void i2sbus_detach_codec(struct soundbus_dev *dev, void *data)
