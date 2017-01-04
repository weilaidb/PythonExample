#define __SND_SEQ_TIMER_H
struct snd_seq_timer_tick ;
struct snd_seq_timer ;
struct snd_seq_timer *snd_seq_timer_new(void);
void snd_seq_timer_delete(struct snd_seq_timer **tmr);
static inline void snd_seq_timer_update_tick(struct snd_seq_timer_tick *tick,
unsigned long resolution)
static inline int snd_seq_compare_tick_time(snd_seq_tick_time_t *a, snd_seq_tick_time_t *b)
static inline int snd_seq_compare_real_time(snd_seq_real_time_t *a, snd_seq_real_time_t *b)
static inline void snd_seq_sanity_real_time(snd_seq_real_time_t *tm)
static inline void snd_seq_inc_real_time(snd_seq_real_time_t *tm, snd_seq_real_time_t *inc)
static inline void snd_seq_inc_time_nsec(snd_seq_real_time_t *tm, unsigned long nsec)
struct snd_seq_queue;
int snd_seq_timer_open(struct snd_seq_queue *q);
int snd_seq_timer_close(struct snd_seq_queue *q);
int snd_seq_timer_midi_open(struct snd_seq_queue *q);
int snd_seq_timer_midi_close(struct snd_seq_queue *q);
void snd_seq_timer_defaults(struct snd_seq_timer *tmr);
void snd_seq_timer_reset(struct snd_seq_timer *tmr);
int snd_seq_timer_stop(struct snd_seq_timer *tmr);
int snd_seq_timer_start(struct snd_seq_timer *tmr);
int snd_seq_timer_continue(struct snd_seq_timer *tmr);
int snd_seq_timer_set_tempo(struct snd_seq_timer *tmr, int tempo);
int snd_seq_timer_set_ppq(struct snd_seq_timer *tmr, int ppq);
int snd_seq_timer_set_position_tick(struct snd_seq_timer *tmr, snd_seq_tick_time_t position);
int snd_seq_timer_set_position_time(struct snd_seq_timer *tmr, snd_seq_real_time_t position);
int snd_seq_timer_set_skew(struct snd_seq_timer *tmr, unsigned int skew, unsigned int base);
snd_seq_real_time_t snd_seq_timer_get_cur_time(struct snd_seq_timer *tmr);
snd_seq_tick_time_t snd_seq_timer_get_cur_tick(struct snd_seq_timer *tmr);
extern int seq_default_timer_class;
extern int seq_default_timer_sclass;
extern int seq_default_timer_card;
extern int seq_default_timer_device;
extern int seq_default_timer_subdevice;
extern int seq_default_timer_resolution;
