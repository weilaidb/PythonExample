static void reset(struct ceph_auth_client *ac)
static void destroy(struct ceph_auth_client *ac)
static int is_authenticated(struct ceph_auth_client *ac)
static int should_authenticate(struct ceph_auth_client *ac)
static int handle_reply(struct ceph_auth_client *ac, int result,
void *buf, void *end)
static int ceph_auth_none_create_authorizer(
struct ceph_auth_client *ac, int peer_type,
struct ceph_authorizer **a,
void **buf, size_t *len,
void **reply_buf, size_t *reply_len)
static void ceph_auth_none_destroy_authorizer(struct ceph_auth_client *ac,
struct ceph_authorizer *a)
static const struct ceph_auth_client_ops ceph_auth_none_ops = ;
int ceph_auth_none_init(struct ceph_auth_client *ac)
