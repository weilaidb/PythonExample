extern int  sysctl_slot_timeout;
static void irlap_slot_timer_expired(void* data);
static void irlap_query_timer_expired(void* data);
static void irlap_final_timer_expired(void* data);
static void irlap_wd_timer_expired(void* data);
static void irlap_backoff_timer_expired(void* data);
static void irlap_media_busy_expired(void* data);
void irlap_start_slot_timer(struct irlap_cb *self, int timeout)
void irlap_start_query_timer(struct irlap_cb *self, int S, int s)
void irlap_start_final_timer(struct irlap_cb *self, int timeout)
void irlap_start_wd_timer(struct irlap_cb *self, int timeout)
void irlap_start_backoff_timer(struct irlap_cb *self, int timeout)
void irlap_start_mbusy_timer(struct irlap_cb *self, int timeout)
void irlap_stop_mbusy_timer(struct irlap_cb *self)
void irlmp_start_watchdog_timer(struct lsap_cb *self, int timeout)
void irlmp_start_discovery_timer(struct irlmp_cb *self, int timeout)
void irlmp_start_idle_timer(struct lap_cb *self, int timeout)
void irlmp_stop_idle_timer(struct lap_cb *self)
static void irlap_slot_timer_expired(void *data)
static void irlap_query_timer_expired(void *data)
static void irlap_final_timer_expired(void *data)
static void irlap_wd_timer_expired(void *data)
static void irlap_backoff_timer_expired(void *data)
static void irlap_media_busy_expired(void *data)
