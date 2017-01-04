static struct snd_seq_queue *queue_list[SNDRV_SEQ_MAX_QUEUES];
static DEFINE_SPINLOCK(queue_list_lock);
static int num_queues;
int snd_seq_queue_get_cur_queues(void)
static int queue_list_add(struct snd_seq_queue *q)
static struct snd_seq_queue *queue_list_remove(int id, int client)
static struct snd_seq_queue *queue_new(int owner, int locked)
static void queue_delete(struct snd_seq_queue *q)
int __init snd_seq_queues_init(void)
void __exit snd_seq_queues_delete(void)
int snd_seq_queue_alloc(int client, int locked, unsigned int info_flags)
int snd_seq_queue_delete(int client, int queueid)
struct snd_seq_queue *queueptr(int queueid)
struct snd_seq_queue *snd_seq_queue_find_name(char *name)
void snd_seq_check_queue(struct snd_seq_queue *q, int atomic, int hop)
int snd_seq_enqueue_event(struct snd_seq_event_cell *cell, int atomic, int hop)
static inline int check_access(struct snd_seq_queue *q, int client)
static int queue_access_lock(struct snd_seq_queue *q, int client)
static inline void queue_access_unlock(struct snd_seq_queue *q)
int snd_seq_queue_check_access(int queueid, int client)
int snd_seq_queue_set_owner(int queueid, int client, int locked)
int snd_seq_queue_timer_open(int queueid)
int snd_seq_queue_timer_close(int queueid)
int snd_seq_queue_timer_set_tempo(int queueid, int client,
struct snd_seq_queue_tempo *info)
int snd_seq_queue_use(int queueid, int client, int use)
int snd_seq_queue_is_used(int queueid, int client)
void snd_seq_queue_client_termination(int client)
void snd_seq_queue_client_leave(int client)
void snd_seq_queue_client_leave_cells(int client)
void snd_seq_queue_remove_cells(int client, struct snd_seq_remove_events *info)
static void queue_broadcast_event(struct snd_seq_queue *q, struct snd_seq_event *ev,
int atomic, int hop)
static void snd_seq_queue_process_event(struct snd_seq_queue *q,
struct snd_seq_event *ev,
int atomic, int hop)
int snd_seq_control_queue(struct snd_seq_event *ev, int atomic, int hop)
void snd_seq_info_queues_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
