static inline int iov_from_user_compat_to_kern(struct iovec *kiov,
struct compat_iovec __user *uiov32,
int niov)
int get_compat_msghdr(struct msghdr *kmsg, struct compat_msghdr __user *umsg)
int verify_compat_iovec(struct msghdr *kern_msg, struct iovec *kern_iov,
struct sockaddr *kern_address, int mode)
#define CMSG_COMPAT_ALIGN(len)	ALIGN((len), sizeof(s32))
#define CMSG_COMPAT_DATA(cmsg)				\
((void __user *)((char __user *)(cmsg) + CMSG_COMPAT_ALIGN(sizeof(struct compat_cmsghdr))))
#define CMSG_COMPAT_SPACE(len)				\
(CMSG_COMPAT_ALIGN(sizeof(struct compat_cmsghdr)) + CMSG_COMPAT_ALIGN(len))
#define CMSG_COMPAT_LEN(len)				\
(CMSG_COMPAT_ALIGN(sizeof(struct compat_cmsghdr)) + (len))
#define CMSG_COMPAT_FIRSTHDR(msg)			\
(((msg)->msg_controllen) >= sizeof(struct compat_cmsghdr) ?	\
(struct compat_cmsghdr __user *)((msg)->msg_control) :		\
(struct compat_cmsghdr __user *)NULL)
#define CMSG_COMPAT_OK(ucmlen, ucmsg, mhdr) \
((ucmlen) >= sizeof(struct compat_cmsghdr) && \
(ucmlen) <= (unsigned long) \
((mhdr)->msg_controllen - \
((char *)(ucmsg) - (char *)(mhdr)->msg_control)))
static inline struct compat_cmsghdr __user *cmsg_compat_nxthdr(struct msghdr *msg,
struct compat_cmsghdr __user *cmsg, int cmsg_len)
int cmsghdr_from_user_compat_to_kern(struct msghdr *kmsg, struct sock *sk,
unsigned char *stackbuf, int stackbuf_size)
int put_cmsg_compat(struct msghdr *kmsg, int level, int type, int len, void *data)
void scm_detach_fds_compat(struct msghdr *kmsg, struct scm_cookie *scm)
struct compat_sock_fprog ;
static int do_set_attach_filter(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int do_set_sock_timeout(struct socket *sock, int level,
int optname, char __user *optval, unsigned int optlen)
static int compat_sock_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
asmlinkage long compat_sys_setsockopt(int fd, int level, int optname,
char __user *optval, unsigned int optlen)
static int do_get_sock_timeout(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int compat_sock_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
int compat_sock_get_timestamp(struct sock *sk, struct timeval __user *userstamp)
EXPORT_SYMBOL(compat_sock_get_timestamp);
int compat_sock_get_timestampns(struct sock *sk, struct timespec __user *userstamp)
EXPORT_SYMBOL(compat_sock_get_timestampns);
asmlinkage long compat_sys_getsockopt(int fd, int level, int optname,
char __user *optval, int __user *optlen)
struct compat_group_req  __packed;
struct compat_group_source_req  __packed;
struct compat_group_filter  __packed;
#define __COMPAT_GF0_SIZE (sizeof(struct compat_group_filter) - \
sizeof(struct __kernel_sockaddr_storage))
int compat_mc_setsockopt(struct sock *sock, int level, int optname,
char __user *optval, unsigned int optlen,
int (*setsockopt)(struct sock *, int, int, char __user *, unsigned int))
EXPORT_SYMBOL(compat_mc_setsockopt);
int compat_mc_getsockopt(struct sock *sock, int level, int optname,
char __user *optval, int __user *optlen,
int (*getsockopt)(struct sock *, int, int, char __user *, int __user *))
EXPORT_SYMBOL(compat_mc_getsockopt);
#define AL(x) ((x) * sizeof(u32))
static unsigned char nas[21] = ;
#undef AL
asmlinkage long compat_sys_sendmsg(int fd, struct compat_msghdr __user *msg, unsigned flags)
asmlinkage long compat_sys_sendmmsg(int fd, struct compat_mmsghdr __user *mmsg,
unsigned vlen, unsigned int flags)
asmlinkage long compat_sys_recvmsg(int fd, struct compat_msghdr __user *msg, unsigned int flags)
asmlinkage long compat_sys_recv(int fd, void __user *buf, size_t len, unsigned flags)
asmlinkage long compat_sys_recvfrom(int fd, void __user *buf, size_t len,
unsigned flags, struct sockaddr __user *addr,
int __user *addrlen)
asmlinkage long compat_sys_recvmmsg(int fd, struct compat_mmsghdr __user *mmsg,
unsigned vlen, unsigned int flags,
struct compat_timespec __user *timeout)
asmlinkage long compat_sys_socketcall(int call, u32 __user *args)
