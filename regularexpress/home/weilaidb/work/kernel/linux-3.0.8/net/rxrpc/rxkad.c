#define rxrpc_debug rxkad_debug
#define RXKAD_VERSION			2
#define MAXKRB5TICKETLEN		1024
#define RXKAD_TKT_TYPE_KERBEROS_V5	256
#define ANAME_SZ			40
#define INST_SZ				40
#define REALM_SZ			40
#define SNAME_SZ			40
unsigned rxrpc_debug;
module_param_named(debug, rxrpc_debug, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(debug, "rxkad debugging mask");
struct rxkad_level1_hdr ;
struct rxkad_level2_hdr ;
MODULE_DESCRIPTION("RxRPC network protocol type-2 security (Kerberos 4)");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
static struct crypto_blkcipher *rxkad_ci;
static DEFINE_MUTEX(rxkad_ci_mutex);
static int rxkad_init_connection_security(struct rxrpc_connection *conn)
static void rxkad_prime_packet_security(struct rxrpc_connection *conn)
static int rxkad_secure_packet_auth(const struct rxrpc_call *call,
struct sk_buff *skb,
u32 data_size,
void *sechdr)
static int rxkad_secure_packet_encrypt(const struct rxrpc_call *call,
struct sk_buff *skb,
u32 data_size,
void *sechdr)
static int rxkad_secure_packet(const struct rxrpc_call *call,
struct sk_buff *skb,
size_t data_size,
void *sechdr)
static int rxkad_verify_packet_auth(const struct rxrpc_call *call,
struct sk_buff *skb,
u32 *_abort_code)
static int rxkad_verify_packet_encrypt(const struct rxrpc_call *call,
struct sk_buff *skb,
u32 *_abort_code)
static int rxkad_verify_packet(const struct rxrpc_call *call,
struct sk_buff *skb,
u32 *_abort_code)
static int rxkad_issue_challenge(struct rxrpc_connection *conn)
static int rxkad_send_response(struct rxrpc_connection *conn,
struct rxrpc_header *hdr,
struct rxkad_response *resp,
const struct rxkad_key *s2)
static void rxkad_calc_response_checksum(struct rxkad_response *response)
static void rxkad_sg_set_buf2(struct scatterlist sg[2],
void *buf, size_t buflen)
static void rxkad_encrypt_response(struct rxrpc_connection *conn,
struct rxkad_response *resp,
const struct rxkad_key *s2)
static int rxkad_respond_to_challenge(struct rxrpc_connection *conn,
struct sk_buff *skb,
u32 *_abort_code)
static int rxkad_decrypt_ticket(struct rxrpc_connection *conn,
void *ticket, size_t ticket_len,
struct rxrpc_crypt *_session_key,
time_t *_expiry,
u32 *_abort_code)
static void rxkad_decrypt_response(struct rxrpc_connection *conn,
struct rxkad_response *resp,
const struct rxrpc_crypt *session_key)
static int rxkad_verify_response(struct rxrpc_connection *conn,
struct sk_buff *skb,
u32 *_abort_code)
static void rxkad_clear(struct rxrpc_connection *conn)
static struct rxrpc_security rxkad = ;
static __init int rxkad_init(void)
module_init(rxkad_init);
static __exit void rxkad_exit(void)
module_exit(rxkad_exit);
