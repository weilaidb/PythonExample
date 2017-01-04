#define SNDRV_GF1_PCM_RATE		48000
#define SNDRV_GF1_PCM_PFLG_NONE		0
#define SNDRV_GF1_PCM_PFLG_ACTIVE	(1<<0)
#define SNDRV_GF1_PCM_PFLG_NEUTRAL	(2<<0)
struct gus_pcm_private ;
static int snd_gf1_pcm_use_dma = 1;
static void snd_gf1_pcm_block_change_ack(struct snd_gus_card * gus, void *private_data)
static int snd_gf1_pcm_block_change(struct snd_pcm_substream *substream,
unsigned int offset,
unsigned int addr,
unsigned int count)
static void snd_gf1_pcm_trigger_up(struct snd_pcm_substream *substream)
static void snd_gf1_pcm_interrupt_wave(struct snd_gus_card * gus,
struct snd_gus_voice *pvoice)
static void snd_gf1_pcm_interrupt_volume(struct snd_gus_card * gus,
struct snd_gus_voice * pvoice)
static void snd_gf1_pcm_volume_change(struct snd_gus_card * gus)
static int snd_gf1_pcm_poke_block(struct snd_gus_card *gus, unsigned char *buf,
unsigned int pos, unsigned int count,
int w16, int invert)
static int snd_gf1_pcm_playback_copy(struct snd_pcm_substream *substream,
int voice,
snd_pcm_uframes_t pos,
void __user *src,
snd_pcm_uframes_t count)
static int snd_gf1_pcm_playback_silence(struct snd_pcm_substream *substream,
int voice,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int snd_gf1_pcm_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_gf1_pcm_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_playback_prepare(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_gf1_pcm_playback_pointer(struct snd_pcm_substream *substream)
static struct snd_ratnum clock = ;
static struct snd_pcm_hw_constraint_ratnums hw_constraints_clocks  = ;
static int snd_gf1_pcm_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_gf1_pcm_capture_hw_free(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_capture_prepare(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_gf1_pcm_capture_pointer(struct snd_pcm_substream *substream)
static void snd_gf1_pcm_interrupt_dma_read(struct snd_gus_card * gus)
static struct snd_pcm_hardware snd_gf1_pcm_playback =
;
static struct snd_pcm_hardware snd_gf1_pcm_capture =
;
static void snd_gf1_pcm_playback_free(struct snd_pcm_runtime *runtime)
static int snd_gf1_pcm_playback_open(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_playback_close(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_capture_open(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_capture_close(struct snd_pcm_substream *substream)
static int snd_gf1_pcm_volume_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_gf1_pcm_volume_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_gf1_pcm_volume_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_gf1_pcm_volume_control =
;
static struct snd_kcontrol_new snd_gf1_pcm_volume_control1 =
;
static struct snd_pcm_ops snd_gf1_pcm_playback_ops = ;
static struct snd_pcm_ops snd_gf1_pcm_capture_ops = ;
int snd_gf1_pcm_new(struct snd_gus_card * gus, int pcm_dev, int control_index, struct snd_pcm ** rpcm)
