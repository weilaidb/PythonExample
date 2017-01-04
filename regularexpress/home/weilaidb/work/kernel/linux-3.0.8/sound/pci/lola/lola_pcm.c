#define LOLA_MAX_BDL_ENTRIES	8
#define LOLA_MAX_BUF_SIZE	(1024*1024*1024)
#define LOLA_BDL_ENTRY_SIZE	(16 * 16)
static struct lola_pcm *lola_get_pcm(struct snd_pcm_substream *substream)
static struct lola_stream *lola_get_stream(struct snd_pcm_substream *substream)
static unsigned int lola_get_lrc(struct lola *chip)
static unsigned int lola_get_tstamp(struct lola *chip, bool quick_no_sync)
static void lola_stream_clear_pending_irq(struct lola *chip,
struct lola_stream *str)
static void lola_stream_start(struct lola *chip, struct lola_stream *str,
unsigned int tstamp)
static void lola_stream_stop(struct lola *chip, struct lola_stream *str,
unsigned int tstamp)
static void wait_for_srst_clear(struct lola *chip, struct lola_stream *str)
static int lola_stream_wait_for_fifo(struct lola *chip,
struct lola_stream *str,
bool ready)
static int lola_sync_wait_for_fifo(struct lola *chip,
struct snd_pcm_substream *substream,
bool ready)
static void lola_sync_pause(struct lola *chip,
struct snd_pcm_substream *substream)
static void lola_stream_reset(struct lola *chip, struct lola_stream *str)
static struct snd_pcm_hardware lola_pcm_hw = ;
static int lola_pcm_open(struct snd_pcm_substream *substream)
static void lola_cleanup_slave_streams(struct lola_pcm *pcm,
struct lola_stream *str)
static int lola_pcm_close(struct snd_pcm_substream *substream)
static int lola_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int lola_pcm_hw_free(struct snd_pcm_substream *substream)
static int setup_bdle(struct snd_pcm_substream *substream,
struct lola_stream *str, u32 **bdlp,
int ofs, int size)
static int lola_setup_periods(struct lola *chip, struct lola_pcm *pcm,
struct snd_pcm_substream *substream,
struct lola_stream *str)
static unsigned int lola_get_format_verb(struct snd_pcm_substream *substream)
static int lola_set_stream_config(struct lola *chip,
struct lola_stream *str,
int channels)
static int lola_setup_controller(struct lola *chip, struct lola_pcm *pcm,
struct lola_stream *str)
static int lola_pcm_prepare(struct snd_pcm_substream *substream)
static int lola_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t lola_pcm_pointer(struct snd_pcm_substream *substream)
void lola_pcm_update(struct lola *chip, struct lola_pcm *pcm, unsigned int bits)
static struct snd_pcm_ops lola_pcm_ops = ;
int __devinit lola_create_pcm(struct lola *chip)
void lola_free_pcm(struct lola *chip)
static int lola_init_stream(struct lola *chip, struct lola_stream *str,
int idx, int nid, int dir)
int __devinit lola_init_pcm(struct lola *chip, int dir, int *nidp)
