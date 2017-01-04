#define _INET_DIAG_H_ 1
#define TCPDIAG_GETSOCK 18
#define DCCPDIAG_GETSOCK 19
#define INET_DIAG_GETSOCK_MAX 24
struct inet_diag_sockid ;
struct inet_diag_req ;
enum ;
#define INET_DIAG_REQ_MAX INET_DIAG_REQ_BYTECODE
struct inet_diag_bc_op ;
enum ;
struct inet_diag_hostcond ;
struct inet_diag_msg ;
enum ;
#define INET_DIAG_MAX INET_DIAG_CONG
struct inet_diag_meminfo ;
struct tcpvegas_info ;
struct sock;
struct inet_hashinfo;
struct inet_diag_handler ;
extern int  inet_diag_register(const struct inet_diag_handler *handler);
extern void inet_diag_unregister(const struct inet_diag_handler *handler);
