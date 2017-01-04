static void lapb_t1timer_expiry(unsigned long);
static void lapb_t2timer_expiry(unsigned long);
void lapb_start_t1timer(struct lapb_cb *lapb)
void lapb_start_t2timer(struct lapb_cb *lapb)
void lapb_stop_t1timer(struct lapb_cb *lapb)
void lapb_stop_t2timer(struct lapb_cb *lapb)
int lapb_t1timer_running(struct lapb_cb *lapb)
static void lapb_t2timer_expiry(unsigned long param)
static void lapb_t1timer_expiry(unsigned long param)
