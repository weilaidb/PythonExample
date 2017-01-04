static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int fullduplex[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for RME Digi32 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for RME Digi32 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable RME Digi32 soundcard.");
module_param_array(fullduplex, bool, NULL, 0444);
MODULE_PARM_DESC(fullduplex, "Support full-duplex mode.");
MODULE_AUTHOR("Martin Langer <martin-langer@gmx.de>, Pilo Chambert <pilo.c@wanadoo.fr>");
MODULE_DESCRIPTION("RME Digi32, Digi32/8, Digi32 PRO");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define RME32_SPDIF_NCHANNELS 2
#define RME32_BUFFER_SIZE 0x20000
#define RME32_IO_SIZE 0x30000
#define RME32_IO_DATA_BUFFER        0x0
#define RME32_IO_CONTROL_REGISTER   0x20000
#define RME32_IO_GET_POS            0x20000
#define RME32_IO_CONFIRM_ACTION_IRQ 0x20004
#define RME32_IO_RESET_POS          0x20100
#define RME32_WCR_START     (1 << 0)
#define RME32_WCR_MONO      (1 << 1)
#define RME32_WCR_MODE24    (1 << 2)
#define RME32_WCR_SEL       (1 << 3)
#define RME32_WCR_FREQ_0    (1 << 4)
#define RME32_WCR_FREQ_1    (1 << 5)
#define RME32_WCR_INP_0     (1 << 6)
#define RME32_WCR_INP_1     (1 << 7)
#define RME32_WCR_RESET     (1 << 8)
#define RME32_WCR_MUTE      (1 << 9)
#define RME32_WCR_PRO       (1 << 10)
#define RME32_WCR_DS_BM     (1 << 11)
#define RME32_WCR_ADAT      (1 << 12)
#define RME32_WCR_AUTOSYNC  (1 << 13)
#define RME32_WCR_PD        (1 << 14)
#define RME32_WCR_EMP       (1 << 15)
#define RME32_WCR_BITPOS_FREQ_0 4
#define RME32_WCR_BITPOS_FREQ_1 5
#define RME32_WCR_BITPOS_INP_0 6
#define RME32_WCR_BITPOS_INP_1 7
#define RME32_RCR_AUDIO_ADDR_MASK 0x1ffff
#define RME32_RCR_LOCK      (1 << 23)
#define RME32_RCR_ERF       (1 << 26)
#define RME32_RCR_FREQ_0    (1 << 27)
#define RME32_RCR_FREQ_1    (1 << 28)
#define RME32_RCR_FREQ_2    (1 << 29)
#define RME32_RCR_KMODE     (1 << 30)
#define RME32_RCR_IRQ       (1 << 31)
#define RME32_RCR_BITPOS_F0 27
#define RME32_RCR_BITPOS_F1 28
#define RME32_RCR_BITPOS_F2 29
#define RME32_INPUT_OPTICAL 0
#define RME32_INPUT_COAXIAL 1
#define RME32_INPUT_INTERNAL 2
#define RME32_INPUT_XLR 3
#define RME32_CLOCKMODE_SLAVE 0
#define RME32_CLOCKMODE_MASTER_32 1
#define RME32_CLOCKMODE_MASTER_44 2
#define RME32_CLOCKMODE_MASTER_48 3
#define RME32_BLOCK_SIZE 8192
#define RME32_MID_BUFFER_SIZE (1024*1024)
#define RME32_32_REVISION 192
#define RME32_328_REVISION_OLD 100
#define RME32_328_REVISION_NEW 101
#define RME32_PRO_REVISION_WITH_8412 192
#define RME32_PRO_REVISION_WITH_8414 150
struct rme32 ;
static DEFINE_PCI_DEVICE_TABLE(snd_rme32_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_rme32_ids);
#define RME32_ISWORKING(rme32) ((rme32)->wcreg & RME32_WCR_START)
#define RME32_PRO_WITH_8414(rme32) ((rme32)->pci->device == PCI_DEVICE_ID_RME_DIGI32_PRO && (rme32)->rev == RME32_PRO_REVISION_WITH_8414)
static int snd_rme32_playback_prepare(struct snd_pcm_substream *substream);
static int snd_rme32_capture_prepare(struct snd_pcm_substream *substream);
static int snd_rme32_pcm_trigger(struct snd_pcm_substream *substream, int cmd);
static void snd_rme32_proc_init(struct rme32 * rme32);
static int snd_rme32_create_switches(struct snd_card *card, struct rme32 * rme32);
static inline unsigned int snd_rme32_pcm_byteptr(struct rme32 * rme32)
static int snd_rme32_playback_silence(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static int snd_rme32_playback_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos,
void __user *src, snd_pcm_uframes_t count)
static int snd_rme32_capture_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos,
void __user *dst, snd_pcm_uframes_t count)
static struct snd_pcm_hardware snd_rme32_spdif_info = ;
static struct snd_pcm_hardware snd_rme32_adat_info =
;
static struct snd_pcm_hardware snd_rme32_spdif_fd_info = ;
static struct snd_pcm_hardware snd_rme32_adat_fd_info =
;
static void snd_rme32_reset_dac(struct rme32 *rme32)
static int snd_rme32_playback_getrate(struct rme32 * rme32)
static int snd_rme32_capture_getrate(struct rme32 * rme32, int *is_adat)
static int snd_rme32_playback_setrate(struct rme32 * rme32, int rate)
static int snd_rme32_setclockmode(struct rme32 * rme32, int mode)
static int snd_rme32_getclockmode(struct rme32 * rme32)
static int snd_rme32_setinputtype(struct rme32 * rme32, int type)
static int snd_rme32_getinputtype(struct rme32 * rme32)
static void
snd_rme32_setframelog(struct rme32 * rme32, int n_channels, int is_playback)
static int snd_rme32_setformat(struct rme32 * rme32, int format)
static int
snd_rme32_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int
snd_rme32_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_rme32_pcm_hw_free(struct snd_pcm_substream *substream)
static void snd_rme32_pcm_start(struct rme32 * rme32, int from_pause)
static void snd_rme32_pcm_stop(struct rme32 * rme32, int to_pause)
static irqreturn_t snd_rme32_interrupt(int irq, void *dev_id)
static unsigned int period_bytes[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_period_bytes = ;
static void snd_rme32_set_buffer_constraint(struct rme32 *rme32, struct snd_pcm_runtime *runtime)
static int snd_rme32_playback_spdif_open(struct snd_pcm_substream *substream)
static int snd_rme32_capture_spdif_open(struct snd_pcm_substream *substream)
static int
snd_rme32_playback_adat_open(struct snd_pcm_substream *substream)
static int
snd_rme32_capture_adat_open(struct snd_pcm_substream *substream)
static int snd_rme32_playback_close(struct snd_pcm_substream *substream)
static int snd_rme32_capture_close(struct snd_pcm_substream *substream)
static int snd_rme32_playback_prepare(struct snd_pcm_substream *substream)
static int snd_rme32_capture_prepare(struct snd_pcm_substream *substream)
static int
snd_rme32_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
snd_rme32_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_rme32_capture_pointer(struct snd_pcm_substream *substream)
static void snd_rme32_pb_trans_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int snd_rme32_playback_fd_ack(struct snd_pcm_substream *substream)
static void snd_rme32_cp_trans_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int snd_rme32_capture_fd_ack(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_rme32_playback_fd_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_rme32_capture_fd_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_rme32_playback_spdif_ops = ;
static struct snd_pcm_ops snd_rme32_capture_spdif_ops = ;
static struct snd_pcm_ops snd_rme32_playback_adat_ops = ;
static struct snd_pcm_ops snd_rme32_capture_adat_ops = ;
static struct snd_pcm_ops snd_rme32_playback_spdif_fd_ops = ;
static struct snd_pcm_ops snd_rme32_capture_spdif_fd_ops = ;
static struct snd_pcm_ops snd_rme32_playback_adat_fd_ops = ;
static struct snd_pcm_ops snd_rme32_capture_adat_fd_ops = ;
static void snd_rme32_free(void *private_data)
static void snd_rme32_free_spdif_pcm(struct snd_pcm *pcm)
static void
snd_rme32_free_adat_pcm(struct snd_pcm *pcm)
static int __devinit snd_rme32_create(struct rme32 * rme32)
static void
snd_rme32_proc_read(struct snd_info_entry * entry, struct snd_info_buffer *buffer)
static void __devinit snd_rme32_proc_init(struct rme32 * rme32)
#define snd_rme32_info_loopback_control		snd_ctl_boolean_mono_info
static int
snd_rme32_get_loopback_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_rme32_put_loopback_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_rme32_info_inputtype_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int
snd_rme32_get_inputtype_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_rme32_put_inputtype_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_rme32_info_clockmode_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int
snd_rme32_get_clockmode_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_rme32_put_clockmode_control(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static u32 snd_rme32_convert_from_aes(struct snd_aes_iec958 * aes)
static void snd_rme32_convert_to_aes(struct snd_aes_iec958 * aes, u32 val)
static int snd_rme32_control_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_rme32_control_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_rme32_control_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_rme32_control_spdif_stream_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_rme32_control_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *
ucontrol)
static int snd_rme32_control_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *
ucontrol)
static int snd_rme32_control_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_rme32_control_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *
ucontrol)
static struct snd_kcontrol_new snd_rme32_controls[] = ;
static int snd_rme32_create_switches(struct snd_card *card, struct rme32 * rme32)
static void snd_rme32_card_free(struct snd_card *card)
static int __devinit
snd_rme32_probe(struct pci_dev *pci, const struct pci_device_id *pci_id)
static void __devexit snd_rme32_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_rme32_init(void)
static void __exit alsa_card_rme32_exit(void)
module_init(alsa_card_rme32_init)
module_exit(alsa_card_rme32_exit)
