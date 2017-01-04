static struct kmem_cache *user_ns_cachep __read_mostly;
int create_user_ns(struct cred *new)
static void free_user_ns_work(struct work_struct *work)
void free_user_ns(struct kref *kref)
EXPORT_SYMBOL(free_user_ns);
uid_t user_ns_map_uid(struct user_namespace *to, const struct cred *cred, uid_t uid)
gid_t user_ns_map_gid(struct user_namespace *to, const struct cred *cred, gid_t gid)
static __init int user_namespaces_init(void)
module_init(user_namespaces_init);
