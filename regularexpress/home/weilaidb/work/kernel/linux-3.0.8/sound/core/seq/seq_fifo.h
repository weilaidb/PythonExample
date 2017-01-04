#define __SND_SEQ_FIFO_H
struct snd_seq_fifo ;
struct snd_seq_fifo *snd_seq_fifo_new(int poolsize);
void snd_seq_fifo_delete(struct snd_seq_fifo **f);
int snd_seq_fifo_event_in(struct snd_seq_fifo *f, struct snd_seq_event *event);
#define snd_seq_fifo_lock(fifo)		snd_use_lock_use(&(fifo)->use_lock)
#define snd_seq_fifo_unlock(fifo)	snd_use_lock_free(&(fifo)->use_lock)
int snd_seq_fifo_cell_out(struct snd_seq_fifo *f, struct snd_seq_event_cell **cellp, int nonblock);
void snd_seq_fifo_cell_putback(struct snd_seq_fifo *f, struct snd_seq_event_cell *cell);
void snd_seq_fifo_clear(struct snd_seq_fifo *f);
int snd_seq_fifo_poll_wait(struct snd_seq_fifo *f, struct file *file, poll_table *wait);
int snd_seq_fifo_resize(struct snd_seq_fifo *f, int poolsize);
