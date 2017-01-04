#define __UM_SLIRP_H
#define SLIRP_MAX_ARGS 100
struct arg_list_dummy_wrapper ;
struct slirp_data ;
extern const struct net_user_info slirp_user_info;
extern int slirp_user_read(int fd, void *buf, int len, struct slirp_data *pri);
extern int slirp_user_write(int fd, void *buf, int len,
struct slirp_data *pri);
