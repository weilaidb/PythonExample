#define __SND_SEQ_MEMORYMGR_H
struct snd_info_buffer;
struct snd_seq_event_cell ;
struct snd_seq_pool ;
void snd_seq_cell_free(struct snd_seq_event_cell *cell);
int snd_seq_event_dup(struct snd_seq_pool *pool, struct snd_seq_event *event,
struct snd_seq_event_cell **cellp, int nonblock, struct file *file);
static inline int snd_seq_unused_cells(struct snd_seq_pool *pool)
static inline int snd_seq_total_cells(struct snd_seq_pool *pool)
int snd_seq_pool_init(struct snd_seq_pool *pool);
int snd_seq_pool_done(struct snd_seq_pool *pool);
struct snd_seq_pool *snd_seq_pool_new(int poolsize);
int snd_seq_pool_delete(struct snd_seq_pool **pool);
int snd_sequencer_memory_init(void);
void snd_sequencer_memory_done(void);
int snd_seq_pool_poll_wait(struct snd_seq_pool *pool, struct file *file, poll_table *wait);
void snd_seq_info_pool(struct snd_info_buffer *buffer,
struct snd_seq_pool *pool, char *space);
