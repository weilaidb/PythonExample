#define _LINUX_RXRPC_TYPES_H
typedef uint32_t	rxrpc_seq_t;
typedef uint32_t	rxrpc_serial_t;
typedef __be32	rxrpc_seq_net_t;
typedef __be32	rxrpc_serial_net_t;
struct rxrpc_call;
struct rxrpc_connection;
struct rxrpc_header;
struct rxrpc_message;
struct rxrpc_operation;
struct rxrpc_peer;
struct rxrpc_service;
typedef struct rxrpc_timer rxrpc_timer_t;
struct rxrpc_transport;
typedef void (*rxrpc_call_attn_func_t)(struct rxrpc_call *call);
typedef void (*rxrpc_call_error_func_t)(struct rxrpc_call *call);
typedef void (*rxrpc_call_aemap_func_t)(struct rxrpc_call *call);
