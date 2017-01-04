static int rxrpc_vet_description_s(const char *);
static int rxrpc_instantiate(struct key *, const void *, size_t);
static int rxrpc_instantiate_s(struct key *, const void *, size_t);
static void rxrpc_destroy(struct key *);
static void rxrpc_destroy_s(struct key *);
static void rxrpc_describe(const struct key *, struct seq_file *);
static long rxrpc_read(const struct key *, char __user *, size_t);
struct key_type key_type_rxrpc = ;
EXPORT_SYMBOL(key_type_rxrpc);
struct key_type key_type_rxrpc_s = ;
static int rxrpc_vet_description_s(const char *desc)
static int rxrpc_instantiate_xdr_rxkad(struct key *key, const __be32 *xdr,
unsigned toklen)
static void rxrpc_free_krb5_principal(struct krb5_principal *princ)
static void rxrpc_free_krb5_tagged(struct krb5_tagged_data *td)
static void rxrpc_rxk5_free(struct rxk5_key *rxk5)
static int rxrpc_krb5_decode_principal(struct krb5_principal *princ,
const __be32 **_xdr,
unsigned *_toklen)
static int rxrpc_krb5_decode_tagged_data(struct krb5_tagged_data *td,
size_t max_data_size,
const __be32 **_xdr,
unsigned *_toklen)
static int rxrpc_krb5_decode_tagged_array(struct krb5_tagged_data **_td,
u8 *_n_elem,
u8 max_n_elem,
size_t max_elem_size,
const __be32 **_xdr,
unsigned *_toklen)
static int rxrpc_krb5_decode_ticket(u8 **_ticket, u16 *_tktlen,
const __be32 **_xdr, unsigned *_toklen)
static int rxrpc_instantiate_xdr_rxk5(struct key *key, const __be32 *xdr,
unsigned toklen)
static int rxrpc_instantiate_xdr(struct key *key, const void *data, size_t datalen)
static int rxrpc_instantiate(struct key *key, const void *data, size_t datalen)
static int rxrpc_instantiate_s(struct key *key, const void *data,
size_t datalen)
static void rxrpc_destroy(struct key *key)
static void rxrpc_destroy_s(struct key *key)
static void rxrpc_describe(const struct key *key, struct seq_file *m)
int rxrpc_request_key(struct rxrpc_sock *rx, char __user *optval, int optlen)
int rxrpc_server_keyring(struct rxrpc_sock *rx, char __user *optval,
int optlen)
int rxrpc_get_server_data_key(struct rxrpc_connection *conn,
const void *session_key,
time_t expiry,
u32 kvno)
EXPORT_SYMBOL(rxrpc_get_server_data_key);
struct key *rxrpc_get_null_key(const char *keyname)
EXPORT_SYMBOL(rxrpc_get_null_key);
static long rxrpc_read(const struct key *key,
char __user *buffer, size_t buflen)
