#define __PMAC_H
#define PMAC_MAX_FRAGS		32
#define PMAC_SUPPORT_AUTOMUTE
struct pmac_dbdma ;
struct pmac_stream ;
enum snd_pmac_model ;
struct snd_pmac ;
int snd_pmac_new(struct snd_card *card, struct snd_pmac **chip_return);
int snd_pmac_pcm_new(struct snd_pmac *chip);
int snd_pmac_attach_beep(struct snd_pmac *chip);
void snd_pmac_detach_beep(struct snd_pmac *chip);
void snd_pmac_beep_stop(struct snd_pmac *chip);
unsigned int snd_pmac_rate_index(struct snd_pmac *chip, struct pmac_stream *rec, unsigned int rate);
void snd_pmac_beep_dma_start(struct snd_pmac *chip, int bytes, unsigned long addr, int speed);
void snd_pmac_beep_dma_stop(struct snd_pmac *chip);
void snd_pmac_suspend(struct snd_pmac *chip);
void snd_pmac_resume(struct snd_pmac *chip);
int snd_pmac_awacs_init(struct snd_pmac *chip);
int snd_pmac_burgundy_init(struct snd_pmac *chip);
int snd_pmac_daca_init(struct snd_pmac *chip);
int snd_pmac_tumbler_init(struct snd_pmac *chip);
int snd_pmac_tumbler_post_init(void);
struct pmac_keywest ;
int snd_pmac_keywest_init(struct pmac_keywest *i2c);
void snd_pmac_keywest_cleanup(struct pmac_keywest *i2c);
#define snd_pmac_boolean_stereo_info	snd_ctl_boolean_stereo_info
#define snd_pmac_boolean_mono_info	snd_ctl_boolean_mono_info
int snd_pmac_add_automute(struct snd_pmac *chip);
