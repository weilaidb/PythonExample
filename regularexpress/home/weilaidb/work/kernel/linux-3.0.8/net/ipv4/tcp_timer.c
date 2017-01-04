int sysctl_tcp_syn_retries __read_mostly = TCP_SYN_RETRIES;
int sysctl_tcp_synack_retries __read_mostly = TCP_SYNACK_RETRIES;
int sysctl_tcp_keepalive_time __read_mostly = TCP_KEEPALIVE_TIME;
int sysctl_tcp_keepalive_probes __read_mostly = TCP_KEEPALIVE_PROBES;
int sysctl_tcp_keepalive_intvl __read_mostly = TCP_KEEPALIVE_INTVL;
int sysctl_tcp_retries1 __read_mostly = TCP_RETR1;
int sysctl_tcp_retries2 __read_mostly = TCP_RETR2;
int sysctl_tcp_orphan_retries __read_mostly;
int sysctl_tcp_thin_linear_timeouts __read_mostly;
static void tcp_write_timer(unsigned long);
static void tcp_delack_timer(unsigned long);
static void tcp_keepalive_timer (unsigned long data);
void tcp_init_xmit_timers(struct sock *sk)
EXPORT_SYMBOL(tcp_init_xmit_timers);
static void tcp_write_err(struct sock *sk)
static int tcp_out_of_resources(struct sock *sk, int do_reset)
static int tcp_orphan_retries(struct sock *sk, int alive)
static void tcp_mtu_probing(struct inet_connection_sock *icsk, struct sock *sk)
static bool retransmits_timed_out(struct sock *sk,
unsigned int boundary,
unsigned int timeout,
bool syn_set)
static int tcp_write_timeout(struct sock *sk)
static void tcp_delack_timer(unsigned long data)
static void tcp_probe_timer(struct sock *sk)
void tcp_retransmit_timer(struct sock *sk)
static void tcp_write_timer(unsigned long data)
static void tcp_synack_timer(struct sock *sk)
void tcp_syn_ack_timeout(struct sock *sk, struct request_sock *req)
EXPORT_SYMBOL(tcp_syn_ack_timeout);
void tcp_set_keepalive(struct sock *sk, int val)
static void tcp_keepalive_timer (unsigned long data)
