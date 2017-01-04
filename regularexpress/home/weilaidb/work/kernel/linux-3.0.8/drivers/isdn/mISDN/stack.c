static u_int	*debug;
static inline void
_queue_message(struct mISDNstack *st, struct sk_buff *skb)
static int
mISDN_queue_message(struct mISDNchannel *ch, struct sk_buff *skb)
static struct mISDNchannel *
get_channel4id(struct mISDNstack *st, u_int id)
static void
send_socklist(struct mISDN_sock_list *sl, struct sk_buff *skb)
static void
send_layer2(struct mISDNstack *st, struct sk_buff *skb)
static inline int
send_msg_to_layer(struct mISDNstack *st, struct sk_buff *skb)
static void
do_clear_stack(struct mISDNstack *st)
static int
mISDNStackd(void *data)
static int
l1_receive(struct mISDNchannel *ch, struct sk_buff *skb)
void
set_channel_address(struct mISDNchannel *ch, u_int sapi, u_int tei)
void
__add_layer2(struct mISDNchannel *ch, struct mISDNstack *st)
void
add_layer2(struct mISDNchannel *ch, struct mISDNstack *st)
static int
st_own_ctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
int
create_stack(struct mISDNdevice *dev)
int
connect_layer1(struct mISDNdevice *dev, struct mISDNchannel *ch,
u_int protocol, struct sockaddr_mISDN *adr)
int
connect_Bstack(struct mISDNdevice *dev, struct mISDNchannel *ch,
u_int protocol, struct sockaddr_mISDN *adr)
int
create_l2entity(struct mISDNdevice *dev, struct mISDNchannel *ch,
u_int protocol, struct sockaddr_mISDN *adr)
void
delete_channel(struct mISDNchannel *ch)
void
delete_stack(struct mISDNdevice *dev)
void
mISDN_initstack(u_int *dp)
