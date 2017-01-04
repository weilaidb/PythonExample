#define MY_DEVNAME(dev)  ( (dev) ? (dev)->name : "DEVICE UNSPECIFIED" )
typedef struct isdn_x25iface_proto_data  ix25_pdata_t;
static void isdn_x25iface_proto_del( struct concap_proto * );
static int isdn_x25iface_proto_close( struct concap_proto * );
static int isdn_x25iface_proto_restart( struct concap_proto *,
struct net_device *,
struct concap_device_ops *);
static int isdn_x25iface_xmit( struct concap_proto *, struct sk_buff * );
static int isdn_x25iface_receive( struct concap_proto *, struct sk_buff * );
static int isdn_x25iface_connect_ind( struct concap_proto * );
static int isdn_x25iface_disconn_ind( struct concap_proto * );
static struct concap_proto_ops ix25_pops = ;
static void illegal_state_warn( unsigned state, unsigned char firstbyte)
static int pdata_is_bad( ix25_pdata_t * pda )
struct concap_proto * isdn_x25iface_proto_new(void)
;
static int isdn_x25iface_proto_close(struct concap_proto *cprot)
static void isdn_x25iface_proto_del(struct concap_proto *cprot)
static int isdn_x25iface_proto_restart(struct concap_proto *cprot,
struct net_device *ndev,
struct concap_device_ops *dops)
static int isdn_x25iface_receive(struct concap_proto *cprot, struct sk_buff *skb)
static int isdn_x25iface_connect_ind(struct concap_proto *cprot)
static int isdn_x25iface_disconn_ind(struct concap_proto *cprot)
static int isdn_x25iface_xmit(struct concap_proto *cprot, struct sk_buff *skb)
