static int sock_no_open(struct inode *irrelevant, struct file *dontcare);
static ssize_t sock_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
static ssize_t sock_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
static int sock_mmap(struct file *file, struct vm_area_struct *vma);
static int sock_close(struct inode *inode, struct file *file);
static unsigned int sock_poll(struct file *file,
struct poll_table_struct *wait);
static long sock_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static long compat_sock_ioctl(struct file *file,
unsigned int cmd, unsigned long arg);
static int sock_fasync(int fd, struct file *filp, int on);
static ssize_t sock_sendpage(struct file *file, struct page *page,
int offset, size_t size, loff_t *ppos, int more);
static ssize_t sock_splice_read(struct file *file, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags);
static const struct file_operations socket_file_ops = ;
static DEFINE_SPINLOCK(net_family_lock);
static const struct net_proto_family __rcu *net_families[NPROTO] __read_mostly;
static DEFINE_PER_CPU(int, sockets_in_use);
int move_addr_to_kernel(void __user *uaddr, int ulen, struct sockaddr *kaddr)
static int move_addr_to_user(struct sockaddr *kaddr, int klen,
void __user *uaddr, int __user *ulen)
static struct kmem_cache *sock_inode_cachep __read_mostly;
static struct inode *sock_alloc_inode(struct super_block *sb)
static void sock_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static const struct super_operations sockfs_ops = ;
static char *sockfs_dname(struct dentry *dentry, char *buffer, int buflen)
static const struct dentry_operations sockfs_dentry_operations = ;
static struct dentry *sockfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct vfsmount *sock_mnt __read_mostly;
static struct file_system_type sock_fs_type = ;
static int sock_alloc_file(struct socket *sock, struct file **f, int flags)
int sock_map_fd(struct socket *sock, int flags)
EXPORT_SYMBOL(sock_map_fd);
static struct socket *sock_from_file(struct file *file, int *err)
struct socket *sockfd_lookup(int fd, int *err)
EXPORT_SYMBOL(sockfd_lookup);
static struct socket *sockfd_lookup_light(int fd, int *err, int *fput_needed)
static struct socket *sock_alloc(void)
static int sock_no_open(struct inode *irrelevant, struct file *dontcare)
const struct file_operations bad_sock_fops = ;
void sock_release(struct socket *sock)
EXPORT_SYMBOL(sock_release);
int sock_tx_timestamp(struct sock *sk, __u8 *tx_flags)
EXPORT_SYMBOL(sock_tx_timestamp);
static inline int __sock_sendmsg_nosec(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size)
static inline int __sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size)
int sock_sendmsg(struct socket *sock, struct msghdr *msg, size_t size)
EXPORT_SYMBOL(sock_sendmsg);
int sock_sendmsg_nosec(struct socket *sock, struct msghdr *msg, size_t size)
int kernel_sendmsg(struct socket *sock, struct msghdr *msg,
struct kvec *vec, size_t num, size_t size)
EXPORT_SYMBOL(kernel_sendmsg);
static int ktime2ts(ktime_t kt, struct timespec *ts)
void __sock_recv_timestamp(struct msghdr *msg, struct sock *sk,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(__sock_recv_timestamp);
static inline void sock_recv_drops(struct msghdr *msg, struct sock *sk,
struct sk_buff *skb)
void __sock_recv_ts_and_drops(struct msghdr *msg, struct sock *sk,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(__sock_recv_ts_and_drops);
static inline int __sock_recvmsg_nosec(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static inline int __sock_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
int sock_recvmsg(struct socket *sock, struct msghdr *msg,
size_t size, int flags)
EXPORT_SYMBOL(sock_recvmsg);
static int sock_recvmsg_nosec(struct socket *sock, struct msghdr *msg,
size_t size, int flags)
int kernel_recvmsg(struct socket *sock, struct msghdr *msg,
struct kvec *vec, size_t num, size_t size, int flags)
EXPORT_SYMBOL(kernel_recvmsg);
static void sock_aio_dtor(struct kiocb *iocb)
static ssize_t sock_sendpage(struct file *file, struct page *page,
int offset, size_t size, loff_t *ppos, int more)
static ssize_t sock_splice_read(struct file *file, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
static struct sock_iocb *alloc_sock_iocb(struct kiocb *iocb,
struct sock_iocb *siocb)
static ssize_t do_sock_read(struct msghdr *msg, struct kiocb *iocb,
struct file *file, const struct iovec *iov,
unsigned long nr_segs)
static ssize_t sock_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t do_sock_write(struct msghdr *msg, struct kiocb *iocb,
struct file *file, const struct iovec *iov,
unsigned long nr_segs)
static ssize_t sock_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static DEFINE_MUTEX(br_ioctl_mutex);
static int (*br_ioctl_hook) (struct net *, unsigned int cmd, void __user *arg);
void brioctl_set(int (*hook) (struct net *, unsigned int, void __user *))
EXPORT_SYMBOL(brioctl_set);
static DEFINE_MUTEX(vlan_ioctl_mutex);
static int (*vlan_ioctl_hook) (struct net *, void __user *arg);
void vlan_ioctl_set(int (*hook) (struct net *, void __user *))
EXPORT_SYMBOL(vlan_ioctl_set);
static DEFINE_MUTEX(dlci_ioctl_mutex);
static int (*dlci_ioctl_hook) (unsigned int, void __user *);
void dlci_ioctl_set(int (*hook) (unsigned int, void __user *))
EXPORT_SYMBOL(dlci_ioctl_set);
static long sock_do_ioctl(struct net *net, struct socket *sock,
unsigned int cmd, unsigned long arg)
static long sock_ioctl(struct file *file, unsigned cmd, unsigned long arg)
int sock_create_lite(int family, int type, int protocol, struct socket **res)
EXPORT_SYMBOL(sock_create_lite);
static unsigned int sock_poll(struct file *file, poll_table *wait)
static int sock_mmap(struct file *file, struct vm_area_struct *vma)
static int sock_close(struct inode *inode, struct file *filp)
static int sock_fasync(int fd, struct file *filp, int on)
int sock_wake_async(struct socket *sock, int how, int band)
EXPORT_SYMBOL(sock_wake_async);
int __sock_create(struct net *net, int family, int type, int protocol,
struct socket **res, int kern)
EXPORT_SYMBOL(__sock_create);
int sock_create(int family, int type, int protocol, struct socket **res)
EXPORT_SYMBOL(sock_create);
int sock_create_kern(int family, int type, int protocol, struct socket **res)
EXPORT_SYMBOL(sock_create_kern);
SYSCALL_DEFINE3(socket, int, family, int, type, int, protocol)
SYSCALL_DEFINE4(socketpair, int, family, int, type, int, protocol,
int __user *, usockvec)
SYSCALL_DEFINE3(bind, int, fd, struct sockaddr __user *, umyaddr, int, addrlen)
SYSCALL_DEFINE2(listen, int, fd, int, backlog)
SYSCALL_DEFINE4(accept4, int, fd, struct sockaddr __user *, upeer_sockaddr,
int __user *, upeer_addrlen, int, flags)
SYSCALL_DEFINE3(accept, int, fd, struct sockaddr __user *, upeer_sockaddr,
int __user *, upeer_addrlen)
SYSCALL_DEFINE3(connect, int, fd, struct sockaddr __user *, uservaddr,
int, addrlen)
SYSCALL_DEFINE3(getsockname, int, fd, struct sockaddr __user *, usockaddr,
int __user *, usockaddr_len)
SYSCALL_DEFINE3(getpeername, int, fd, struct sockaddr __user *, usockaddr,
int __user *, usockaddr_len)
SYSCALL_DEFINE6(sendto, int, fd, void __user *, buff, size_t, len,
unsigned, flags, struct sockaddr __user *, addr,
int, addr_len)
SYSCALL_DEFINE4(send, int, fd, void __user *, buff, size_t, len,
unsigned, flags)
SYSCALL_DEFINE6(recvfrom, int, fd, void __user *, ubuf, size_t, size,
unsigned, flags, struct sockaddr __user *, addr,
int __user *, addr_len)
asmlinkage long sys_recv(int fd, void __user *ubuf, size_t size,
unsigned flags)
SYSCALL_DEFINE5(setsockopt, int, fd, int, level, int, optname,
char __user *, optval, int, optlen)
SYSCALL_DEFINE5(getsockopt, int, fd, int, level, int, optname,
char __user *, optval, int __user *, optlen)
SYSCALL_DEFINE2(shutdown, int, fd, int, how)
#define COMPAT_MSG(msg, member)	((MSG_CMSG_COMPAT & flags) ? &msg##_compat->member : &msg->member)
#define COMPAT_NAMELEN(msg)	COMPAT_MSG(msg, msg_namelen)
#define COMPAT_FLAGS(msg)	COMPAT_MSG(msg, msg_flags)
struct used_address ;
static int __sys_sendmsg(struct socket *sock, struct msghdr __user *msg,
struct msghdr *msg_sys, unsigned flags,
struct used_address *used_address)
SYSCALL_DEFINE3(sendmsg, int, fd, struct msghdr __user *, msg, unsigned, flags)
int __sys_sendmmsg(int fd, struct mmsghdr __user *mmsg, unsigned int vlen,
unsigned int flags)
SYSCALL_DEFINE4(sendmmsg, int, fd, struct mmsghdr __user *, mmsg,
unsigned int, vlen, unsigned int, flags)
static int __sys_recvmsg(struct socket *sock, struct msghdr __user *msg,
struct msghdr *msg_sys, unsigned flags, int nosec)
SYSCALL_DEFINE3(recvmsg, int, fd, struct msghdr __user *, msg,
unsigned int, flags)
int __sys_recvmmsg(int fd, struct mmsghdr __user *mmsg, unsigned int vlen,
unsigned int flags, struct timespec *timeout)
SYSCALL_DEFINE5(recvmmsg, int, fd, struct mmsghdr __user *, mmsg,
unsigned int, vlen, unsigned int, flags,
struct timespec __user *, timeout)
#define AL(x) ((x) * sizeof(unsigned long))
static const unsigned char nargs[21] = ;
#undef AL
SYSCALL_DEFINE2(socketcall, int, call, unsigned long __user *, args)
int sock_register(const struct net_proto_family *ops)
EXPORT_SYMBOL(sock_register);
void sock_unregister(int family)
EXPORT_SYMBOL(sock_unregister);
static int __init sock_init(void)
core_initcall(sock_init);
void socket_seq_show(struct seq_file *seq)
static int do_siocgstamp(struct net *net, struct socket *sock,
unsigned int cmd, struct compat_timeval __user *up)
static int do_siocgstampns(struct net *net, struct socket *sock,
unsigned int cmd, struct compat_timespec __user *up)
static int dev_ifname32(struct net *net, struct compat_ifreq __user *uifr32)
static int dev_ifconf(struct net *net, struct compat_ifconf __user *uifc32)
static int ethtool_ioctl(struct net *net, struct compat_ifreq __user *ifr32)
static int compat_siocwandev(struct net *net, struct compat_ifreq __user *uifr32)
static int bond_ioctl(struct net *net, unsigned int cmd,
struct compat_ifreq __user *ifr32)
static int siocdevprivate_ioctl(struct net *net, unsigned int cmd,
struct compat_ifreq __user *u_ifreq32)
static int dev_ifsioc(struct net *net, struct socket *sock,
unsigned int cmd, struct compat_ifreq __user *uifr32)
static int compat_sioc_ifmap(struct net *net, unsigned int cmd,
struct compat_ifreq __user *uifr32)
static int compat_siocshwtstamp(struct net *net, struct compat_ifreq __user *uifr32)
struct rtentry32 ;
struct in6_rtmsg32 ;
static int routing_ioctl(struct net *net, struct socket *sock,
unsigned int cmd, void __user *argp)
static int old_bridge_ioctl(compat_ulong_t __user *argp)
static int compat_sock_ioctl_trans(struct file *file, struct socket *sock,
unsigned int cmd, unsigned long arg)
static long compat_sock_ioctl(struct file *file, unsigned cmd,
unsigned long arg)
int kernel_bind(struct socket *sock, struct sockaddr *addr, int addrlen)
EXPORT_SYMBOL(kernel_bind);
int kernel_listen(struct socket *sock, int backlog)
EXPORT_SYMBOL(kernel_listen);
int kernel_accept(struct socket *sock, struct socket **newsock, int flags)
EXPORT_SYMBOL(kernel_accept);
int kernel_connect(struct socket *sock, struct sockaddr *addr, int addrlen,
int flags)
EXPORT_SYMBOL(kernel_connect);
int kernel_getsockname(struct socket *sock, struct sockaddr *addr,
int *addrlen)
EXPORT_SYMBOL(kernel_getsockname);
int kernel_getpeername(struct socket *sock, struct sockaddr *addr,
int *addrlen)
EXPORT_SYMBOL(kernel_getpeername);
int kernel_getsockopt(struct socket *sock, int level, int optname,
char *optval, int *optlen)
EXPORT_SYMBOL(kernel_getsockopt);
int kernel_setsockopt(struct socket *sock, int level, int optname,
char *optval, unsigned int optlen)
EXPORT_SYMBOL(kernel_setsockopt);
int kernel_sendpage(struct socket *sock, struct page *page, int offset,
size_t size, int flags)
EXPORT_SYMBOL(kernel_sendpage);
int kernel_sock_ioctl(struct socket *sock, int cmd, unsigned long arg)
EXPORT_SYMBOL(kernel_sock_ioctl);
int kernel_sock_shutdown(struct socket *sock, enum sock_shutdown_cmd how)
EXPORT_SYMBOL(kernel_sock_shutdown);
