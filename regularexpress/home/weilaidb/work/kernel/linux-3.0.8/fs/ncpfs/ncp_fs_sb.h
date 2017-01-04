#define _NCP_FS_SB
#define NCP_DEFAULT_OPTIONS 0
struct sock;
struct ncp_mount_data_kernel ;
struct ncp_server ;
extern void ncp_tcp_rcv_proc(struct work_struct *work);
extern void ncp_tcp_tx_proc(struct work_struct *work);
extern void ncpdgram_rcv_proc(struct work_struct *work);
extern void ncpdgram_timeout_proc(struct work_struct *work);
extern void ncpdgram_timeout_call(unsigned long server);
extern void ncp_tcp_data_ready(struct sock* sk, int len);
extern void ncp_tcp_write_space(struct sock* sk);
extern void ncp_tcp_error_report(struct sock* sk);
#define NCP_FLAG_UTF8	1
#define NCP_CLR_FLAG(server, flag)	((server)->flags &= ~(flag))
#define NCP_SET_FLAG(server, flag)	((server)->flags |= (flag))
#define NCP_IS_FLAG(server, flag)	((server)->flags & (flag))
static inline int ncp_conn_valid(struct ncp_server *server)
static inline void ncp_invalidate_conn(struct ncp_server *server)
