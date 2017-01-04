MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Cirrus Logic CS4281");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int dual_codec[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for CS4281 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for CS4281 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable CS4281 soundcard.");
module_param_array(dual_codec, bool, NULL, 0444);
MODULE_PARM_DESC(dual_codec, "Secondary Codec ID (0 = disabled).");
#define CS4281_BA0_SIZE		0x1000
#define CS4281_BA1_SIZE		0x10000
#define BA0_HISR		0x0000
#define BA0_HISR_INTENA		(1<<31)
#define BA0_HISR_MIDI		(1<<22)
#define BA0_HISR_FIFOI		(1<<20)
#define BA0_HISR_DMAI		(1<<18)
#define BA0_HISR_FIFO(c)	(1<<(12+(c)))
#define BA0_HISR_DMA(c)		(1<<(8+(c)))
#define BA0_HISR_GPPI		(1<<5)
#define BA0_HISR_GPSI		(1<<4)
#define BA0_HISR_GP3I		(1<<3)
#define BA0_HISR_GP1I		(1<<2)
#define BA0_HISR_VUPI		(1<<1)
#define BA0_HISR_VDNI		(1<<0)
#define BA0_HICR		0x0008
#define BA0_HICR_CHGM		(1<<1)
#define BA0_HICR_IEV		(1<<0)
#define BA0_HICR_EOI		(3<<0)
#define BA0_HIMR		0x000c
#define BA0_IIER		0x0010
#define BA0_HDSR0		0x00f0
#define BA0_HDSR1		0x00f4
#define BA0_HDSR2		0x00f8
#define BA0_HDSR3		0x00fc
#define BA0_HDSR_CH1P		(1<<25)
#define BA0_HDSR_CH2P		(1<<24)
#define BA0_HDSR_DHTC		(1<<17)
#define BA0_HDSR_DTC		(1<<16)
#define BA0_HDSR_DRUN		(1<<15)
#define BA0_HDSR_RQ		(1<<7)
#define BA0_DCA0		0x0110
#define BA0_DCC0		0x0114
#define BA0_DBA0		0x0118
#define BA0_DBC0		0x011c
#define BA0_DCA1		0x0120
#define BA0_DCC1		0x0124
#define BA0_DBA1		0x0128
#define BA0_DBC1		0x012c
#define BA0_DCA2		0x0130
#define BA0_DCC2		0x0134
#define BA0_DBA2		0x0138
#define BA0_DBC2		0x013c
#define BA0_DCA3		0x0140
#define BA0_DCC3		0x0144
#define BA0_DBA3		0x0148
#define BA0_DBC3		0x014c
#define BA0_DMR0		0x0150
#define BA0_DCR0		0x0154
#define BA0_DMR1		0x0158
#define BA0_DCR1		0x015c
#define BA0_DMR2		0x0160
#define BA0_DCR2		0x0164
#define BA0_DMR3		0x0168
#define BA0_DCR3		0x016c
#define BA0_DMR_DMA		(1<<29)
#define BA0_DMR_POLL		(1<<28)
#define BA0_DMR_TBC		(1<<25)
#define BA0_DMR_CBC		(1<<24)
#define BA0_DMR_SWAPC		(1<<22)
#define BA0_DMR_SIZE20		(1<<20)
#define BA0_DMR_USIGN		(1<<19)
#define BA0_DMR_BEND		(1<<18)
#define BA0_DMR_MONO		(1<<17)
#define BA0_DMR_SIZE8		(1<<16)
#define BA0_DMR_TYPE_DEMAND	(0<<6)
#define BA0_DMR_TYPE_SINGLE	(1<<6)
#define BA0_DMR_TYPE_BLOCK	(2<<6)
#define BA0_DMR_TYPE_CASCADE	(3<<6)
#define BA0_DMR_DEC		(1<<5)
#define BA0_DMR_AUTO		(1<<4)
#define BA0_DMR_TR_VERIFY	(0<<2)
#define BA0_DMR_TR_WRITE	(1<<2)
#define BA0_DMR_TR_READ		(2<<2)
#define BA0_DCR_HTCIE		(1<<17)
#define BA0_DCR_TCIE		(1<<16)
#define BA0_DCR_MSK		(1<<0)
#define BA0_FCR0		0x0180
#define BA0_FCR1		0x0184
#define BA0_FCR2		0x0188
#define BA0_FCR3		0x018c
#define BA0_FCR_FEN		(1<<31)
#define BA0_FCR_DACZ		(1<<30)
#define BA0_FCR_PSH		(1<<29)
#define BA0_FCR_RS(x)		(((x)&0x1f)<<24)
#define BA0_FCR_LS(x)		(((x)&0x1f)<<16)
#define BA0_FCR_SZ(x)		(((x)&0x7f)<<8)
#define BA0_FCR_OF(x)		(((x)&0x7f)<<0)
#define BA0_FPDR0		0x0190
#define BA0_FPDR1		0x0194
#define BA0_FPDR2		0x0198
#define BA0_FPDR3		0x019c
#define BA0_FCHS		0x020c
#define BA0_FCHS_RCO(x)		(1<<(7+(((x)&3)<<3)))
#define BA0_FCHS_LCO(x)		(1<<(6+(((x)&3)<<3)))
#define BA0_FCHS_MRP(x)		(1<<(5+(((x)&3)<<3)))
#define BA0_FCHS_FE(x)		(1<<(4+(((x)&3)<<3)))
#define BA0_FCHS_FF(x)		(1<<(3+(((x)&3)<<3)))
#define BA0_FCHS_IOR(x)		(1<<(2+(((x)&3)<<3)))
#define BA0_FCHS_RCI(x)		(1<<(1+(((x)&3)<<3)))
#define BA0_FCHS_LCI(x)		(1<<(0+(((x)&3)<<3)))
#define BA0_FSIC0		0x0210
#define BA0_FSIC1		0x0214
#define BA0_FSIC2		0x0218
#define BA0_FSIC3		0x021c
#define BA0_FSIC_FIC(x)		(((x)&0x7f)<<24)
#define BA0_FSIC_FORIE		(1<<23)
#define BA0_FSIC_FURIE		(1<<22)
#define BA0_FSIC_FSCIE		(1<<16)
#define BA0_FSIC_FSC(x)		(((x)&0x7f)<<8)
#define BA0_FSIC_FOR		(1<<7)
#define BA0_FSIC_FUR		(1<<6)
#define BA0_FSIC_FSCR		(1<<0)
#define BA0_PMCS		0x0344
#define BA0_CWPR		0x03e0
#define BA0_EPPMC		0x03e4
#define BA0_EPPMC_FPDN		(1<<14)
#define BA0_GPIOR		0x03e8
#define BA0_SPMC		0x03ec
#define BA0_SPMC_GIPPEN		(1<<15)
#define BA0_SPMC_GISPEN		(1<<14)
#define BA0_SPMC_EESPD		(1<<9)
#define BA0_SPMC_ASDI2E		(1<<8)
#define BA0_SPMC_ASDO		(1<<7)
#define BA0_SPMC_WUP2		(1<<3)
#define BA0_SPMC_WUP1		(1<<2)
#define BA0_SPMC_ASYNC		(1<<1)
#define BA0_SPMC_RSTN		(1<<0)
#define BA0_CFLR		0x03f0
#define BA0_CFLR_DEFAULT	0x00000001
#define BA0_IISR		0x03f4
#define BA0_TMS			0x03f8
#define BA0_SSVID		0x03fc
#define BA0_CLKCR1		0x0400
#define BA0_CLKCR1_CLKON	(1<<25)
#define BA0_CLKCR1_DLLRDY	(1<<24)
#define BA0_CLKCR1_DLLOS	(1<<6)
#define BA0_CLKCR1_SWCE		(1<<5)
#define BA0_CLKCR1_DLLP		(1<<4)
#define BA0_CLKCR1_DLLSS	(((x)&3)<<3)
#define BA0_FRR			0x0410
#define BA0_SLT12O		0x041c
#define BA0_SERMC		0x0420
#define BA0_SERMC_FCRN		(1<<27)
#define BA0_SERMC_ODSEN2	(1<<25)
#define BA0_SERMC_ODSEN1	(1<<24)
#define BA0_SERMC_SXLB		(1<<21)
#define BA0_SERMC_SLB		(1<<20)
#define BA0_SERMC_LOVF		(1<<19)
#define BA0_SERMC_TCID(x)	(((x)&3)<<16)
#define BA0_SERMC_PXLB		(5<<1)
#define BA0_SERMC_PLB		(4<<1)
#define BA0_SERMC_PTC		(7<<1)
#define BA0_SERMC_PTC_AC97	(1<<1)
#define BA0_SERMC_MSPE		(1<<0)
#define BA0_SERC1		0x0428
#define BA0_SERC1_SO1F(x)	(((x)&7)>>1)
#define BA0_SERC1_AC97		(1<<1)
#define BA0_SERC1_SO1EN		(1<<0)
#define BA0_SERC2		0x042c
#define BA0_SERC2_SI1F(x)	(((x)&7)>>1)
#define BA0_SERC2_AC97		(1<<1)
#define BA0_SERC2_SI1EN		(1<<0)
#define BA0_SLT12M		0x045c
#define BA0_ACCTL		0x0460
#define BA0_ACCTL_TC		(1<<6)
#define BA0_ACCTL_CRW		(1<<4)
#define BA0_ACCTL_DCV		(1<<3)
#define BA0_ACCTL_VFRM		(1<<2)
#define BA0_ACCTL_ESYN		(1<<1)
#define BA0_ACSTS		0x0464
#define BA0_ACSTS_VSTS		(1<<1)
#define BA0_ACSTS_CRDY		(1<<0)
#define BA0_ACOSV		0x0468
#define BA0_ACOSV_SLV(x)	(1<<((x)-3))
#define BA0_ACCAD		0x046c
#define BA0_ACCDA		0x0470
#define BA0_ACISV		0x0474
#define BA0_ACISV_SLV(x)	(1<<((x)-3))
#define BA0_ACSAD		0x0478
#define BA0_ACSDA		0x047c
#define BA0_JSPT		0x0480
#define BA0_JSCTL		0x0484
#define BA0_JSC1		0x0488
#define BA0_JSC2		0x048c
#define BA0_JSIO		0x04a0
#define BA0_MIDCR		0x0490
#define BA0_MIDCR_MRST		(1<<5)
#define BA0_MIDCR_MLB		(1<<4)
#define BA0_MIDCR_TIE		(1<<3)
#define BA0_MIDCR_RIE		(1<<2)
#define BA0_MIDCR_RXE		(1<<1)
#define BA0_MIDCR_TXE		(1<<0)
#define BA0_MIDCMD		0x0494
#define BA0_MIDSR		0x0494
#define BA0_MIDSR_RDA		(1<<15)
#define BA0_MIDSR_TBE		(1<<14)
#define BA0_MIDSR_RBE		(1<<7)
#define BA0_MIDSR_TBF		(1<<6)
#define BA0_MIDWP		0x0498
#define BA0_MIDRP		0x049c
#define BA0_AODSD1		0x04a8
#define BA0_AODSD1_NDS(x)	(1<<((x)-3))
#define BA0_AODSD2		0x04ac
#define BA0_AODSD2_NDS(x)	(1<<((x)-3))
#define BA0_CFGI		0x04b0
#define BA0_SLT12M2		0x04dc
#define BA0_ACSTS2		0x04e4
#define BA0_ACISV2		0x04f4
#define BA0_ACSAD2		0x04f8
#define BA0_ACSDA2		0x04fc
#define BA0_FMSR		0x0730
#define BA0_B0AP		0x0730
#define BA0_FMDP		0x0734
#define BA0_B1AP		0x0738
#define BA0_B1DP		0x073c
#define BA0_SSPM		0x0740
#define BA0_SSPM_MIXEN		(1<<6)
#define BA0_SSPM_CSRCEN		(1<<5)
#define BA0_SSPM_PSRCEN		(1<<4)
#define BA0_SSPM_JSEN		(1<<3)
#define BA0_SSPM_ACLEN		(1<<2)
#define BA0_SSPM_FMEN		(1<<1)
#define BA0_DACSR		0x0744
#define BA0_ADCSR		0x0748
#define BA0_SSCR		0x074c
#define BA0_SSCR_HVS1		(1<<23)
#define BA0_SSCR_MVCS		(1<<19)
#define BA0_SSCR_MVLD		(1<<18)
#define BA0_SSCR_MVAD		(1<<17)
#define BA0_SSCR_MVMD		(1<<16)
#define BA0_SSCR_XLPSRC		(1<<8)
#define BA0_SSCR_LPSRC		(1<<7)
#define BA0_SSCR_CDTX		(1<<5)
#define BA0_SSCR_HVC		(1<<3)
#define BA0_FMLVC		0x0754
#define BA0_FMRVC		0x0758
#define BA0_SRCSA		0x075c
#define BA0_PPLVC		0x0760
#define BA0_PPRVC		0x0764
#define BA0_PASR		0x0768
#define BA0_CASR		0x076C
#define SRCSLOT_LEFT_PCM_PLAYBACK		0
#define SRCSLOT_RIGHT_PCM_PLAYBACK		1
#define SRCSLOT_PHONE_LINE_1_DAC		2
#define SRCSLOT_CENTER_PCM_PLAYBACK		3
#define SRCSLOT_LEFT_SURROUND_PCM_PLAYBACK	4
#define SRCSLOT_RIGHT_SURROUND_PCM_PLAYBACK	5
#define SRCSLOT_LFE_PCM_PLAYBACK		6
#define SRCSLOT_PHONE_LINE_2_DAC		7
#define SRCSLOT_HEADSET_DAC			8
#define SRCSLOT_LEFT_WT				29
#define SRCSLOT_RIGHT_WT			30
#define SRCSLOT_LEFT_PCM_RECORD			10
#define SRCSLOT_RIGHT_PCM_RECORD		11
#define SRCSLOT_PHONE_LINE_1_ADC		12
#define SRCSLOT_MIC_ADC				13
#define SRCSLOT_PHONE_LINE_2_ADC		17
#define SRCSLOT_HEADSET_ADC			18
#define SRCSLOT_SECONDARY_LEFT_PCM_RECORD	20
#define SRCSLOT_SECONDARY_RIGHT_PCM_RECORD	21
#define SRCSLOT_SECONDARY_PHONE_LINE_1_ADC	22
#define SRCSLOT_SECONDARY_MIC_ADC		23
#define SRCSLOT_SECONDARY_PHONE_LINE_2_ADC	27
#define SRCSLOT_SECONDARY_HEADSET_ADC		28
#define SRCSLOT_POWER_DOWN			31
#define CS4281_MODE_OUTPUT		(1<<0)
#define CS4281_MODE_INPUT		(1<<1)
#define JSPT_CAX                                0x00000001
#define JSPT_CAY                                0x00000002
#define JSPT_CBX                                0x00000004
#define JSPT_CBY                                0x00000008
#define JSPT_BA1                                0x00000010
#define JSPT_BA2                                0x00000020
#define JSPT_BB1                                0x00000040
#define JSPT_BB2                                0x00000080
#define JSCTL_SP_MASK                           0x00000003
#define JSCTL_SP_SLOW                           0x00000000
#define JSCTL_SP_MEDIUM_SLOW                    0x00000001
#define JSCTL_SP_MEDIUM_FAST                    0x00000002
#define JSCTL_SP_FAST                           0x00000003
#define JSCTL_ARE                               0x00000004
#define JSC1_Y1V_MASK                           0x0000FFFF
#define JSC1_X1V_MASK                           0xFFFF0000
#define JSC1_Y1V_SHIFT                          0
#define JSC1_X1V_SHIFT                          16
#define JSC2_Y2V_MASK                           0x0000FFFF
#define JSC2_X2V_MASK                           0xFFFF0000
#define JSC2_Y2V_SHIFT                          0
#define JSC2_X2V_SHIFT                          16
#define JSIO_DAX                                0x00000001
#define JSIO_DAY                                0x00000002
#define JSIO_DBX                                0x00000004
#define JSIO_DBY                                0x00000008
#define JSIO_AXOE                               0x00000010
#define JSIO_AYOE                               0x00000020
#define JSIO_BXOE                               0x00000040
#define JSIO_BYOE                               0x00000080
struct cs4281_dma ;
#define SUSPEND_REGISTERS	20
struct cs4281 ;
static irqreturn_t snd_cs4281_interrupt(int irq, void *dev_id);
static DEFINE_PCI_DEVICE_TABLE(snd_cs4281_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_cs4281_ids);
#define CS4281_FIFO_SIZE	32
static inline void snd_cs4281_pokeBA0(struct cs4281 *chip, unsigned long offset,
unsigned int val)
static inline unsigned int snd_cs4281_peekBA0(struct cs4281 *chip, unsigned long offset)
static void snd_cs4281_ac97_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static unsigned short snd_cs4281_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static int snd_cs4281_trigger(struct snd_pcm_substream *substream, int cmd)
static unsigned int snd_cs4281_rate(unsigned int rate, unsigned int *real_rate)
static void snd_cs4281_mode(struct cs4281 *chip, struct cs4281_dma *dma,
struct snd_pcm_runtime *runtime,
int capture, int src)
static int snd_cs4281_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cs4281_hw_free(struct snd_pcm_substream *substream)
static int snd_cs4281_playback_prepare(struct snd_pcm_substream *substream)
static int snd_cs4281_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_cs4281_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_cs4281_playback =
;
static struct snd_pcm_hardware snd_cs4281_capture =
;
static int snd_cs4281_playback_open(struct snd_pcm_substream *substream)
static int snd_cs4281_capture_open(struct snd_pcm_substream *substream)
static int snd_cs4281_playback_close(struct snd_pcm_substream *substream)
static int snd_cs4281_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_cs4281_playback_ops = ;
static struct snd_pcm_ops snd_cs4281_capture_ops = ;
static int __devinit snd_cs4281_pcm(struct cs4281 * chip, int device,
struct snd_pcm ** rpcm)
#define CS_VOL_MASK	0x1f
static int snd_cs4281_info_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs4281_get_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4281_put_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_dsp, -4650, 150, 0);
static struct snd_kcontrol_new snd_cs4281_fm_vol =
;
static struct snd_kcontrol_new snd_cs4281_pcm_vol =
;
static void snd_cs4281_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_cs4281_mixer_free_ac97(struct snd_ac97 *ac97)
static int __devinit snd_cs4281_mixer(struct cs4281 * chip)
static void snd_cs4281_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static ssize_t snd_cs4281_BA0_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static ssize_t snd_cs4281_BA1_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static struct snd_info_entry_ops snd_cs4281_proc_ops_BA0 = ;
static struct snd_info_entry_ops snd_cs4281_proc_ops_BA1 = ;
static void __devinit snd_cs4281_proc_init(struct cs4281 * chip)
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
static void snd_cs4281_gameport_trigger(struct gameport *gameport)
static unsigned char snd_cs4281_gameport_read(struct gameport *gameport)
static int snd_cs4281_gameport_cooked_read(struct gameport *gameport,
int *axes, int *buttons)
#define snd_cs4281_gameport_cooked_read	NULL
static int snd_cs4281_gameport_open(struct gameport *gameport, int mode)
static int __devinit snd_cs4281_create_gameport(struct cs4281 *chip)
static void snd_cs4281_free_gameport(struct cs4281 *chip)
static inline int snd_cs4281_create_gameport(struct cs4281 *chip)
static inline void snd_cs4281_free_gameport(struct cs4281 *chip)
static int snd_cs4281_free(struct cs4281 *chip)
static int snd_cs4281_dev_free(struct snd_device *device)
static int snd_cs4281_chip_init(struct cs4281 *chip);
static int __devinit snd_cs4281_create(struct snd_card *card,
struct pci_dev *pci,
struct cs4281 ** rchip,
int dual_codec)
static int snd_cs4281_chip_init(struct cs4281 *chip)
static void snd_cs4281_midi_reset(struct cs4281 *chip)
static int snd_cs4281_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_cs4281_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_cs4281_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_cs4281_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_cs4281_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_cs4281_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_cs4281_midi_output =
;
static struct snd_rawmidi_ops snd_cs4281_midi_input =
;
static int __devinit snd_cs4281_midi(struct cs4281 * chip, int device,
struct snd_rawmidi **rrawmidi)
static irqreturn_t snd_cs4281_interrupt(int irq, void *dev_id)
static void snd_cs4281_opl3_command(struct snd_opl3 *opl3, unsigned short cmd,
unsigned char val)
static int __devinit snd_cs4281_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_cs4281_remove(struct pci_dev *pci)
static int saved_regs[SUSPEND_REGISTERS] = ;
#define CLKCR1_CKRA                             0x00010000L
static int cs4281_suspend(struct pci_dev *pci, pm_message_t state)
static int cs4281_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_cs4281_init(void)
static void __exit alsa_card_cs4281_exit(void)
module_init(alsa_card_cs4281_init)
module_exit(alsa_card_cs4281_exit)
