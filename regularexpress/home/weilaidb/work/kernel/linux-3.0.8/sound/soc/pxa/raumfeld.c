#define GPIO_SPDIF_RESET	(38)
#define GPIO_MCLK_RESET		(111)
#define GPIO_CODEC_RESET	(120)
static struct i2c_client *max9486_client;
static struct i2c_board_info max9486_hwmon_info = ;
#define MAX9485_MCLK_FREQ_112896 0x22
#define MAX9485_MCLK_FREQ_122880 0x23
#define MAX9485_MCLK_FREQ_225792 0x32
#define MAX9485_MCLK_FREQ_245760 0x33
static void set_max9485_clk(char clk)
static void raumfeld_enable_audio(bool en)
static int raumfeld_cs4270_startup(struct snd_pcm_substream *substream)
static void raumfeld_cs4270_shutdown(struct snd_pcm_substream *substream)
static int raumfeld_cs4270_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops raumfeld_cs4270_ops = ;
static int raumfeld_analog_suspend(struct snd_soc_card *card)
static int raumfeld_analog_resume(struct snd_soc_card *card)
static int raumfeld_ak4104_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops raumfeld_ak4104_ops = ;
#define DAI_LINK_CS4270		\
#define DAI_LINK_AK4104		\
static struct snd_soc_dai_link snd_soc_raumfeld_connector_dai[] =
;
static struct snd_soc_dai_link snd_soc_raumfeld_speaker_dai[] =
;
static struct snd_soc_card snd_soc_raumfeld_connector = ;
static struct snd_soc_card snd_soc_raumfeld_speaker = ;
static struct platform_device *raumfeld_audio_device;
static int __init raumfeld_audio_init(void)
static void __exit raumfeld_audio_exit(void)
module_init(raumfeld_audio_init);
module_exit(raumfeld_audio_exit);
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("Raumfeld audio SoC");
MODULE_LICENSE("GPL");
