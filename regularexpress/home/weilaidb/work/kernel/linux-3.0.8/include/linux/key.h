#define _LINUX_KEY_H
typedef int32_t key_serial_t;
typedef uint32_t key_perm_t;
struct key;
#undef KEY_DEBUGGING
#define KEY_POS_VIEW	0x01000000
#define KEY_POS_READ	0x02000000
#define KEY_POS_WRITE	0x04000000
#define KEY_POS_SEARCH	0x08000000
#define KEY_POS_LINK	0x10000000
#define KEY_POS_SETATTR	0x20000000
#define KEY_POS_ALL	0x3f000000
#define KEY_USR_VIEW	0x00010000
#define KEY_USR_READ	0x00020000
#define KEY_USR_WRITE	0x00040000
#define KEY_USR_SEARCH	0x00080000
#define KEY_USR_LINK	0x00100000
#define KEY_USR_SETATTR	0x00200000
#define KEY_USR_ALL	0x003f0000
#define KEY_GRP_VIEW	0x00000100
#define KEY_GRP_READ	0x00000200
#define KEY_GRP_WRITE	0x00000400
#define KEY_GRP_SEARCH	0x00000800
#define KEY_GRP_LINK	0x00001000
#define KEY_GRP_SETATTR	0x00002000
#define KEY_GRP_ALL	0x00003f00
#define KEY_OTH_VIEW	0x00000001
#define KEY_OTH_READ	0x00000002
#define KEY_OTH_WRITE	0x00000004
#define KEY_OTH_SEARCH	0x00000008
#define KEY_OTH_LINK	0x00000010
#define KEY_OTH_SETATTR	0x00000020
#define KEY_OTH_ALL	0x0000003f
#define KEY_PERM_UNDEF	0xffffffff
struct seq_file;
struct user_struct;
struct signal_struct;
struct cred;
struct key_type;
struct key_owner;
struct keyring_list;
struct keyring_name;
typedef struct __key_reference_with_attributes *key_ref_t;
static inline key_ref_t make_key_ref(const struct key *key,
unsigned long possession)
static inline struct key *key_ref_to_ptr(const key_ref_t key_ref)
static inline unsigned long is_key_possessed(const key_ref_t key_ref)
struct key ;
extern struct key *key_alloc(struct key_type *type,
const char *desc,
uid_t uid, gid_t gid,
const struct cred *cred,
key_perm_t perm,
unsigned long flags);
#define KEY_ALLOC_IN_QUOTA	0x0000
#define KEY_ALLOC_QUOTA_OVERRUN	0x0001
#define KEY_ALLOC_NOT_IN_QUOTA	0x0002
extern void key_revoke(struct key *key);
extern void key_put(struct key *key);
static inline struct key *key_get(struct key *key)
static inline void key_ref_put(key_ref_t key_ref)
extern struct key *request_key(struct key_type *type,
const char *description,
const char *callout_info);
extern struct key *request_key_with_auxdata(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len,
void *aux);
extern struct key *request_key_async(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len);
extern struct key *request_key_async_with_auxdata(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len,
void *aux);
extern int wait_for_key_construction(struct key *key, bool intr);
extern int key_validate(struct key *key);
extern key_ref_t key_create_or_update(key_ref_t keyring,
const char *type,
const char *description,
const void *payload,
size_t plen,
key_perm_t perm,
unsigned long flags);
extern int key_update(key_ref_t key,
const void *payload,
size_t plen);
extern int key_link(struct key *keyring,
struct key *key);
extern int key_unlink(struct key *keyring,
struct key *key);
extern struct key *keyring_alloc(const char *description, uid_t uid, gid_t gid,
const struct cred *cred,
unsigned long flags,
struct key *dest);
extern int keyring_clear(struct key *keyring);
extern key_ref_t keyring_search(key_ref_t keyring,
struct key_type *type,
const char *description);
extern int keyring_add_key(struct key *keyring,
struct key *key);
extern struct key *key_lookup(key_serial_t id);
static inline key_serial_t key_serial(struct key *key)
static inline bool key_is_instantiated(const struct key *key)
#define rcu_dereference_key(KEY)					\
(rcu_dereference_protected((KEY)->payload.rcudata,		\
rwsem_is_locked(&((struct key *)(KEY))->sem)))
extern ctl_table key_sysctls[];
extern void key_replace_session_keyring(void);
extern int install_thread_keyring_to_cred(struct cred *cred);
extern void key_fsuid_changed(struct task_struct *tsk);
extern void key_fsgid_changed(struct task_struct *tsk);
extern void key_init(void);
#define key_validate(k)			0
#define key_serial(k)			0
#define key_get(k) 			()
#define key_revoke(k)			do  while(0)
#define key_put(k)			do  while(0)
#define key_ref_put(k)			do  while(0)
#define make_key_ref(k, p)		NULL
#define key_ref_to_ptr(k)		NULL
#define is_key_possessed(k)		0
#define key_fsuid_changed(t)		do  while(0)
#define key_fsgid_changed(t)		do  while(0)
#define key_init()			do  while(0)
#define key_replace_session_keyring()	do  while(0)
