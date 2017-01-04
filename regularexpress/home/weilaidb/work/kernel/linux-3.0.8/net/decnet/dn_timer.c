#define SLOW_INTERVAL (HZ/2)
static void dn_slow_timer(unsigned long arg);
void dn_start_slow_timer(struct sock *sk)
void dn_stop_slow_timer(struct sock *sk)
static void dn_slow_timer(unsigned long arg)
