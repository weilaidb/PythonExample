static DEFINE_MUTEX(key_session_mutex);
static DEFINE_MUTEX(key_user_keyring_mutex);
struct key_user root_key_user = ;
int install_user_keyrings(void)
int install_thread_keyring_to_cred(struct cred *new)
static int install_thread_keyring(void)
int install_process_keyring_to_cred(struct cred *new)
static int install_process_keyring(void)
int install_session_keyring_to_cred(struct cred *cred, struct key *keyring)
static int install_session_keyring(struct key *keyring)
void key_fsuid_changed(struct task_struct *tsk)
void key_fsgid_changed(struct task_struct *tsk)
key_ref_t search_my_process_keyrings(struct key_type *type,
const void *description,
key_match_func_t match,
bool no_state_check,
const struct cred *cred)
key_ref_t search_process_keyrings(struct key_type *type,
const void *description,
key_match_func_t match,
const struct cred *cred)
int lookup_user_key_possessed(const struct key *key, const void *target)
key_ref_t lookup_user_key(key_serial_t id, unsigned long lflags,
key_perm_t perm)
long join_session_keyring(const char *name)
void key_replace_session_keyring(void)
