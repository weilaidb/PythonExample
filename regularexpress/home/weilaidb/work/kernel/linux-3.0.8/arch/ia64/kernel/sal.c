__cacheline_aligned DEFINE_SPINLOCK(sal_lock);
unsigned long sal_platform_features;
unsigned short sal_revision;
unsigned short sal_version;
#define SAL_MAJOR(x) ((x) >> 8)
#define SAL_MINOR(x) ((x) & 0xff)
static struct  pdesc;
static long
default_handler (void)
ia64_sal_handler ia64_sal = (ia64_sal_handler) default_handler;
ia64_sal_desc_ptc_t *ia64_ptc_domain_info;
const char *
ia64_sal_strerror (long status)
void __init
ia64_sal_handler_init (void *entry_point, void *gpval)
static void __init
check_versions (struct ia64_sal_systab *systab)
static void __init
sal_desc_entry_point (void *p)
static void __init
set_smp_redirect (int flag)
#define set_smp_redirect(flag)	do  while (0)
static void __init
sal_desc_platform_feature (void *p)
static void __init
sal_desc_ap_wakeup (void *p)
static void __init
chk_nointroute_opt(void)
static void __init sal_desc_ap_wakeup(void *p)
static int sal_cache_flush_drops_interrupts;
static int __init
force_pal_cache_flush(char *str)
early_param("force_pal_cache_flush", force_pal_cache_flush);
void __init
check_sal_cache_flush (void)
s64
ia64_sal_cache_flush (u64 cache_type)
EXPORT_SYMBOL_GPL(ia64_sal_cache_flush);
void __init
ia64_sal_init (struct ia64_sal_systab *systab)
int
ia64_sal_oemcall(struct ia64_sal_retval *isrvp, u64 oemfunc, u64 arg1,
u64 arg2, u64 arg3, u64 arg4, u64 arg5, u64 arg6, u64 arg7)
EXPORT_SYMBOL(ia64_sal_oemcall);
int
ia64_sal_oemcall_nolock(struct ia64_sal_retval *isrvp, u64 oemfunc, u64 arg1,
u64 arg2, u64 arg3, u64 arg4, u64 arg5, u64 arg6,
u64 arg7)
EXPORT_SYMBOL(ia64_sal_oemcall_nolock);
int
ia64_sal_oemcall_reentrant(struct ia64_sal_retval *isrvp, u64 oemfunc,
u64 arg1, u64 arg2, u64 arg3, u64 arg4, u64 arg5,
u64 arg6, u64 arg7)
EXPORT_SYMBOL(ia64_sal_oemcall_reentrant);
long
ia64_sal_freq_base (unsigned long which, unsigned long *ticks_per_second,
unsigned long *drift_info)
EXPORT_SYMBOL_GPL(ia64_sal_freq_base);
