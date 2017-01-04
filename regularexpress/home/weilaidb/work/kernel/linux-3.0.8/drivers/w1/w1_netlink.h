#define __W1_NETLINK_H
enum w1_netlink_message_types ;
struct w1_netlink_msg
;
enum w1_commands ;
struct w1_netlink_cmd
;
void w1_netlink_send(struct w1_master *, struct w1_netlink_msg *);
int w1_init_netlink(void);
void w1_fini_netlink(void);
