static int snd_gf1_timer1_start(struct snd_timer * timer)
static int snd_gf1_timer1_stop(struct snd_timer * timer)
static int snd_gf1_timer2_start(struct snd_timer * timer)
static int snd_gf1_timer2_stop(struct snd_timer * timer)
static void snd_gf1_interrupt_timer1(struct snd_gus_card * gus)
static void snd_gf1_interrupt_timer2(struct snd_gus_card * gus)
static struct snd_timer_hardware snd_gf1_timer1 =
;
static struct snd_timer_hardware snd_gf1_timer2 =
;
static void snd_gf1_timer1_free(struct snd_timer *timer)
static void snd_gf1_timer2_free(struct snd_timer *timer)
void snd_gf1_timers_init(struct snd_gus_card * gus)
void snd_gf1_timers_done(struct snd_gus_card * gus)
