#define __SND_SEQ_PRIOQ_H
struct snd_seq_prioq ;
struct snd_seq_prioq *snd_seq_prioq_new(void);
void snd_seq_prioq_delete(struct snd_seq_prioq **fifo);
int snd_seq_prioq_cell_in(struct snd_seq_prioq *f, struct snd_seq_event_cell *cell);
struct snd_seq_event_cell *snd_seq_prioq_cell_out(struct snd_seq_prioq *f);
int snd_seq_prioq_avail(struct snd_seq_prioq *f);
struct snd_seq_event_cell *snd_seq_prioq_cell_peek(struct snd_seq_prioq *f);
void snd_seq_prioq_leave(struct snd_seq_prioq *f, int client, int timestamp);
void snd_seq_prioq_remove_events(struct snd_seq_prioq *f, int client,
struct snd_seq_remove_events *info);
