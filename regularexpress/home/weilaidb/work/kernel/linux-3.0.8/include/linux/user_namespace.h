#define _LINUX_USER_NAMESPACE_H
#define UIDHASH_BITS	(CONFIG_BASE_SMALL ? 3 : 7)
#define UIDHASH_SZ	(1 << UIDHASH_BITS)
struct user_namespace ;
extern struct user_namespace init_user_ns;
static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
extern int create_user_ns(struct cred *new);
extern void free_user_ns(struct kref *kref);
static inline void put_user_ns(struct user_namespace *ns)
uid_t user_ns_map_uid(struct user_namespace *to, const struct cred *cred, uid_t uid);
gid_t user_ns_map_gid(struct user_namespace *to, const struct cred *cred, gid_t gid);
static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
static inline int create_user_ns(struct cred *new)
static inline void put_user_ns(struct user_namespace *ns)
static inline uid_t user_ns_map_uid(struct user_namespace *to,
const struct cred *cred, uid_t uid)
static inline gid_t user_ns_map_gid(struct user_namespace *to,
const struct cred *cred, gid_t gid)
