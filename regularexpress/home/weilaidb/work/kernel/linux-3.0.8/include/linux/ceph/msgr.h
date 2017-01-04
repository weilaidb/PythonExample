#define CEPH_MSGR_H
#define CEPH_MON_PORT    6789
#define CEPH_PORT_FIRST  6789
#define CEPH_PORT_START  6800
#define CEPH_PORT_LAST   6900
#define CEPH_BANNER "ceph v027"
#define CEPH_BANNER_MAX_LEN 30
typedef __u32 ceph_seq_t;
static inline __s32 ceph_seq_cmp(__u32 a, __u32 b)
struct ceph_entity_name  __attribute__ ((packed));
#define CEPH_ENTITY_TYPE_MON    0x01
#define CEPH_ENTITY_TYPE_MDS    0x02
#define CEPH_ENTITY_TYPE_OSD    0x04
#define CEPH_ENTITY_TYPE_CLIENT 0x08
#define CEPH_ENTITY_TYPE_AUTH   0x20
#define CEPH_ENTITY_TYPE_ANY    0xFF
extern const char *ceph_entity_type_name(int type);
struct ceph_entity_addr  __attribute__ ((packed));
struct ceph_entity_inst  __attribute__ ((packed));
#define CEPH_MSGR_TAG_READY         1
#define CEPH_MSGR_TAG_RESETSESSION  2
#define CEPH_MSGR_TAG_WAIT          3
#define CEPH_MSGR_TAG_RETRY_SESSION 4
#define CEPH_MSGR_TAG_RETRY_GLOBAL  5
#define CEPH_MSGR_TAG_CLOSE         6
#define CEPH_MSGR_TAG_MSG           7
#define CEPH_MSGR_TAG_ACK           8
#define CEPH_MSGR_TAG_KEEPALIVE     9
#define CEPH_MSGR_TAG_BADPROTOVER  10
#define CEPH_MSGR_TAG_BADAUTHORIZER 11
#define CEPH_MSGR_TAG_FEATURES      12
struct ceph_msg_connect  __attribute__ ((packed));
struct ceph_msg_connect_reply  __attribute__ ((packed));
#define CEPH_MSG_CONNECT_LOSSY  1
struct ceph_msg_header_old  __attribute__ ((packed));
struct ceph_msg_header  __attribute__ ((packed));
#define CEPH_MSG_PRIO_LOW     64
#define CEPH_MSG_PRIO_DEFAULT 127
#define CEPH_MSG_PRIO_HIGH    196
#define CEPH_MSG_PRIO_HIGHEST 255
struct ceph_msg_footer  __attribute__ ((packed));
#define CEPH_MSG_FOOTER_COMPLETE  (1<<0)
#define CEPH_MSG_FOOTER_NOCRC     (1<<1)
