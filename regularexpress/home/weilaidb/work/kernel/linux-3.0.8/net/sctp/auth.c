static struct sctp_hmac sctp_hmac_list[SCTP_AUTH_NUM_HMACS] = ;
void sctp_auth_key_put(struct sctp_auth_bytes *key)
static struct sctp_auth_bytes *sctp_auth_create_key(__u32 key_len, gfp_t gfp)
struct sctp_shared_key *sctp_auth_shkey_create(__u16 key_id, gfp_t gfp)
static void sctp_auth_shkey_free(struct sctp_shared_key *sh_key)
void sctp_auth_destroy_keys(struct list_head *keys)
static int sctp_auth_compare_vectors(struct sctp_auth_bytes *vector1,
struct sctp_auth_bytes *vector2)
static struct sctp_auth_bytes *sctp_auth_make_key_vector(
sctp_random_param_t *random,
sctp_chunks_param_t *chunks,
sctp_hmac_algo_param_t *hmacs,
gfp_t gfp)
static struct sctp_auth_bytes *sctp_auth_make_local_vector(
const struct sctp_association *asoc,
gfp_t gfp)
static struct sctp_auth_bytes *sctp_auth_make_peer_vector(
const struct sctp_association *asoc,
gfp_t gfp)
static struct sctp_auth_bytes *sctp_auth_asoc_set_secret(
struct sctp_shared_key *ep_key,
struct sctp_auth_bytes *first_vector,
struct sctp_auth_bytes *last_vector,
gfp_t gfp)
static struct sctp_auth_bytes *sctp_auth_asoc_create_secret(
const struct sctp_association *asoc,
struct sctp_shared_key *ep_key,
gfp_t gfp)
int sctp_auth_asoc_copy_shkeys(const struct sctp_endpoint *ep,
struct sctp_association *asoc,
gfp_t gfp)
int sctp_auth_asoc_init_active_key(struct sctp_association *asoc, gfp_t gfp)
struct sctp_shared_key *sctp_auth_get_shkey(
const struct sctp_association *asoc,
__u16 key_id)
int sctp_auth_init_hmacs(struct sctp_endpoint *ep, gfp_t gfp)
void sctp_auth_destroy_hmacs(struct crypto_hash *auth_hmacs[])
struct sctp_hmac *sctp_auth_get_hmac(__u16 hmac_id)
struct sctp_hmac *sctp_auth_asoc_get_hmac(const struct sctp_association *asoc)
static int __sctp_auth_find_hmacid(__be16 *hmacs, int n_elts, __be16 hmac_id)
int sctp_auth_asoc_verify_hmac_id(const struct sctp_association *asoc,
__be16 hmac_id)
void sctp_auth_asoc_set_default_hmac(struct sctp_association *asoc,
struct sctp_hmac_algo_param *hmacs)
static int __sctp_auth_cid(sctp_cid_t chunk, struct sctp_chunks_param *param)
int sctp_auth_send_cid(sctp_cid_t chunk, const struct sctp_association *asoc)
int sctp_auth_recv_cid(sctp_cid_t chunk, const struct sctp_association *asoc)
void sctp_auth_calculate_hmac(const struct sctp_association *asoc,
struct sk_buff *skb,
struct sctp_auth_chunk *auth,
gfp_t gfp)
int sctp_auth_ep_add_chunkid(struct sctp_endpoint *ep, __u8 chunk_id)
int sctp_auth_ep_set_hmacs(struct sctp_endpoint *ep,
struct sctp_hmacalgo *hmacs)
int sctp_auth_set_key(struct sctp_endpoint *ep,
struct sctp_association *asoc,
struct sctp_authkey *auth_key)
int sctp_auth_set_active_key(struct sctp_endpoint *ep,
struct sctp_association *asoc,
__u16  key_id)
int sctp_auth_del_key_id(struct sctp_endpoint *ep,
struct sctp_association *asoc,
__u16  key_id)
