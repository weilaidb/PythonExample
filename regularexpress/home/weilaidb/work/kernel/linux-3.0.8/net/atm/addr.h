#define NET_ATM_ADDR_H
void atm_reset_addr(struct atm_dev *dev, enum atm_addr_type_t type);
int atm_add_addr(struct atm_dev *dev, const struct sockaddr_atmsvc *addr,
enum atm_addr_type_t type);
int atm_del_addr(struct atm_dev *dev, const struct sockaddr_atmsvc *addr,
enum atm_addr_type_t type);
int atm_get_addr(struct atm_dev *dev, struct sockaddr_atmsvc __user *buf,
size_t size, enum atm_addr_type_t type);
