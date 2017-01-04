struct snd_emu8k_pcm ;
#define LOOP_BLANK_SIZE		8
static int
emu8k_open_dram_for_pcm(struct snd_emu8000 *emu, int channels)
static void
snd_emu8000_write_wait(struct snd_emu8000 *emu, int can_schedule)
static void
emu8k_close_dram(struct snd_emu8000 *emu)
#define OFFSET_SAMPLERATE	1011119
#define SAMPLERATE_RATIO	4096
static int calc_rate_offset(int hz)
static struct snd_pcm_hardware emu8k_pcm_hw = ;
static inline int emu8k_get_curpos(struct snd_emu8k_pcm *rec, int ch)
static void emu8k_pcm_timer_func(unsigned long data)
static int emu8k_pcm_open(struct snd_pcm_substream *subs)
static int emu8k_pcm_close(struct snd_pcm_substream *subs)
static int calc_pitch_target(int pitch)
static void setup_voice(struct snd_emu8k_pcm *rec, int ch)
static void start_voice(struct snd_emu8k_pcm *rec, int ch)
static void stop_voice(struct snd_emu8k_pcm *rec, int ch)
static int emu8k_pcm_trigger(struct snd_pcm_substream *subs, int cmd)
#define CHECK_SCHEDULER() \
do  while (0)
static int emu8k_transfer_block(struct snd_emu8000 *emu, int offset, unsigned short *buf, int count)
static int emu8k_pcm_copy(struct snd_pcm_substream *subs,
int voice,
snd_pcm_uframes_t pos,
void *src,
snd_pcm_uframes_t count)
static int emu8k_silence_block(struct snd_emu8000 *emu, int offset, int count)
static int emu8k_pcm_silence(struct snd_pcm_substream *subs,
int voice,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int emu8k_pcm_copy(struct snd_pcm_substream *subs,
int voice,
snd_pcm_uframes_t pos,
void __user *src,
snd_pcm_uframes_t count)
static int emu8k_pcm_silence(struct snd_pcm_substream *subs,
int voice,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int emu8k_pcm_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw_params)
static int emu8k_pcm_hw_free(struct snd_pcm_substream *subs)
static int emu8k_pcm_prepare(struct snd_pcm_substream *subs)
static snd_pcm_uframes_t emu8k_pcm_pointer(struct snd_pcm_substream *subs)
static struct snd_pcm_ops emu8k_pcm_ops = ;
static void snd_emu8000_pcm_free(struct snd_pcm *pcm)
int snd_emu8000_pcm_new(struct snd_card *card, struct snd_emu8000 *emu, int index)
