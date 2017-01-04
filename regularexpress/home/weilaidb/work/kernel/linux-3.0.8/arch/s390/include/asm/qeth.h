#define __ASM_S390_QETH_IOCTL_H__
#define SIOC_QETH_ARP_SET_NO_ENTRIES    (SIOCDEVPRIVATE)
#define SIOC_QETH_ARP_QUERY_INFO        (SIOCDEVPRIVATE + 1)
#define SIOC_QETH_ARP_ADD_ENTRY         (SIOCDEVPRIVATE + 2)
#define SIOC_QETH_ARP_REMOVE_ENTRY      (SIOCDEVPRIVATE + 3)
#define SIOC_QETH_ARP_FLUSH_CACHE       (SIOCDEVPRIVATE + 4)
#define SIOC_QETH_ADP_SET_SNMP_CONTROL  (SIOCDEVPRIVATE + 5)
#define SIOC_QETH_GET_CARD_TYPE         (SIOCDEVPRIVATE + 6)
struct qeth_arp_cache_entry  __attribute__ ((packed));
enum qeth_arp_ipaddrtype ;
struct qeth_arp_entrytype  __attribute__((packed));
#define QETH_QARP_MEDIASPECIFIC_BYTES 32
#define QETH_QARP_MACADDRTYPE_BYTES 1
struct qeth_arp_qi_entry7  __attribute__((packed));
struct qeth_arp_qi_entry7_ipv6  __attribute__((packed));
struct qeth_arp_qi_entry7_short  __attribute__((packed));
struct qeth_arp_qi_entry7_short_ipv6  __attribute__((packed));
struct qeth_arp_qi_entry5  __attribute__((packed));
struct qeth_arp_qi_entry5_ipv6  __attribute__((packed));
struct qeth_arp_qi_entry5_short  __attribute__((packed));
struct qeth_arp_qi_entry5_short_ipv6  __attribute__((packed));
#define QETH_QARP_STRIP_ENTRIES  0x8000
#define QETH_QARP_WITH_IPV6	 0x4000
#define QETH_QARP_REQUEST_MASK   0x00ff
#define QETH_QARP_USER_DATA_SIZE 20000
#define QETH_QARP_MASK_OFFSET    4
#define QETH_QARP_ENTRIES_OFFSET 6
struct qeth_arp_query_user_data  __attribute__((packed));
