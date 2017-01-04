static LIST_HEAD(rxrpc_security_methods);
static DECLARE_RWSEM(rxrpc_security_sem);
static struct rxrpc_security *rxrpc_security_get(struct rxrpc_security *sec)
static void rxrpc_security_put(struct rxrpc_security *sec)
static struct rxrpc_security *rxrpc_security_lookup(u8 security_index)
int rxrpc_register_security(struct rxrpc_security *sec)
EXPORT_SYMBOL_GPL(rxrpc_register_security);
void rxrpc_unregister_security(struct rxrpc_security *sec)
EXPORT_SYMBOL_GPL(rxrpc_unregister_security);
int rxrpc_init_client_conn_security(struct rxrpc_connection *conn)
int rxrpc_init_server_conn_security(struct rxrpc_connection *conn)
int rxrpc_secure_packet(const struct rxrpc_call *call,
struct sk_buff *skb,
size_t data_size,
void *sechdr)
int rxrpc_verify_packet(const struct rxrpc_call *call, struct sk_buff *skb,
u32 *_abort_code)
void rxrpc_clear_conn_security(struct rxrpc_connection *conn)
