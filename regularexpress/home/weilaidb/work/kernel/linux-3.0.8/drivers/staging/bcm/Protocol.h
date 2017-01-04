#define	__PROTOCOL_H__
#define IPV4				4
#define IPV6                6
struct ArpHeader ;
struct TransportHeaderT
__attribute__((packed));
typedef struct TransportHeaderT xporthdr;
typedef enum _E_NWPKT_IPFRAME_TYPE
E_NWPKT_IPFRAME_TYPE;
typedef enum _E_NWPKT_ETHFRAME_TYPE
E_NWPKT_ETHFRAME_TYPE;
typedef struct _S_ETHCS_PKT_INFO
S_ETHCS_PKT_INFO,*PS_ETHCS_PKT_INFO;
typedef struct _ETH_CS_802_Q_FRAME
__attribute__((packed)) ETH_CS_802_Q_FRAME;
typedef struct _ETH_CS_802_LLC_FRAME
__attribute__((packed)) ETH_CS_802_LLC_FRAME;
typedef struct _ETH_CS_802_LLC_SNAP_FRAME
__attribute__((packed)) ETH_CS_802_LLC_SNAP_FRAME;
typedef struct _ETH_CS_ETH2_FRAME
__attribute__((packed)) ETH_CS_ETH2_FRAME;
#define ETHERNET_FRAMETYPE_IPV4		ntohs(0x0800)
#define ETHERNET_FRAMETYPE_IPV6 	ntohs(0x86dd)
#define ETHERNET_FRAMETYPE_802QVLAN 	ntohs(0x8100)
typedef enum _E_SERVICEFLOW_CS_SPEC_
E_SERVICEFLOW_CS_SPEC;
#define	IP6_HEADER_LEN	40
#define IP_VERSION(byte)        (((byte&0xF0)>>4))
#define MAC_ADDRESS_SIZE	6
#define	ETH_AND_IP_HEADER_LEN	14 + 20
#define L4_SRC_PORT_LEN 2
#define L4_DEST_PORT_LEN 2
#define	CTRL_PKT_LEN		8 + ETH_AND_IP_HEADER_LEN
#define	ETH_ARP_FRAME			0x806
#define	ETH_IPV4_FRAME			0x800
#define	ETH_IPV6_FRAME			0x86DD
#define UDP 					0x11
#define TCP         			0x06
#define	ARP_OP_REQUEST			0x01
#define	ARP_OP_REPLY			0x02
#define	ARP_PKT_SIZE			60
typedef struct _TCP_HEADER
TCP_HEADER,*PTCP_HEADER;
#define TCP_HEADER_LEN  	sizeof(TCP_HEADER)
#define TCP_ACK             0x10
#define GET_TCP_HEADER_LEN(byte) ((byte&0xF0)>>4)
