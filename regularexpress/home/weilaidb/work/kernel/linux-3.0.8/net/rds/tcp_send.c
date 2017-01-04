static void rds_tcp_cork(struct socket *sock, int val)
void rds_tcp_xmit_prepare(struct rds_connection *conn)
void rds_tcp_xmit_complete(struct rds_connection *conn)
static int rds_tcp_sendmsg(struct socket *sock, void *data, unsigned int len)
int rds_tcp_xmit(struct rds_connection *conn, struct rds_message *rm,
unsigned int hdr_off, unsigned int sg, unsigned int off)
static int rds_tcp_is_acked(struct rds_message *rm, uint64_t ack)
void rds_tcp_write_space(struct sock *sk)
