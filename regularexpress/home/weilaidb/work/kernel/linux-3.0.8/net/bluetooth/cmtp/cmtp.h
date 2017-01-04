#define __CMTP_H
#define BTNAMSIZ 18
#define CMTPCONNADD	_IOW('C', 200, int)
#define CMTPCONNDEL	_IOW('C', 201, int)
#define CMTPGETCONNLIST	_IOR('C', 210, int)
#define CMTPGETCONNINFO	_IOR('C', 211, int)
#define CMTP_LOOPBACK	0
struct cmtp_connadd_req ;
struct cmtp_conndel_req ;
struct cmtp_conninfo ;
struct cmtp_connlist_req ;
int cmtp_add_connection(struct cmtp_connadd_req *req, struct socket *sock);
int cmtp_del_connection(struct cmtp_conndel_req *req);
int cmtp_get_connlist(struct cmtp_connlist_req *req);
int cmtp_get_conninfo(struct cmtp_conninfo *ci);
#define CMTP_INTEROP_TIMEOUT	(HZ * 5)
#define CMTP_INITIAL_MSGNUM	0xff00
struct cmtp_session ;
struct cmtp_application ;
struct cmtp_scb ;
int  cmtp_attach_device(struct cmtp_session *session);
void cmtp_detach_device(struct cmtp_session *session);
void cmtp_recv_capimsg(struct cmtp_session *session, struct sk_buff *skb);
int cmtp_init_sockets(void);
void cmtp_cleanup_sockets(void);
