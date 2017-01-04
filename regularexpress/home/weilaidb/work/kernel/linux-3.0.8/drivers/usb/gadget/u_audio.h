#define __U_AUDIO_H
struct gaudio_snd_dev ;
struct gaudio ;
int gaudio_setup(struct gaudio *card);
void gaudio_cleanup(void);
