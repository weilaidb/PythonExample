#define __DRIVERS_UMCAST_H
struct umcast_data ;
extern const struct net_user_info umcast_user_info;
extern int umcast_user_write(int fd, void *buf, int len,
struct umcast_data *pri);
