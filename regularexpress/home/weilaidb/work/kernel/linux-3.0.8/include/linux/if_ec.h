#define __LINUX_IF_EC
struct ec_addr ;
struct sockaddr_ec ;
#define ECTYPE_PACKET_RECEIVED		0
#define ECTYPE_TRANSMIT_STATUS		0x10
#define ECTYPE_TRANSMIT_OK		1
#define ECTYPE_TRANSMIT_NOT_LISTENING	2
#define ECTYPE_TRANSMIT_NET_ERROR	3
#define ECTYPE_TRANSMIT_NO_CLOCK	4
#define ECTYPE_TRANSMIT_LINE_JAMMED	5
#define ECTYPE_TRANSMIT_NOT_PRESENT	6
#define EC_HLEN				6
struct ec_framehdr ;
struct econet_sock ;
static inline struct econet_sock *ec_sk(const struct sock *sk)
struct ec_device ;
