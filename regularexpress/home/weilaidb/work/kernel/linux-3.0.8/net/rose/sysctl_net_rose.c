static int min_timer[]  = ;
static int max_timer[]  = ;
static int min_idle[]   = ;
static int max_idle[]   = ;
static int min_route[1],       max_route[] = ;
static int min_ftimer[] = ;
static int max_ftimer[] = ;
static int min_maxvcs[] = , max_maxvcs[] = ;
static int min_window[] = , max_window[] = ;
static struct ctl_table_header *rose_table_header;
static ctl_table rose_table[] = ;
static struct ctl_path rose_path[] = ;
void __init rose_register_sysctl(void)
void rose_unregister_sysctl(void)
