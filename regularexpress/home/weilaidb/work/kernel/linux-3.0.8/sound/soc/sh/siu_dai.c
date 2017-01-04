#if defined(CONFIG_CPU_SUBTYPE_SH7722)
# define SIU_MAX_VOLUME		0x1000
# define SIU_MAX_VOLUME		0x7fff
#define PRAM_SIZE	0x2000
#define XRAM_SIZE	0x800
#define YRAM_SIZE	0x800
#define XRAM_OFFSET	0x4000
#define YRAM_OFFSET	0x6000
#define REG_OFFSET	0xc000
#define PLAYBACK_ENABLED	1
#define CAPTURE_ENABLED		2
#define VOLUME_CAPTURE		0
#define VOLUME_PLAYBACK		1
#define DFLT_VOLUME_LEVEL	0x08000800
struct format_flag ;
struct port_flag ;
struct siu_info *siu_i2s_data;
static struct port_flag siu_flags[SIU_PORT_NUM] = ;
static void siu_dai_start(struct siu_port *port_info)
static void siu_dai_stop(struct siu_port *port_info)
static void siu_dai_spbAselect(struct siu_port *port_info)
static void siu_dai_spbBselect(struct siu_port *port_info)
static void siu_dai_open(struct siu_stream *siu_stream)
static void siu_dai_pcmdatapack(struct siu_stream *siu_stream)
static int siu_dai_spbstart(struct siu_port *port_info)
static void siu_dai_spbstop(struct siu_port *port_info)
static struct snd_pcm_hardware siu_dai_pcm_hw = ;
static int siu_dai_info_volume(struct snd_kcontrol *kctrl,
struct snd_ctl_elem_info *uinfo)
static int siu_dai_get_volume(struct snd_kcontrol *kctrl,
struct snd_ctl_elem_value *ucontrol)
static int siu_dai_put_volume(struct snd_kcontrol *kctrl,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new playback_controls = ;
static struct snd_kcontrol_new capture_controls = ;
int siu_init_port(int port, struct siu_port **port_info, struct snd_card *card)
void siu_free_port(struct siu_port *port_info)
static int siu_dai_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void siu_dai_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int siu_dai_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int siu_dai_set_fmt(struct snd_soc_dai *dai,
unsigned int fmt)
static int siu_dai_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static struct snd_soc_dai_ops siu_dai_ops = ;
static struct snd_soc_dai_driver siu_i2s_dai = ;
static int __devinit siu_probe(struct platform_device *pdev)
static int __devexit siu_remove(struct platform_device *pdev)
static struct platform_driver siu_driver = ;
static int __init siu_init(void)
static void __exit siu_exit(void)
module_init(siu_init)
module_exit(siu_exit)
MODULE_AUTHOR("Carlos Munoz <carlos@kenati.com>");
MODULE_DESCRIPTION("ALSA SoC SH7722 SIU driver");
MODULE_LICENSE("GPL");
