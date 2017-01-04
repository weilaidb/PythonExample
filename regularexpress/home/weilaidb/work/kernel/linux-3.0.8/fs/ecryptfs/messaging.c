static LIST_HEAD(ecryptfs_msg_ctx_free_list);
static LIST_HEAD(ecryptfs_msg_ctx_alloc_list);
static struct mutex ecryptfs_msg_ctx_lists_mux;
static struct hlist_head *ecryptfs_daemon_hash;
struct mutex ecryptfs_daemon_hash_mux;
static int ecryptfs_hash_bits;
#define ecryptfs_uid_hash(uid) \
hash_long((unsigned long)uid, ecryptfs_hash_bits)
static u32 ecryptfs_msg_counter;
static struct ecryptfs_msg_ctx *ecryptfs_msg_ctx_arr;
static int ecryptfs_acquire_free_msg_ctx(struct ecryptfs_msg_ctx **msg_ctx)
static void ecryptfs_msg_ctx_free_to_alloc(struct ecryptfs_msg_ctx *msg_ctx)
void ecryptfs_msg_ctx_alloc_to_free(struct ecryptfs_msg_ctx *msg_ctx)
int ecryptfs_find_daemon_by_euid(struct ecryptfs_daemon **daemon, uid_t euid,
struct user_namespace *user_ns)
int
ecryptfs_spawn_daemon(struct ecryptfs_daemon **daemon, uid_t euid,
struct user_namespace *user_ns, struct pid *pid)
int ecryptfs_exorcise_daemon(struct ecryptfs_daemon *daemon)
int ecryptfs_process_quit(uid_t euid, struct user_namespace *user_ns,
struct pid *pid)
int ecryptfs_process_response(struct ecryptfs_message *msg, uid_t euid,
struct user_namespace *user_ns, struct pid *pid,
u32 seq)
static int
ecryptfs_send_message_locked(char *data, int data_len, u8 msg_type,
struct ecryptfs_msg_ctx **msg_ctx)
int ecryptfs_send_message(char *data, int data_len,
struct ecryptfs_msg_ctx **msg_ctx)
int ecryptfs_wait_for_response(struct ecryptfs_msg_ctx *msg_ctx,
struct ecryptfs_message **msg)
int __init ecryptfs_init_messaging(void)
void ecryptfs_release_messaging(void)
