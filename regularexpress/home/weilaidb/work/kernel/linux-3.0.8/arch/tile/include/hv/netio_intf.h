#define __NETIO_INTF_H__
#if !defined(__HV__) && !defined(__BOGUX__) && !defined(__KERNEL__)
#define netio_assert assert
#define netio_assert(...) ((void)(0))
#if !defined(__HV__) && !defined(__BOGUX__) && !defined(__KERNEL__) && \
!defined(__NEWLIB__)
#define _NETIO_PTHREAD
typedef int _netio_percpu_mutex_t;
static __inline int
_netio_percpu_mutex_init(_netio_percpu_mutex_t* lock)
static __inline int
_netio_percpu_mutex_lock(_netio_percpu_mutex_t* lock)
static __inline int
_netio_percpu_mutex_unlock(_netio_percpu_mutex_t* lock)
typedef int _netio_percpu_mutex_t;
#define _netio_percpu_mutex_init(L)
#define _netio_percpu_mutex_lock(L)
#define _netio_percpu_mutex_unlock(L)
#define NETIO_MAX_TILES_PER_QUEUE  64
#define NETIO_MAX_QUEUE_ID        255
#define _NETIO_PKT_NO_L4_CSUM_SHIFT           0
#define _NETIO_PKT_NO_L4_CSUM_RMASK           1
#define _NETIO_PKT_NO_L4_CSUM_MASK \
(_NETIO_PKT_NO_L4_CSUM_RMASK << _NETIO_PKT_NO_L4_CSUM_SHIFT)
#define _NETIO_PKT_NO_L3_CSUM_SHIFT           1
#define _NETIO_PKT_NO_L3_CSUM_RMASK           1
#define _NETIO_PKT_NO_L3_CSUM_MASK \
(_NETIO_PKT_NO_L3_CSUM_RMASK << _NETIO_PKT_NO_L3_CSUM_SHIFT)
#define _NETIO_PKT_BAD_L3_CSUM_SHIFT          2
#define _NETIO_PKT_BAD_L3_CSUM_RMASK          1
#define _NETIO_PKT_BAD_L3_CSUM_MASK \
(_NETIO_PKT_BAD_L3_CSUM_RMASK << _NETIO_PKT_BAD_L3_CSUM_SHIFT)
#define _NETIO_PKT_TYPE_UNRECOGNIZED_SHIFT    3
#define _NETIO_PKT_TYPE_UNRECOGNIZED_RMASK    1
#define _NETIO_PKT_TYPE_UNRECOGNIZED_MASK \
(_NETIO_PKT_TYPE_UNRECOGNIZED_RMASK << \
_NETIO_PKT_TYPE_UNRECOGNIZED_SHIFT)
#define _NETIO_PKT_TYPE_SHIFT        4
#define _NETIO_PKT_TYPE_RMASK        0x3F
#define _NETIO_PKT_VLAN_SHIFT        4
#define _NETIO_PKT_VLAN_RMASK        0x3
#define _NETIO_PKT_VLAN_MASK \
(_NETIO_PKT_VLAN_RMASK << _NETIO_PKT_VLAN_SHIFT)
#define _NETIO_PKT_VLAN_NONE         0
#define _NETIO_PKT_VLAN_ONE          1
#define _NETIO_PKT_VLAN_TWO_OUTER    2
#define _NETIO_PKT_VLAN_TWO_INNER    3
#define _NETIO_PKT_TAG_SHIFT         6
#define _NETIO_PKT_TAG_RMASK         0x3
#define _NETIO_PKT_TAG_MASK \
(_NETIO_PKT_TAG_RMASK << _NETIO_PKT_TAG_SHIFT)
#define _NETIO_PKT_TAG_NONE          0
#define _NETIO_PKT_TAG_MRVL          1
#define _NETIO_PKT_TAG_MRVL_EXT      2
#define _NETIO_PKT_TAG_BRCM          3
#define _NETIO_PKT_SNAP_SHIFT        8
#define _NETIO_PKT_SNAP_RMASK        0x1
#define _NETIO_PKT_SNAP_MASK \
(_NETIO_PKT_SNAP_RMASK << _NETIO_PKT_SNAP_SHIFT)
#define _NETIO_PKT_CUSTOM_LEN_SHIFT  11
#define _NETIO_PKT_CUSTOM_LEN_RMASK  0x1F
#define _NETIO_PKT_CUSTOM_LEN_MASK \
(_NETIO_PKT_CUSTOM_LEN_RMASK << _NETIO_PKT_CUSTOM_LEN_SHIFT)
#define _NETIO_PKT_BAD_L4_CSUM_SHIFT 16
#define _NETIO_PKT_BAD_L4_CSUM_RMASK 0x1
#define _NETIO_PKT_BAD_L4_CSUM_MASK \
(_NETIO_PKT_BAD_L4_CSUM_RMASK << _NETIO_PKT_BAD_L4_CSUM_SHIFT)
#define _NETIO_PKT_L2_LEN_SHIFT  17
#define _NETIO_PKT_L2_LEN_RMASK  0x1F
#define _NETIO_PKT_L2_LEN_MASK \
(_NETIO_PKT_L2_LEN_RMASK << _NETIO_PKT_L2_LEN_SHIFT)
#define _NETIO_PKT_NEED_EDMA_CSUM_SHIFT            0
#define _NETIO_PKT_NEED_EDMA_CSUM_RMASK            1
#define _NETIO_PKT_NEED_EDMA_CSUM_MASK \
(_NETIO_PKT_NEED_EDMA_CSUM_RMASK << _NETIO_PKT_NEED_EDMA_CSUM_SHIFT)
#define _NETIO_PKT_INFO_ETYPE_SHIFT       6
#define _NETIO_PKT_INFO_ETYPE_RMASK    0x1F
#define _NETIO_PKT_INFO_VLAN_SHIFT       11
#define _NETIO_PKT_INFO_VLAN_RMASK     0x1F
#define SMALL_PACKET_SIZE 256
#define LARGE_PACKET_SIZE 2048
#define JUMBO_PACKET_SIZE (12 * 1024)
#define ETHERTYPE_IPv4 (0x0800)
#define ETHERTYPE_ARP (0x0806)
#define ETHERTYPE_VLAN (0x8100)
#define ETHERTYPE_Q_IN_Q (0x9100)
#define ETHERTYPE_IPv6 (0x86DD)
#define ETHERTYPE_MPLS (0x8847)
typedef enum
netio_pkt_status_t;
#define NETIO_LOG2_NUM_BUCKETS (10)
#define NETIO_NUM_BUCKETS (1 << NETIO_LOG2_NUM_BUCKETS)
typedef union
netio_group_t;
typedef netio_group_t netio_vlan_t;
typedef unsigned char netio_bucket_t;
typedef unsigned int netio_size_t;
typedef struct
netio_pkt_metadata_t;
#define NETIO_PACKET_PADDING 2
typedef struct
netio_pkt_minimal_metadata_t;
typedef union
__netio_pkt_notif_t;
#define _NETIO_PKT_HANDLE_BASE(p) \
((unsigned char*)((p).word & 0xFFFFFFC0))
#define _NETIO_PKT_BASE(p) \
_NETIO_PKT_HANDLE_BASE(p->__packet)
typedef union
__netio_pkt_handle_t;
typedef struct
netio_pkt_handle_t;
typedef struct
netio_pkt_t;
#define __NETIO_PKT_NOTIF_HEADER(pkt) ((pkt)->__notif_header)
#define __NETIO_PKT_IPP_HANDLE(pkt) ((pkt)->__packet.bits.__ipp_handle)
#define __NETIO_PKT_QUEUE(pkt) ((pkt)->__packet.bits.__queue)
#define __NETIO_PKT_NOTIF_HEADER_M(mda, pkt) ((pkt)->__notif_header)
#define __NETIO_PKT_IPP_HANDLE_M(mda, pkt) ((pkt)->__packet.bits.__ipp_handle)
#define __NETIO_PKT_MINIMAL(pkt) ((pkt)->__packet.bits.__minimal)
#define __NETIO_PKT_QUEUE_M(mda, pkt) ((pkt)->__packet.bits.__queue)
#define __NETIO_PKT_FLAGS_M(mda, pkt) ((mda)->__flags)
extern const uint16_t _netio_pkt_info[];
#define NETIO_PKT_GOOD_CHECKSUM(pkt) \
NETIO_PKT_L4_CSUM_CORRECT(pkt)
#define NETIO_PKT_GOOD_CHECKSUM_M(mda, pkt) \
NETIO_PKT_L4_CSUM_CORRECT_M(mda, pkt)
static __inline netio_pkt_metadata_t*
NETIO_PKT_METADATA(netio_pkt_t* pkt)
static __inline netio_pkt_minimal_metadata_t*
NETIO_PKT_MINIMAL_METADATA(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_IS_MINIMAL(netio_pkt_t* pkt)
static __inline netio_pkt_handle_t
NETIO_PKT_HANDLE(netio_pkt_t* pkt)
#define NETIO_PKT_HANDLE_NONE ((netio_pkt_handle_t) )
static __inline unsigned int
NETIO_PKT_HANDLE_IS_VALID(netio_pkt_handle_t handle)
static __inline unsigned char*
NETIO_PKT_CUSTOM_DATA_H(netio_pkt_handle_t handle)
static __inline netio_size_t
NETIO_PKT_CUSTOM_HEADER_LENGTH_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_CUSTOM_LENGTH_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_CUSTOM_DATA_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L2_HEADER_LENGTH_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L2_LENGTH_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_L2_DATA_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L3_LENGTH_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_L3_DATA_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_ORDINAL_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_GROUP_ORDINAL_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned short
NETIO_PKT_VLAN_ID_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned short
NETIO_PKT_ETHERTYPE_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_FLOW_HASH_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_USER_DATA_0_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_USER_DATA_1_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L4_CSUM_CALCULATED_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L4_CSUM_CORRECT_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L3_CSUM_CALCULATED_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L3_CSUM_CORRECT_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_ETHERTYPE_RECOGNIZED_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline netio_pkt_status_t
NETIO_PKT_STATUS_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_BAD_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L2_LENGTH_MM(netio_pkt_minimal_metadata_t* mmd, netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L2_HEADER_LENGTH_MM(netio_pkt_minimal_metadata_t* mmd,
netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L3_LENGTH_MM(netio_pkt_minimal_metadata_t* mmd, netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_L3_DATA_MM(netio_pkt_minimal_metadata_t* mmd, netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_L2_DATA_MM(netio_pkt_minimal_metadata_t* mmd, netio_pkt_t* pkt)
static __inline netio_pkt_status_t
NETIO_PKT_STATUS(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_BAD(netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_CUSTOM_HEADER_LENGTH(netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_CUSTOM_LENGTH(netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_CUSTOM_DATA(netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L2_HEADER_LENGTH(netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L2_LENGTH(netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_L2_DATA(netio_pkt_t* pkt)
static __inline netio_size_t
NETIO_PKT_L3_LENGTH(netio_pkt_t* pkt)
static __inline unsigned char*
NETIO_PKT_L3_DATA(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_ORDINAL(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_GROUP_ORDINAL(netio_pkt_t* pkt)
static __inline unsigned short
NETIO_PKT_VLAN_ID(netio_pkt_t* pkt)
static __inline unsigned short
NETIO_PKT_ETHERTYPE(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_FLOW_HASH(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_USER_DATA_0(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_USER_DATA_1(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L4_CSUM_CALCULATED(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L4_CSUM_CORRECT(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L3_CSUM_CALCULATED(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_L3_CSUM_CORRECT(netio_pkt_t* pkt)
static __inline unsigned int
NETIO_PKT_ETHERTYPE_RECOGNIZED(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_SET_L2_LENGTH_MM(netio_pkt_minimal_metadata_t* mmd, netio_pkt_t* pkt,
int len)
static __inline void
NETIO_PKT_SET_L2_LENGTH(netio_pkt_t* pkt, int len)
static __inline void
NETIO_PKT_SET_L2_HEADER_LENGTH_MM(netio_pkt_minimal_metadata_t* mmd,
netio_pkt_t* pkt, int len)
static __inline void
NETIO_PKT_SET_L2_HEADER_LENGTH(netio_pkt_t* pkt, int len)
static __inline void
NETIO_PKT_DO_EGRESS_CSUM_MM(netio_pkt_minimal_metadata_t* mmd,
netio_pkt_t* pkt, int start, int length,
int location, uint16_t seed)
static __inline void
NETIO_PKT_DO_EGRESS_CSUM(netio_pkt_t* pkt, int start, int length,
int location, uint16_t seed)
static __inline int
NETIO_PKT_PREPEND_AVAIL_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline int
NETIO_PKT_PREPEND_AVAIL_MM(netio_pkt_minimal_metadata_t* mmd, netio_pkt_t* pkt)
static __inline int
NETIO_PKT_PREPEND_AVAIL(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_MINIMAL_METADATA_MM(netio_pkt_minimal_metadata_t* mmd,
netio_pkt_t* pkt)
static __inline void
NETIO_PKT_INV_MINIMAL_METADATA_MM(netio_pkt_minimal_metadata_t* mmd,
netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_INV_MINIMAL_METADATA_MM(netio_pkt_minimal_metadata_t* mmd,
netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_METADATA_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline void
NETIO_PKT_INV_METADATA_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_INV_METADATA_M(netio_pkt_metadata_t* mda, netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_MINIMAL_METADATA(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_INV_MINIMAL_METADATA(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_INV_MINIMAL_METADATA(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_METADATA(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_INV_METADATA(netio_pkt_t* pkt)
static __inline void
NETIO_PKT_FLUSH_INV_METADATA(netio_pkt_t* pkt)
#define NETIO_NUM_NODE_WEIGHTS  16
typedef struct
netio_input_config_t;
#define NETIO_STRICT_HOMING   0x00000002
#define NETIO_TAG_NONE        0x00000004
#define NETIO_TAG_MRVL        0x00000008
#define NETIO_TAG_BRCM        0x00000010
#define NETIO_RECV            0x00000020
#define NETIO_NO_RECV         0x00000040
#define NETIO_XMIT            0x00000080
#define NETIO_XMIT_CSUM       0x00000100
#define NETIO_NO_XMIT         0x00000200
#define NETIO_FIXED_BUFFER_VA 0x00000400
#define NETIO_REQUIRE_LINK_UP    0x00000800
#define NETIO_NOREQUIRE_LINK_UP  0x00001000
#define _NETIO_AUTO_UP        0x00002000
#define _NETIO_AUTO_DN        0x00004000
#define _NETIO_AUTO_PRESENT   0x00008000
#define NETIO_AUTO_LINK_UP     (_NETIO_AUTO_PRESENT | _NETIO_AUTO_UP)
#define NETIO_AUTO_LINK_UPDN   (_NETIO_AUTO_PRESENT | _NETIO_AUTO_UP | \
_NETIO_AUTO_DN)
#define NETIO_AUTO_LINK_DN     (_NETIO_AUTO_PRESENT | _NETIO_AUTO_DN)
#define NETIO_AUTO_LINK_NONE   _NETIO_AUTO_PRESENT
#define NETIO_MIN_RECEIVE_PKTS            16
#define NETIO_MAX_RECEIVE_PKTS           128
#define NETIO_MAX_SEND_BUFFERS            16
#define NETIO_TOTAL_SENDS_OUTSTANDING   2015
#define NETIO_MIN_SENDS_OUTSTANDING       16
struct __netio_queue_impl_t;
struct __netio_queue_user_impl_t;
typedef struct
netio_queue_t;
typedef struct
netio_send_pkt_context_t;
#define SEND_PKT_CTX_USE_EPP   1
#define SEND_PKT_CTX_SEND_CSUM 2
typedef struct
__attribute__((aligned(8)))
netio_pkt_vector_entry_t;
static __inline void
netio_pkt_vector_set(volatile netio_pkt_vector_entry_t* v, netio_pkt_t* pkt,
uint8_t user_data)
#define NETIO_PARAM       0
#define NETIO_PARAM_MAC        0
#define NETIO_PARAM_PAUSE_IN   1
#define NETIO_PARAM_PAUSE_OUT  2
#define NETIO_PARAM_JUMBO      3
#define NETIO_PARAM_OVERFLOW   4
#define NETIO_PARAM_STAT 5
#define NETIO_PARAM_LINK_POSSIBLE_STATE 6
#define NETIO_PARAM_LINK_CONFIG NETIO_PARAM_LINK_POSSIBLE_STATE
#define NETIO_PARAM_LINK_CURRENT_STATE 7
#define NETIO_PARAM_LINK_STATUS NETIO_PARAM_LINK_CURRENT_STATE
#define NETIO_PARAM_COHERENT 8
#define NETIO_PARAM_LINK_DESIRED_STATE 9
typedef struct
netio_stat_t;
#define NETIO_LINK_10M         0x01
#define NETIO_LINK_100M        0x02
#define NETIO_LINK_1G          0x04
#define NETIO_LINK_10G         0x08
#define NETIO_LINK_ANYSPEED    0x10
#define NETIO_LINK_SPEED  (NETIO_LINK_10M  | \
NETIO_LINK_100M | \
NETIO_LINK_1G   | \
NETIO_LINK_10G  | \
NETIO_LINK_ANYSPEED)
#define NETIO_MAC             1
#define NETIO_MDIO            2
#define NETIO_MDIO_CLAUSE45   3
typedef union
netio_mdio_addr_t;
