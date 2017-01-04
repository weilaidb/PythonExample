static void dummy_timer(ulong);
static void aoedev_freedev(struct aoedev *);
static void freetgt(struct aoedev *d, struct aoetgt *t);
static void skbpoolfree(struct aoedev *d);
static struct aoedev *devlist;
static DEFINE_SPINLOCK(devlist_lock);
struct aoedev *
aoedev_by_aoeaddr(int maj, int min)
static void
dummy_timer(ulong vp)
void
aoedev_downdev(struct aoedev *d)
static void
aoedev_freedev(struct aoedev *d)
int
aoedev_flush(const char __user *str, size_t cnt)
static void
skbfree(struct sk_buff *skb)
static void
skbpoolfree(struct aoedev *d)
struct aoedev *
aoedev_by_sysminor_m(ulong sysminor)
static void
freetgt(struct aoedev *d, struct aoetgt *t)
void
aoedev_exit(void)
int __init
aoedev_init(void)
