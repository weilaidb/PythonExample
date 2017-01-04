#define __OMAP_ALSA_H
#define DMA_BUF_SIZE	(1024 * 8)
struct audio_stream ;
struct snd_card_omap_codec ;
struct omap_alsa_codec_config ;
int snd_omap_mixer(struct snd_card_omap_codec *);
void snd_omap_init_mixer(void);
void snd_omap_suspend_mixer(void);
void snd_omap_resume_mixer(void);
int snd_omap_alsa_post_probe(struct platform_device *pdev, struct omap_alsa_codec_config *config);
int snd_omap_alsa_remove(struct platform_device *pdev);
int snd_omap_alsa_suspend(struct platform_device *pdev, pm_message_t state);
int snd_omap_alsa_resume(struct platform_device *pdev);
#define snd_omap_alsa_suspend	NULL
#define snd_omap_alsa_resume	NULL
void callback_omap_alsa_sound_dma(void *);
