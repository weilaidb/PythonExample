#define _dpti_ioctl_h
# define _IOWR(x,y,z)	(((x)<<8)|y)
# define _IOW(x,y,z)	(((x)<<8)|y)
# define _IOR(x,y,z)	(((x)<<8)|y)
# define _IO(x,y)	(((x)<<8)|y)
#define EATAUSRCMD      _IOWR('D',65,EATA_CP)
#define DPT_DEBUG       _IOW('D',66,int)
#define DPT_SIGNATURE   _IOR('D',67,dpt_sig_S)
#if defined __bsdi__
#define DPT_SIGNATURE_PACKED   _IOR('D',67,dpt_sig_S_Packed)
#define DPT_NUMCTRLS    _IOR('D',68,int)
#define DPT_CTRLINFO    _IOR('D',69,CtrlInfo)
#define DPT_STATINFO    _IO('D',70)
#define DPT_CLRSTAT     _IO('D',71)
#define DPT_SYSINFO     _IOR('D',72,sysInfo_S)
#define DPT_TIMEOUT     _IO('D',73)
#define DPT_CONFIG      _IO('D',74)
#define DPT_BLINKLED    _IOR('D',75,int)
#define DPT_STATS_INFO        _IOR('D',80,STATS_DATA)
#define DPT_STATS_CLEAR       _IO('D',81)
#define DPT_PERF_INFO        _IOR('D',82,dpt_perf_t)
#define I2OUSRCMD	_IO('D',76)
#define I2ORESCANCMD	_IO('D',77)
#define I2ORESETCMD	_IO('D',78)
#define DPT_TARGET_BUSY	_IOR('D',79, TARGET_BUSY_T)
typedef struct  CtrlInfo;
typedef struct  drvrHBAinfo_S;
typedef struct TARGET_BUSY
TARGET_BUSY_T;
