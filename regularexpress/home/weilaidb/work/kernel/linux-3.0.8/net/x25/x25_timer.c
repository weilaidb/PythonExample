static void x25_heartbeat_expiry(unsigned long);
static void x25_timer_expiry(unsigned long);
void x25_init_timers(struct sock *sk)
void x25_start_heartbeat(struct sock *sk)
void x25_stop_heartbeat(struct sock *sk)
void x25_start_t2timer(struct sock *sk)
void x25_start_t21timer(struct sock *sk)
void x25_start_t22timer(struct sock *sk)
void x25_start_t23timer(struct sock *sk)
void x25_stop_timer(struct sock *sk)
unsigned long x25_display_timer(struct sock *sk)
static void x25_heartbeat_expiry(unsigned long param)
static inline void x25_do_timer_expiry(struct sock * sk)
static void x25_timer_expiry(unsigned long param)
