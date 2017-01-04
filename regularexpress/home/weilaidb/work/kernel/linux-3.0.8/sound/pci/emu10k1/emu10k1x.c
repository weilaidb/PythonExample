MODULE_AUTHOR("Francisco Moraes <fmoraes@nc.rr.com>");
MODULE_DESCRIPTION("EMU10K1X");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("{");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the EMU10K1X soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the EMU10K1X soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable the EMU10K1X soundcard.");
#define PTR			0x00
#define DATA			0x04
#define IPR			0x08
#define IPR_MIDITRANSBUFEMPTY   0x00000001
#define IPR_MIDIRECVBUFEMPTY    0x00000002
#define IPR_CH_0_LOOP           0x00000800
#define IPR_CH_0_HALF_LOOP      0x00000100
#define IPR_CAP_0_LOOP          0x00080000
#define IPR_CAP_0_HALF_LOOP     0x00010000
#define INTE			0x0c
#define INTE_MIDITXENABLE       0x00000001
#define INTE_MIDIRXENABLE       0x00000002
#define INTE_CH_0_LOOP          0x00000800
#define INTE_CH_0_HALF_LOOP     0x00000100
#define INTE_CAP_0_LOOP         0x00080000
#define INTE_CAP_0_HALF_LOOP    0x00010000
#define HCFG			0x14
#define HCFG_LOCKSOUNDCACHE	0x00000008
#define HCFG_AUDIOENABLE	0x00000001
#define GPIO			0x18
#define AC97DATA		0x1c
#define AC97ADDRESS		0x1e
#define PLAYBACK_LIST_ADDR	0x00
#define PLAYBACK_LIST_SIZE	0x01
#define PLAYBACK_LIST_PTR	0x02
#define PLAYBACK_DMA_ADDR	0x04
#define PLAYBACK_PERIOD_SIZE	0x05
#define PLAYBACK_POINTER	0x06
#define PLAYBACK_UNKNOWN1       0x07
#define PLAYBACK_UNKNOWN2       0x08
#define CAPTURE_DMA_ADDR	0x10
#define CAPTURE_BUFFER_SIZE	0x11
#define CAPTURE_POINTER		0x12
#define CAPTURE_UNKNOWN         0x13
#define TRIGGER_CHANNEL         0x40
#define TRIGGER_CHANNEL_0       0x00000001
#define TRIGGER_CHANNEL_1       0x00000002
#define TRIGGER_CHANNEL_2       0x00000004
#define TRIGGER_CAPTURE         0x00000100
#define ROUTING                 0x41
#define ROUTING_FRONT_LEFT      0x00000001
#define ROUTING_FRONT_RIGHT     0x00000002
#define ROUTING_REAR_LEFT       0x00000004
#define ROUTING_REAR_RIGHT      0x00000008
#define ROUTING_CENTER_LFE      0x00010000
#define SPCS0			0x42
#define SPCS1			0x43
#define SPCS2			0x44
#define SPCS_CLKACCYMASK	0x30000000
#define SPCS_CLKACCY_1000PPM	0x00000000
#define SPCS_CLKACCY_50PPM	0x10000000
#define SPCS_CLKACCY_VARIABLE	0x20000000
#define SPCS_SAMPLERATEMASK	0x0f000000
#define SPCS_SAMPLERATE_44	0x00000000
#define SPCS_SAMPLERATE_48	0x02000000
#define SPCS_SAMPLERATE_32	0x03000000
#define SPCS_CHANNELNUMMASK	0x00f00000
#define SPCS_CHANNELNUM_UNSPEC	0x00000000
#define SPCS_CHANNELNUM_LEFT	0x00100000
#define SPCS_CHANNELNUM_RIGHT	0x00200000
#define SPCS_SOURCENUMMASK	0x000f0000
#define SPCS_SOURCENUM_UNSPEC	0x00000000
#define SPCS_GENERATIONSTATUS	0x00008000
#define SPCS_CATEGORYCODEMASK	0x00007f00
#define SPCS_MODEMASK		0x000000c0
#define SPCS_EMPHASISMASK	0x00000038
#define SPCS_EMPHASIS_NONE	0x00000000
#define SPCS_EMPHASIS_50_15	0x00000008
#define SPCS_COPYRIGHT		0x00000004
#define SPCS_NOTAUDIODATA	0x00000002
#define SPCS_PROFESSIONAL	0x00000001
#define SPDIF_SELECT		0x45
#define MUDATA		0x47
#define MUCMD		0x48
#define MUSTAT		MUCMD
struct emu10k1x_voice ;
struct emu10k1x_pcm ;
struct emu10k1x_midi ;
struct emu10k1x ;
static struct snd_pcm_hardware snd_emu10k1x_playback_hw = ;
static struct snd_pcm_hardware snd_emu10k1x_capture_hw = ;
static unsigned int snd_emu10k1x_ptr_read(struct emu10k1x * emu,
unsigned int reg,
unsigned int chn)
static void snd_emu10k1x_ptr_write(struct emu10k1x *emu,
unsigned int reg,
unsigned int chn,
unsigned int data)
static void snd_emu10k1x_intr_enable(struct emu10k1x *emu, unsigned int intrenb)
static void snd_emu10k1x_intr_disable(struct emu10k1x *emu, unsigned int intrenb)
static void snd_emu10k1x_gpio_write(struct emu10k1x *emu, unsigned int value)
static void snd_emu10k1x_pcm_free_substream(struct snd_pcm_runtime *runtime)
static void snd_emu10k1x_pcm_interrupt(struct emu10k1x *emu, struct emu10k1x_voice *voice)
static int snd_emu10k1x_playback_open(struct snd_pcm_substream *substream)
static int snd_emu10k1x_playback_close(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_emu10k1x_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_emu10k1x_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_emu10k1x_playback_ops = ;
static int snd_emu10k1x_pcm_open_capture(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_close_capture(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_hw_params_capture(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_emu10k1x_pcm_hw_free_capture(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_prepare_capture(struct snd_pcm_substream *substream)
static int snd_emu10k1x_pcm_trigger_capture(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_emu10k1x_pcm_pointer_capture(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_emu10k1x_capture_ops = ;
static unsigned short snd_emu10k1x_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_emu10k1x_ac97_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static int snd_emu10k1x_ac97(struct emu10k1x *chip)
static int snd_emu10k1x_free(struct emu10k1x *chip)
static int snd_emu10k1x_dev_free(struct snd_device *device)
static irqreturn_t snd_emu10k1x_interrupt(int irq, void *dev_id)
static int __devinit snd_emu10k1x_pcm(struct emu10k1x *emu, int device, struct snd_pcm **rpcm)
static int __devinit snd_emu10k1x_create(struct snd_card *card,
struct pci_dev *pci,
struct emu10k1x **rchip)
static void snd_emu10k1x_proc_reg_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu10k1x_proc_reg_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int __devinit snd_emu10k1x_proc_init(struct emu10k1x * emu)
#define snd_emu10k1x_shared_spdif_info	snd_ctl_boolean_mono_info
static int snd_emu10k1x_shared_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1x_shared_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1x_shared_spdif __devinitdata =
;
static int snd_emu10k1x_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1x_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1x_spdif_get_mask(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1x_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1x_spdif_mask_control =
;
static struct snd_kcontrol_new snd_emu10k1x_spdif_control =
;
static int __devinit snd_emu10k1x_mixer(struct emu10k1x *emu)
#define EMU10K1X_MIDI_MODE_INPUT	(1<<0)
#define EMU10K1X_MIDI_MODE_OUTPUT	(1<<1)
static inline unsigned char mpu401_read(struct emu10k1x *emu, struct emu10k1x_midi *mpu, int idx)
static inline void mpu401_write(struct emu10k1x *emu, struct emu10k1x_midi *mpu, int data, int idx)
#define mpu401_write_data(emu, mpu, data)	mpu401_write(emu, mpu, data, 0)
#define mpu401_write_cmd(emu, mpu, data)	mpu401_write(emu, mpu, data, 1)
#define mpu401_read_data(emu, mpu)		mpu401_read(emu, mpu, 0)
#define mpu401_read_stat(emu, mpu)		mpu401_read(emu, mpu, 1)
#define mpu401_input_avail(emu,mpu)	(!(mpu401_read_stat(emu,mpu) & 0x80))
#define mpu401_output_ready(emu,mpu)	(!(mpu401_read_stat(emu,mpu) & 0x40))
#define MPU401_RESET		0xff
#define MPU401_ENTER_UART	0x3f
#define MPU401_ACK		0xfe
static void mpu401_clear_rx(struct emu10k1x *emu, struct emu10k1x_midi *mpu)
static void do_emu10k1x_midi_interrupt(struct emu10k1x *emu,
struct emu10k1x_midi *midi, unsigned int status)
static void snd_emu10k1x_midi_interrupt(struct emu10k1x *emu, unsigned int status)
static int snd_emu10k1x_midi_cmd(struct emu10k1x * emu,
struct emu10k1x_midi *midi, unsigned char cmd, int ack)
static int snd_emu10k1x_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_emu10k1x_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_emu10k1x_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_emu10k1x_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_emu10k1x_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_emu10k1x_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_emu10k1x_midi_output =
;
static struct snd_rawmidi_ops snd_emu10k1x_midi_input =
;
static void snd_emu10k1x_midi_free(struct snd_rawmidi *rmidi)
static int __devinit emu10k1x_midi_init(struct emu10k1x *emu,
struct emu10k1x_midi *midi, int device, char *name)
static int __devinit snd_emu10k1x_midi(struct emu10k1x *emu)
static int __devinit snd_emu10k1x_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_emu10k1x_remove(struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(snd_emu10k1x_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_emu10k1x_ids);
static struct pci_driver driver = ;
static int __init alsa_card_emu10k1x_init(void)
static void __exit alsa_card_emu10k1x_exit(void)
module_init(alsa_card_emu10k1x_init)
module_exit(alsa_card_emu10k1x_exit)
