#define __ISDN_H__
#define ISDN_MAX_DRIVERS    32
#define ISDN_MAX_CHANNELS   64
#define IIOCNETAIF  _IO('I',1)
#define IIOCNETDIF  _IO('I',2)
#define IIOCNETSCF  _IO('I',3)
#define IIOCNETGCF  _IO('I',4)
#define IIOCNETANM  _IO('I',5)
#define IIOCNETDNM  _IO('I',6)
#define IIOCNETGNM  _IO('I',7)
#define IIOCGETSET  _IO('I',8)
#define IIOCSETSET  _IO('I',9)
#define IIOCSETVER  _IO('I',10)
#define IIOCNETHUP  _IO('I',11)
#define IIOCSETGST  _IO('I',12)
#define IIOCSETBRJ  _IO('I',13)
#define IIOCSIGPRF  _IO('I',14)
#define IIOCGETPRF  _IO('I',15)
#define IIOCSETPRF  _IO('I',16)
#define IIOCGETMAP  _IO('I',17)
#define IIOCSETMAP  _IO('I',18)
#define IIOCNETASL  _IO('I',19)
#define IIOCNETDIL  _IO('I',20)
#define IIOCGETCPS  _IO('I',21)
#define IIOCGETDVR  _IO('I',22)
#define IIOCNETLCR  _IO('I',23)
#define IIOCNETDWRSET  _IO('I',24)
#define IIOCNETALN  _IO('I',32)
#define IIOCNETDLN  _IO('I',33)
#define IIOCNETGPN  _IO('I',34)
#define IIOCDBGVAR  _IO('I',127)
#define IIOCDRVCTL  _IO('I',128)
#define SIOCGKEEPPERIOD	(SIOCDEVPRIVATE + 0)
#define SIOCSKEEPPERIOD	(SIOCDEVPRIVATE + 1)
#define SIOCGDEBSERINT	(SIOCDEVPRIVATE + 2)
#define SIOCSDEBSERINT	(SIOCDEVPRIVATE + 3)
#define ISDN_NET_ENCAP_ETHER      0
#define ISDN_NET_ENCAP_RAWIP      1
#define ISDN_NET_ENCAP_IPTYP      2
#define ISDN_NET_ENCAP_CISCOHDLC  3
#define ISDN_NET_ENCAP_SYNCPPP    4
#define ISDN_NET_ENCAP_UIHDLC     5
#define ISDN_NET_ENCAP_CISCOHDLCK 6
#define ISDN_NET_ENCAP_X25IFACE   7
#define ISDN_NET_ENCAP_MAX_ENCAP  ISDN_NET_ENCAP_X25IFACE
#define ISDN_USAGE_NONE       0
#define ISDN_USAGE_RAW        1
#define ISDN_USAGE_MODEM      2
#define ISDN_USAGE_NET        3
#define ISDN_USAGE_VOICE      4
#define ISDN_USAGE_FAX        5
#define ISDN_USAGE_MASK       7
#define ISDN_USAGE_DISABLED  32
#define ISDN_USAGE_EXCLUSIVE 64
#define ISDN_USAGE_OUTGOING 128
#define ISDN_MODEM_NUMREG    24
#define ISDN_LMSNLEN         255
#define ISDN_CMSGLEN	     50
#define ISDN_MSNLEN          32
#define NET_DV 0x06
#define TTY_DV 0x06
#define INF_DV 0x01
typedef struct  isdn_ioctl_struct;
typedef struct  isdn_net_ioctl_phone;
typedef struct  isdn_net_ioctl_cfg;
#define ISDN_NET_DIALMODE_MASK  0xC0
#define ISDN_NET_DM_OFF	        0x00
#define ISDN_NET_DM_MANUAL	0x40
#define ISDN_NET_DM_AUTO	0x80
#define ISDN_NET_DIALMODE(x) ((&(x))->flags & ISDN_NET_DIALMODE_MASK)
#define ISDN_TTY_MAJOR    43
#define ISDN_TTYAUX_MAJOR 44
#define ISDN_MAJOR        45
#define ISDN_MINOR_B        0
#define ISDN_MINOR_BMAX     (ISDN_MAX_CHANNELS-1)
#define ISDN_MINOR_CTRL     64
#define ISDN_MINOR_CTRLMAX  (64 + (ISDN_MAX_CHANNELS-1))
#define ISDN_MINOR_PPP      128
#define ISDN_MINOR_PPPMAX   (128 + (ISDN_MAX_CHANNELS-1))
#define ISDN_MINOR_STATUS   255
#  include <net/slhc_vj.h>
#  include <linux/concap.h>
#define ISDN_DRVIOCTL_MASK       0x7f
#define ISDN_SERVICE_VOICE 1
#define ISDN_SERVICE_AB    1<<1
#define ISDN_SERVICE_X21   1<<2
#define ISDN_SERVICE_G4    1<<3
#define ISDN_SERVICE_BTX   1<<4
#define ISDN_SERVICE_DFUE  1<<5
#define ISDN_SERVICE_X25   1<<6
#define ISDN_SERVICE_TTX   1<<7
#define ISDN_SERVICE_MIXED 1<<8
#define ISDN_SERVICE_FW    1<<9
#define ISDN_SERVICE_GTEL  1<<10
#define ISDN_SERVICE_BTXN  1<<11
#define ISDN_SERVICE_BTEL  1<<12
#define USG_NONE(x)         ((x & ISDN_USAGE_MASK)==ISDN_USAGE_NONE)
#define USG_RAW(x)          ((x & ISDN_USAGE_MASK)==ISDN_USAGE_RAW)
#define USG_MODEM(x)        ((x & ISDN_USAGE_MASK)==ISDN_USAGE_MODEM)
#define USG_VOICE(x)        ((x & ISDN_USAGE_MASK)==ISDN_USAGE_VOICE)
#define USG_NET(x)          ((x & ISDN_USAGE_MASK)==ISDN_USAGE_NET)
#define USG_FAX(x)          ((x & ISDN_USAGE_MASK)==ISDN_USAGE_FAX)
#define USG_OUTGOING(x)     ((x & ISDN_USAGE_OUTGOING)==ISDN_USAGE_OUTGOING)
#define USG_MODEMORVOICE(x) (((x & ISDN_USAGE_MASK)==ISDN_USAGE_MODEM) || \
((x & ISDN_USAGE_MASK)==ISDN_USAGE_VOICE)     )
#define ISDN_TIMER_RES         4
#define ISDN_TIMER_02SEC       (HZ/ISDN_TIMER_RES/5)
#define ISDN_TIMER_1SEC        (HZ/ISDN_TIMER_RES)
#define ISDN_TIMER_RINGING     5
#define ISDN_TIMER_KEEPINT    10
#define ISDN_TIMER_MODEMREAD   1
#define ISDN_TIMER_MODEMPLUS   2
#define ISDN_TIMER_MODEMRING   4
#define ISDN_TIMER_MODEMXMIT   8
#define ISDN_TIMER_NETDIAL    16
#define ISDN_TIMER_NETHANGUP  32
#define ISDN_TIMER_CARRIER   256
#define ISDN_TIMER_FAST      (ISDN_TIMER_MODEMREAD | ISDN_TIMER_MODEMPLUS | \
ISDN_TIMER_MODEMXMIT)
#define ISDN_TIMER_SLOW      (ISDN_TIMER_MODEMRING | ISDN_TIMER_NETHANGUP | \
ISDN_TIMER_NETDIAL | ISDN_TIMER_CARRIER)
#define ISDN_TIMER_DTIMEOUT10 (10*HZ/(ISDN_TIMER_02SEC*(ISDN_TIMER_RES+1)))
#define ISDN_TIMER_DTIMEOUT15 (15*HZ/(ISDN_TIMER_02SEC*(ISDN_TIMER_RES+1)))
#define ISDN_TIMER_DTIMEOUT60 (60*HZ/(ISDN_TIMER_02SEC*(ISDN_TIMER_RES+1)))
#define ISDN_GLOBAL_STOPPED 1
#define ISDN_NET_CONNECTED  0x01
#define ISDN_NET_SECURE     0x02
#define ISDN_NET_CALLBACK   0x04
#define ISDN_NET_CBHUP      0x08
#define ISDN_NET_CBOUT      0x10
#define ISDN_NET_MAGIC      0x49344C02
typedef struct  isdn_net_phone;
typedef struct isdn_net_local_s  isdn_net_local;
typedef struct isdn_net_dev_s  isdn_net_dev;
#define ISDN_ASYNC_MAGIC          0x49344C01
#define ISDN_ASYNC_INITIALIZED	  0x80000000
#define ISDN_ASYNC_CALLOUT_ACTIVE 0x40000000
#define ISDN_ASYNC_NORMAL_ACTIVE  0x20000000
#define ISDN_ASYNC_CLOSING	  0x08000000
#define ISDN_ASYNC_CTS_FLOW	  0x04000000
#define ISDN_ASYNC_CHECK_CD	  0x02000000
#define ISDN_ASYNC_HUP_NOTIFY         0x0001
#define ISDN_ASYNC_SESSION_LOCKOUT    0x0100
#define ISDN_ASYNC_PGRP_LOCKOUT       0x0200
#define ISDN_ASYNC_CALLOUT_NOHUP      0x0400
#define ISDN_ASYNC_SPLIT_TERMIOS      0x0008
#define ISDN_SERIAL_XMIT_SIZE           1024
#define ISDN_SERIAL_XMIT_MAX            4000
#define ISDN_SERIAL_TYPE_NORMAL            1
#define ISDN_SERIAL_TYPE_CALLOUT           2
typedef struct _isdn_audio_data  isdn_audio_data_t;
#define ISDN_AUDIO_SKB_DLECOUNT(skb)	(((isdn_audio_data_t *)&skb->cb[0])->dle_count)
#define ISDN_AUDIO_SKB_LOCK(skb)	(((isdn_audio_data_t *)&skb->cb[0])->lock)
typedef struct atemu  atemu;
typedef struct modem_info  modem_info;
#define ISDN_MODEM_WINSIZE 8
typedef struct _isdn_modem  isdn_modem_t;
#define V110_BUFSIZE 1024
typedef struct  isdn_v110_stream;
typedef struct  infostruct;
#define DRV_FLAG_RUNNING 1
#define DRV_FLAG_REJBUS  2
#define DRV_FLAG_LOADED  4
typedef struct _isdn_driver  isdn_driver_t;
typedef struct isdn_devt  isdn_dev;
extern isdn_dev *dev;
