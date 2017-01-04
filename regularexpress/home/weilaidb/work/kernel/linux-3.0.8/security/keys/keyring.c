#define rcu_dereference_locked_keyring(keyring)				\
(rcu_dereference_protected(					\
(keyring)->payload.subscriptions,			\
rwsem_is_locked((struct rw_semaphore *)&(keyring)->sem)))
#define KEY_LINK_FIXQUOTA 1UL
#define KEYRING_SEARCH_MAX_DEPTH 6
#define KEYRING_NAME_HASH_SIZE	(1 << 5)
static struct list_head	keyring_name_hash[KEYRING_NAME_HASH_SIZE];
static DEFINE_RWLOCK(keyring_name_lock);
static inline unsigned keyring_hash(const char *desc)
static int keyring_instantiate(struct key *keyring,
const void *data, size_t datalen);
static int keyring_match(const struct key *keyring, const void *criterion);
static void keyring_revoke(struct key *keyring);
static void keyring_destroy(struct key *keyring);
static void keyring_describe(const struct key *keyring, struct seq_file *m);
static long keyring_read(const struct key *keyring,
char __user *buffer, size_t buflen);
struct key_type key_type_keyring = ;
EXPORT_SYMBOL(key_type_keyring);
static DECLARE_RWSEM(keyring_serialise_link_sem);
static void keyring_publish_name(struct key *keyring)
static int keyring_instantiate(struct key *keyring,
const void *data, size_t datalen)
static int keyring_match(const struct key *keyring, const void *description)
static void keyring_destroy(struct key *keyring)
static void keyring_describe(const struct key *keyring, struct seq_file *m)
static long keyring_read(const struct key *keyring,
char __user *buffer, size_t buflen)
struct key *keyring_alloc(const char *description, uid_t uid, gid_t gid,
const struct cred *cred, unsigned long flags,
struct key *dest)
key_ref_t keyring_search_aux(key_ref_t keyring_ref,
const struct cred *cred,
struct key_type *type,
const void *description,
key_match_func_t match,
bool no_state_check)
key_ref_t keyring_search(key_ref_t keyring,
struct key_type *type,
const char *description)
EXPORT_SYMBOL(keyring_search);
key_ref_t __keyring_search_one(key_ref_t keyring_ref,
const struct key_type *ktype,
const char *description,
key_perm_t perm)
struct key *find_keyring_by_name(const char *name, bool skip_perm_check)
static int keyring_detect_cycle(struct key *A, struct key *B)
static void keyring_unlink_rcu_disposal(struct rcu_head *rcu)
int __key_link_begin(struct key *keyring, const struct key_type *type,
const char *description, unsigned long *_prealloc)
__acquires(&keyring->sem)
int __key_link_check_live_key(struct key *keyring, struct key *key)
void __key_link(struct key *keyring, struct key *key,
unsigned long *_prealloc)
void __key_link_end(struct key *keyring, struct key_type *type,
unsigned long prealloc)
__releases(&keyring->sem)
int key_link(struct key *keyring, struct key *key)
EXPORT_SYMBOL(key_link);
int key_unlink(struct key *keyring, struct key *key)
EXPORT_SYMBOL(key_unlink);
static void keyring_clear_rcu_disposal(struct rcu_head *rcu)
int keyring_clear(struct key *keyring)
EXPORT_SYMBOL(keyring_clear);
static void keyring_revoke(struct key *keyring)
static bool key_is_dead(struct key *key, time_t limit)
void keyring_gc(struct key *keyring, time_t limit)
