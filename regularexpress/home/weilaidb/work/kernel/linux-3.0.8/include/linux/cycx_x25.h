#define	_CYCX_X25_H
#define PACKED __attribute__((packed))
#define	X25_MBOX_OFFS	0x300
#define	X25_RXMBOX_OFFS	0x340
#define dprintk(level, format, a...) if (cycx_debug >= level) printk(format, ##a)
extern unsigned int cycx_debug;
struct cycx_x25_cmd  PACKED;
#define X25_CONNECT_REQUEST             0x4401
#define X25_CONNECT_RESPONSE            0x4402
#define X25_DISCONNECT_REQUEST          0x4403
#define X25_DISCONNECT_RESPONSE         0x4404
#define X25_DATA_REQUEST                0x4405
#define X25_ACK_TO_VC			0x4406
#define X25_INTERRUPT_RESPONSE          0x4407
#define X25_CONFIG                      0x4408
#define X25_CONNECT_INDICATION          0x4409
#define X25_CONNECT_CONFIRM             0x440A
#define X25_DISCONNECT_INDICATION       0x440B
#define X25_DISCONNECT_CONFIRM          0x440C
#define X25_DATA_INDICATION             0x440E
#define X25_INTERRUPT_INDICATION        0x440F
#define X25_ACK_FROM_VC			0x4410
#define X25_ACK_N3			0x4411
#define X25_CONNECT_COLLISION           0x4413
#define X25_N3WIN                       0x4414
#define X25_LINE_ON                     0x4415
#define X25_LINE_OFF                    0x4416
#define X25_RESET_REQUEST               0x4417
#define X25_LOG                         0x4500
#define X25_STATISTIC                   0x4600
#define X25_TRACE                       0x4700
#define X25_N2TRACEXC                   0x4702
#define X25_N3TRACEXC                   0x4703
struct cycx_x25_config  PACKED;
struct cycx_x25_stats  PACKED;
