#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct snd_pcm_hardware sst_platform_pcm_hw = ;
struct snd_soc_dai_driver sst_platform_dai[] = ;
static inline void sst_set_stream_status(struct sst_runtime_stream *stream,
int state)
static inline int sst_get_stream_status(struct sst_runtime_stream *stream)
static void sst_fill_pcm_params(struct snd_pcm_substream *substream,
struct snd_sst_stream_params *param)
static int sst_platform_alloc_stream(struct snd_pcm_substream *substream)
static void sst_period_elapsed(void *mad_substream)
static int sst_platform_init_stream(struct snd_pcm_substream *substream)
static int sst_platform_open(struct snd_pcm_substream *substream)
static int sst_platform_close(struct snd_pcm_substream *substream)
static int sst_platform_pcm_prepare(struct snd_pcm_substream *substream)
static int sst_platform_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t sst_platform_pcm_pointer
(struct snd_pcm_substream *substream)
static int sst_platform_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int sst_platform_pcm_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_ops sst_platform_ops = ;
static void sst_pcm_free(struct snd_pcm *pcm)
int sst_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
struct snd_soc_platform_driver sst_soc_platform_drv = ;
static int sst_platform_probe(struct platform_device *pdev)
static int sst_platform_remove(struct platform_device *pdev)
static struct platform_driver sst_platform_driver = ;
static int __init sst_soc_platform_init(void)
module_init(sst_soc_platform_init);
static void __exit sst_soc_platform_exit(void)
module_exit(sst_soc_platform_exit);
MODULE_DESCRIPTION("ASoC Intel(R) MID Platform driver");
MODULE_AUTHOR("Vinod Koul <vinod.koul@intel.com>");
MODULE_AUTHOR("Harsha Priya <priya.harsha@intel.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:sst-platform");
