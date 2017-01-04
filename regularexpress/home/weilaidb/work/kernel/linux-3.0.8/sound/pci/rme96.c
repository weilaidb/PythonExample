MODULE_AUTHOR("Anders Torger <torger@ludd.luth.se>");
MODULE_DESCRIPTION("RME Digi96, Digi96/8, Digi96/8 PRO, Digi96/8 PST, "
"Digi96/8 PAD");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for RME Digi96 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for RME Digi96 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable RME Digi96 soundcard.");
#define RME96_SPDIF_NCHANNELS 2
#define RME96_BUFFER_SIZE 0x10000
#define RME96_IO_SIZE 0x60000
#define RME96_IO_PLAY_BUFFER      0x0
#define RME96_IO_REC_BUFFER       0x10000
#define RME96_IO_CONTROL_REGISTER 0x20000
#define RME96_IO_ADDITIONAL_REG   0x20004
#define RME96_IO_CONFIRM_PLAY_IRQ 0x20008
#define RME96_IO_CONFIRM_REC_IRQ  0x2000C
#define RME96_IO_SET_PLAY_POS     0x40000
#define RME96_IO_RESET_PLAY_POS   0x4FFFC
#define RME96_IO_SET_REC_POS      0x50000
#define RME96_IO_RESET_REC_POS    0x5FFFC
#define RME96_IO_GET_PLAY_POS     0x20000
#define RME96_IO_GET_REC_POS      0x30000
#define RME96_WCR_START     (1 << 0)
#define RME96_WCR_START_2   (1 << 1)
#define RME96_WCR_GAIN_0    (1 << 2)
#define RME96_WCR_GAIN_1    (1 << 3)
#define RME96_WCR_MODE24    (1 << 4)
#define RME96_WCR_MODE24_2  (1 << 5)
#define RME96_WCR_BM        (1 << 6)
#define RME96_WCR_BM_2      (1 << 7)
#define RME96_WCR_ADAT      (1 << 8)
#define RME96_WCR_FREQ_0    (1 << 9)
#define RME96_WCR_FREQ_1    (1 << 10)
#define RME96_WCR_DS        (1 << 11)
#define RME96_WCR_PRO       (1 << 12)
#define RME96_WCR_EMP       (1 << 13)
#define RME96_WCR_SEL       (1 << 14)
#define RME96_WCR_MASTER    (1 << 15)
#define RME96_WCR_PD        (1 << 16)
#define RME96_WCR_INP_0     (1 << 17)
#define RME96_WCR_INP_1     (1 << 18)
#define RME96_WCR_THRU_0    (1 << 19)
#define RME96_WCR_THRU_1    (1 << 20)
#define RME96_WCR_THRU_2    (1 << 21)
#define RME96_WCR_THRU_3    (1 << 22)
#define RME96_WCR_THRU_4    (1 << 23)
#define RME96_WCR_THRU_5    (1 << 24)
#define RME96_WCR_THRU_6    (1 << 25)
#define RME96_WCR_THRU_7    (1 << 26)
#define RME96_WCR_DOLBY     (1 << 27)
#define RME96_WCR_MONITOR_0 (1 << 28)
#define RME96_WCR_MONITOR_1 (1 << 29)
#define RME96_WCR_ISEL      (1 << 30)
#define RME96_WCR_IDIS      (1 << 31)
#define RME96_WCR_BITPOS_GAIN_0 2
#define RME96_WCR_BITPOS_GAIN_1 3
#define RME96_WCR_BITPOS_FREQ_0 9
#define RME96_WCR_BITPOS_FREQ_1 10
#define RME96_WCR_BITPOS_INP_0 17
#define RME96_WCR_BITPOS_INP_1 18
#define RME96_WCR_BITPOS_MONITOR_0 28
#define RME96_WCR_BITPOS_MONITOR_1 29
#define RME96_RCR_AUDIO_ADDR_MASK 0xFFFF
#define RME96_RCR_IRQ_2     (1 << 16)
#define RME96_RCR_T_OUT     (1 << 17)
#define RME96_RCR_DEV_ID_0  (1 << 21)
#define RME96_RCR_DEV_ID_1  (1 << 22)
#define RME96_RCR_LOCK      (1 << 23)
#define RME96_RCR_VERF      (1 << 26)
#define RME96_RCR_F0        (1 << 27)
#define RME96_RCR_F1        (1 << 28)
#define RME96_RCR_F2        (1 << 29)
#define RME96_RCR_AUTOSYNC  (1 << 30)
#define RME96_RCR_IRQ       (1 << 31)
#define RME96_RCR_BITPOS_F0 27
#define RME96_RCR_BITPOS_F1 28
#define RME96_RCR_BITPOS_F2 29
#define RME96_AR_WSEL       (1 << 0)
#define RME96_AR_ANALOG     (1 << 1)
#define RME96_AR_FREQPAD_0  (1 << 2)
#define RME96_AR_FREQPAD_1  (1 << 3)
#define RME96_AR_FREQPAD_2  (1 << 4)
#define RME96_AR_PD2        (1 << 5)
#define RME96_AR_DAC_EN     (1 << 6)
#define RME96_AR_CLATCH     (1 << 7)
#define RME96_AR_CCLK       (1 << 8)
#define RME96_AR_CDATA      (1 << 9)
#define RME96_AR_BITPOS_F0 2
#define RME96_AR_BITPOS_F1 3
#define RME96_AR_BITPOS_F2 4
#define RME96_MONITOR_TRACKS_1_2 0
#define RME96_MONITOR_TRACKS_3_4 1
#define RME96_MONITOR_TRACKS_5_6 2
#define RME96_MONITOR_TRACKS_7_8 3
#define RME96_ATTENUATION_0 0
#define RME96_ATTENUATION_6 1
#define RME96_ATTENUATION_12 2
#define RME96_ATTENUATION_18 3
#define RME96_INPUT_OPTICAL 0
#define RME96_INPUT_COAXIAL 1
#define RME96_INPUT_INTERNAL 2
#define RME96_INPUT_XLR 3
#define RME96_INPUT_ANALOG 4
#define RME96_CLOCKMODE_SLAVE 0
#define RME96_CLOCKMODE_MASTER 1
#define RME96_CLOCKMODE_WORDCLOCK 2
#define RME96_SMALL_BLOCK_SIZE 2048
#define RME96_LARGE_BLOCK_SIZE 8192
#define RME96_AD1852_VOL_BITS 14
#define RME96_AD1855_VOL_BITS 10
struct rme96 ;
static DEFINE_PCI_DEVICE_TABLE(snd_rme96_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_rme96_ids);
#define RME96_ISPLAYING(rme96) ((rme96)->wcreg & RME96_WCR_START)
#define RME96_ISRECORDING(rme96) ((rme96)->wcreg & RME96_WCR_START_2)
#define	RME96_HAS_ANALOG_IN(rme96) ((rme96)->pci->device == PCI_DEVICE_ID_RME_DIGI96_8_PAD_OR_PST)
#define	RME96_HAS_ANALOG_OUT(rme96) ((rme96)->pci->device == PCI_DEVICE_ID_RME_DIGI96_8_PRO || \
(rme96)->pci->device == PCI_DEVICE_ID_RME_DIGI96_8_PAD_OR_PST)
#define	RME96_DAC_IS_1852(rme96) (RME96_HAS_ANALOG_OUT(rme96) && (rme96)->rev >= 4)
#define	RME96_DAC_IS_1855(rme96) (((rme96)->pci->device == PCI_DEVICE_ID_RME_DIGI96_8_PAD_OR_PST && (rme96)->rev < 4) || \
((rme96)->pci->device == PCI_DEVICE_ID_RME_DIGI96_8_PRO && (rme96)->rev == 2))
#define	RME96_185X_MAX_OUT(rme96) ((1 << (RME96_DAC_IS_1852(rme96) ? RME96_AD1852_VOL_BITS : RME96_AD1855_VOL_BITS)) - 1)
static int
snd_rme96_playback_prepare(struct snd_pcm_substream *substream);
static int
snd_rme96_capture_prepare(struct snd_pcm_substream *substream);
static int
snd_rme96_playback_trigger(struct snd_pcm_substream *substream,
int cmd);
static int
snd_rme96_capture_trigger(struct snd_pcm_substream *substream,
int cmd);
static snd_pcm_uframes_t
snd_rme96_playback_pointer(struct snd_pcm_substream *substream);
static snd_pcm_uframes_t
snd_rme96_capture_pointer(struct snd_pcm_substream *substream);
static void __devinit
snd_rme96_proc_init(struct rme96 *rme96);
static int
snd_rme96_create_switches(struct snd_card *card,
struct rme96 *rme96);
static int
snd_rme96_getinputtype(struct rme96 *rme96);
static inline unsigned int
snd_rme96_playback_ptr(struct rme96 *rme96)
static inline unsigned int
snd_rme96_capture_ptr(struct rme96 *rme96)
static int
snd_rme96_playback_silence(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int
snd_rme96_playback_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *src,
snd_pcm_uframes_t count)
static int
snd_rme96_capture_copy(struct snd_pcm_substream *substream,
int channel,
snd_pcm_uframes_t pos,
void __user *dst,
snd_pcm_uframes_t count)
static struct snd_pcm_hardware snd_rme96_playback_spdif_info =
;
static struct snd_pcm_hardware snd_rme96_capture_spdif_info =
;
static struct snd_pcm_hardware snd_rme96_playback_adat_info =
;
static struct snd_pcm_hardware snd_rme96_capture_adat_info =
;
static void
snd_rme96_write_SPI(struct rme96 *rme96, u16 val)
static void
snd_rme96_apply_dac_volume(struct rme96 *rme96)
static void
snd_rme96_reset_dac(struct rme96 *rme96)
static int
snd_rme96_getmontracks(struct rme96 *rme96)
static int
snd_rme96_setmontracks(struct rme96 *rme96,
int montracks)
static int
snd_rme96_getattenuation(struct rme96 *rme96)
static int
snd_rme96_setattenuation(struct rme96 *rme96,
int attenuation)
static int
snd_rme96_capture_getrate(struct rme96 *rme96,
int *is_adat)
static int
snd_rme96_playback_getrate(struct rme96 *rme96)
static int
snd_rme96_playback_setrate(struct rme96 *rme96,
int rate)
static int
snd_rme96_capture_analog_setrate(struct rme96 *rme96,
int rate)
static int
snd_rme96_setclockmode(struct rme96 *rme96,
int mode)
static int
snd_rme96_getclockmode(struct rme96 *rme96)
static int
snd_rme96_setinputtype(struct rme96 *rme96,
int type)
static int
snd_rme96_getinputtype(struct rme96 *rme96)
static void
snd_rme96_setframelog(struct rme96 *rme96,
int n_channels,
int is_playback)
static int
snd_rme96_playback_setformat(struct rme96 *rme96,
int format)
static int
snd_rme96_capture_setformat(struct rme96 *rme96,
int format)
static void
snd_rme96_set_period_properties(struct rme96 *rme96,
size_t period_bytes)
static int
snd_rme96_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int
snd_rme96_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static void
snd_rme96_playback_start(struct rme96 *rme96,
int from_pause)
static void
snd_rme96_capture_start(struct rme96 *rme96,
int from_pause)
static void
snd_rme96_playback_stop(struct rme96 *rme96)
static void
snd_rme96_capture_stop(struct rme96 *rme96)
static irqreturn_t
snd_rme96_interrupt(int irq,
void *dev_id)
static unsigned int period_bytes[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_period_bytes = ;
static void
rme96_set_buffer_size_constraint(struct rme96 *rme96,
struct snd_pcm_runtime *runtime)
static int
snd_rme96_playback_spdif_open(struct snd_pcm_substream *substream)
static int
snd_rme96_capture_spdif_open(struct snd_pcm_substream *substream)
static int
snd_rme96_playback_adat_open(struct snd_pcm_substream *substream)
static int
snd_rme96_capture_adat_open(struct snd_pcm_substream *substream)
static int
snd_rme96_playback_close(struct snd_pcm_substream *substream)
static int
snd_rme96_capture_close(struct snd_pcm_substream *substream)
static int
snd_rme96_playback_prepare(struct snd_pcm_substream *substream)
static int
snd_rme96_capture_prepare(struct snd_pcm_substream *substream)
static int
snd_rme96_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int
snd_rme96_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_rme96_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_rme96_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_rme96_playback_spdif_ops = ;
static struct snd_pcm_ops snd_rme96_capture_spdif_ops = ;
static struct snd_pcm_ops snd_rme96_playback_adat_ops = ;
static struct snd_pcm_ops snd_rme96_capture_adat_ops = ;
static void
snd_rme96_free(void *private_data)
static void
snd_rme96_free_spdif_pcm(struct snd_pcm *pcm)
static void
snd_rme96_free_adat_pcm(struct snd_pcm *pcm)
static int __devinit
snd_rme96_create(struct rme96 *rme96)
static void
snd_rme96_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void __devinit
snd_rme96_proc_init(struct rme96 *rme96)
#define snd_rme96_info_loopback_control		snd_ctl_boolean_mono_info
static int
snd_rme96_get_loopback_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_put_loopback_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_info_inputtype_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_rme96_get_inputtype_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_put_inputtype_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_info_clockmode_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_rme96_get_clockmode_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_put_clockmode_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_info_attenuation_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_rme96_get_attenuation_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_put_attenuation_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_info_montracks_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_rme96_get_montracks_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_put_montracks_control(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static u32 snd_rme96_convert_from_aes(struct snd_aes_iec958 *aes)
static void snd_rme96_convert_to_aes(struct snd_aes_iec958 *aes, u32 val)
static int snd_rme96_control_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme96_control_spdif_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme96_control_spdif_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme96_control_spdif_stream_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme96_control_spdif_stream_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme96_control_spdif_stream_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme96_control_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme96_control_spdif_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_rme96_dac_volume_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_rme96_dac_volume_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *u)
static int
snd_rme96_dac_volume_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *u)
static struct snd_kcontrol_new snd_rme96_controls[] = ;
static int
snd_rme96_create_switches(struct snd_card *card,
struct rme96 *rme96)
static void snd_rme96_card_free(struct snd_card *card)
static int __devinit
snd_rme96_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_rme96_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_rme96_init(void)
static void __exit alsa_card_rme96_exit(void)
module_init(alsa_card_rme96_init)
module_exit(alsa_card_rme96_exit)
