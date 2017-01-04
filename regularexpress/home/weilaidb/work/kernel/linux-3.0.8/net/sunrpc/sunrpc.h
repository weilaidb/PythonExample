#define _NET_SUNRPC_SUNRPC_H
struct rpc_buffer ;
static inline int rpc_reply_expected(struct rpc_task *task)
int svc_send_common(struct socket *sock, struct xdr_buf *xdr,
struct page *headpage, unsigned long headoffset,
struct page *tailpage, unsigned long tailoffset);
