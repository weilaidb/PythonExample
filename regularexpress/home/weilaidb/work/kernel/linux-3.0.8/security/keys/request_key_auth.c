static int request_key_auth_instantiate(struct key *, const void *, size_t);
static void request_key_auth_describe(const struct key *, struct seq_file *);
static void request_key_auth_revoke(struct key *);
static void request_key_auth_destroy(struct key *);
static long request_key_auth_read(const struct key *, char __user *, size_t);
struct key_type key_type_request_key_auth = ;
static int request_key_auth_instantiate(struct key *key,
const void *data,
size_t datalen)
static void request_key_auth_describe(const struct key *key,
struct seq_file *m)
static long request_key_auth_read(const struct key *key,
char __user *buffer, size_t buflen)
static void request_key_auth_revoke(struct key *key)
static void request_key_auth_destroy(struct key *key)
struct key *request_key_auth_new(struct key *target, const void *callout_info,
size_t callout_len, struct key *dest_keyring)
static int key_get_instantiation_authkey_match(const struct key *key,
const void *_id)
struct key *key_get_instantiation_authkey(key_serial_t target_id)
