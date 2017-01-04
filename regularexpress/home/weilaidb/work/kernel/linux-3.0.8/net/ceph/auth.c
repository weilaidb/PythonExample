static u32 supported_protocols[] = ;
static int ceph_auth_init_protocol(struct ceph_auth_client *ac, int protocol)
struct ceph_auth_client *ceph_auth_init(const char *name, const struct ceph_crypto_key *key)
void ceph_auth_destroy(struct ceph_auth_client *ac)
void ceph_auth_reset(struct ceph_auth_client *ac)
int ceph_entity_name_encode(const char *name, void **p, void *end)
int ceph_auth_build_hello(struct ceph_auth_client *ac, void *buf, size_t len)
static int ceph_build_auth_request(struct ceph_auth_client *ac,
void *msg_buf, size_t msg_len)
int ceph_handle_auth_reply(struct ceph_auth_client *ac,
void *buf, size_t len,
void *reply_buf, size_t reply_len)
int ceph_build_auth(struct ceph_auth_client *ac,
void *msg_buf, size_t msg_len)
int ceph_auth_is_authenticated(struct ceph_auth_client *ac)
