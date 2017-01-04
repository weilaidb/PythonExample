MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("ALSA hrtimer backend");
MODULE_LICENSE("GPL");
MODULE_ALIAS("snd-timer-" __stringify(SNDRV_TIMER_GLOBAL_HRTIMER));
#define NANO_SEC	1000000000UL
static unsigned int resolution;
struct snd_hrtimer ;
static enum hrtimer_restart snd_hrtimer_callback(struct hrtimer *hrt)
static int snd_hrtimer_open(struct snd_timer *t)
static int snd_hrtimer_close(struct snd_timer *t)
static int snd_hrtimer_start(struct snd_timer *t)
static int snd_hrtimer_stop(struct snd_timer *t)
static struct snd_timer_hardware hrtimer_hw = ;
static struct snd_timer *mytimer;
static int __init snd_hrtimer_init(void)
static void __exit snd_hrtimer_exit(void)
module_init(snd_hrtimer_init);
module_exit(snd_hrtimer_exit);
