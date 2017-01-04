static void rds_tcp_accept_worker(struct work_struct *work);
static DECLARE_WORK(rds_tcp_listen_work, rds_tcp_accept_worker);
static struct socket *rds_tcp_listen_sock;
static int rds_tcp_accept_one(struct socket *sock)
static void rds_tcp_accept_worker(struct work_struct *work)
void rds_tcp_listen_data_ready(struct sock *sk, int bytes)
int rds_tcp_listen_init(void)
void rds_tcp_listen_stop(void)
