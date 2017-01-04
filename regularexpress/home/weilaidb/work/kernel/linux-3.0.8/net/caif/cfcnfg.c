#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) container_of(layr, struct cfcnfg, layer)
struct cfcnfg_phyinfo ;
struct cfcnfg ;
static void cfcnfg_linkup_rsp(struct cflayer *layer, u8 channel_id,
enum cfctrl_srv serv, u8 phyid,
struct cflayer *adapt_layer);
static void cfcnfg_linkdestroy_rsp(struct cflayer *layer, u8 channel_id);
static void cfcnfg_reject_rsp(struct cflayer *layer, u8 channel_id,
struct cflayer *adapt_layer);
static void cfctrl_resp_func(void);
static void cfctrl_enum_resp(void);
struct cfcnfg *cfcnfg_create(void)
void cfcnfg_remove(struct cfcnfg *cfg)
static void cfctrl_resp_func(void)
static struct cfcnfg_phyinfo *cfcnfg_get_phyinfo_rcu(struct cfcnfg *cnfg,
u8 phyid)
static void cfctrl_enum_resp(void)
static struct dev_info *cfcnfg_get_phyid(struct cfcnfg *cnfg,
enum cfcnfg_phy_preference phy_pref)
static int cfcnfg_get_id_from_ifi(struct cfcnfg *cnfg, int ifi)
int caif_disconnect_client(struct net *net, struct cflayer *adap_layer)
EXPORT_SYMBOL(caif_disconnect_client);
static void cfcnfg_linkdestroy_rsp(struct cflayer *layer, u8 channel_id)
static const int protohead[CFCTRL_SRV_MASK] = ;
static int caif_connect_req_to_link_param(struct cfcnfg *cnfg,
struct caif_connect_request *s,
struct cfctrl_link_param *l)
int caif_connect_client(struct net *net, struct caif_connect_request *conn_req,
struct cflayer *adap_layer, int *ifindex,
int *proto_head,
int *proto_tail)
EXPORT_SYMBOL(caif_connect_client);
static void cfcnfg_reject_rsp(struct cflayer *layer, u8 channel_id,
struct cflayer *adapt_layer)
static void
cfcnfg_linkup_rsp(struct cflayer *layer, u8 channel_id, enum cfctrl_srv serv,
u8 phyid, struct cflayer *adapt_layer)
void
cfcnfg_add_phy_layer(struct cfcnfg *cnfg, enum cfcnfg_phy_type phy_type,
struct net_device *dev, struct cflayer *phy_layer,
enum cfcnfg_phy_preference pref,
bool fcs, bool stx)
EXPORT_SYMBOL(cfcnfg_add_phy_layer);
int cfcnfg_set_phy_state(struct cfcnfg *cnfg, struct cflayer *phy_layer,
bool up)
EXPORT_SYMBOL(cfcnfg_set_phy_state);
int cfcnfg_del_phy_layer(struct cfcnfg *cnfg, struct cflayer *phy_layer)
EXPORT_SYMBOL(cfcnfg_del_phy_layer);
