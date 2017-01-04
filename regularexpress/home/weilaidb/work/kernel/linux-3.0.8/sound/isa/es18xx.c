#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
#define PFX "es18xx: "
struct snd_es18xx ;
#define AUDIO1_IRQ	0x01
#define AUDIO2_IRQ	0x02
#define HWV_IRQ		0x04
#define MPU_IRQ		0x08
#define ES18XX_PCM2	0x0001
#define ES18XX_SPATIALIZER 0x0002
#define ES18XX_RECMIX	0x0004
#define ES18XX_DUPLEX_MONO 0x0008
#define ES18XX_DUPLEX_SAME 0x0010
#define ES18XX_NEW_RATE	0x0020
#define ES18XX_AUXB	0x0040
#define ES18XX_HWV	0x0080
#define ES18XX_MONO	0x0100
#define ES18XX_I2S	0x0200
#define ES18XX_MUTEREC	0x0400
#define ES18XX_CONTROL	0x0800
#define ES18XX_PM	0x07
#define ES18XX_PM_GPO0	0x01
#define ES18XX_PM_GPO1	0x02
#define ES18XX_PM_PDR	0x04
#define ES18XX_PM_ANA	0x08
#define ES18XX_PM_FM	0x020
#define ES18XX_PM_SUS	0x080
#define DAC1 0x01
#define ADC1 0x02
#define DAC2 0x04
#define MILLISECOND 10000
static int snd_es18xx_dsp_command(struct snd_es18xx *chip, unsigned char val)
static int snd_es18xx_dsp_get_byte(struct snd_es18xx *chip)
#undef REG_DEBUG
static int snd_es18xx_write(struct snd_es18xx *chip,
unsigned char reg, unsigned char data)
static int snd_es18xx_read(struct snd_es18xx *chip, unsigned char reg)
static int snd_es18xx_bits(struct snd_es18xx *chip, unsigned char reg,
unsigned char mask, unsigned char val)
static inline void snd_es18xx_mixer_write(struct snd_es18xx *chip,
unsigned char reg, unsigned char data)
static inline int snd_es18xx_mixer_read(struct snd_es18xx *chip, unsigned char reg)
static inline int snd_es18xx_mixer_bits(struct snd_es18xx *chip, unsigned char reg,
unsigned char mask, unsigned char val)
static inline int snd_es18xx_mixer_writable(struct snd_es18xx *chip, unsigned char reg,
unsigned char mask)
static int __devinit snd_es18xx_reset(struct snd_es18xx *chip)
static int snd_es18xx_reset_fifo(struct snd_es18xx *chip)
static struct snd_ratnum new_clocks[2] = ;
static struct snd_pcm_hw_constraint_ratnums new_hw_constraints_clocks = ;
static struct snd_ratnum old_clocks[2] = ;
static struct snd_pcm_hw_constraint_ratnums old_hw_constraints_clocks  = ;
static void snd_es18xx_rate_set(struct snd_es18xx *chip,
struct snd_pcm_substream *substream,
int mode)
static int snd_es18xx_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_es18xx_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_es18xx_playback1_prepare(struct snd_es18xx *chip,
struct snd_pcm_substream *substream)
static int snd_es18xx_playback1_trigger(struct snd_es18xx *chip,
struct snd_pcm_substream *substream,
int cmd)
static int snd_es18xx_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_es18xx_capture_prepare(struct snd_pcm_substream *substream)
static int snd_es18xx_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_es18xx_playback2_prepare(struct snd_es18xx *chip,
struct snd_pcm_substream *substream)
static int snd_es18xx_playback2_trigger(struct snd_es18xx *chip,
struct snd_pcm_substream *substream,
int cmd)
static int snd_es18xx_playback_prepare(struct snd_pcm_substream *substream)
static int snd_es18xx_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static irqreturn_t snd_es18xx_interrupt(int irq, void *dev_id)
static snd_pcm_uframes_t snd_es18xx_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_es18xx_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_es18xx_playback =
;
static struct snd_pcm_hardware snd_es18xx_capture =
;
static int snd_es18xx_playback_open(struct snd_pcm_substream *substream)
static int snd_es18xx_capture_open(struct snd_pcm_substream *substream)
static int snd_es18xx_playback_close(struct snd_pcm_substream *substream)
static int snd_es18xx_capture_close(struct snd_pcm_substream *substream)
static int snd_es18xx_info_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es18xx_get_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es18xx_put_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define snd_es18xx_info_spatializer_enable	snd_ctl_boolean_mono_info
static int snd_es18xx_get_spatializer_enable(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es18xx_put_spatializer_enable(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es18xx_info_hw_volume(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es18xx_get_hw_volume(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define snd_es18xx_info_hw_switch	snd_ctl_boolean_stereo_info
static int snd_es18xx_get_hw_switch(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static void snd_es18xx_hwv_free(struct snd_kcontrol *kcontrol)
static int snd_es18xx_reg_bits(struct snd_es18xx *chip, unsigned char reg,
unsigned char mask, unsigned char val)
static int snd_es18xx_reg_read(struct snd_es18xx *chip, unsigned char reg)
#define ES18XX_SINGLE(xname, xindex, reg, shift, mask, invert) \
static int snd_es18xx_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es18xx_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es18xx_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define ES18XX_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
static int snd_es18xx_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_es18xx_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_es18xx_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_es18xx_base_controls[] = ;
static struct snd_kcontrol_new snd_es18xx_recmix_controls[] = ;
static struct snd_kcontrol_new snd_es18xx_opt_speaker =
ES18XX_SINGLE("Beep Playback Volume", 0, 0x3c, 0, 7, 0);
static struct snd_kcontrol_new snd_es18xx_opt_1869[] = ;
static struct snd_kcontrol_new snd_es18xx_opt_1878 =
ES18XX_DOUBLE("Video Playback Volume", 0, 0x68, 0x68, 4, 0, 15, 0);
static struct snd_kcontrol_new snd_es18xx_opt_1879[] = ;
static struct snd_kcontrol_new snd_es18xx_pcm1_controls[] = ;
static struct snd_kcontrol_new snd_es18xx_pcm2_controls[] = ;
static struct snd_kcontrol_new snd_es18xx_spatializer_controls[] = ;
static struct snd_kcontrol_new snd_es18xx_micpre1_control =
ES18XX_SINGLE("Mic Boost (+26dB)", 0, 0xa9, 2, 1, 0);
static struct snd_kcontrol_new snd_es18xx_micpre2_control =
ES18XX_SINGLE("Mic Boost (+26dB)", 0, 0x7d, 3, 1, 0);
static struct snd_kcontrol_new snd_es18xx_hw_volume_controls[] = ;
static int __devinit snd_es18xx_config_read(struct snd_es18xx *chip, unsigned char reg)
static void __devinit snd_es18xx_config_write(struct snd_es18xx *chip,
unsigned char reg, unsigned char data)
static int __devinit snd_es18xx_initialize(struct snd_es18xx *chip,
unsigned long mpu_port,
unsigned long fm_port)
static int __devinit snd_es18xx_identify(struct snd_es18xx *chip)
static int __devinit snd_es18xx_probe(struct snd_es18xx *chip,
unsigned long mpu_port,
unsigned long fm_port)
static struct snd_pcm_ops snd_es18xx_playback_ops = ;
static struct snd_pcm_ops snd_es18xx_capture_ops = ;
static int __devinit snd_es18xx_pcm(struct snd_card *card, int device,
struct snd_pcm **rpcm)
static int snd_es18xx_suspend(struct snd_card *card, pm_message_t state)
static int snd_es18xx_resume(struct snd_card *card)
static int snd_es18xx_free(struct snd_card *card)
static int snd_es18xx_dev_free(struct snd_device *device)
static int __devinit snd_es18xx_new_device(struct snd_card *card,
unsigned long port,
unsigned long mpu_port,
unsigned long fm_port,
int irq, int dma1, int dma2)
static int __devinit snd_es18xx_mixer(struct snd_card *card)
MODULE_AUTHOR("Christian Fischbach <fishbach@pool.informatik.rwth-aachen.de>, Abramo Bagnara <abramo@alsa-project.org>");
MODULE_DESCRIPTION("ESS ES18xx AudioDrive");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int isapnp[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = ;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ES18xx soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ES18xx soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable ES18xx soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "PnP detection for specified soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for ES18xx driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for ES18xx driver.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for ES18xx driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for ES18xx driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA 1 # for ES18xx driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA 2 # for ES18xx driver.");
static int isa_registered;
static int pnp_registered;
static int pnpc_registered;
static struct pnp_device_id snd_audiodrive_pnpbiosids[] = ;
MODULE_DEVICE_TABLE(pnp, snd_audiodrive_pnpbiosids);
static int __devinit snd_audiodrive_pnp_init_main(int dev, struct pnp_dev *pdev)
static int __devinit snd_audiodrive_pnp(int dev, struct snd_es18xx *chip,
struct pnp_dev *pdev)
static struct pnp_card_device_id snd_audiodrive_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_audiodrive_pnpids);
static int __devinit snd_audiodrive_pnpc(int dev, struct snd_es18xx *chip,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
#define is_isapnp_selected(dev)		isapnp[dev]
#define is_isapnp_selected(dev)		0
static int snd_es18xx_card_new(int dev, struct snd_card **cardp)
static int __devinit snd_audiodrive_probe(struct snd_card *card, int dev)
static int __devinit snd_es18xx_isa_match(struct device *pdev, unsigned int dev)
static int __devinit snd_es18xx_isa_probe1(int dev, struct device *devptr)
static int __devinit snd_es18xx_isa_probe(struct device *pdev, unsigned int dev)
static int __devexit snd_es18xx_isa_remove(struct device *devptr,
unsigned int dev)
static int snd_es18xx_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int snd_es18xx_isa_resume(struct device *dev, unsigned int n)
#define DEV_NAME "es18xx"
static struct isa_driver snd_es18xx_isa_driver = ;
static int __devinit snd_audiodrive_pnp_detect(struct pnp_dev *pdev,
const struct pnp_device_id *id)
static void __devexit snd_audiodrive_pnp_remove(struct pnp_dev * pdev)
static int snd_audiodrive_pnp_suspend(struct pnp_dev *pdev, pm_message_t state)
static int snd_audiodrive_pnp_resume(struct pnp_dev *pdev)
static struct pnp_driver es18xx_pnp_driver = ;
static int __devinit snd_audiodrive_pnpc_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_audiodrive_pnpc_remove(struct pnp_card_link * pcard)
static int snd_audiodrive_pnpc_suspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_audiodrive_pnpc_resume(struct pnp_card_link *pcard)
static struct pnp_card_driver es18xx_pnpc_driver = ;
static int __init alsa_card_es18xx_init(void)
static void __exit alsa_card_es18xx_exit(void)
module_init(alsa_card_es18xx_init)
module_exit(alsa_card_es18xx_exit)
