static int min_quality[] = , max_quality[] = ;
static int min_obs[]     = , max_obs[]     = ;
static int min_ttl[]     = , max_ttl[]     = ;
static int min_t1[]      = ;
static int max_t1[]      = ;
static int min_n2[]      = , max_n2[]      = ;
static int min_t2[]      = ;
static int max_t2[]      = ;
static int min_t4[]      = ;
static int max_t4[]      = ;
static int min_window[]  = , max_window[]  = ;
static int min_idle[]    = ;
static int max_idle[]    = ;
static int min_route[]   = , max_route[]   = ;
static int min_fails[]   = , max_fails[]   = ;
static int min_reset[]   = , max_reset[]   = ;
static struct ctl_table_header *nr_table_header;
static ctl_table nr_table[] = ;
static struct ctl_path nr_path[] = ;
void __init nr_register_sysctl(void)
void nr_unregister_sysctl(void)
