#define _NET_BATMAN_ADV_GATEWAY_COMMON_H_
enum gw_modes ;
#define GW_MODE_OFF_NAME	"off"
#define GW_MODE_CLIENT_NAME	"client"
#define GW_MODE_SERVER_NAME	"server"
void gw_bandwidth_to_kbit(uint8_t gw_class, int *down, int *up);
ssize_t gw_bandwidth_set(struct net_device *net_dev, char *buff, size_t count);
