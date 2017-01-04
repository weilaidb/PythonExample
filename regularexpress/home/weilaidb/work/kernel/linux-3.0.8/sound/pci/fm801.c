MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("ForteMedia FM801");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int tea575x_tuner[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the FM801 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the FM801 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable FM801 soundcard.");
module_param_array(tea575x_tuner, int, NULL, 0444);
MODULE_PARM_DESC(tea575x_tuner, "TEA575x tuner access method (0 = auto, 1 = SF256-PCS, 2=SF256-PCP, 3=SF64-PCR, 8=disable, +16=tuner-only).");
#define TUNER_DISABLED		(1<<3)
#define TUNER_ONLY		(1<<4)
#define TUNER_TYPE_MASK		(~TUNER_ONLY & 0xFFFF)
#define FM801_REG(chip, reg)	(chip->port + FM801_##reg)
#define FM801_PCM_VOL		0x00
#define FM801_FM_VOL		0x02
#define FM801_I2S_VOL		0x04
#define FM801_REC_SRC		0x06
#define FM801_PLY_CTRL		0x08
#define FM801_PLY_COUNT		0x0a
#define FM801_PLY_BUF1		0x0c
#define FM801_PLY_BUF2		0x10
#define FM801_CAP_CTRL		0x14
#define FM801_CAP_COUNT		0x16
#define FM801_CAP_BUF1		0x18
#define FM801_CAP_BUF2		0x1c
#define FM801_CODEC_CTRL	0x22
#define FM801_I2S_MODE		0x24
#define FM801_VOLUME		0x26
#define FM801_I2C_CTRL		0x29
#define FM801_AC97_CMD		0x2a
#define FM801_AC97_DATA		0x2c
#define FM801_MPU401_DATA	0x30
#define FM801_MPU401_CMD	0x31
#define FM801_GPIO_CTRL		0x52
#define FM801_GEN_CTRL		0x54
#define FM801_IRQ_MASK		0x56
#define FM801_IRQ_STATUS	0x5a
#define FM801_OPL3_BANK0	0x68
#define FM801_OPL3_DATA0	0x69
#define FM801_OPL3_BANK1	0x6a
#define FM801_OPL3_DATA1	0x6b
#define FM801_POWERDOWN		0x70
#define FM801_AC97_READ		(1<<7)
#define FM801_AC97_VALID	(1<<8)
#define FM801_AC97_BUSY		(1<<9)
#define FM801_AC97_ADDR_SHIFT	10
#define FM801_BUF1_LAST		(1<<1)
#define FM801_BUF2_LAST		(1<<2)
#define FM801_START		(1<<5)
#define FM801_PAUSE		(1<<6)
#define FM801_IMMED_STOP	(1<<7)
#define FM801_RATE_SHIFT	8
#define FM801_RATE_MASK		(15 << FM801_RATE_SHIFT)
#define FM801_CHANNELS_4	(1<<12)
#define FM801_CHANNELS_6	(2<<12)
#define FM801_CHANNELS_6MS	(3<<12)
#define FM801_CHANNELS_MASK	(3<<12)
#define FM801_16BIT		(1<<14)
#define FM801_STEREO		(1<<15)
#define FM801_IRQ_PLAYBACK	(1<<8)
#define FM801_IRQ_CAPTURE	(1<<9)
#define FM801_IRQ_VOLUME	(1<<14)
#define FM801_IRQ_MPU		(1<<15)
#define FM801_GPIO_GP0		(1<<0)
#define FM801_GPIO_GP1		(1<<1)
#define FM801_GPIO_GP2		(1<<2)
#define FM801_GPIO_GP3		(1<<3)
#define FM801_GPIO_GP(x)	(1<<(0+(x)))
#define FM801_GPIO_GD0		(1<<8)
#define FM801_GPIO_GD1		(1<<9)
#define FM801_GPIO_GD2		(1<<10)
#define FM801_GPIO_GD3		(1<<11)
#define FM801_GPIO_GD(x)	(1<<(8+(x)))
#define FM801_GPIO_GS0		(1<<12)
#define FM801_GPIO_GS1		(1<<13)
#define FM801_GPIO_GS2		(1<<14)
#define FM801_GPIO_GS3		(1<<15)
#define FM801_GPIO_GS(x)	(1<<(12+(x)))
struct fm801 ;
static DEFINE_PCI_DEVICE_TABLE(snd_fm801_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_fm801_ids);
static int snd_fm801_update_bits(struct fm801 *chip, unsigned short reg,
unsigned short mask, unsigned short value)
static void snd_fm801_codec_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_fm801_codec_read(struct snd_ac97 *ac97, unsigned short reg)
static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static unsigned int channels[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_channels = ;
static unsigned short snd_fm801_rate_bits(unsigned int rate)
static int snd_fm801_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_fm801_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_fm801_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_fm801_hw_free(struct snd_pcm_substream *substream)
static int snd_fm801_playback_prepare(struct snd_pcm_substream *substream)
static int snd_fm801_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_fm801_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_fm801_capture_pointer(struct snd_pcm_substream *substream)
static irqreturn_t snd_fm801_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_fm801_playback =
;
static struct snd_pcm_hardware snd_fm801_capture =
;
static int snd_fm801_playback_open(struct snd_pcm_substream *substream)
static int snd_fm801_capture_open(struct snd_pcm_substream *substream)
static int snd_fm801_playback_close(struct snd_pcm_substream *substream)
static int snd_fm801_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_fm801_playback_ops = ;
static struct snd_pcm_ops snd_fm801_capture_ops = ;
static int __devinit snd_fm801_pcm(struct fm801 *chip, int device, struct snd_pcm ** rpcm)
struct snd_fm801_tea575x_gpio ;
static struct snd_fm801_tea575x_gpio snd_fm801_tea575x_gpios[] = ;
static void snd_fm801_tea575x_set_pins(struct snd_tea575x *tea, u8 pins)
static u8 snd_fm801_tea575x_get_pins(struct snd_tea575x *tea)
static void snd_fm801_tea575x_set_direction(struct snd_tea575x *tea, bool output)
static struct snd_tea575x_ops snd_fm801_tea_ops = ;
#define FM801_SINGLE(xname, reg, shift, mask, invert) \
static int snd_fm801_info_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_fm801_get_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_fm801_put_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define FM801_DOUBLE(xname, reg, shift_left, shift_right, mask, invert) \
#define FM801_DOUBLE_TLV(xname, reg, shift_left, shift_right, mask, invert, xtlv) \
static int snd_fm801_info_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_fm801_get_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_fm801_put_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_fm801_info_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_fm801_get_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_fm801_put_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_dsp, -3450, 150, 0);
#define FM801_CONTROLS ARRAY_SIZE(snd_fm801_controls)
static struct snd_kcontrol_new snd_fm801_controls[] __devinitdata = ;
#define FM801_CONTROLS_MULTI ARRAY_SIZE(snd_fm801_controls_multi)
static struct snd_kcontrol_new snd_fm801_controls_multi[] __devinitdata = ;
static void snd_fm801_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_fm801_mixer_free_ac97(struct snd_ac97 *ac97)
static int __devinit snd_fm801_mixer(struct fm801 *chip)
static int wait_for_codec(struct fm801 *chip, unsigned int codec_id,
unsigned short reg, unsigned long waits)
static int snd_fm801_chip_init(struct fm801 *chip, int resume)
static int snd_fm801_free(struct fm801 *chip)
static int snd_fm801_dev_free(struct snd_device *device)
static int __devinit snd_fm801_create(struct snd_card *card,
struct pci_dev * pci,
int tea575x_tuner,
struct fm801 ** rchip)
static int __devinit snd_card_fm801_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_card_fm801_remove(struct pci_dev *pci)
static unsigned char saved_regs[] = ;
static int snd_fm801_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_fm801_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_fm801_init(void)
static void __exit alsa_card_fm801_exit(void)
module_init(alsa_card_fm801_init)
module_exit(alsa_card_fm801_exit)
