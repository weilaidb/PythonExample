static int min_ipdefmode[1],    	max_ipdefmode[] = ;
static int min_axdefmode[1],            max_axdefmode[] = ;
static int min_backoff[1],		max_backoff[] = ;
static int min_conmode[1],		max_conmode[] = ;
static int min_window[] = ,		max_window[] = ;
static int min_ewindow[] = ,		max_ewindow[] = ;
static int min_t1[] = ,		max_t1[] = ;
static int min_t2[] = ,		max_t2[] = ;
static int min_t3[1],			max_t3[] = ;
static int min_idle[1],			max_idle[] = ;
static int min_n2[] = ,		max_n2[] = ;
static int min_paclen[] = ,		max_paclen[] = ;
static int min_proto[1],		max_proto[] = ;
static int min_ds_timeout[1],		max_ds_timeout[] = ;
static struct ctl_table_header *ax25_table_header;
static ctl_table *ax25_table;
static int ax25_table_size;
static struct ctl_path ax25_path[] = ;
static const ctl_table ax25_param_table[] = ;
void ax25_register_sysctl(void)
void ax25_unregister_sysctl(void)
