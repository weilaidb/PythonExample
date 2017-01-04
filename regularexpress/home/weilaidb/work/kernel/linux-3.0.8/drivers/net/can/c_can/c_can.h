#define C_CAN_H
struct c_can_if_regs ;
struct c_can_regs ;
struct c_can_priv ;
struct net_device *alloc_c_can_dev(void);
void free_c_can_dev(struct net_device *dev);
int register_c_can_dev(struct net_device *dev);
void unregister_c_can_dev(struct net_device *dev);
