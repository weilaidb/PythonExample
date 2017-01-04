static struct kmem_cache	*key_jar;
struct rb_root		key_serial_tree;
DEFINE_SPINLOCK(key_serial_lock);
struct rb_root	key_user_tree;
DEFINE_SPINLOCK(key_user_lock);
unsigned int key_quota_root_maxkeys = 200;
unsigned int key_quota_root_maxbytes = 20000;
unsigned int key_quota_maxkeys = 200;
unsigned int key_quota_maxbytes = 20000;
static LIST_HEAD(key_types_list);
static DECLARE_RWSEM(key_types_sem);
static void key_cleanup(struct work_struct *work);
static DECLARE_WORK(key_cleanup_task, key_cleanup);
DEFINE_MUTEX(key_construction_mutex);
static struct key_type key_type_dead = ;
void __key_check(const struct key *key)
struct key_user *key_user_lookup(uid_t uid, struct user_namespace *user_ns)
void key_user_put(struct key_user *user)
static inline void key_alloc_serial(struct key *key)
struct key *key_alloc(struct key_type *type, const char *desc,
uid_t uid, gid_t gid, const struct cred *cred,
key_perm_t perm, unsigned long flags)
EXPORT_SYMBOL(key_alloc);
int key_payload_reserve(struct key *key, size_t datalen)
EXPORT_SYMBOL(key_payload_reserve);
static int __key_instantiate_and_link(struct key *key,
const void *data,
size_t datalen,
struct key *keyring,
struct key *authkey,
unsigned long *_prealloc)
int key_instantiate_and_link(struct key *key,
const void *data,
size_t datalen,
struct key *keyring,
struct key *authkey)
EXPORT_SYMBOL(key_instantiate_and_link);
int key_reject_and_link(struct key *key,
unsigned timeout,
unsigned error,
struct key *keyring,
struct key *authkey)
EXPORT_SYMBOL(key_reject_and_link);
static void key_cleanup(struct work_struct *work)
void key_put(struct key *key)
EXPORT_SYMBOL(key_put);
struct key *key_lookup(key_serial_t id)
struct key_type *key_type_lookup(const char *type)
void key_type_put(struct key_type *ktype)
static inline key_ref_t __key_update(key_ref_t key_ref,
const void *payload, size_t plen)
key_ref_t key_create_or_update(key_ref_t keyring_ref,
const char *type,
const char *description,
const void *payload,
size_t plen,
key_perm_t perm,
unsigned long flags)
EXPORT_SYMBOL(key_create_or_update);
int key_update(key_ref_t key_ref, const void *payload, size_t plen)
EXPORT_SYMBOL(key_update);
void key_revoke(struct key *key)
EXPORT_SYMBOL(key_revoke);
int register_key_type(struct key_type *ktype)
EXPORT_SYMBOL(register_key_type);
void unregister_key_type(struct key_type *ktype)
EXPORT_SYMBOL(unregister_key_type);
void __init key_init(void)
