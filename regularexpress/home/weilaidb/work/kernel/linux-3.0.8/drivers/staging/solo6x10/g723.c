#define G723_INTR_ORDER		0
#define G723_FDMA_PAGES		32
#define G723_PERIOD_BYTES	48
#define G723_PERIOD_BLOCK	1024
#define G723_FRAMES_PER_PAGE	48
#define OUTMODE_MASK		0x300
#define SAMPLERATE		8000
#define BITRATE			25
#define MAX_BUFFER		(G723_PERIOD_BYTES * PERIODS_MAX)
#define IRQ_PAGES		4
#define PERIODS_MIN		(1 << IRQ_PAGES)
#define PERIODS_MAX		G723_FDMA_PAGES
struct solo_snd_pcm ;
static void solo_g723_config(struct solo_dev *solo_dev)
void solo_g723_isr(struct solo_dev *solo_dev)
static int snd_solo_hw_params(struct snd_pcm_substream *ss,
struct snd_pcm_hw_params *hw_params)
static int snd_solo_hw_free(struct snd_pcm_substream *ss)
static struct snd_pcm_hardware snd_solo_pcm_hw = ;
static int snd_solo_pcm_open(struct snd_pcm_substream *ss)
static int snd_solo_pcm_close(struct snd_pcm_substream *ss)
static int snd_solo_pcm_trigger(struct snd_pcm_substream *ss, int cmd)
static int snd_solo_pcm_prepare(struct snd_pcm_substream *ss)
static snd_pcm_uframes_t snd_solo_pcm_pointer(struct snd_pcm_substream *ss)
static int snd_solo_pcm_copy(struct snd_pcm_substream *ss, int channel,
snd_pcm_uframes_t pos, void __user *dst,
snd_pcm_uframes_t count)
static struct snd_pcm_ops snd_solo_pcm_ops = ;
static int snd_solo_capture_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *info)
static int snd_solo_capture_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_solo_capture_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new snd_solo_capture_volume = ;
static int solo_snd_pcm_init(struct solo_dev *solo_dev)
int solo_g723_init(struct solo_dev *solo_dev)
void solo_g723_exit(struct solo_dev *solo_dev)
