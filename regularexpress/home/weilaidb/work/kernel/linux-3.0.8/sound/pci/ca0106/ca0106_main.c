MODULE_AUTHOR("James Courtier-Dutton <James@superbug.demon.co.uk>");
MODULE_DESCRIPTION("CA0106");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static uint subsystem[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the CA0106 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the CA0106 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable the CA0106 soundcard.");
module_param_array(subsystem, uint, NULL, 0444);
MODULE_PARM_DESC(subsystem, "Force card subsystem model.");
static struct snd_ca0106_details ca0106_chip_details[] = ;
static struct snd_pcm_hardware snd_ca0106_playback_hw = ;
static struct snd_pcm_hardware snd_ca0106_capture_hw = ;
unsigned int snd_ca0106_ptr_read(struct snd_ca0106 * emu,
unsigned int reg,
unsigned int chn)
void snd_ca0106_ptr_write(struct snd_ca0106 *emu,
unsigned int reg,
unsigned int chn,
unsigned int data)
int snd_ca0106_spi_write(struct snd_ca0106 * emu,
unsigned int data)
int snd_ca0106_i2c_write(struct snd_ca0106 *emu,
u32 reg,
u32 value)
static void snd_ca0106_intr_enable(struct snd_ca0106 *emu, unsigned int intrenb)
static void snd_ca0106_intr_disable(struct snd_ca0106 *emu, unsigned int intrenb)
static void snd_ca0106_pcm_free_substream(struct snd_pcm_runtime *runtime)
static const int spi_dacd_reg[] = ;
static const int spi_dacd_bit[] = ;
static void restore_spdif_bits(struct snd_ca0106 *chip, int idx)
static int snd_ca0106_channel_dac(struct snd_ca0106_details *details,
int channel_id)
static int snd_ca0106_pcm_power_dac(struct snd_ca0106 *chip, int channel_id,
int power)
static int snd_ca0106_pcm_open_playback_channel(struct snd_pcm_substream *substream,
int channel_id)
static int snd_ca0106_pcm_close_playback(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_playback_front(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_playback_center_lfe(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_playback_unknown(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_playback_rear(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_capture_channel(struct snd_pcm_substream *substream,
int channel_id)
static int snd_ca0106_pcm_close_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_0_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_1_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_2_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_open_3_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_hw_params_playback(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ca0106_pcm_hw_free_playback(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_hw_params_capture(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ca0106_pcm_hw_free_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_prepare_playback(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_prepare_capture(struct snd_pcm_substream *substream)
static int snd_ca0106_pcm_trigger_playback(struct snd_pcm_substream *substream,
int cmd)
static int snd_ca0106_pcm_trigger_capture(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_ca0106_pcm_pointer_playback(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
snd_ca0106_pcm_pointer_capture(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ca0106_playback_front_ops = ;
static struct snd_pcm_ops snd_ca0106_capture_0_ops = ;
static struct snd_pcm_ops snd_ca0106_capture_1_ops = ;
static struct snd_pcm_ops snd_ca0106_capture_2_ops = ;
static struct snd_pcm_ops snd_ca0106_capture_3_ops = ;
static struct snd_pcm_ops snd_ca0106_playback_center_lfe_ops = ;
static struct snd_pcm_ops snd_ca0106_playback_unknown_ops = ;
static struct snd_pcm_ops snd_ca0106_playback_rear_ops = ;
static unsigned short snd_ca0106_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_ca0106_ac97_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static int snd_ca0106_ac97(struct snd_ca0106 *chip)
static void ca0106_stop_chip(struct snd_ca0106 *chip);
static int snd_ca0106_free(struct snd_ca0106 *chip)
static int snd_ca0106_dev_free(struct snd_device *device)
static irqreturn_t snd_ca0106_interrupt(int irq, void *dev_id)
static int __devinit snd_ca0106_pcm(struct snd_ca0106 *emu, int device)
#define SPI_REG(reg, value)	(((reg) << SPI_REG_SHIFT) | (value))
static unsigned int spi_dac_init[] = ;
static unsigned int i2c_adc_init[][2] = ;
static void ca0106_init_chip(struct snd_ca0106 *chip, int resume)
static void ca0106_stop_chip(struct snd_ca0106 *chip)
static int __devinit snd_ca0106_create(int dev, struct snd_card *card,
struct pci_dev *pci,
struct snd_ca0106 **rchip)
static void ca0106_midi_interrupt_enable(struct snd_ca_midi *midi, int intr)
static void ca0106_midi_interrupt_disable(struct snd_ca_midi *midi, int intr)
static unsigned char ca0106_midi_read(struct snd_ca_midi *midi, int idx)
static void ca0106_midi_write(struct snd_ca_midi *midi, int data, int idx)
static struct snd_card *ca0106_dev_id_card(void *dev_id)
static int ca0106_dev_id_port(void *dev_id)
static int __devinit snd_ca0106_midi(struct snd_ca0106 *chip, unsigned int channel)
static int __devinit snd_ca0106_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_ca0106_remove(struct pci_dev *pci)
static int snd_ca0106_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_ca0106_resume(struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(snd_ca0106_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_ca0106_ids);
static struct pci_driver driver = ;
static int __init alsa_card_ca0106_init(void)
static void __exit alsa_card_ca0106_exit(void)
module_init(alsa_card_ca0106_init)
module_exit(alsa_card_ca0106_exit)
