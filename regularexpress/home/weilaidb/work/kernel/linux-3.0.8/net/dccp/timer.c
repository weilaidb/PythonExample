int  sysctl_dccp_request_retries	__read_mostly = TCP_SYN_RETRIES;
int  sysctl_dccp_retries1		__read_mostly = TCP_RETR1;
int  sysctl_dccp_retries2		__read_mostly = TCP_RETR2;
static void dccp_write_err(struct sock *sk)
static int dccp_write_timeout(struct sock *sk)
static void dccp_retransmit_timer(struct sock *sk)
static void dccp_write_timer(unsigned long data)
static void dccp_response_timer(struct sock *sk)
static void dccp_keepalive_timer(unsigned long data)
static void dccp_delack_timer(unsigned long data)
static void dccp_write_xmitlet(unsigned long data)
static void dccp_write_xmit_timer(unsigned long data)
void dccp_init_xmit_timers(struct sock *sk)
static ktime_t dccp_timestamp_seed;
u32 dccp_timestamp(void)
EXPORT_SYMBOL_GPL(dccp_timestamp);
void __init dccp_timestamping_init(void)
