#define __INC_ETHERNET_H
#define ETHERNET_ADDRESS_LENGTH		6
#define ETHERNET_HEADER_SIZE		14
#define LLC_HEADER_SIZE			6
#define TYPE_LENGTH_FIELD_SIZE		2
#define MINIMUM_ETHERNET_PACKET_SIZE	60
#define MAXIMUM_ETHERNET_PACKET_SIZE	1514
#define RT_ETH_IS_MULTICAST(_pAddr)	((((u8 *)(_pAddr))[0]&0x01) != 0)
#define RT_ETH_IS_BROADCAST(_pAddr)	(				\
((u8 *)(_pAddr))[0] == 0xff	&&		\
((u8 *)(_pAddr))[1] == 0xff	&&		\
((u8 *)(_pAddr))[2] == 0xff	&&		\
((u8 *)(_pAddr))[3] == 0xff	&&		\
((u8 *)(_pAddr))[4] == 0xff	&&		\
((u8 *)(_pAddr))[5] == 0xff)
