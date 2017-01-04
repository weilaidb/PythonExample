MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Intel 82801AA,82901AB,i810,i820,i830,i840,i845,MX440; "
"SiS 7013; NVidia MCP/2/2S/3 modems");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = -2;
static char *id = SNDRV_DEFAULT_STR1;
static int ac97_clock;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for Intel i8x0 modemcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for Intel i8x0 modemcard.");
module_param(ac97_clock, int, 0444);
MODULE_PARM_DESC(ac97_clock, "AC'97 codec clock (0 = auto-detect).");
static int enable;
module_param(enable, bool, 0444);
enum ;
#define ICHREG(x) ICH_REG_##x
#define DEFINE_REGSET(name,base) \
enum ;
DEFINE_REGSET(OFF, 0);
#define ICH_REG_LVI_MASK		0x1f
#define ICH_FIFOE			0x10
#define ICH_BCIS			0x08
#define ICH_LVBCI			0x04
#define ICH_CELV			0x02
#define ICH_DCH				0x01
#define ICH_REG_PIV_MASK		0x1f
#define ICH_IOCE			0x10
#define ICH_FEIE			0x08
#define ICH_LVBIE			0x04
#define ICH_RESETREGS			0x02
#define ICH_STARTBM			0x01
#define ICH_REG_GLOB_CNT		0x3c
#define   ICH_TRIE		0x00000040
#define   ICH_SRIE		0x00000020
#define   ICH_PRIE		0x00000010
#define   ICH_ACLINK		0x00000008
#define   ICH_AC97WARM		0x00000004
#define   ICH_AC97COLD		0x00000002
#define   ICH_GIE		0x00000001
#define ICH_REG_GLOB_STA		0x40
#define   ICH_TRI		0x20000000
#define   ICH_TCR		0x10000000
#define   ICH_BCS		0x08000000
#define   ICH_SPINT		0x04000000
#define   ICH_P2INT		0x02000000
#define   ICH_M2INT		0x01000000
#define   ICH_SAMPLE_CAP	0x00c00000
#define   ICH_MULTICHAN_CAP	0x00300000
#define   ICH_MD3		0x00020000
#define   ICH_AD3		0x00010000
#define   ICH_RCS		0x00008000
#define   ICH_BIT3		0x00004000
#define   ICH_BIT2		0x00002000
#define   ICH_BIT1		0x00001000
#define   ICH_SRI		0x00000800
#define   ICH_PRI		0x00000400
#define   ICH_SCR		0x00000200
#define   ICH_PCR		0x00000100
#define   ICH_MCINT		0x00000080
#define   ICH_POINT		0x00000040
#define   ICH_PIINT		0x00000020
#define   ICH_NVSPINT		0x00000010
#define   ICH_MOINT		0x00000004
#define   ICH_MIINT		0x00000002
#define   ICH_GSCI		0x00000001
#define ICH_REG_ACC_SEMA		0x44
#define   ICH_CAS		0x01
#define ICH_MAX_FRAGS		32
enum ;
enum ;
#define get_ichdev(substream) (substream->runtime->private_data)
struct ichdev ;
struct intel8x0m ;
static DEFINE_PCI_DEVICE_TABLE(snd_intel8x0m_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_intel8x0m_ids);
static inline u8 igetbyte(struct intel8x0m *chip, u32 offset)
static inline u16 igetword(struct intel8x0m *chip, u32 offset)
static inline u32 igetdword(struct intel8x0m *chip, u32 offset)
static inline void iputbyte(struct intel8x0m *chip, u32 offset, u8 val)
static inline void iputword(struct intel8x0m *chip, u32 offset, u16 val)
static inline void iputdword(struct intel8x0m *chip, u32 offset, u32 val)
static inline u16 iagetword(struct intel8x0m *chip, u32 offset)
static inline void iaputword(struct intel8x0m *chip, u32 offset, u16 val)
static unsigned int get_ich_codec_bit(struct intel8x0m *chip, unsigned int codec)
static int snd_intel8x0m_codec_semaphore(struct intel8x0m *chip, unsigned int codec)
static void snd_intel8x0m_codec_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_intel8x0m_codec_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_intel8x0m_setup_periods(struct intel8x0m *chip, struct ichdev *ichdev)
static inline void snd_intel8x0m_update(struct intel8x0m *chip, struct ichdev *ichdev)
static irqreturn_t snd_intel8x0m_interrupt(int irq, void *dev_id)
static int snd_intel8x0m_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_intel8x0m_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_intel8x0m_hw_free(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_intel8x0m_pcm_pointer(struct snd_pcm_substream *substream)
static int snd_intel8x0m_pcm_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_intel8x0m_stream =
;
static int snd_intel8x0m_pcm_open(struct snd_pcm_substream *substream, struct ichdev *ichdev)
static int snd_intel8x0m_playback_open(struct snd_pcm_substream *substream)
static int snd_intel8x0m_playback_close(struct snd_pcm_substream *substream)
static int snd_intel8x0m_capture_open(struct snd_pcm_substream *substream)
static int snd_intel8x0m_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_intel8x0m_playback_ops = ;
static struct snd_pcm_ops snd_intel8x0m_capture_ops = ;
struct ich_pcm_table ;
static int __devinit snd_intel8x0m_pcm1(struct intel8x0m *chip, int device,
struct ich_pcm_table *rec)
static struct ich_pcm_table intel_pcms[] __devinitdata = ;
static int __devinit snd_intel8x0m_pcm(struct intel8x0m *chip)
static void snd_intel8x0m_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_intel8x0m_mixer_free_ac97(struct snd_ac97 *ac97)
static int __devinit snd_intel8x0m_mixer(struct intel8x0m *chip, int ac97_clock)
static int snd_intel8x0m_ich_chip_init(struct intel8x0m *chip, int probing)
static int snd_intel8x0m_chip_init(struct intel8x0m *chip, int probing)
static int snd_intel8x0m_free(struct intel8x0m *chip)
static int intel8x0m_suspend(struct pci_dev *pci, pm_message_t state)
static int intel8x0m_resume(struct pci_dev *pci)
static void snd_intel8x0m_proc_read(struct snd_info_entry * entry,
struct snd_info_buffer *buffer)
static void __devinit snd_intel8x0m_proc_init(struct intel8x0m * chip)
#define snd_intel8x0m_proc_init(chip)
static int snd_intel8x0m_dev_free(struct snd_device *device)
struct ich_reg_info ;
static int __devinit snd_intel8x0m_create(struct snd_card *card,
struct pci_dev *pci,
unsigned long device_type,
struct intel8x0m **r_intel8x0m)
static struct shortname_table  shortnames[] __devinitdata = ;
static int __devinit snd_intel8x0m_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_intel8x0m_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_intel8x0m_init(void)
static void __exit alsa_card_intel8x0m_exit(void)
module_init(alsa_card_intel8x0m_init)
module_exit(alsa_card_intel8x0m_exit)
