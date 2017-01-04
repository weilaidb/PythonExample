MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Intel 82801AA,82901AB,i810,i820,i830,i840,i845,MX440; SiS 7012; Ali 5455");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int ac97_clock;
static char *ac97_quirk;
static int buggy_semaphore;
static int buggy_irq = -1;
static int xbox;
static int spdif_aclink = -1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for Intel i8x0 soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for Intel i8x0 soundcard.");
module_param(ac97_clock, int, 0444);
MODULE_PARM_DESC(ac97_clock, "AC'97 codec clock (0 = whitelist + auto-detect, 1 = force autodetect).");
module_param(ac97_quirk, charp, 0444);
MODULE_PARM_DESC(ac97_quirk, "AC'97 workaround for strange hardware.");
module_param(buggy_semaphore, bool, 0444);
MODULE_PARM_DESC(buggy_semaphore, "Enable workaround for hardwares with problematic codec semaphores.");
module_param(buggy_irq, bool, 0444);
MODULE_PARM_DESC(buggy_irq, "Enable workaround for buggy interrupts on some motherboards.");
module_param(xbox, bool, 0444);
MODULE_PARM_DESC(xbox, "Set to 1 for Xbox, if you have problems with the AC'97 codec detection.");
module_param(spdif_aclink, int, 0444);
MODULE_PARM_DESC(spdif_aclink, "S/PDIF over AC-link.");
static int enable;
module_param(enable, bool, 0444);
static int joystick;
module_param(joystick, int, 0444);
enum ;
#define ICHREG(x) ICH_REG_##x
#define DEFINE_REGSET(name,base) \
enum ;
DEFINE_REGSET(OFF, 0);
DEFINE_REGSET(PI, 0x00);
DEFINE_REGSET(PO, 0x10);
DEFINE_REGSET(MC, 0x20);
DEFINE_REGSET(MC2, 0x40);
DEFINE_REGSET(PI2, 0x50);
DEFINE_REGSET(SP, 0x60);
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
#define ICH_REG_GLOB_CNT		0x2c
#define   ICH_PCM_SPDIF_MASK	0xc0000000
#define   ICH_PCM_SPDIF_NONE	0x00000000
#define   ICH_PCM_SPDIF_78	0x40000000
#define   ICH_PCM_SPDIF_69	0x80000000
#define   ICH_PCM_SPDIF_1011	0xc0000000
#define   ICH_PCM_20BIT		0x00400000
#define   ICH_PCM_246_MASK	0x00300000
#define   ICH_PCM_8		0x00300000
#define   ICH_PCM_6		0x00200000
#define   ICH_PCM_4		0x00100000
#define   ICH_PCM_2		0x00000000
#define   ICH_SIS_PCM_246_MASK	0x000000c0
#define   ICH_SIS_PCM_6		0x00000080
#define   ICH_SIS_PCM_4		0x00000040
#define   ICH_SIS_PCM_2		0x00000000
#define   ICH_TRIE		0x00000040
#define   ICH_SRIE		0x00000020
#define   ICH_PRIE		0x00000010
#define   ICH_ACLINK		0x00000008
#define   ICH_AC97WARM		0x00000004
#define   ICH_AC97COLD		0x00000002
#define   ICH_GIE		0x00000001
#define ICH_REG_GLOB_STA		0x30
#define   ICH_TRI		0x20000000
#define   ICH_TCR		0x10000000
#define   ICH_BCS		0x08000000
#define   ICH_SPINT		0x04000000
#define   ICH_P2INT		0x02000000
#define   ICH_M2INT		0x01000000
#define   ICH_SAMPLE_CAP	0x00c00000
#define   ICH_SAMPLE_16_20	0x00400000
#define   ICH_MULTICHAN_CAP	0x00300000
#define   ICH_SIS_TRI		0x00080000
#define   ICH_SIS_TCR		0x00040000
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
#define ICH_REG_ACC_SEMA		0x34
#define   ICH_CAS		0x01
#define ICH_REG_SDM		0x80
#define   ICH_DI2L_MASK		0x000000c0
#define   ICH_DI2L_SHIFT	6
#define   ICH_DI1L_MASK		0x00000030
#define   ICH_DI1L_SHIFT	4
#define   ICH_SE		0x00000008
#define   ICH_LDI_MASK		0x00000003
#define ICH_MAX_FRAGS		32
DEFINE_REGSET(AL_PI, 0x40);
DEFINE_REGSET(AL_PO, 0x50);
DEFINE_REGSET(AL_MC, 0x60);
DEFINE_REGSET(AL_CDC_SPO, 0x70);
DEFINE_REGSET(AL_CENTER, 0x80);
DEFINE_REGSET(AL_LFE, 0x90);
DEFINE_REGSET(AL_CLR_SPI, 0xa0);
DEFINE_REGSET(AL_CLR_SPO, 0xb0);
DEFINE_REGSET(AL_I2S, 0xc0);
DEFINE_REGSET(AL_PI2, 0xd0);
DEFINE_REGSET(AL_MC2, 0xe0);
enum ;
#define ALI_CAS_SEM_BUSY	0x80000000
#define ALI_CPR_ADDR_SECONDARY	0x100
#define ALI_CPR_ADDR_READ	0x80
#define ALI_CSPSR_CODEC_READY	0x08
#define ALI_CSPSR_READ_OK	0x02
#define ALI_CSPSR_WRITE_OK	0x01
#define ALI_INT_MICIN2		(1<<26)
#define ALI_INT_PCMIN2		(1<<25)
#define ALI_INT_I2SIN		(1<<24)
#define ALI_INT_SPDIFOUT	(1<<23)
#define ALI_INT_SPDIFIN		(1<<22)
#define ALI_INT_LFEOUT		(1<<21)
#define ALI_INT_CENTEROUT	(1<<20)
#define ALI_INT_CODECSPDIFOUT	(1<<19)
#define ALI_INT_MICIN		(1<<18)
#define ALI_INT_PCMOUT		(1<<17)
#define ALI_INT_PCMIN		(1<<16)
#define ALI_INT_CPRAIS		(1<<7)
#define ALI_INT_SPRAIS		(1<<5)
#define ALI_INT_GPIO		(1<<1)
#define ALI_INT_MASK		(ALI_INT_SPDIFOUT|ALI_INT_CODECSPDIFOUT|\
ALI_INT_MICIN|ALI_INT_PCMOUT|ALI_INT_PCMIN)
#define ICH_ALI_SC_RESET	(1<<31)
#define ICH_ALI_SC_AC97_DBL	(1<<30)
#define ICH_ALI_SC_CODEC_SPDF	(3<<20)
#define ICH_ALI_SC_IN_BITS	(3<<18)
#define ICH_ALI_SC_OUT_BITS	(3<<16)
#define ICH_ALI_SC_6CH_CFG	(3<<14)
#define ICH_ALI_SC_PCM_4	(1<<8)
#define ICH_ALI_SC_PCM_6	(2<<8)
#define ICH_ALI_SC_PCM_246_MASK	(3<<8)
#define ICH_ALI_SS_SEC_ID	(3<<5)
#define ICH_ALI_SS_PRI_ID	(3<<3)
#define ICH_ALI_IF_AC97SP	(1<<21)
#define ICH_ALI_IF_MC		(1<<20)
#define ICH_ALI_IF_PI		(1<<19)
#define ICH_ALI_IF_MC2		(1<<18)
#define ICH_ALI_IF_PI2		(1<<17)
#define ICH_ALI_IF_LINE_SRC	(1<<15)
#define ICH_ALI_IF_MIC_SRC	(1<<14)
#define ICH_ALI_IF_SPDF_SRC	(3<<12)
#define ICH_ALI_IF_AC97_OUT	(3<<8)
#define ICH_ALI_IF_PO_SPDF	(1<<3)
#define ICH_ALI_IF_PO		(1<<1)
enum ;
enum ;
enum ;
#define get_ichdev(substream) (substream->runtime->private_data)
struct ichdev ;
struct intel8x0 ;
static DEFINE_PCI_DEVICE_TABLE(snd_intel8x0_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_intel8x0_ids);
static inline u8 igetbyte(struct intel8x0 *chip, u32 offset)
static inline u16 igetword(struct intel8x0 *chip, u32 offset)
static inline u32 igetdword(struct intel8x0 *chip, u32 offset)
static inline void iputbyte(struct intel8x0 *chip, u32 offset, u8 val)
static inline void iputword(struct intel8x0 *chip, u32 offset, u16 val)
static inline void iputdword(struct intel8x0 *chip, u32 offset, u32 val)
static inline u16 iagetword(struct intel8x0 *chip, u32 offset)
static inline void iaputword(struct intel8x0 *chip, u32 offset, u16 val)
static int snd_intel8x0_codec_semaphore(struct intel8x0 *chip, unsigned int codec)
static void snd_intel8x0_codec_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_intel8x0_codec_read(struct snd_ac97 *ac97,
unsigned short reg)
static void __devinit snd_intel8x0_codec_read_test(struct intel8x0 *chip,
unsigned int codec)
static int snd_intel8x0_ali_codec_ready(struct intel8x0 *chip, int mask)
static int snd_intel8x0_ali_codec_semaphore(struct intel8x0 *chip)
static unsigned short snd_intel8x0_ali_codec_read(struct snd_ac97 *ac97, unsigned short reg)
static void snd_intel8x0_ali_codec_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static void snd_intel8x0_setup_periods(struct intel8x0 *chip, struct ichdev *ichdev)
static void fill_nocache(void *buf, int size, int nocache)
#define fill_nocache(buf, size, nocache) do  while (0)
static inline void snd_intel8x0_update(struct intel8x0 *chip, struct ichdev *ichdev)
static irqreturn_t snd_intel8x0_interrupt(int irq, void *dev_id)
static int snd_intel8x0_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_intel8x0_ali_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_intel8x0_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_intel8x0_hw_free(struct snd_pcm_substream *substream)
static void snd_intel8x0_setup_pcm_out(struct intel8x0 *chip,
struct snd_pcm_runtime *runtime)
static int snd_intel8x0_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_intel8x0_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_intel8x0_stream =
;
static unsigned int channels4[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels4 = ;
static unsigned int channels6[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels6 = ;
static unsigned int channels8[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels8 = ;
static int snd_intel8x0_pcm_open(struct snd_pcm_substream *substream, struct ichdev *ichdev)
static int snd_intel8x0_playback_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_playback_close(struct snd_pcm_substream *substream)
static int snd_intel8x0_capture_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_capture_close(struct snd_pcm_substream *substream)
static int snd_intel8x0_mic_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_mic_close(struct snd_pcm_substream *substream)
static int snd_intel8x0_mic2_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_mic2_close(struct snd_pcm_substream *substream)
static int snd_intel8x0_capture2_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_capture2_close(struct snd_pcm_substream *substream)
static int snd_intel8x0_spdif_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_spdif_close(struct snd_pcm_substream *substream)
static int snd_intel8x0_ali_ac97spdifout_open(struct snd_pcm_substream *substream)
static int snd_intel8x0_ali_ac97spdifout_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_intel8x0_playback_ops = ;
static struct snd_pcm_ops snd_intel8x0_capture_ops = ;
static struct snd_pcm_ops snd_intel8x0_capture_mic_ops = ;
static struct snd_pcm_ops snd_intel8x0_capture_mic2_ops = ;
static struct snd_pcm_ops snd_intel8x0_capture2_ops = ;
static struct snd_pcm_ops snd_intel8x0_spdif_ops = ;
static struct snd_pcm_ops snd_intel8x0_ali_playback_ops = ;
static struct snd_pcm_ops snd_intel8x0_ali_capture_ops = ;
static struct snd_pcm_ops snd_intel8x0_ali_capture_mic_ops = ;
static struct snd_pcm_ops snd_intel8x0_ali_ac97spdifout_ops = ;
struct ich_pcm_table ;
static int __devinit snd_intel8x0_pcm1(struct intel8x0 *chip, int device,
struct ich_pcm_table *rec)
static struct ich_pcm_table intel_pcms[] __devinitdata = ;
static struct ich_pcm_table nforce_pcms[] __devinitdata = ;
static struct ich_pcm_table ali_pcms[] __devinitdata = ;
static int __devinit snd_intel8x0_pcm(struct intel8x0 *chip)
static void snd_intel8x0_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_intel8x0_mixer_free_ac97(struct snd_ac97 *ac97)
static struct ac97_pcm ac97_pcm_defs[] __devinitdata = ;
static struct ac97_quirk ac97_quirks[] __devinitdata = ;
static int __devinit snd_intel8x0_mixer(struct intel8x0 *chip, int ac97_clock,
const char *quirk_override)
static void do_ali_reset(struct intel8x0 *chip)
static struct snd_pci_quirk ich_chip_reset_mode[] = ;
static int snd_intel8x0_ich_chip_cold_reset(struct intel8x0 *chip)
#define snd_intel8x0_ich_chip_can_cold_reset(chip) \
(!snd_pci_quirk_lookup(chip->pci, ich_chip_reset_mode))
#define snd_intel8x0_ich_chip_cold_reset(chip)	0
#define snd_intel8x0_ich_chip_can_cold_reset(chip) (0)
static int snd_intel8x0_ich_chip_reset(struct intel8x0 *chip)
static int snd_intel8x0_ich_chip_init(struct intel8x0 *chip, int probing)
static int snd_intel8x0_ali_chip_init(struct intel8x0 *chip, int probing)
static int snd_intel8x0_chip_init(struct intel8x0 *chip, int probing)
static int snd_intel8x0_free(struct intel8x0 *chip)
static int intel8x0_suspend(struct pci_dev *pci, pm_message_t state)
static int intel8x0_resume(struct pci_dev *pci)
#define INTEL8X0_TESTBUF_SIZE	32768
static void __devinit intel8x0_measure_ac97_clock(struct intel8x0 *chip)
static struct snd_pci_quirk intel8x0_clock_list[] __devinitdata = ;
static int __devinit intel8x0_in_clock_list(struct intel8x0 *chip)
static void snd_intel8x0_proc_read(struct snd_info_entry * entry,
struct snd_info_buffer *buffer)
static void __devinit snd_intel8x0_proc_init(struct intel8x0 * chip)
#define snd_intel8x0_proc_init(x)
static int snd_intel8x0_dev_free(struct snd_device *device)
struct ich_reg_info ;
static unsigned int ich_codec_bits[3] = ;
static unsigned int sis_codec_bits[3] = ;
static int __devinit snd_intel8x0_create(struct snd_card *card,
struct pci_dev *pci,
unsigned long device_type,
struct intel8x0 ** r_intel8x0)
static struct shortname_table  shortnames[] __devinitdata = ;
static struct snd_pci_quirk spdif_aclink_defaults[] __devinitdata = ;
static int __devinit check_default_spdif_aclink(struct pci_dev *pci)
static int __devinit snd_intel8x0_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_intel8x0_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_intel8x0_init(void)
static void __exit alsa_card_intel8x0_exit(void)
module_init(alsa_card_intel8x0_init)
module_exit(alsa_card_intel8x0_exit)
