#define __AFIUCV_H
#define AF_IUCV		32
#define PF_IUCV		AF_IUCV
enum ;
#define IUCV_QUEUELEN_DEFAULT	65535
#define IUCV_CONN_TIMEOUT	(HZ * 40)
#define IUCV_DISCONN_TIMEOUT	(HZ * 2)
#define IUCV_CONN_IDLE_TIMEOUT	(HZ * 60)
#define IUCV_BUFSIZE_DEFAULT	32768
struct sockaddr_iucv ;
struct sock_msg_q ;
#define iucv_sk(__sk) ((struct iucv_sock *) __sk)
struct iucv_sock ;
#define SO_IPRMDATA_MSG	0x0080
#define SO_MSGLIMIT	0x1000
#define SCM_IUCV_TRGCLS	0x0001
struct iucv_sock_list ;
unsigned int iucv_sock_poll(struct file *file, struct socket *sock,
poll_table *wait);
void iucv_sock_link(struct iucv_sock_list *l, struct sock *s);
void iucv_sock_unlink(struct iucv_sock_list *l, struct sock *s);
int  iucv_sock_wait_cnt(struct sock *sk, unsigned long timeo);
void iucv_accept_enqueue(struct sock *parent, struct sock *sk);
void iucv_accept_unlink(struct sock *sk);
struct sock *iucv_accept_dequeue(struct sock *parent, struct socket *newsock);
