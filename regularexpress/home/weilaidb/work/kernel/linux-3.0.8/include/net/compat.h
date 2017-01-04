#define NET_COMPAT_H
struct sock;
#if defined(CONFIG_COMPAT)
struct compat_msghdr ;
struct compat_mmsghdr ;
struct compat_cmsghdr ;
extern int compat_sock_get_timestamp(struct sock *, struct timeval __user *);
extern int compat_sock_get_timestampns(struct sock *, struct timespec __user *);
#define compat_msghdr	msghdr
#define compat_mmsghdr	mmsghdr
extern int get_compat_msghdr(struct msghdr *, struct compat_msghdr __user *);
extern int verify_compat_iovec(struct msghdr *, struct iovec *, struct sockaddr *, int);
extern asmlinkage long compat_sys_sendmsg(int,struct compat_msghdr __user *,unsigned);
extern asmlinkage long compat_sys_sendmmsg(int, struct compat_mmsghdr __user *,
unsigned, unsigned);
extern asmlinkage long compat_sys_recvmsg(int,struct compat_msghdr __user *,unsigned);
extern asmlinkage long compat_sys_recvmmsg(int, struct compat_mmsghdr __user *,
unsigned, unsigned,
struct compat_timespec __user *);
extern asmlinkage long compat_sys_getsockopt(int, int, int, char __user *, int __user *);
extern int put_cmsg_compat(struct msghdr*, int, int, int, void *);
extern int cmsghdr_from_user_compat_to_kern(struct msghdr *, struct sock *, unsigned char *, int);
extern int compat_mc_setsockopt(struct sock *, int, int, char __user *, unsigned int,
int (*)(struct sock *, int, int, char __user *, unsigned int));
extern int compat_mc_getsockopt(struct sock *, int, int, char __user *,
int __user *, int (*)(struct sock *, int, int, char __user *,
int __user *));
