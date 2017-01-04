static const char frv_cache_wback[] = "wback";
static const char frv_cache_wthru[] = "wthru";
static void frv_change_dcache_mode(unsigned long newmode)
static int procctl_frv_cachemode(ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static int procctl_frv_pin_cxnr(ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static struct ctl_table frv_table[] =
;
static struct ctl_table frv_dir_table[] =
;
static int __init frv_sysctl_init(void)
__initcall(frv_sysctl_init);
