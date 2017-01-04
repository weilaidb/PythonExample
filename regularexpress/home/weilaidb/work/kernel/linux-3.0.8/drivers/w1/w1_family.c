DEFINE_SPINLOCK(w1_flock);
static LIST_HEAD(w1_families);
int w1_register_family(struct w1_family *newf)
void w1_unregister_family(struct w1_family *fent)
struct w1_family * w1_family_registered(u8 fid)
static void __w1_family_put(struct w1_family *f)
void w1_family_put(struct w1_family *f)
void __w1_family_get(struct w1_family *f)
EXPORT_SYMBOL(w1_unregister_family);
EXPORT_SYMBOL(w1_register_family);
