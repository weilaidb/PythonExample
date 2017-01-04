static int snd_emu10k1_timer_start(struct snd_timer *timer)
static int snd_emu10k1_timer_stop(struct snd_timer *timer)
static int snd_emu10k1_timer_precise_resolution(struct snd_timer *timer,
unsigned long *num, unsigned long *den)
static struct snd_timer_hardware snd_emu10k1_timer_hw = ;
int __devinit snd_emu10k1_timer(struct snd_emu10k1 *emu, int device)
