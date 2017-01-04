#define __SND_SEQ_QUEUE_H
#define SEQ_QUEUE_NO_OWNER (-1)
struct snd_seq_queue ;
int snd_seq_queue_get_cur_queues(void);
int snd_seq_queues_init(void);
void snd_seq_queues_delete(void);
int snd_seq_queue_alloc(int client, int locked, unsigned int flags);
int snd_seq_queue_delete(int client, int queueid);
void snd_seq_queue_client_termination(int client);
void snd_seq_queue_client_leave(int client);
int snd_seq_enqueue_event(struct snd_seq_event_cell *cell, int atomic, int hop);
void snd_seq_queue_client_leave_cells(int client);
void snd_seq_queue_remove_cells(int client, struct snd_seq_remove_events *info);
struct snd_seq_queue *queueptr(int queueid);
#define queuefree(q) snd_use_lock_free(&(q)->use_lock)
struct snd_seq_queue *snd_seq_queue_find_name(char *name);
void snd_seq_check_queue(struct snd_seq_queue *q, int atomic, int hop);
int snd_seq_queue_check_access(int queueid, int client);
int snd_seq_queue_timer_set_tempo(int queueid, int client, struct snd_seq_queue_tempo *info);
int snd_seq_queue_set_owner(int queueid, int client, int locked);
int snd_seq_queue_set_locked(int queueid, int client, int locked);
int snd_seq_queue_timer_open(int queueid);
int snd_seq_queue_timer_close(int queueid);
int snd_seq_queue_use(int queueid, int client, int use);
int snd_seq_queue_is_used(int queueid, int client);
int snd_seq_control_queue(struct snd_seq_event *ev, int atomic, int hop);
#if defined(i386) || defined(i486)
#define udiv_qrnnd(q, r, n1, n0, d) \
__asm__ ("divl %4"		\
: "=a" ((u32)(q)),	\
"=d" ((u32)(r))	\
: "0" ((u32)(n0)),	\
"1" ((u32)(n1)),	\
"rm" ((u32)(d)))
#define u64_div(x,y,q) do  while (0)
#define u64_mod(x,y,r) do  while (0)
#define u64_divmod(x,y,q,r) udiv_qrnnd(q, r, (x)>>32, x, y)
#define u64_div(x,y,q)	((q) = (u32)((u64)(x) / (u64)(y)))
#define u64_mod(x,y,r)	((r) = (u32)((u64)(x) % (u64)(y)))
#define u64_divmod(x,y,q,r) (u64_div(x,y,q), u64_mod(x,y,r))
