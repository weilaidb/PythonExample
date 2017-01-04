#define _LINUX_DN_H
#define DNPROTO_NSP     2
#define DNPROTO_ROU     3
#define DNPROTO_NML     4
#define DNPROTO_EVL     5
#define DNPROTO_EVR     6
#define DNPROTO_NSPT    7
#define DN_ADDL		2
#define DN_MAXADDL	2
#define DN_MAXOPTL	16
#define DN_MAXOBJL	16
#define DN_MAXACCL	40
#define DN_MAXALIASL	128
#define DN_MAXNODEL	256
#define DNBUFSIZE	65023
#define SO_CONDATA      1
#define SO_CONACCESS    2
#define SO_PROXYUSR     3
#define SO_LINKINFO     7
#define DSO_CONDATA     1
#define DSO_DISDATA     10
#define DSO_CONACCESS   2
#define DSO_ACCEPTMODE  4
#define DSO_CONACCEPT   5
#define DSO_CONREJECT   6
#define DSO_LINKINFO    7
#define DSO_STREAM      8
#define DSO_SEQPACKET   9
#define DSO_MAXWINDOW   11
#define DSO_NODELAY	12
#define DSO_CORK        13
#define DSO_SERVICES	14
#define DSO_INFO	15
#define DSO_MAX         15
#define LL_INACTIVE	0
#define LL_CONNECTING	1
#define LL_RUNNING	2
#define LL_DISCONNECTING 3
#define ACC_IMMED 0
#define ACC_DEFER 1
#define SDF_WILD        1
#define SDF_PROXY       2
#define SDF_UICPROXY    4
struct dn_naddr ;
struct sockaddr_dn ;
#define sdn_nodeaddrl   sdn_add.a_len
#define sdn_nodeaddr    sdn_add.a_addr
struct optdata_dn ;
struct accessdata_dn ;
struct linkinfo_dn ;
union etheraddress ;
struct dn_addr ;
#define DECNET_IOCTL_BASE 0x89
#define SIOCSNETADDR  _IOW(DECNET_IOCTL_BASE, 0xe0, struct dn_naddr)
#define SIOCGNETADDR  _IOR(DECNET_IOCTL_BASE, 0xe1, struct dn_naddr)
#define OSIOCSNETADDR _IOW(DECNET_IOCTL_BASE, 0xe0, int)
#define OSIOCGNETADDR _IOR(DECNET_IOCTL_BASE, 0xe1, int)
