extern void simtec_audio_init(struct snd_soc_pcm_runtime *rtd);
extern int simtec_audio_core_probe(struct platform_device *pdev,
struct snd_soc_card *card);
extern int simtec_audio_remove(struct platform_device *pdev);
extern const struct dev_pm_ops simtec_audio_pmops;
#define simtec_audio_pm &simtec_audio_pmops
#define simtec_audio_pm NULL
