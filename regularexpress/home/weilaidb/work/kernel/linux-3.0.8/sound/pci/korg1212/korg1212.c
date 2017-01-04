#define K1212_DEBUG_LEVEL		0
#if K1212_DEBUG_LEVEL > 0
#define K1212_DEBUG_PRINTK(fmt,args...)	printk(KERN_DEBUG fmt,##args)
#define K1212_DEBUG_PRINTK(fmt,...)
#if K1212_DEBUG_LEVEL > 1
#define K1212_DEBUG_PRINTK_VERBOSE(fmt,args...)	printk(KERN_DEBUG fmt,##args)
#define K1212_DEBUG_PRINTK_VERBOSE(fmt,...)
enum CardState ;
enum korg1212_dbcnst ;
enum snd_korg1212rc ;
enum PlayModeSelector ;
enum MonitorModeSelector ;
#define MAILBOX0_OFFSET      0x40
#define MAILBOX1_OFFSET      0x44
#define MAILBOX2_OFFSET      0x48
#define MAILBOX3_OFFSET      0x4c
#define OUT_DOORBELL_OFFSET  0x60
#define IN_DOORBELL_OFFSET   0x64
#define STATUS_REG_OFFSET    0x68
#define PCI_CONTROL_OFFSET   0x6c
#define SENS_CONTROL_OFFSET  0x6e
#define DEV_VEND_ID_OFFSET   0x70
#define MAX_COMMAND_RETRIES  5
#define COMMAND_ACK_MASK     0x8000
#define DOORBELL_VAL_MASK    0x00FF
#define CARD_BOOT_DELAY_IN_MS  10
#define CARD_BOOT_TIMEOUT      10
#define DSP_BOOT_DELAY_IN_MS   200
#define kNumBuffers		8
#define k1212MaxCards		4
#define k1212NumWaveDevices	6
#define k16BitChannels		10
#define k32BitChannels		2
#define kAudioChannels		(k16BitChannels + k32BitChannels)
#define kPlayBufferFrames	1024
#define K1212_ANALOG_CHANNELS	2
#define K1212_SPDIF_CHANNELS	2
#define K1212_ADAT_CHANNELS	8
#define K1212_CHANNELS		(K1212_ADAT_CHANNELS + K1212_ANALOG_CHANNELS)
#define K1212_MIN_CHANNELS	1
#define K1212_MAX_CHANNELS	K1212_CHANNELS
#define K1212_FRAME_SIZE        (sizeof(struct KorgAudioFrame))
#define K1212_MAX_SAMPLES	(kPlayBufferFrames*kNumBuffers)
#define K1212_PERIODS		(kNumBuffers)
#define K1212_PERIOD_BYTES	(K1212_FRAME_SIZE*kPlayBufferFrames)
#define K1212_BUF_SIZE          (K1212_PERIOD_BYTES*kNumBuffers)
#define K1212_ANALOG_BUF_SIZE	(K1212_ANALOG_CHANNELS * 2 * kPlayBufferFrames * kNumBuffers)
#define K1212_SPDIF_BUF_SIZE	(K1212_SPDIF_CHANNELS * 3 * kPlayBufferFrames * kNumBuffers)
#define K1212_ADAT_BUF_SIZE	(K1212_ADAT_CHANNELS * 2 * kPlayBufferFrames * kNumBuffers)
#define K1212_MAX_BUF_SIZE	(K1212_ANALOG_BUF_SIZE + K1212_ADAT_BUF_SIZE)
#define k1212MinADCSens     0x7f
#define k1212MaxADCSens     0x00
#define k1212MaxVolume      0x7fff
#define k1212MaxWaveVolume  0xffff
#define k1212MinVolume      0x0000
#define k1212MaxVolInverted 0x8000
#define  PCI_INT_ENABLE_BIT               0x00000100
#define  PCI_DOORBELL_INT_ENABLE_BIT      0x00000200
#define  LOCAL_INT_ENABLE_BIT             0x00010000
#define  LOCAL_DOORBELL_INT_ENABLE_BIT    0x00020000
#define  LOCAL_DMA1_INT_ENABLE_BIT        0x00080000
#define  PCI_CMD_MEM_SPACE_ENABLE_BIT     0x0002
#define  PCI_CMD_IO_SPACE_ENABLE_BIT      0x0001
#define  PCI_CMD_BUS_MASTER_ENABLE_BIT    0x0004
#define  PCI_STAT_PARITY_ERROR_BIT        0x8000
#define  PCI_STAT_SYSTEM_ERROR_BIT        0x4000
#define  PCI_STAT_MASTER_ABORT_RCVD_BIT   0x2000
#define  PCI_STAT_TARGET_ABORT_RCVD_BIT   0x1000
#define  PCI_STAT_TARGET_ABORT_SENT_BIT   0x0800
#define  SET_SENS_LOCALINIT_BITPOS        15
#define  SET_SENS_DATA_BITPOS             10
#define  SET_SENS_CLOCK_BITPOS            8
#define  SET_SENS_LOADSHIFT_BITPOS        0
#define  SET_SENS_LEFTCHANID              0x00
#define  SET_SENS_RIGHTCHANID             0x01
#define  K1212SENSUPDATE_DELAY_IN_MS      50
#define ONE_RTC_TICK         1
#define SENSCLKPULSE_WIDTH   4
#define LOADSHIFT_DELAY      4
#define INTERCOMMAND_DELAY  40
#define STOPCARD_DELAY      300
#define COMMAND_ACK_DELAY   13
enum ClockSourceIndex ;
enum ClockSourceType ;
struct KorgAudioFrame ;
struct KorgAudioBuffer ;
struct KorgSharedBuffer ;
struct SensBits ;
struct snd_korg1212 ;
MODULE_DESCRIPTION("korg1212");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_FIRMWARE("korg/k1212.dsp");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Korg 1212 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Korg 1212 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Korg 1212 soundcard.");
MODULE_AUTHOR("Haroldo Gamal <gamal@alternex.com.br>");
static DEFINE_PCI_DEVICE_TABLE(snd_korg1212_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_korg1212_ids);
static char *stateName[] = ;
static char *clockSourceTypeName[] = ;
static char *clockSourceName[] = ;
static char *channelName[] = ;
static u16 ClockSourceSelector[] = ;
union swap_u32 ;
static u32 LowerWordSwap(u32 swappee)
static u32 UpperWordSwap(u32 swappee)
static u32 UpperWordSwap(u32 swappee)
static u32 LowerWordSwap(u32 swappee)
#define SetBitInWord(theWord,bitPosition)       (*theWord) |= (0x0001 << bitPosition)
#define SetBitInDWord(theWord,bitPosition)      (*theWord) |= (0x00000001 << bitPosition)
#define ClearBitInWord(theWord,bitPosition)     (*theWord) &= ~(0x0001 << bitPosition)
#define ClearBitInDWord(theWord,bitPosition)    (*theWord) &= ~(0x00000001 << bitPosition)
static int snd_korg1212_Send1212Command(struct snd_korg1212 *korg1212,
enum korg1212_dbcnst doorbellVal,
u32 mailBox0Val, u32 mailBox1Val,
u32 mailBox2Val, u32 mailBox3Val)
static void snd_korg1212_SendStop(struct snd_korg1212 *korg1212)
static void snd_korg1212_SendStopAndWait(struct snd_korg1212 *korg1212)
static void snd_korg1212_timer_func(unsigned long data)
static int snd_korg1212_TurnOnIdleMonitor(struct snd_korg1212 *korg1212)
static void snd_korg1212_TurnOffIdleMonitor(struct snd_korg1212 *korg1212)
static inline void snd_korg1212_setCardState(struct snd_korg1212 * korg1212, enum CardState csState)
static int snd_korg1212_OpenCard(struct snd_korg1212 * korg1212)
static int snd_korg1212_CloseCard(struct snd_korg1212 * korg1212)
static int snd_korg1212_SetupForPlay(struct snd_korg1212 * korg1212)
static int snd_korg1212_TriggerPlay(struct snd_korg1212 * korg1212)
static int snd_korg1212_StopPlay(struct snd_korg1212 * korg1212)
static void snd_korg1212_EnableCardInterrupts(struct snd_korg1212 * korg1212)
static inline int snd_korg1212_use_is_exclusive(struct snd_korg1212 *korg1212)
static int snd_korg1212_SetRate(struct snd_korg1212 *korg1212, int rate)
static int snd_korg1212_SetClockSource(struct snd_korg1212 *korg1212, int source)
static void snd_korg1212_DisableCardInterrupts(struct snd_korg1212 *korg1212)
static int snd_korg1212_WriteADCSensitivity(struct snd_korg1212 *korg1212)
static void snd_korg1212_OnDSPDownloadComplete(struct snd_korg1212 *korg1212)
static irqreturn_t snd_korg1212_interrupt(int irq, void *dev_id)
static int snd_korg1212_downloadDSPCode(struct snd_korg1212 *korg1212)
static struct snd_pcm_hardware snd_korg1212_playback_info =
;
static struct snd_pcm_hardware snd_korg1212_capture_info =
;
static int snd_korg1212_silence(struct snd_korg1212 *korg1212, int pos, int count, int offset, int size)
static int snd_korg1212_copy_to(struct snd_korg1212 *korg1212, void __user *dst, int pos, int count, int offset, int size)
static int snd_korg1212_copy_from(struct snd_korg1212 *korg1212, void __user *src, int pos, int count, int offset, int size)
static void snd_korg1212_free_pcm(struct snd_pcm *pcm)
static int snd_korg1212_playback_open(struct snd_pcm_substream *substream)
static int snd_korg1212_capture_open(struct snd_pcm_substream *substream)
static int snd_korg1212_playback_close(struct snd_pcm_substream *substream)
static int snd_korg1212_capture_close(struct snd_pcm_substream *substream)
static int snd_korg1212_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_korg1212_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_korg1212_prepare(struct snd_pcm_substream *substream)
static int snd_korg1212_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_korg1212_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_korg1212_capture_pointer(struct snd_pcm_substream *substream)
static int snd_korg1212_playback_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *src,
snd_pcm_uframes_t count)
static int snd_korg1212_playback_silence(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int snd_korg1212_capture_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *dst,
snd_pcm_uframes_t count)
static struct snd_pcm_ops snd_korg1212_playback_ops = ;
static struct snd_pcm_ops snd_korg1212_capture_ops = ;
static int snd_korg1212_control_phase_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_korg1212_control_phase_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_phase_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_korg1212_control_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_route_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_korg1212_control_route_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_route_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_korg1212_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *u)
static int snd_korg1212_control_sync_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_korg1212_control_sync_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_korg1212_control_sync_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define MON_MIXER(ord,c_name)									\
,                                                                                      \
,                                                                                      \
static struct snd_kcontrol_new snd_korg1212_controls[] = ;
static void snd_korg1212_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_korg1212_proc_init(struct snd_korg1212 *korg1212)
static int
snd_korg1212_free(struct snd_korg1212 *korg1212)
static int snd_korg1212_dev_free(struct snd_device *device)
static int __devinit snd_korg1212_create(struct snd_card *card, struct pci_dev *pci,
struct snd_korg1212 ** rchip)
static int __devinit
snd_korg1212_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_korg1212_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_korg1212_init(void)
static void __exit alsa_card_korg1212_exit(void)
module_init(alsa_card_korg1212_init)
module_exit(alsa_card_korg1212_exit)
