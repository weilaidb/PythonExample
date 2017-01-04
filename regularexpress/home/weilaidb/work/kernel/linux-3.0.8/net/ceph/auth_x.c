#define TEMP_TICKET_BUF_LEN	256
static void ceph_x_validate_tickets(struct ceph_auth_client *ac, int *pneed);
static int ceph_x_is_authenticated(struct ceph_auth_client *ac)
static int ceph_x_should_authenticate(struct ceph_auth_client *ac)
static int ceph_x_encrypt_buflen(int ilen)
static int ceph_x_encrypt(struct ceph_crypto_key *secret,
void *ibuf, int ilen, void *obuf, size_t olen)
static int ceph_x_decrypt(struct ceph_crypto_key *secret,
void **p, void *end, void *obuf, size_t olen)
static struct ceph_x_ticket_handler *
get_ticket_handler(struct ceph_auth_client *ac, int service)
static void remove_ticket_handler(struct ceph_auth_client *ac,
struct ceph_x_ticket_handler *th)
static int ceph_x_proc_ticket_reply(struct ceph_auth_client *ac,
struct ceph_crypto_key *secret,
void *buf, void *end)
static int ceph_x_build_authorizer(struct ceph_auth_client *ac,
struct ceph_x_ticket_handler *th,
struct ceph_x_authorizer *au)
static int ceph_x_encode_ticket(struct ceph_x_ticket_handler *th,
void **p, void *end)
static void ceph_x_validate_tickets(struct ceph_auth_client *ac, int *pneed)
static int ceph_x_build_request(struct ceph_auth_client *ac,
void *buf, void *end)
static int ceph_x_handle_reply(struct ceph_auth_client *ac, int result,
void *buf, void *end)
static int ceph_x_create_authorizer(
struct ceph_auth_client *ac, int peer_type,
struct ceph_authorizer **a,
void **buf, size_t *len,
void **reply_buf, size_t *reply_len)
static int ceph_x_verify_authorizer_reply(struct ceph_auth_client *ac,
struct ceph_authorizer *a, size_t len)
static void ceph_x_destroy_authorizer(struct ceph_auth_client *ac,
struct ceph_authorizer *a)
static void ceph_x_reset(struct ceph_auth_client *ac)
static void ceph_x_destroy(struct ceph_auth_client *ac)
static void ceph_x_invalidate_authorizer(struct ceph_auth_client *ac,
int peer_type)
static const struct ceph_auth_client_ops ceph_x_ops = ;
int ceph_x_init(struct ceph_auth_client *ac)
