#define __SOUND_TEA575X_TUNER_H
#define TEA575X_FMIF	10700
#define TEA575X_DATA	(1 << 0)
#define TEA575X_CLK	(1 << 1)
#define TEA575X_WREN	(1 << 2)
#define TEA575X_MOST	(1 << 3)
struct snd_tea575x;
struct snd_tea575x_ops ;
struct snd_tea575x ;
int snd_tea575x_init(struct snd_tea575x *tea);
void snd_tea575x_exit(struct snd_tea575x *tea);
