#define _FS_CEPH_AUTH_H
struct ceph_auth_client;
struct ceph_authorizer;
struct ceph_auth_client_ops ;
struct ceph_auth_client ;
extern struct ceph_auth_client *ceph_auth_init(const char *name,
const struct ceph_crypto_key *key);
extern void ceph_auth_destroy(struct ceph_auth_client *ac);
extern void ceph_auth_reset(struct ceph_auth_client *ac);
extern int ceph_auth_build_hello(struct ceph_auth_client *ac,
void *buf, size_t len);
extern int ceph_handle_auth_reply(struct ceph_auth_client *ac,
void *buf, size_t len,
void *reply_buf, size_t reply_len);
extern int ceph_entity_name_encode(const char *name, void **p, void *end);
extern int ceph_build_auth(struct ceph_auth_client *ac,
void *msg_buf, size_t msg_len);
extern int ceph_auth_is_authenticated(struct ceph_auth_client *ac);
