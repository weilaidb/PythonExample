static void kbit_to_gw_bandwidth(int down, int up, long *gw_srv_class)
void gw_bandwidth_to_kbit(uint8_t gw_srv_class, int *down, int *up)
static bool parse_gw_bandwidth(struct net_device *net_dev, char *buff,
long *up, long *down)
ssize_t gw_bandwidth_set(struct net_device *net_dev, char *buff, size_t count)
