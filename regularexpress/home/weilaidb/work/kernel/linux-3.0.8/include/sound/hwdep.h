#define __SOUND_HWDEP_H
struct snd_hwdep;
struct snd_hwdep_ops ;
struct snd_hwdep ;
extern int snd_hwdep_new(struct snd_card *card, char *id, int device,
struct snd_hwdep **rhwdep);
