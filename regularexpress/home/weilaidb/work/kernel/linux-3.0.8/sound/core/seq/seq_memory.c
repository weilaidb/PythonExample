static inline int snd_seq_pool_available(struct snd_seq_pool *pool)
static inline int snd_seq_output_ok(struct snd_seq_pool *pool)
static int get_var_len(const struct snd_seq_event *event)
int snd_seq_dump_var_event(const struct snd_seq_event *event,
snd_seq_dump_func_t func, void *private_data)
EXPORT_SYMBOL(snd_seq_dump_var_event);
static int seq_copy_in_kernel(char **bufptr, const void *src, int size)
static int seq_copy_in_user(char __user **bufptr, const void *src, int size)
int snd_seq_expand_var_event(const struct snd_seq_event *event, int count, char *buf,
int in_kernel, int size_aligned)
EXPORT_SYMBOL(snd_seq_expand_var_event);
static inline void free_cell(struct snd_seq_pool *pool,
struct snd_seq_event_cell *cell)
void snd_seq_cell_free(struct snd_seq_event_cell * cell)
static int snd_seq_cell_alloc(struct snd_seq_pool *pool,
struct snd_seq_event_cell **cellp,
int nonblock, struct file *file)
int snd_seq_event_dup(struct snd_seq_pool *pool, struct snd_seq_event *event,
struct snd_seq_event_cell **cellp, int nonblock,
struct file *file)
int snd_seq_pool_poll_wait(struct snd_seq_pool *pool, struct file *file,
poll_table *wait)
int snd_seq_pool_init(struct snd_seq_pool *pool)
int snd_seq_pool_done(struct snd_seq_pool *pool)
struct snd_seq_pool *snd_seq_pool_new(int poolsize)
int snd_seq_pool_delete(struct snd_seq_pool **ppool)
int __init snd_sequencer_memory_init(void)
void __exit snd_sequencer_memory_done(void)
void snd_seq_info_pool(struct snd_info_buffer *buffer,
struct snd_seq_pool *pool, char *space)
