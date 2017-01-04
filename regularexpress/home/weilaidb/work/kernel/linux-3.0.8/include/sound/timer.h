#define __SOUND_TIMER_H
#define snd_timer_chip(timer) ((timer)->private_data)
#define SNDRV_TIMER_DEVICES	16
#define SNDRV_TIMER_DEV_FLG_PCM	0x10000000
#define SNDRV_TIMER_HW_AUTO	0x00000001
#define SNDRV_TIMER_HW_STOP	0x00000002
#define SNDRV_TIMER_HW_SLAVE	0x00000004
#define SNDRV_TIMER_HW_FIRST	0x00000008
#define SNDRV_TIMER_HW_TASKLET	0x00000010
#define SNDRV_TIMER_IFLG_SLAVE	  0x00000001
#define SNDRV_TIMER_IFLG_RUNNING  0x00000002
#define SNDRV_TIMER_IFLG_START	  0x00000004
#define SNDRV_TIMER_IFLG_AUTO	  0x00000008
#define SNDRV_TIMER_IFLG_FAST	  0x00000010
#define SNDRV_TIMER_IFLG_CALLBACK 0x00000020
#define SNDRV_TIMER_IFLG_EXCLUSIVE 0x00000040
#define SNDRV_TIMER_IFLG_EARLY_EVENT 0x00000080
#define SNDRV_TIMER_FLG_CHANGE	0x00000001
#define SNDRV_TIMER_FLG_RESCHED	0x00000002
struct snd_timer;
struct snd_timer_hardware ;
struct snd_timer ;
struct snd_timer_instance ;
int snd_timer_new(struct snd_card *card, char *id, struct snd_timer_id *tid, struct snd_timer **rtimer);
void snd_timer_notify(struct snd_timer *timer, int event, struct timespec *tstamp);
int snd_timer_global_new(char *id, int device, struct snd_timer **rtimer);
int snd_timer_global_free(struct snd_timer *timer);
int snd_timer_global_register(struct snd_timer *timer);
int snd_timer_open(struct snd_timer_instance **ti, char *owner, struct snd_timer_id *tid, unsigned int slave_id);
int snd_timer_close(struct snd_timer_instance *timeri);
unsigned long snd_timer_resolution(struct snd_timer_instance *timeri);
int snd_timer_start(struct snd_timer_instance *timeri, unsigned int ticks);
int snd_timer_stop(struct snd_timer_instance *timeri);
int snd_timer_continue(struct snd_timer_instance *timeri);
int snd_timer_pause(struct snd_timer_instance *timeri);
void snd_timer_interrupt(struct snd_timer *timer, unsigned long ticks_left);
