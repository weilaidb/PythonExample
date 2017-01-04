#define __UM_SLIP_H
struct slip_data ;
extern const struct net_user_info slip_user_info;
extern int slip_user_read(int fd, void *buf, int len, struct slip_data *pri);
extern int slip_user_write(int fd, void *buf, int len, struct slip_data *pri);
