int sysctl_max_syn_backlog = 256;
EXPORT_SYMBOL(sysctl_max_syn_backlog);
int reqsk_queue_alloc(struct request_sock_queue *queue,
unsigned int nr_table_entries)
void __reqsk_queue_destroy(struct request_sock_queue *queue)
static inline struct listen_sock *reqsk_queue_yank_listen_sk(
struct request_sock_queue *queue)
void reqsk_queue_destroy(struct request_sock_queue *queue)
