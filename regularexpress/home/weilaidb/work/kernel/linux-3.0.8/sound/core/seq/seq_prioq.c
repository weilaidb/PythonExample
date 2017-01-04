struct snd_seq_prioq *snd_seq_prioq_new(void)
void snd_seq_prioq_delete(struct snd_seq_prioq **fifo)
static inline int compare_timestamp(struct snd_seq_event *a,
struct snd_seq_event *b)
static inline int compare_timestamp_rel(struct snd_seq_event *a,
struct snd_seq_event *b)
int snd_seq_prioq_cell_in(struct snd_seq_prioq * f,
struct snd_seq_event_cell * cell)
struct snd_seq_event_cell *snd_seq_prioq_cell_out(struct snd_seq_prioq *f)
int snd_seq_prioq_avail(struct snd_seq_prioq * f)
struct snd_seq_event_cell *snd_seq_prioq_cell_peek(struct snd_seq_prioq * f)
static inline int prioq_match(struct snd_seq_event_cell *cell,
int client, int timestamp)
void snd_seq_prioq_leave(struct snd_seq_prioq * f, int client, int timestamp)
static int prioq_remove_match(struct snd_seq_remove_events *info,
struct snd_seq_event *ev)
void snd_seq_prioq_remove_events(struct snd_seq_prioq * f, int client,
struct snd_seq_remove_events *info)
