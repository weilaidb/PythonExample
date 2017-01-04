#define key_negative_timeout	60
static int key_wait_bit(void *flags)
static int key_wait_bit_intr(void *flags)
void complete_request_key(struct key_construction *cons, int error)
EXPORT_SYMBOL(complete_request_key);
static int umh_keys_init(struct subprocess_info *info, struct cred *cred)
static void umh_keys_cleanup(struct subprocess_info *info)
static int call_usermodehelper_keys(char *path, char **argv, char **envp,
struct key *session_keyring, enum umh_wait wait)
static int call_sbin_request_key(struct key_construction *cons,
const char *op,
void *aux)
static int construct_key(struct key *key, const void *callout_info,
size_t callout_len, void *aux,
struct key *dest_keyring)
static void construct_get_dest_keyring(struct key **_dest_keyring)
static int construct_alloc_key(struct key_type *type,
const char *description,
struct key *dest_keyring,
unsigned long flags,
struct key_user *user,
struct key **_key)
static struct key *construct_key_and_link(struct key_type *type,
const char *description,
const char *callout_info,
size_t callout_len,
void *aux,
struct key *dest_keyring,
unsigned long flags)
struct key *request_key_and_link(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len,
void *aux,
struct key *dest_keyring,
unsigned long flags)
int wait_for_key_construction(struct key *key, bool intr)
EXPORT_SYMBOL(wait_for_key_construction);
struct key *request_key(struct key_type *type,
const char *description,
const char *callout_info)
EXPORT_SYMBOL(request_key);
struct key *request_key_with_auxdata(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len,
void *aux)
EXPORT_SYMBOL(request_key_with_auxdata);
struct key *request_key_async(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len)
EXPORT_SYMBOL(request_key_async);
struct key *request_key_async_with_auxdata(struct key_type *type,
const char *description,
const void *callout_info,
size_t callout_len,
void *aux)
EXPORT_SYMBOL(request_key_async_with_auxdata);
