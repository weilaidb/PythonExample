int snd_soc_calc_frame_size(int sample_size, int channels, int tdm_slots)
EXPORT_SYMBOL_GPL(snd_soc_calc_frame_size);
int snd_soc_params_to_frame_size(struct snd_pcm_hw_params *params)
EXPORT_SYMBOL_GPL(snd_soc_params_to_frame_size);
int snd_soc_calc_bclk(int fs, int sample_size, int channels, int tdm_slots)
EXPORT_SYMBOL_GPL(snd_soc_calc_bclk);
int snd_soc_params_to_bclk(struct snd_pcm_hw_params *params)
EXPORT_SYMBOL_GPL(snd_soc_params_to_bclk);
static struct snd_soc_platform_driver dummy_platform;
static __devinit int snd_soc_dummy_probe(struct platform_device *pdev)
static __devexit int snd_soc_dummy_remove(struct platform_device *pdev)
static struct platform_driver soc_dummy_driver = ;
static struct platform_device *soc_dummy_dev;
int __init snd_soc_util_init(void)
void __exit snd_soc_util_exit(void)
