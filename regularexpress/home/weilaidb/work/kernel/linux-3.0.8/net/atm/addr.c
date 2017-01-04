static int check_addr(const struct sockaddr_atmsvc *addr)
static int identical(const struct sockaddr_atmsvc *a, const struct sockaddr_atmsvc *b)
static void notify_sigd(const struct atm_dev *dev)
void atm_reset_addr(struct atm_dev *dev, enum atm_addr_type_t atype)
int atm_add_addr(struct atm_dev *dev, const struct sockaddr_atmsvc *addr,
enum atm_addr_type_t atype)
int atm_del_addr(struct atm_dev *dev, const struct sockaddr_atmsvc *addr,
enum atm_addr_type_t atype)
int atm_get_addr(struct atm_dev *dev, struct sockaddr_atmsvc __user * buf,
size_t size, enum atm_addr_type_t atype)
