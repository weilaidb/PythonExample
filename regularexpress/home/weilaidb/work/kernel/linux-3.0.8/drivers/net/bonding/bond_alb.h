#define __BOND_ALB_H__
struct bonding;
struct slave;
#define BOND_ALB_INFO(bond)   ((bond)->alb_info)
#define SLAVE_TLB_INFO(slave) ((slave)->tlb_info)
#define ALB_TIMER_TICKS_PER_SEC	    10
#define BOND_TLB_REBALANCE_INTERVAL 10
#define BOND_ALB_LP_INTERVAL	    1
#define BOND_TLB_REBALANCE_TICKS (BOND_TLB_REBALANCE_INTERVAL \
* ALB_TIMER_TICKS_PER_SEC)
#define BOND_ALB_LP_TICKS (BOND_ALB_LP_INTERVAL \
* ALB_TIMER_TICKS_PER_SEC)
#define TLB_HASH_TABLE_SIZE 256
#define TLB_NULL_INDEX		0xffffffff
#define MAX_LP_BURST		3
#define RLB_HASH_TABLE_SIZE	256
#define RLB_NULL_INDEX		0xffffffff
#define RLB_UPDATE_DELAY	(2*ALB_TIMER_TICKS_PER_SEC)
#define RLB_ARP_BURST_SIZE	2
#define RLB_UPDATE_RETRY	3
#define RLB_PROMISC_TIMEOUT	(10*ALB_TIMER_TICKS_PER_SEC)
struct tlb_client_info ;
struct rlb_client_info ;
struct tlb_slave_info ;
struct alb_bond_info ;
int bond_alb_initialize(struct bonding *bond, int rlb_enabled);
void bond_alb_deinitialize(struct bonding *bond);
int bond_alb_init_slave(struct bonding *bond, struct slave *slave);
void bond_alb_deinit_slave(struct bonding *bond, struct slave *slave);
void bond_alb_handle_link_change(struct bonding *bond, struct slave *slave, char link);
void bond_alb_handle_active_change(struct bonding *bond, struct slave *new_slave);
int bond_alb_xmit(struct sk_buff *skb, struct net_device *bond_dev);
void bond_alb_monitor(struct work_struct *);
int bond_alb_set_mac_address(struct net_device *bond_dev, void *addr);
void bond_alb_clear_vlan(struct bonding *bond, unsigned short vlan_id);
