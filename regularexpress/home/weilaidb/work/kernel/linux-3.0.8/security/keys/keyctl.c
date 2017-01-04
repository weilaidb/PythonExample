static int key_get_type_from_user(char *type,
const char __user *_type,
unsigned len)
SYSCALL_DEFINE5(add_key, const char __user *, _type,
const char __user *, _description,
const void __user *, _payload,
size_t, plen,
key_serial_t, ringid)
SYSCALL_DEFINE4(request_key, const char __user *, _type,
const char __user *, _description,
const char __user *, _callout_info,
key_serial_t, destringid)
long keyctl_get_keyring_ID(key_serial_t id, int create)
long keyctl_join_session_keyring(const char __user *_name)
long keyctl_update_key(key_serial_t id,
const void __user *_payload,
size_t plen)
long keyctl_revoke_key(key_serial_t id)
long keyctl_keyring_clear(key_serial_t ringid)
long keyctl_keyring_link(key_serial_t id, key_serial_t ringid)
long keyctl_keyring_unlink(key_serial_t id, key_serial_t ringid)
long keyctl_describe_key(key_serial_t keyid,
char __user *buffer,
size_t buflen)
long keyctl_keyring_search(key_serial_t ringid,
const char __user *_type,
const char __user *_description,
key_serial_t destringid)
long keyctl_read_key(key_serial_t keyid, char __user *buffer, size_t buflen)
long keyctl_chown_key(key_serial_t id, uid_t uid, gid_t gid)
long keyctl_setperm_key(key_serial_t id, key_perm_t perm)
static long get_instantiation_keyring(key_serial_t ringid,
struct request_key_auth *rka,
struct key **_dest_keyring)
static int keyctl_change_reqkey_auth(struct key *key)
static long copy_from_user_iovec(void *buffer, const struct iovec *iov,
unsigned ioc)
long keyctl_instantiate_key_common(key_serial_t id,
const struct iovec *payload_iov,
unsigned ioc,
size_t plen,
key_serial_t ringid)
long keyctl_instantiate_key(key_serial_t id,
const void __user *_payload,
size_t plen,
key_serial_t ringid)
long keyctl_instantiate_key_iov(key_serial_t id,
const struct iovec __user *_payload_iov,
unsigned ioc,
key_serial_t ringid)
long keyctl_negate_key(key_serial_t id, unsigned timeout, key_serial_t ringid)
long keyctl_reject_key(key_serial_t id, unsigned timeout, unsigned error,
key_serial_t ringid)
long keyctl_set_reqkey_keyring(int reqkey_defl)
long keyctl_set_timeout(key_serial_t id, unsigned timeout)
long keyctl_assume_authority(key_serial_t id)
long keyctl_get_security(key_serial_t keyid,
char __user *buffer,
size_t buflen)
long keyctl_session_to_parent(void)
SYSCALL_DEFINE5(keyctl, int, option, unsigned long, arg2, unsigned long, arg3,
unsigned long, arg4, unsigned long, arg5)
