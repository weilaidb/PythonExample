static void ax25_ds_timeout(unsigned long);
void ax25_ds_setup_timer(ax25_dev *ax25_dev)
void ax25_ds_del_timer(ax25_dev *ax25_dev)
void ax25_ds_set_timer(ax25_dev *ax25_dev)
static void ax25_ds_timeout(unsigned long arg)
void ax25_ds_heartbeat_expiry(ax25_cb *ax25)
void ax25_ds_t3timer_expiry(ax25_cb *ax25)
void ax25_ds_idletimer_expiry(ax25_cb *ax25)
void ax25_ds_t1_timeout(ax25_cb *ax25)
