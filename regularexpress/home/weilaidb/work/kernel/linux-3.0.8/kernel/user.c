struct user_namespace init_user_ns = ;
EXPORT_SYMBOL_GPL(init_user_ns);
#define UIDHASH_MASK		(UIDHASH_SZ - 1)
#define __uidhashfn(uid)	(((uid >> UIDHASH_BITS) + uid) & UIDHASH_MASK)
#define uidhashentry(ns, uid)	((ns)->uidhash_table + __uidhashfn((uid)))
static struct kmem_cache *uid_cachep;
static DEFINE_SPINLOCK(uidhash_lock);
struct user_struct root_user = ;
static void uid_hash_insert(struct user_struct *up, struct hlist_head *hashent)
static void uid_hash_remove(struct user_struct *up)
static struct user_struct *uid_hash_find(uid_t uid, struct hlist_head *hashent)
static void free_user(struct user_struct *up, unsigned long flags)
__releases(&uidhash_lock)
struct user_struct *find_user(uid_t uid)
void free_uid(struct user_struct *up)
struct user_struct *alloc_uid(struct user_namespace *ns, uid_t uid)
static int __init uid_cache_init(void)
module_init(uid_cache_init);
