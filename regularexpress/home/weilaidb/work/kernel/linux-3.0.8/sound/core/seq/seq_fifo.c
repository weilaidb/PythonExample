struct snd_seq_fifo *snd_seq_fifo_new(int poolsize)
void snd_seq_fifo_delete(struct snd_seq_fifo **fifo)
static struct snd_seq_event_cell *fifo_cell_out(struct snd_seq_fifo *f);
void snd_seq_fifo_clear(struct snd_seq_fifo *f)
int snd_seq_fifo_event_in(struct snd_seq_fifo *f,
struct snd_seq_event *event)
static struct snd_seq_event_cell *fifo_cell_out(struct snd_seq_fifo *f)
int snd_seq_fifo_cell_out(struct snd_seq_fifo *f,
struct snd_seq_event_cell **cellp, int nonblock)
void snd_seq_fifo_cell_putback(struct snd_seq_fifo *f,
struct snd_seq_event_cell *cell)
int snd_seq_fifo_poll_wait(struct snd_seq_fifo *f, struct file *file,
poll_table *wait)
int snd_seq_fifo_resize(struct snd_seq_fifo *f, int poolsize)
