static void ax25_heartbeat_expiry(unsigned long);
static void ax25_t1timer_expiry(unsigned long);
static void ax25_t2timer_expiry(unsigned long);
static void ax25_t3timer_expiry(unsigned long);
static void ax25_idletimer_expiry(unsigned long);
void ax25_setup_timers(ax25_cb *ax25)
void ax25_start_heartbeat(ax25_cb *ax25)
void ax25_start_t1timer(ax25_cb *ax25)
void ax25_start_t2timer(ax25_cb *ax25)
void ax25_start_t3timer(ax25_cb *ax25)
void ax25_start_idletimer(ax25_cb *ax25)
void ax25_stop_heartbeat(ax25_cb *ax25)
void ax25_stop_t1timer(ax25_cb *ax25)
void ax25_stop_t2timer(ax25_cb *ax25)
void ax25_stop_t3timer(ax25_cb *ax25)
void ax25_stop_idletimer(ax25_cb *ax25)
int ax25_t1timer_running(ax25_cb *ax25)
unsigned long ax25_display_timer(struct timer_list *timer)
EXPORT_SYMBOL(ax25_display_timer);
static void ax25_heartbeat_expiry(unsigned long param)
static void ax25_t1timer_expiry(unsigned long param)
static void ax25_t2timer_expiry(unsigned long param)
static void ax25_t3timer_expiry(unsigned long param)
static void ax25_idletimer_expiry(unsigned long param)
