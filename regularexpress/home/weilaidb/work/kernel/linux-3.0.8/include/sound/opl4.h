#define __SOUND_OPL4_H
struct snd_opl4;
extern int snd_opl4_create(struct snd_card *card,
unsigned long fm_port, unsigned long pcm_port,
int seq_device,
struct snd_opl3 **opl3, struct snd_opl4 **opl4);
