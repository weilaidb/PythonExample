MODULE_AUTHOR("Adrian McMenamin <adrian@mcmen.demon.co.uk>");
MODULE_DESCRIPTION("Dreamcast AICA sound (pcm) driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_FIRMWARE("aica_firmware.bin");
#define CARD_NAME "AICA"
static int index = -1;
static char *id;
static int enable = 1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param(enable, bool, 0644);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");
static struct workqueue_struct *aica_queue;
static struct platform_device *pd;
static struct resource aica_memory_space[2] = ;
static void spu_write_wait(void)
static void spu_memset(u32 toi, u32 what, int length)
static void spu_memload(u32 toi, void *from, int length)
static void spu_disable(void)
static void spu_enable(void)
static void spu_reset(void)
static void aica_chn_start(void)
static void aica_chn_halt(void)
static struct snd_pcm_hardware snd_pcm_aica_playback_hw = ;
static int aica_dma_transfer(int channels, int buffer_size,
struct snd_pcm_substream *substream)
static void startup_aica(struct snd_card_aica *dreamcastcard)
static void run_spu_dma(struct work_struct *work)
static void aica_period_elapsed(unsigned long timer_var)
static void spu_begin_dma(struct snd_pcm_substream *substream)
static int snd_aicapcm_pcm_open(struct snd_pcm_substream
*substream)
static int snd_aicapcm_pcm_close(struct snd_pcm_substream
*substream)
static int snd_aicapcm_pcm_hw_free(struct snd_pcm_substream
*substream)
static int snd_aicapcm_pcm_hw_params(struct snd_pcm_substream
*substream, struct snd_pcm_hw_params
*hw_params)
static int snd_aicapcm_pcm_prepare(struct snd_pcm_substream
*substream)
static int snd_aicapcm_pcm_trigger(struct snd_pcm_substream
*substream, int cmd)
static unsigned long snd_aicapcm_pcm_pointer(struct snd_pcm_substream
*substream)
static struct snd_pcm_ops snd_aicapcm_playback_ops = ;
static int __init snd_aicapcmchip(struct snd_card_aica
*dreamcastcard, int pcm_index)
#define aica_pcmswitch_info		snd_ctl_boolean_mono_info
static int aica_pcmswitch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int aica_pcmswitch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int aica_pcmvolume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int aica_pcmvolume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int aica_pcmvolume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_aica_pcmswitch_control __devinitdata = ;
static struct snd_kcontrol_new snd_aica_pcmvolume_control __devinitdata = ;
static int load_aica_firmware(void)
static int __devinit add_aicamixer_controls(struct snd_card_aica
*dreamcastcard)
static int __devexit snd_aica_remove(struct platform_device *devptr)
static int __devinit snd_aica_probe(struct platform_device *devptr)
static struct platform_driver snd_aica_driver = ;
static int __init aica_init(void)
static void __exit aica_exit(void)
module_init(aica_init);
module_exit(aica_exit);
