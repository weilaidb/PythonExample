#define _LINUX_AUTO_FS_H
#define AUTOFS_PROTO_VERSION	3
#define AUTOFS_MAX_PROTO_VERSION	AUTOFS_PROTO_VERSION
#define AUTOFS_MIN_PROTO_VERSION	AUTOFS_PROTO_VERSION
#if defined(__sparc__) || defined(__mips__) || defined(__x86_64__) \
|| defined(__powerpc__) || defined(__s390__)
typedef unsigned int autofs_wqt_t;
typedef unsigned long autofs_wqt_t;
#define autofs_ptype_missing	0
#define autofs_ptype_expire	1
struct autofs_packet_hdr ;
struct autofs_packet_missing ;
struct autofs_packet_expire ;
#define AUTOFS_IOC_READY      _IO(0x93,0x60)
#define AUTOFS_IOC_FAIL       _IO(0x93,0x61)
#define AUTOFS_IOC_CATATONIC  _IO(0x93,0x62)
#define AUTOFS_IOC_PROTOVER   _IOR(0x93,0x63,int)
#define AUTOFS_IOC_SETTIMEOUT32 _IOWR(0x93,0x64,compat_ulong_t)
#define AUTOFS_IOC_SETTIMEOUT _IOWR(0x93,0x64,unsigned long)
#define AUTOFS_IOC_EXPIRE     _IOR(0x93,0x65,struct autofs_packet_expire)
