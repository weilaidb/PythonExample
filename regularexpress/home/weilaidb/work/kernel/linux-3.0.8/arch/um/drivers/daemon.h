#define __DAEMON_H__
#define SWITCH_VERSION 3
struct daemon_data ;
extern const struct net_user_info daemon_user_info;
extern int daemon_user_write(int fd, void *buf, int len,
struct daemon_data *pri);
