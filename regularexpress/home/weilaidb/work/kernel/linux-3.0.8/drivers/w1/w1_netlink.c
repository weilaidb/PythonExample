#if defined(CONFIG_W1_CON) && (defined(CONFIG_CONNECTOR) || (defined(CONFIG_CONNECTOR_MODULE) && defined(CONFIG_W1_MODULE)))
void w1_netlink_send(struct w1_master *dev, struct w1_netlink_msg *msg)
static void w1_send_slave(struct w1_master *dev, u64 rn)
static int w1_process_search_command(struct w1_master *dev, struct cn_msg *msg,
unsigned int avail)
static int w1_send_read_reply(struct cn_msg *msg, struct w1_netlink_msg *hdr,
struct w1_netlink_cmd *cmd)
static int w1_process_command_io(struct w1_master *dev, struct cn_msg *msg,
struct w1_netlink_msg *hdr, struct w1_netlink_cmd *cmd)
static int w1_process_command_master(struct w1_master *dev, struct cn_msg *req_msg,
struct w1_netlink_msg *req_hdr, struct w1_netlink_cmd *req_cmd)
static int w1_process_command_slave(struct w1_slave *sl, struct cn_msg *msg,
struct w1_netlink_msg *hdr, struct w1_netlink_cmd *cmd)
static int w1_process_command_root(struct cn_msg *msg, struct w1_netlink_msg *mcmd)
static int w1_netlink_send_error(struct cn_msg *rcmsg, struct w1_netlink_msg *rmsg,
struct w1_netlink_cmd *rcmd, int error)
static void w1_cn_callback(struct cn_msg *msg, struct netlink_skb_parms *nsp)
int w1_init_netlink(void)
void w1_fini_netlink(void)
void w1_netlink_send(struct w1_master *dev, struct w1_netlink_msg *msg)
int w1_init_netlink(void)
void w1_fini_netlink(void)
