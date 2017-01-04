static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for SGI HAL2 soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for SGI HAL2 soundcard.");
MODULE_DESCRIPTION("ALSA driver for SGI HAL2 audio");
MODULE_AUTHOR("Thomas Bogendoerfer");
MODULE_LICENSE("GPL");
#define H2_BLOCK_SIZE	1024
#define H2_BUF_SIZE	16384
struct hal2_pbus ;
struct hal2_desc ;
struct hal2_codec ;
#define H2_MIX_OUTPUT_ATT	0
#define H2_MIX_INPUT_GAIN	1
struct snd_hal2 ;
#define H2_INDIRECT_WAIT(regs)	while (hal2_read(&regs->isr) & H2_ISR_TSTATUS);
#define H2_READ_ADDR(addr)	(addr | (1<<7))
#define H2_WRITE_ADDR(addr)	(addr)
static inline u32 hal2_read(u32 *reg)
static inline void hal2_write(u32 val, u32 *reg)
static u32 hal2_i_read32(struct snd_hal2 *hal2, u16 addr)
static void hal2_i_write16(struct snd_hal2 *hal2, u16 addr, u16 val)
static void hal2_i_write32(struct snd_hal2 *hal2, u16 addr, u32 val)
static void hal2_i_setbit16(struct snd_hal2 *hal2, u16 addr, u16 bit)
static void hal2_i_clearbit16(struct snd_hal2 *hal2, u16 addr, u16 bit)
static int hal2_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int hal2_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int hal2_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new hal2_ctrl_headphone __devinitdata = ;
static struct snd_kcontrol_new hal2_ctrl_mic __devinitdata = ;
static int __devinit hal2_mixer_create(struct snd_hal2 *hal2)
static irqreturn_t hal2_interrupt(int irq, void *dev_id)
static int hal2_compute_rate(struct hal2_codec *codec, unsigned int rate)
static void hal2_set_dac_rate(struct snd_hal2 *hal2)
static void hal2_set_adc_rate(struct snd_hal2 *hal2)
static void hal2_setup_dac(struct snd_hal2 *hal2)
static void hal2_setup_adc(struct snd_hal2 *hal2)
static void hal2_start_dac(struct snd_hal2 *hal2)
static void hal2_start_adc(struct snd_hal2 *hal2)
static inline void hal2_stop_dac(struct snd_hal2 *hal2)
static inline void hal2_stop_adc(struct snd_hal2 *hal2)
static int hal2_alloc_dmabuf(struct hal2_codec *codec)
static void hal2_free_dmabuf(struct hal2_codec *codec)
static struct snd_pcm_hardware hal2_pcm_hw = ;
static int hal2_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int hal2_pcm_hw_free(struct snd_pcm_substream *substream)
static int hal2_playback_open(struct snd_pcm_substream *substream)
static int hal2_playback_close(struct snd_pcm_substream *substream)
static int hal2_playback_prepare(struct snd_pcm_substream *substream)
static int hal2_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
hal2_playback_pointer(struct snd_pcm_substream *substream)
static void hal2_playback_transfer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int hal2_playback_ack(struct snd_pcm_substream *substream)
static int hal2_capture_open(struct snd_pcm_substream *substream)
static int hal2_capture_close(struct snd_pcm_substream *substream)
static int hal2_capture_prepare(struct snd_pcm_substream *substream)
static int hal2_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
hal2_capture_pointer(struct snd_pcm_substream *substream)
static void hal2_capture_transfer(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int hal2_capture_ack(struct snd_pcm_substream *substream)
static struct snd_pcm_ops hal2_playback_ops = ;
static struct snd_pcm_ops hal2_capture_ops = ;
static int __devinit hal2_pcm_create(struct snd_hal2 *hal2)
static int hal2_dev_free(struct snd_device *device)
static struct snd_device_ops hal2_ops = ;
static void hal2_init_codec(struct hal2_codec *codec, struct hpc3_regs *hpc3,
int index)
static int hal2_detect(struct snd_hal2 *hal2)
static int hal2_create(struct snd_card *card, struct snd_hal2 **rchip)
static int __devinit hal2_probe(struct platform_device *pdev)
static int __devexit hal2_remove(struct platform_device *pdev)
static struct platform_driver hal2_driver = ;
static int __init alsa_card_hal2_init(void)
static void __exit alsa_card_hal2_exit(void)
module_init(alsa_card_hal2_init);
module_exit(alsa_card_hal2_exit);
