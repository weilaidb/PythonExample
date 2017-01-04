#define CARD_NAME "NeoMagic 256AV/ZX"
#define DRIVER_NAME "NM256"
MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("NeoMagic NM256AV/ZX");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int playback_bufsize = 16;
static int capture_bufsize = 16;
static int force_ac97;
static int buffer_top;
static int use_cache;
static int vaio_hack;
static int reset_workaround;
static int reset_workaround_2;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param(playback_bufsize, int, 0444);
MODULE_PARM_DESC(playback_bufsize, "DAC frame size in kB for " CARD_NAME " soundcard.");
module_param(capture_bufsize, int, 0444);
MODULE_PARM_DESC(capture_bufsize, "ADC frame size in kB for " CARD_NAME " soundcard.");
module_param(force_ac97, bool, 0444);
MODULE_PARM_DESC(force_ac97, "Force to use AC97 codec for " CARD_NAME " soundcard.");
module_param(buffer_top, int, 0444);
MODULE_PARM_DESC(buffer_top, "Set the top address of audio buffer for " CARD_NAME " soundcard.");
module_param(use_cache, bool, 0444);
MODULE_PARM_DESC(use_cache, "Enable the cache for coefficient table access.");
module_param(vaio_hack, bool, 0444);
MODULE_PARM_DESC(vaio_hack, "Enable workaround for Sony VAIO notebooks.");
module_param(reset_workaround, bool, 0444);
MODULE_PARM_DESC(reset_workaround, "Enable AC97 RESET workaround for some laptops.");
module_param(reset_workaround_2, bool, 0444);
MODULE_PARM_DESC(reset_workaround_2, "Enable extended AC97 RESET workaround for some other laptops.");
static int enable;
module_param(enable, bool, 0444);
#define NM_SIGNATURE 0x4e4d0000
#define NM_SIG_MASK 0xffff0000
#define NM_PORT2_SIZE 4096
#define NM_MIXER_OFFSET 0x600
#define NM_MAX_PLAYBACK_COEF_SIZE	0x5000
#define NM_MAX_RECORD_COEF_SIZE		0x1260
#define NM_INT_REG 0xa04
#define NM_PLAYBACK_INT 0x40
#define NM_RECORD_INT 0x100
#define NM_MISC_INT_1 0x4000
#define NM_MISC_INT_2 0x1
#define NM_ACK_INT(chip, X) snd_nm256_writew(chip, NM_INT_REG, (X) << 1)
#define NM_MIXER_STATUS_OFFSET 0xa04
#define NM_MIXER_READY_MASK 0x0800
#define NM_MIXER_PRESENCE 0xa06
#define NM_PRESENCE_MASK 0x0050
#define NM_PRESENCE_VALUE 0x0040
#define NM2_PLAYBACK_INT 0x10000
#define NM2_RECORD_INT 0x80000
#define NM2_MISC_INT_1 0x8
#define NM2_MISC_INT_2 0x2
#define NM2_ACK_INT(chip, X) snd_nm256_writel(chip, NM_INT_REG, (X))
#define NM2_MIXER_STATUS_OFFSET 0xa06
#define NM2_MIXER_READY_MASK 0x0800
#define NM_PLAYBACK_REG_OFFSET 0x0
#define NM_RECORD_REG_OFFSET 0x200
#define NM_RATE_REG_OFFSET 2
#define NM_RATE_STEREO 1
#define NM_RATE_BITS_16 2
#define NM_RATE_MASK 0xf0
#define NM_PLAYBACK_ENABLE_REG (NM_PLAYBACK_REG_OFFSET + 0x1)
#define NM_PLAYBACK_ENABLE_FLAG 1
#define NM_PLAYBACK_ONESHOT 2
#define NM_PLAYBACK_FREERUN 4
#define NM_AUDIO_MUTE_REG (NM_PLAYBACK_REG_OFFSET + 0x18)
#define NM_AUDIO_MUTE_LEFT 0x8000
#define NM_AUDIO_MUTE_RIGHT 0x0080
#define NM_RECORD_ENABLE_REG (NM_RECORD_REG_OFFSET + 0)
#define NM_RECORD_ENABLE_FLAG 1
#define NM_RECORD_FREERUN 2
#define NM_COEFF_START_OFFSET	0x1c
#define NM_COEFF_END_OFFSET	0x20
#define NM_RBUFFER_START (NM_RECORD_REG_OFFSET + 0x4)
#define NM_RBUFFER_END   (NM_RECORD_REG_OFFSET + 0x10)
#define NM_RBUFFER_WMARK (NM_RECORD_REG_OFFSET + 0xc)
#define NM_RBUFFER_CURRP (NM_RECORD_REG_OFFSET + 0x8)
#define NM_PBUFFER_START (NM_PLAYBACK_REG_OFFSET + 0x4)
#define NM_PBUFFER_END   (NM_PLAYBACK_REG_OFFSET + 0x14)
#define NM_PBUFFER_WMARK (NM_PLAYBACK_REG_OFFSET + 0xc)
#define NM_PBUFFER_CURRP (NM_PLAYBACK_REG_OFFSET + 0x8)
struct nm256_stream ;
struct nm256 ;
static DEFINE_PCI_DEVICE_TABLE(snd_nm256_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_nm256_ids);
static inline u8
snd_nm256_readb(struct nm256 *chip, int offset)
static inline u16
snd_nm256_readw(struct nm256 *chip, int offset)
static inline u32
snd_nm256_readl(struct nm256 *chip, int offset)
static inline void
snd_nm256_writeb(struct nm256 *chip, int offset, u8 val)
static inline void
snd_nm256_writew(struct nm256 *chip, int offset, u16 val)
static inline void
snd_nm256_writel(struct nm256 *chip, int offset, u32 val)
static inline void
snd_nm256_write_buffer(struct nm256 *chip, void *src, int offset, int size)
static u16
snd_nm256_get_start_offset(int which)
static void
snd_nm256_load_one_coefficient(struct nm256 *chip, int stream, u32 port, int which)
static void
snd_nm256_load_coefficient(struct nm256 *chip, int stream, int number)
static unsigned int samplerates[8] = ;
static struct snd_pcm_hw_constraint_list constraints_rates = ;
static int
snd_nm256_fixed_rate(unsigned int rate)
static void
snd_nm256_set_format(struct nm256 *chip, struct nm256_stream *s,
struct snd_pcm_substream *substream)
static int snd_nm256_acquire_irq(struct nm256 *chip)
static void snd_nm256_release_irq(struct nm256 *chip)
static void snd_nm256_pcm_mark(struct nm256 *chip, struct nm256_stream *s, int reg)
#define snd_nm256_playback_mark(chip, s) snd_nm256_pcm_mark(chip, s, NM_PBUFFER_WMARK)
#define snd_nm256_capture_mark(chip, s)  snd_nm256_pcm_mark(chip, s, NM_RBUFFER_WMARK)
static void
snd_nm256_playback_start(struct nm256 *chip, struct nm256_stream *s,
struct snd_pcm_substream *substream)
static void
snd_nm256_capture_start(struct nm256 *chip, struct nm256_stream *s,
struct snd_pcm_substream *substream)
static void
snd_nm256_playback_stop(struct nm256 *chip)
static void
snd_nm256_capture_stop(struct nm256 *chip)
static int
snd_nm256_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static int
snd_nm256_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_nm256_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_nm256_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_nm256_capture_pointer(struct snd_pcm_substream *substream)
static int
snd_nm256_playback_silence(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int
snd_nm256_playback_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *src,
snd_pcm_uframes_t count)
static int
snd_nm256_capture_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *dst,
snd_pcm_uframes_t count)
static void
snd_nm256_playback_update(struct nm256 *chip)
static void
snd_nm256_capture_update(struct nm256 *chip)
static struct snd_pcm_hardware snd_nm256_playback =
;
static struct snd_pcm_hardware snd_nm256_capture =
;
static int snd_nm256_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static void snd_nm256_setup_stream(struct nm256 *chip, struct nm256_stream *s,
struct snd_pcm_substream *substream,
struct snd_pcm_hardware *hw_ptr)
static int
snd_nm256_playback_open(struct snd_pcm_substream *substream)
static int
snd_nm256_capture_open(struct snd_pcm_substream *substream)
static int
snd_nm256_playback_close(struct snd_pcm_substream *substream)
static int
snd_nm256_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_nm256_playback_ops = ;
static struct snd_pcm_ops snd_nm256_capture_ops = ;
static int __devinit
snd_nm256_pcm(struct nm256 *chip, int device)
static void
snd_nm256_init_chip(struct nm256 *chip)
static irqreturn_t
snd_nm256_intr_check(struct nm256 *chip)
static irqreturn_t
snd_nm256_interrupt(int irq, void *dev_id)
static irqreturn_t
snd_nm256_interrupt_zx(int irq, void *dev_id)
static int
snd_nm256_ac97_ready(struct nm256 *chip)
struct initialValues ;
static struct initialValues nm256_ac97_init_val[] =
;
static int nm256_ac97_idx(unsigned short reg)
static unsigned short
snd_nm256_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static void
snd_nm256_ac97_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static struct snd_ac97_res_table nm256_res_table[] = ;
static void
snd_nm256_ac97_reset(struct snd_ac97 *ac97)
static int __devinit
snd_nm256_mixer(struct nm256 *chip)
static int __devinit
snd_nm256_peek_for_sig(struct nm256 *chip)
static int nm256_suspend(struct pci_dev *pci, pm_message_t state)
static int nm256_resume(struct pci_dev *pci)
static int snd_nm256_free(struct nm256 *chip)
static int snd_nm256_dev_free(struct snd_device *device)
static int __devinit
snd_nm256_create(struct snd_card *card, struct pci_dev *pci,
struct nm256 **chip_ret)
enum ;
static struct snd_pci_quirk nm256_quirks[] __devinitdata = ;
static int __devinit snd_nm256_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_nm256_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_nm256_init(void)
static void __exit alsa_card_nm256_exit(void)
module_init(alsa_card_nm256_init)
module_exit(alsa_card_nm256_exit)
