#define __SOUND_MIXER_OSS_H
#if defined(CONFIG_SND_MIXER_OSS) || defined(CONFIG_SND_MIXER_OSS_MODULE)
#define SNDRV_OSS_MAX_MIXERS	32
struct snd_mixer_oss_file;
struct snd_mixer_oss_slot ;
struct snd_mixer_oss ;
struct snd_mixer_oss_file ;
int snd_mixer_oss_ioctl_card(struct snd_card *card,
unsigned int cmd, unsigned long arg);
