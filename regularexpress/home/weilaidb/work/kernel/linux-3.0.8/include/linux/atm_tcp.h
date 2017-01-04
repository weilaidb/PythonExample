#define LINUX_ATM_TCP_H
struct atmtcp_hdr ;
#define ATMTCP_HDR_MAGIC	(~0)
#define ATMTCP_CTRL_OPEN	1
#define ATMTCP_CTRL_CLOSE	2
struct atmtcp_control  __ATM_API_ALIGN;
#define SIOCSIFATMTCP	_IO('a',ATMIOC_ITF)
#define ATMTCP_CREATE	_IO('a',ATMIOC_ITF+14)
#define ATMTCP_REMOVE	_IO('a',ATMIOC_ITF+15)
struct atm_tcp_ops ;
extern struct atm_tcp_ops atm_tcp_ops;
