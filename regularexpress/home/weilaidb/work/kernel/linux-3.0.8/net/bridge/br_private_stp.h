#define _BR_PRIVATE_STP_H
#define BPDU_TYPE_CONFIG 0
#define BPDU_TYPE_TCN 0x80
#define BR_MIN_HELLO_TIME	(1*HZ)
#define BR_MAX_HELLO_TIME	(10*HZ)
#define BR_MIN_FORWARD_DELAY	(2*HZ)
#define BR_MAX_FORWARD_DELAY	(30*HZ)
#define BR_MIN_MAX_AGE		(6*HZ)
#define BR_MAX_MAX_AGE		(40*HZ)
#define BR_MIN_PATH_COST	1
#define BR_MAX_PATH_COST	65535
struct br_config_bpdu
;
static inline int br_is_designated_port(const struct net_bridge_port *p)
extern void br_become_root_bridge(struct net_bridge *br);
extern void br_config_bpdu_generation(struct net_bridge *);
extern void br_configuration_update(struct net_bridge *);
extern void br_port_state_selection(struct net_bridge *);
extern void br_received_config_bpdu(struct net_bridge_port *p, struct br_config_bpdu *bpdu);
extern void br_received_tcn_bpdu(struct net_bridge_port *p);
extern void br_transmit_config(struct net_bridge_port *p);
extern void br_transmit_tcn(struct net_bridge *br);
extern void br_topology_change_detection(struct net_bridge *br);
extern void br_send_config_bpdu(struct net_bridge_port *, struct br_config_bpdu *);
extern void br_send_tcn_bpdu(struct net_bridge_port *);
