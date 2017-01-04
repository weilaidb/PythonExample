#define LINUX_MPTLAN_H_INCLUDED
#if !defined(__GENKSYMS__)
#define MODULEAUTHOR	"LSI Corporation"
#define LANAME		"Fusion MPT LAN driver"
#define LANVER		MPT_LINUX_VERSION_COMMON
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(LANAME);
#define MPT_LAN_MAX_BUCKETS_OUT 256
#define MPT_LAN_BUCKET_THRESH	18
#define MPT_LAN_BUCKETS_REMAIN_MISMATCH_THRESH 10
#define MPT_LAN_RX_COPYBREAK	200
#define MPT_LAN_TX_TIMEOUT	(1*HZ)
#define MPT_TX_MAX_OUT_LIM      127
#define MPT_LAN_MIN_MTU		96
#define MPT_LAN_MAX_MTU		65280
#define MPT_LAN_MTU             13312
#define MPT_LAN_NAA_RFC2625     0x1
#define MPT_LAN_NAA_QLOGIC      0x2
#define MPT_LAN_RESOURCE_FLAG_RETURN_POSTED_BUCKETS    0x01
#define MPT_LAN_RESOURCE_FLAG_RETURN_PEND_TRANSMITS    0x02
#define dioprintk(x)  printk x
#define dioprintk(x)
#define dlprintk(x)  printk x
#define dlprintk(x)
#define NETDEV_TO_LANPRIV_PTR(d)	((struct mpt_lan_priv *)netdev_priv(d))
#define NETDEV_PTR_TO_IOC_NAME_s(d)	(NETDEV_TO_LANPRIV_PTR(d)->mpt_dev->name)
#define IOC_AND_NETDEV_NAMES_s_s(d)	NETDEV_PTR_TO_IOC_NAME_s(d), (d)->name
