#define _REQUEST_SOCK_H
struct request_sock;
struct sk_buff;
struct dst_entry;
struct proto;
struct request_values ;
struct request_sock_ops ;
struct request_sock ;
static inline struct request_sock *reqsk_alloc(const struct request_sock_ops *ops)
static inline void __reqsk_free(struct request_sock *req)
static inline void reqsk_free(struct request_sock *req)
extern int sysctl_max_syn_backlog;
struct listen_sock ;
struct request_sock_queue ;
extern int reqsk_queue_alloc(struct request_sock_queue *queue,
unsigned int nr_table_entries);
extern void __reqsk_queue_destroy(struct request_sock_queue *queue);
extern void reqsk_queue_destroy(struct request_sock_queue *queue);
static inline struct request_sock *
reqsk_queue_yank_acceptq(struct request_sock_queue *queue)
static inline int reqsk_queue_empty(struct request_sock_queue *queue)
static inline void reqsk_queue_unlink(struct request_sock_queue *queue,
struct request_sock *req,
struct request_sock **prev_req)
static inline void reqsk_queue_add(struct request_sock_queue *queue,
struct request_sock *req,
struct sock *parent,
struct sock *child)
static inline struct request_sock *reqsk_queue_remove(struct request_sock_queue *queue)
static inline struct sock *reqsk_queue_get_child(struct request_sock_queue *queue,
struct sock *parent)
static inline int reqsk_queue_removed(struct request_sock_queue *queue,
struct request_sock *req)
static inline int reqsk_queue_added(struct request_sock_queue *queue)
static inline int reqsk_queue_len(const struct request_sock_queue *queue)
static inline int reqsk_queue_len_young(const struct request_sock_queue *queue)
static inline int reqsk_queue_is_full(const struct request_sock_queue *queue)
static inline void reqsk_queue_hash_req(struct request_sock_queue *queue,
u32 hash, struct request_sock *req,
unsigned long timeout)
