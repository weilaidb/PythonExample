# define RPCDBG_FACILITY        RPCDBG_AUTH
#define TWRITE_STR(ptr, str, len) \
memcpy((ptr), (char *) (str), (len)); \
(ptr) += (len);
static int
der_length_size( int length)
static void
der_write_length(unsigned char **buf, int length)
static int
der_read_length(unsigned char **buf, int *bufsize)
int
g_token_size(struct xdr_netobj *mech, unsigned int body_size)
EXPORT_SYMBOL_GPL(g_token_size);
void
g_make_token_header(struct xdr_netobj *mech, int body_size, unsigned char **buf)
EXPORT_SYMBOL_GPL(g_make_token_header);
u32
g_verify_token_header(struct xdr_netobj *mech, int *body_size,
unsigned char **buf_in, int toksize)
EXPORT_SYMBOL_GPL(g_verify_token_header);
