#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define AD_SHORT_TIMEOUT           1
#define AD_LONG_TIMEOUT            0
#define AD_STANDBY                 0x2
#define AD_MAX_TX_IN_SECOND        3
#define AD_COLLECTOR_MAX_DELAY     0
#define AD_FAST_PERIODIC_TIME      1
#define AD_SLOW_PERIODIC_TIME      30
#define AD_SHORT_TIMEOUT_TIME      (3*AD_FAST_PERIODIC_TIME)
#define AD_LONG_TIMEOUT_TIME       (3*AD_SLOW_PERIODIC_TIME)
#define AD_CHURN_DETECTION_TIME    60
#define AD_AGGREGATE_WAIT_TIME     2
#define AD_STATE_LACP_ACTIVITY   0x1
#define AD_STATE_LACP_TIMEOUT    0x2
#define AD_STATE_AGGREGATION     0x4
#define AD_STATE_SYNCHRONIZATION 0x8
#define AD_STATE_COLLECTING      0x10
#define AD_STATE_DISTRIBUTING    0x20
#define AD_STATE_DEFAULTED       0x40
#define AD_STATE_EXPIRED         0x80
#define AD_PORT_BEGIN           0x1
#define AD_PORT_LACP_ENABLED    0x2
#define AD_PORT_ACTOR_CHURN     0x4
#define AD_PORT_PARTNER_CHURN   0x8
#define AD_PORT_READY           0x10
#define AD_PORT_READY_N         0x20
#define AD_PORT_MATCHED         0x40
#define AD_PORT_STANDBY         0x80
#define AD_PORT_SELECTED        0x100
#define AD_PORT_MOVED           0x200
#define  AD_DUPLEX_KEY_BITS    0x1
#define  AD_SPEED_KEY_BITS     0x3E
#define  AD_USER_KEY_BITS      0xFFC0
#define     AD_LINK_SPEED_BITMASK_1MBPS       0x1
#define     AD_LINK_SPEED_BITMASK_10MBPS      0x2
#define     AD_LINK_SPEED_BITMASK_100MBPS     0x4
#define     AD_LINK_SPEED_BITMASK_1000MBPS    0x8
#define     AD_LINK_SPEED_BITMASK_10000MBPS   0x10
#define MAC_ADDRESS_COMPARE(A, B) memcmp(A, B, ETH_ALEN)
static struct mac_addr null_mac_addr = ;
static u16 ad_ticks_per_sec;
static const int ad_delta_in_ticks = (AD_TIMER_INTERVAL * HZ) / 1000;
static const u8 lacpdu_mcast_addr[ETH_ALEN] = MULTICAST_LACPDU_ADDR;
static int ad_lacpdu_send(struct port *port);
static int ad_marker_send(struct port *port, struct bond_marker *marker);
static void ad_mux_machine(struct port *port);
static void ad_rx_machine(struct lacpdu *lacpdu, struct port *port);
static void ad_tx_machine(struct port *port);
static void ad_periodic_machine(struct port *port);
static void ad_port_selection_logic(struct port *port);
static void ad_agg_selection_logic(struct aggregator *aggregator);
static void ad_clear_agg(struct aggregator *aggregator);
static void ad_initialize_agg(struct aggregator *aggregator);
static void ad_initialize_port(struct port *port, int lacp_fast);
static void ad_enable_collecting_distributing(struct port *port);
static void ad_disable_collecting_distributing(struct port *port);
static void ad_marker_info_received(struct bond_marker *marker_info, struct port *port);
static void ad_marker_response_received(struct bond_marker *marker, struct port *port);
static inline struct bonding *__get_bond_by_port(struct port *port)
static inline struct port *__get_first_port(struct bonding *bond)
static inline struct port *__get_next_port(struct port *port)
static inline struct aggregator *__get_first_agg(struct port *port)
static inline struct aggregator *__get_next_agg(struct aggregator *aggregator)
static inline int __agg_has_partner(struct aggregator *agg)
static inline void __disable_port(struct port *port)
static inline void __enable_port(struct port *port)
static inline int __port_is_enabled(struct port *port)
static inline u32 __get_agg_selection_mode(struct port *port)
static inline int __check_agg_selection_timer(struct port *port)
static inline void __get_state_machine_lock(struct port *port)
static inline void __release_state_machine_lock(struct port *port)
static u16 __get_link_speed(struct port *port)
static u8 __get_duplex(struct port *port)
static inline void __initialize_port_locks(struct port *port)
static u16 __ad_timer_to_ticks(u16 timer_type, u16 par)
static void __choose_matched(struct lacpdu *lacpdu, struct port *port)
static void __record_pdu(struct lacpdu *lacpdu, struct port *port)
static void __record_default(struct port *port)
static void __update_selected(struct lacpdu *lacpdu, struct port *port)
static void __update_default_selected(struct port *port)
static void __update_ntt(struct lacpdu *lacpdu, struct port *port)
static void __attach_bond_to_agg(struct port *port)
static void __detach_bond_from_agg(struct port *port)
static int __agg_ports_are_ready(struct aggregator *aggregator)
static void __set_agg_ports_ready(struct aggregator *aggregator, int val)
static u32 __get_agg_bandwidth(struct aggregator *aggregator)
static struct aggregator *__get_active_agg(struct aggregator *aggregator)
static inline void __update_lacpdu_from_port(struct port *port)
static int ad_lacpdu_send(struct port *port)
static int ad_marker_send(struct port *port, struct bond_marker *marker)
static void ad_mux_machine(struct port *port)
static void ad_rx_machine(struct lacpdu *lacpdu, struct port *port)
static void ad_tx_machine(struct port *port)
static void ad_periodic_machine(struct port *port)
static void ad_port_selection_logic(struct port *port)
static struct aggregator *ad_agg_selection_test(struct aggregator *best,
struct aggregator *curr)
static int agg_device_up(const struct aggregator *agg)
static void ad_agg_selection_logic(struct aggregator *agg)
static void ad_clear_agg(struct aggregator *aggregator)
static void ad_initialize_agg(struct aggregator *aggregator)
static void ad_initialize_port(struct port *port, int lacp_fast)
static void ad_enable_collecting_distributing(struct port *port)
static void ad_disable_collecting_distributing(struct port *port)
static void ad_marker_info_received(struct bond_marker *marker_info,
struct port *port)
static void ad_marker_response_received(struct bond_marker *marker,
struct port *port)
#define AD_AGGREGATOR_SELECTION_TIMER  8
void bond_3ad_initiate_agg_selection(struct bonding *bond, int timeout)
static u16 aggregator_identifier;
void bond_3ad_initialize(struct bonding *bond, u16 tick_resolution, int lacp_fast)
int bond_3ad_bind_slave(struct slave *slave)
void bond_3ad_unbind_slave(struct slave *slave)
void bond_3ad_state_machine_handler(struct work_struct *work)
static void bond_3ad_rx_indication(struct lacpdu *lacpdu, struct slave *slave, u16 length)
void bond_3ad_adapter_speed_changed(struct slave *slave)
void bond_3ad_adapter_duplex_changed(struct slave *slave)
void bond_3ad_handle_link_change(struct slave *slave, char link)
int bond_3ad_set_carrier(struct bonding *bond)
int bond_3ad_get_active_agg_info(struct bonding *bond, struct ad_info *ad_info)
int bond_3ad_xmit_xor(struct sk_buff *skb, struct net_device *dev)
void bond_3ad_lacpdu_recv(struct sk_buff *skb, struct bonding *bond,
struct slave *slave)
