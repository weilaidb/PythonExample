static u_int *debug;
static LIST_HEAD(iclock_list);
static DEFINE_RWLOCK(iclock_lock);
static u16 iclock_count;
static struct timeval iclock_tv;
static int iclock_tv_valid;
static struct mISDNclock *iclock_current;
void
mISDN_init_clock(u_int *dp)
static void
select_iclock(void)
struct mISDNclock
*mISDN_register_clock(char *name, int pri, clockctl_func_t *ctl, void *priv)
EXPORT_SYMBOL(mISDN_register_clock);
void
mISDN_unregister_clock(struct mISDNclock *iclock)
EXPORT_SYMBOL(mISDN_unregister_clock);
void
mISDN_clock_update(struct mISDNclock *iclock, int samples, struct timeval *tv)
EXPORT_SYMBOL(mISDN_clock_update);
unsigned short
mISDN_clock_get(void)
EXPORT_SYMBOL(mISDN_clock_get);
