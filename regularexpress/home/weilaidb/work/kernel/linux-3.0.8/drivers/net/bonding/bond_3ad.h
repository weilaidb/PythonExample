#define __BOND_3AD_H__
#define PKT_TYPE_LACPDU         cpu_to_be16(ETH_P_SLOW)
#define AD_TIMER_INTERVAL       100
#define MULTICAST_LACPDU_ADDR
#define AD_LACP_SLOW 0
#define AD_LACP_FAST 1
typedef struct mac_addr  __packed mac_addr_t;
enum ;
typedef enum  rx_states_t;
typedef enum  periodic_states_t;
typedef enum  mux_states_t;
typedef enum  tx_states_t;
typedef enum  pdu_type_t;
typedef enum  bond_marker_subtype_t;
typedef enum  ad_timers_t;
typedef struct lacpdu  __packed lacpdu_t;
typedef struct lacpdu_header  __packed lacpdu_header_t;
typedef struct bond_marker  __packed bond_marker_t;
typedef struct bond_marker_header  __packed bond_marker_header_t;
struct slave;
struct bonding;
struct ad_info;
struct port;
typedef struct aggregator  aggregator_t;
struct port_params ;
typedef struct port  port_t;
struct ad_system ;
#define BOND_AD_INFO(bond)   ((bond)->ad_info)
#define SLAVE_AD_INFO(slave) ((slave)->ad_info)
struct ad_bond_info ;
struct ad_slave_info ;
void bond_3ad_initialize(struct bonding *bond, u16 tick_resolution, int lacp_fast);
int  bond_3ad_bind_slave(struct slave *slave);
void bond_3ad_unbind_slave(struct slave *slave);
void bond_3ad_state_machine_handler(struct work_struct *);
void bond_3ad_initiate_agg_selection(struct bonding *bond, int timeout);
void bond_3ad_adapter_speed_changed(struct slave *slave);
void bond_3ad_adapter_duplex_changed(struct slave *slave);
void bond_3ad_handle_link_change(struct slave *slave, char link);
int  bond_3ad_get_active_agg_info(struct bonding *bond, struct ad_info *ad_info);
int bond_3ad_xmit_xor(struct sk_buff *skb, struct net_device *dev);
void bond_3ad_lacpdu_recv(struct sk_buff *skb, struct bonding *bond,
struct slave *slave);
int bond_3ad_set_carrier(struct bonding *bond);
