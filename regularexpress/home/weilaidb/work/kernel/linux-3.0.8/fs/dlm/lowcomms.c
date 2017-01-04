#define NEEDED_RMEM (4*1024*1024)
#define CONN_HASH_SIZE 32
#define MAX_SEND_MSG_COUNT 25
struct cbuf ;
static void cbuf_add(struct cbuf *cb, int n)
static int cbuf_data(struct cbuf *cb)
static void cbuf_init(struct cbuf *cb, int size)
static void cbuf_eat(struct cbuf *cb, int n)
static bool cbuf_empty(struct cbuf *cb)
struct connection ;
#define sock2con(x) ((struct connection *)(x)->sk_user_data)
struct writequeue_entry ;
static struct sockaddr_storage *dlm_local_addr[DLM_MAX_ADDR_COUNT];
static int dlm_local_count;
static struct workqueue_struct *recv_workqueue;
static struct workqueue_struct *send_workqueue;
static struct hlist_head connection_hash[CONN_HASH_SIZE];
static DEFINE_MUTEX(connections_lock);
static struct kmem_cache *con_cache;
static void process_recv_sockets(struct work_struct *work);
static void process_send_sockets(struct work_struct *work);
static inline int nodeid_hash(int nodeid)
static struct connection *__find_con(int nodeid)
static struct connection *__nodeid2con(int nodeid, gfp_t alloc)
static void foreach_conn(void (*conn_func)(struct connection *c))
static struct connection *nodeid2con(int nodeid, gfp_t allocation)
static struct connection *assoc2con(int assoc_id)
static int nodeid_to_addr(int nodeid, struct sockaddr *retaddr)
static void lowcomms_data_ready(struct sock *sk, int count_unused)
static void lowcomms_write_space(struct sock *sk)
static inline void lowcomms_connect_sock(struct connection *con)
static void lowcomms_state_change(struct sock *sk)
int dlm_lowcomms_connect_node(int nodeid)
static int add_sock(struct socket *sock, struct connection *con)
static void make_sockaddr(struct sockaddr_storage *saddr, uint16_t port,
int *addr_len)
static void close_connection(struct connection *con, bool and_other)
static void sctp_send_shutdown(sctp_assoc_t associd)
static void sctp_init_failed_foreach(struct connection *con)
static void sctp_init_failed(void)
static void process_sctp_notification(struct connection *con,
struct msghdr *msg, char *buf)
static int receive_from_sock(struct connection *con)
static int tcp_accept_from_sock(struct connection *con)
static void free_entry(struct writequeue_entry *e)
static void sctp_init_assoc(struct connection *con)
static void tcp_connect_to_sock(struct connection *con)
static struct socket *tcp_create_listen_sock(struct connection *con,
struct sockaddr_storage *saddr)
static void init_local(void)
static int add_sctp_bind_addr(struct connection *sctp_con,
struct sockaddr_storage *addr,
int addr_len, int num)
static int sctp_listen_for_all(void)
static int tcp_listen_for_all(void)
static struct writequeue_entry *new_writequeue_entry(struct connection *con,
gfp_t allocation)
void *dlm_lowcomms_get_buffer(int nodeid, int len, gfp_t allocation, char **ppc)
void dlm_lowcomms_commit_buffer(void *mh)
static void send_to_sock(struct connection *con)
static void clean_one_writequeue(struct connection *con)
int dlm_lowcomms_close(int nodeid)
static void process_recv_sockets(struct work_struct *work)
static void process_send_sockets(struct work_struct *work)
static void clean_writequeues(void)
static void work_stop(void)
static int work_start(void)
static void stop_conn(struct connection *con)
static void free_conn(struct connection *con)
void dlm_lowcomms_stop(void)
int dlm_lowcomms_start(void)
