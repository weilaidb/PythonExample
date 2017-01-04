#define MIN_FREQUENCY		10
#define MAX_FREQUENCY		6250
#define DEFAULT_FREQUENCY	1000
#define SKEW_BASE	0x10000
static void snd_seq_timer_set_tick_resolution(struct snd_seq_timer *tmr)
struct snd_seq_timer *snd_seq_timer_new(void)
void snd_seq_timer_delete(struct snd_seq_timer **tmr)
void snd_seq_timer_defaults(struct snd_seq_timer * tmr)
void snd_seq_timer_reset(struct snd_seq_timer * tmr)
static void snd_seq_timer_interrupt(struct snd_timer_instance *timeri,
unsigned long resolution,
unsigned long ticks)
int snd_seq_timer_set_tempo(struct snd_seq_timer * tmr, int tempo)
int snd_seq_timer_set_ppq(struct snd_seq_timer * tmr, int ppq)
int snd_seq_timer_set_position_tick(struct snd_seq_timer *tmr,
snd_seq_tick_time_t position)
int snd_seq_timer_set_position_time(struct snd_seq_timer *tmr,
snd_seq_real_time_t position)
int snd_seq_timer_set_skew(struct snd_seq_timer *tmr, unsigned int skew,
unsigned int base)
int snd_seq_timer_open(struct snd_seq_queue *q)
int snd_seq_timer_close(struct snd_seq_queue *q)
int snd_seq_timer_stop(struct snd_seq_timer * tmr)
static int initialize_timer(struct snd_seq_timer *tmr)
int snd_seq_timer_start(struct snd_seq_timer * tmr)
int snd_seq_timer_continue(struct snd_seq_timer * tmr)
snd_seq_real_time_t snd_seq_timer_get_cur_time(struct snd_seq_timer *tmr)
snd_seq_tick_time_t snd_seq_timer_get_cur_tick(struct snd_seq_timer *tmr)
void snd_seq_info_timer_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
