static void nr_heartbeat_expiry(unsigned long);
static void nr_t1timer_expiry(unsigned long);
static void nr_t2timer_expiry(unsigned long);
static void nr_t4timer_expiry(unsigned long);
static void nr_idletimer_expiry(unsigned long);
void nr_init_timers(struct sock *sk)
void nr_start_t1timer(struct sock *sk)
void nr_start_t2timer(struct sock *sk)
void nr_start_t4timer(struct sock *sk)
void nr_start_idletimer(struct sock *sk)
void nr_start_heartbeat(struct sock *sk)
void nr_stop_t1timer(struct sock *sk)
void nr_stop_t2timer(struct sock *sk)
void nr_stop_t4timer(struct sock *sk)
void nr_stop_idletimer(struct sock *sk)
void nr_stop_heartbeat(struct sock *sk)
int nr_t1timer_running(struct sock *sk)
static void nr_heartbeat_expiry(unsigned long param)
static void nr_t2timer_expiry(unsigned long param)
static void nr_t4timer_expiry(unsigned long param)
static void nr_idletimer_expiry(unsigned long param)
static void nr_t1timer_expiry(unsigned long param)
