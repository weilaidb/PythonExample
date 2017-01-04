#define P9_PORT 564
#define MAX_SOCK_BUF (64*1024)
#define MAXPOLLWADDR	2
struct p9_fd_opts ;
struct p9_trans_fd ;
enum ;
static const match_table_t tokens = ;
enum ;
struct p9_poll_wait ;
struct p9_conn ;
static void p9_poll_workfn(struct work_struct *work);
static DEFINE_SPINLOCK(p9_poll_lock);
static LIST_HEAD(p9_poll_pending_list);
static DECLARE_WORK(p9_poll_work, p9_poll_workfn);
static void p9_mux_poll_stop(struct p9_conn *m)
static void p9_conn_cancel(struct p9_conn *m, int err)
static int
p9_fd_poll(struct p9_client *client, struct poll_table_struct *pt)
static int p9_fd_read(struct p9_client *client, void *v, int len)
static void p9_read_work(struct work_struct *work)
static int p9_fd_write(struct p9_client *client, void *v, int len)
static void p9_write_work(struct work_struct *work)
static int p9_pollwake(wait_queue_t *wait, unsigned mode, int sync, void *key)
static void
p9_pollwait(struct file *filp, wait_queue_head_t *wait_address, poll_table *p)
static struct p9_conn *p9_conn_create(struct p9_client *client)
static void p9_poll_mux(struct p9_conn *m)
static int p9_fd_request(struct p9_client *client, struct p9_req_t *req)
static int p9_fd_cancel(struct p9_client *client, struct p9_req_t *req)
static int parse_opts(char *params, struct p9_fd_opts *opts)
static int p9_fd_open(struct p9_client *client, int rfd, int wfd)
static int p9_socket_open(struct p9_client *client, struct socket *csocket)
static void p9_conn_destroy(struct p9_conn *m)
static void p9_fd_close(struct p9_client *client)
static inline int valid_ipaddr4(const char *buf)
static int
p9_fd_create_tcp(struct p9_client *client, const char *addr, char *args)
static int
p9_fd_create_unix(struct p9_client *client, const char *addr, char *args)
static int
p9_fd_create(struct p9_client *client, const char *addr, char *args)
static struct p9_trans_module p9_tcp_trans = ;
static struct p9_trans_module p9_unix_trans = ;
static struct p9_trans_module p9_fd_trans = ;
static void p9_poll_workfn(struct work_struct *work)
int p9_trans_fd_init(void)
void p9_trans_fd_exit(void)
