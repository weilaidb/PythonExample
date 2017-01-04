static void rose_heartbeat_expiry(unsigned long);
static void rose_timer_expiry(unsigned long);
static void rose_idletimer_expiry(unsigned long);
void rose_start_heartbeat(struct sock *sk)
void rose_start_t1timer(struct sock *sk)
void rose_start_t2timer(struct sock *sk)
void rose_start_t3timer(struct sock *sk)
void rose_start_hbtimer(struct sock *sk)
void rose_start_idletimer(struct sock *sk)
void rose_stop_heartbeat(struct sock *sk)
void rose_stop_timer(struct sock *sk)
void rose_stop_idletimer(struct sock *sk)
static void rose_heartbeat_expiry(unsigned long param)
static void rose_timer_expiry(unsigned long param)
static void rose_idletimer_expiry(unsigned long param)
