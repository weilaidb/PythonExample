#define __LINUX_MROUTE_H
#define MRT_BASE	200
#define MRT_INIT	(MRT_BASE)
#define MRT_DONE	(MRT_BASE+1)
#define MRT_ADD_VIF	(MRT_BASE+2)
#define MRT_DEL_VIF	(MRT_BASE+3)
#define MRT_ADD_MFC	(MRT_BASE+4)
#define MRT_DEL_MFC	(MRT_BASE+5)
#define MRT_VERSION	(MRT_BASE+6)
#define MRT_ASSERT	(MRT_BASE+7)
#define MRT_PIM		(MRT_BASE+8)
#define MRT_TABLE	(MRT_BASE+9)
#define SIOCGETVIFCNT	SIOCPROTOPRIVATE
#define SIOCGETSGCNT	(SIOCPROTOPRIVATE+1)
#define SIOCGETRPF	(SIOCPROTOPRIVATE+2)
#define MAXVIFS		32
typedef unsigned long vifbitmap_t;
typedef unsigned short vifi_t;
#define ALL_VIFS	((vifi_t)(-1))
#define VIFM_SET(n,m)	((m)|=(1<<(n)))
#define VIFM_CLR(n,m)	((m)&=~(1<<(n)))
#define VIFM_ISSET(n,m)	((m)&(1<<(n)))
#define VIFM_CLRALL(m)	((m)=0)
#define VIFM_COPY(mfrom,mto)	((mto)=(mfrom))
#define VIFM_SAME(m1,m2)	((m1)==(m2))
struct vifctl ;
#define VIFF_TUNNEL		0x1
#define VIFF_SRCRT		0x2
#define VIFF_REGISTER		0x4
#define VIFF_USE_IFINDEX	0x8
struct mfcctl ;
struct sioc_sg_req ;
struct sioc_vif_req ;
struct igmpmsg ;
static inline int ip_mroute_opt(int opt)
static inline int ip_mroute_opt(int opt)
extern int ip_mroute_setsockopt(struct sock *, int, char __user *, unsigned int);
extern int ip_mroute_getsockopt(struct sock *, int, char __user *, int __user *);
extern int ipmr_ioctl(struct sock *sk, int cmd, void __user *arg);
extern int ipmr_compat_ioctl(struct sock *sk, unsigned int cmd, void __user *arg);
extern int ip_mr_init(void);
static inline
int ip_mroute_setsockopt(struct sock *sock,
int optname, char __user *optval, unsigned int optlen)
static inline
int ip_mroute_getsockopt(struct sock *sock,
int optname, char __user *optval, int __user *optlen)
static inline
int ipmr_ioctl(struct sock *sk, int cmd, void __user *arg)
static inline int ip_mr_init(void)
struct vif_device ;
#define VIFF_STATIC 0x8000
struct mfc_cache ;
#define MFC_STATIC		1
#define MFC_NOTIFY		2
#define MFC_LINES		64
#define MFC_HASH(a,b)	(((((__force u32)(__be32)a)>>24)^(((__force u32)(__be32)b)>>26))&(MFC_LINES-1))
#define MFC_HASH(a,b)	((((__force u32)(__be32)a)^(((__force u32)(__be32)b)>>2))&(MFC_LINES-1))
#define MFC_ASSERT_THRESH (3*HZ)
#define IGMPMSG_NOCACHE		1
#define IGMPMSG_WRONGVIF	2
#define IGMPMSG_WHOLEPKT	3
struct rtmsg;
extern int ipmr_get_route(struct net *net, struct sk_buff *skb,
__be32 saddr, __be32 daddr,
struct rtmsg *rtm, int nowait);
