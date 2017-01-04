#define _phb_h 1
#define PHB_HANDSHAKE_SET      ((ushort) 0x001)
#define PHB_HANDSHAKE_RESET     ((ushort) 0x002)
#define PHB_HANDSHAKE_FLAGS     (PHB_HANDSHAKE_RESET | PHB_HANDSHAKE_SET)
#define MAX_PHB               ((ushort) 128)
#define TXPKT_INCOMPLETE        0x0001
#define TXINTR_ENABLED          0x0002
#define TX_TAB3                 0x0004
#define TX_OCRNL                0x0008
#define TX_ONLCR                0x0010
#define TX_SENDSPACES           0x0020
#define TX_SENDNULL             0x0040
#define TX_SENDLF               0x0080
#define TX_PARALLELBUG          0x0100
#define TX_HANGOVER             (TX_SENDSPACES | TX_SENDLF | TX_SENDNULL)
#define TX_DTRFLOW		0x0200
#define	TX_DTRFLOWED		0x0400
#define	TX_DATAINFIFO		0x0800
#define	TX_BUSY			0x1000
#define RX_SPARE	        0x0001
#define RXINTR_ENABLED          0x0002
#define RX_ICRNL                0x0008
#define RX_INLCR                0x0010
#define RX_IGNCR                0x0020
#define RX_CTSFLOW              0x0040
#define RX_IXOFF                0x0080
#define RX_CTSFLOWED            0x0100
#define RX_IXOFFED              0x0200
#define RX_BUFFERED		0x0400
#define PORT_ISOPEN             0x0001
#define PORT_HUPCL              0x0002
#define PORT_MOPENPEND          0x0004
#define PORT_ISPARALLEL         0x0008
#define PORT_BREAK              0x0010
#define PORT_STATUSPEND		0x0020
#define PORT_BREAKPEND          0x0040
#define PORT_MODEMPEND          0x0080
#define PORT_PARALLELBUG        0x0100
#define PORT_FULLMODEM          0x0200
#define PORT_RJ45               0x0400
#define PORT_RESTRICTED         0x0600
#define PORT_MODEMBITS          0x0600
#define PORT_WCLOSE             0x0800
#define	PORT_HANDSHAKEFIX	0x1000
#define	PORT_WASPCLOSED		0x2000
#define	DUMPMODE		0x4000
#define	READ_REG		0x8000
struct PHB ;
