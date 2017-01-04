#define __SOUND_SEQ_VIRMIDI_H
struct snd_virmidi ;
#define SNDRV_VIRMIDI_SUBSCRIBE		(1<<0)
#define SNDRV_VIRMIDI_USE		(1<<1)
struct snd_virmidi_dev ;
#define SNDRV_VIRMIDI_SEQ_NONE		0
#define SNDRV_VIRMIDI_SEQ_ATTACH	1
#define SNDRV_VIRMIDI_SEQ_DISPATCH	2
int snd_virmidi_new(struct snd_card *card, int device, struct snd_rawmidi **rrmidi);
