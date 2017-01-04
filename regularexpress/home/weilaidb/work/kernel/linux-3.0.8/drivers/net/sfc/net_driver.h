#define EFX_NET_DRIVER_H
#if defined(EFX_ENABLE_DEBUG) && !defined(DEBUG)
#define DEBUG
#define EFX_DRIVER_VERSION	"3.1"
#define EFX_BUG_ON_PARANOID(x) BUG_ON(x)
#define EFX_WARN_ON_PARANOID(x) WARN_ON(x)
#define EFX_BUG_ON_PARANOID(x) do  while (0)
#define EFX_WARN_ON_PARANOID(x) do  while (0)
#define EFX_MAX_CHANNELS 32
#define EFX_MAX_RX_QUEUES EFX_MAX_CHANNELS
#define EFX_MAX_TX_TC		2
#define EFX_MAX_CORE_TX_QUEUES	(EFX_MAX_TX_TC * EFX_MAX_CHANNELS)
#define EFX_TXQ_TYPE_OFFLOAD	1
#define EFX_TXQ_TYPE_HIGHPRI	2
#define EFX_TXQ_TYPES		4
#define EFX_MAX_TX_QUEUES	(EFX_TXQ_TYPES * EFX_MAX_CHANNELS)
struct efx_special_buffer ;
enum efx_flush_state ;
struct efx_tx_buffer ;
struct efx_tx_queue ;
struct efx_rx_buffer ;
struct efx_rx_page_state ;
struct efx_rx_queue ;
struct efx_buffer ;
enum efx_rx_alloc_method ;
struct efx_channel ;
enum efx_led_mode ;
#define STRING_TABLE_LOOKUP(val, member) \
((val) < member ## _max) ? member ## _names[val] : "(invalid)"
extern const char *efx_loopback_mode_names[];
extern const unsigned int efx_loopback_mode_max;
#define LOOPBACK_MODE(efx) \
STRING_TABLE_LOOKUP((efx)->loopback_mode, efx_loopback_mode)
extern const char *efx_reset_type_names[];
extern const unsigned int efx_reset_type_max;
#define RESET_TYPE(type) \
STRING_TABLE_LOOKUP(type, efx_reset_type)
enum efx_int_mode ;
#define EFX_INT_MODE_USE_MSI(x) (((x)->interrupt_mode) <= EFX_INT_MODE_MSI)
enum nic_state ;
#define EFX_PAGE_IP_ALIGN 0
#define EFX_PAGE_IP_ALIGN NET_IP_ALIGN
#define EFX_PAGE_SKB_ALIGN 2
struct efx_nic;
#define EFX_FC_RX	FLOW_CTRL_RX
#define EFX_FC_TX	FLOW_CTRL_TX
#define EFX_FC_AUTO	4
struct efx_link_state ;
static inline bool efx_link_state_equal(const struct efx_link_state *left,
const struct efx_link_state *right)
struct efx_mac_operations ;
struct efx_phy_operations ;
enum efx_phy_mode ;
static inline bool efx_phy_mode_disabled(enum efx_phy_mode mode)
struct efx_mac_stats ;
#define EFX_MCAST_HASH_BITS 8
#define EFX_MCAST_HASH_ENTRIES (1 << EFX_MCAST_HASH_BITS)
union efx_multicast_hash ;
struct efx_filter_state;
struct efx_nic ;
static inline int efx_dev_registered(struct efx_nic *efx)
static inline const char *efx_dev_name(struct efx_nic *efx)
static inline unsigned int efx_port_num(struct efx_nic *efx)
struct efx_nic_type ;
static inline struct efx_channel *
efx_get_channel(struct efx_nic *efx, unsigned index)
#define efx_for_each_channel(_channel, _efx)				\
for (_channel = (_efx)->channel[0];				\
_channel;							\
_channel = (_channel->channel + 1 < (_efx)->n_channels) ?	\
(_efx)->channel[_channel->channel + 1] : NULL)
static inline struct efx_tx_queue *
efx_get_tx_queue(struct efx_nic *efx, unsigned index, unsigned type)
static inline bool efx_channel_has_tx_queues(struct efx_channel *channel)
static inline struct efx_tx_queue *
efx_channel_get_tx_queue(struct efx_channel *channel, unsigned type)
static inline bool efx_tx_queue_used(struct efx_tx_queue *tx_queue)
#define efx_for_each_channel_tx_queue(_tx_queue, _channel)		\
if (!efx_channel_has_tx_queues(_channel))			\
;							\
else								\
for (_tx_queue = (_channel)->tx_queue;			\
_tx_queue < (_channel)->tx_queue + EFX_TXQ_TYPES && \
efx_tx_queue_used(_tx_queue);		\
_tx_queue++)
#define efx_for_each_possible_channel_tx_queue(_tx_queue, _channel)	\
for (_tx_queue = (_channel)->tx_queue;				\
_tx_queue < (_channel)->tx_queue + EFX_TXQ_TYPES;		\
_tx_queue++)
static inline struct efx_rx_queue *
efx_get_rx_queue(struct efx_nic *efx, unsigned index)
static inline bool efx_channel_has_rx_queue(struct efx_channel *channel)
static inline struct efx_rx_queue *
efx_channel_get_rx_queue(struct efx_channel *channel)
#define efx_for_each_channel_rx_queue(_rx_queue, _channel)		\
if (!efx_channel_has_rx_queue(_channel))			\
;							\
else								\
for (_rx_queue = &(_channel)->rx_queue;			\
_rx_queue;						\
_rx_queue = NULL)
static inline struct efx_channel *
efx_rx_queue_channel(struct efx_rx_queue *rx_queue)
static inline int efx_rx_queue_index(struct efx_rx_queue *rx_queue)
static inline struct efx_rx_buffer *efx_rx_buffer(struct efx_rx_queue *rx_queue,
unsigned int index)
static inline void set_bit_le(unsigned nr, unsigned char *addr)
static inline void clear_bit_le(unsigned nr, unsigned char *addr)
#define EFX_MAX_FRAME_LEN(mtu) \
((((mtu) + ETH_HLEN + VLAN_HLEN + 4 + 7) & ~7) + 16)
