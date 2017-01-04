#define __nosy_dump_h__
#define array_length(array) (sizeof(array) / sizeof(array[0]))
#define ACK_NO_ACK   0x0
#define ACK_DONE(a)  ((a >> 2) == 0)
#define ACK_BUSY(a)  ((a >> 2) == 1)
#define ACK_ERROR(a) ((a >> 2) == 3)
struct phy_packet ;
#define TCODE_PHY_PACKET 0x10
#define PHY_PACKET_CONFIGURATION 0x00
#define PHY_PACKET_LINK_ON 0x01
#define PHY_PACKET_SELF_ID 0x02
struct link_packet ;
struct subaction ;
struct link_transaction ;
int decode_fcp(struct link_transaction *t);
