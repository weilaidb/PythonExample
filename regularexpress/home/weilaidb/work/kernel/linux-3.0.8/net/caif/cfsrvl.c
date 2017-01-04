#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define SRVL_CTRL_PKT_SIZE 1
#define SRVL_FLOW_OFF 0x81
#define SRVL_FLOW_ON  0x80
#define SRVL_SET_PIN  0x82
#define SRVL_CTRL_PKT_SIZE 1
#define container_obj(layr) container_of(layr, struct cfsrvl, layer)
static void cfservl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid)
static int cfservl_modemcmd(struct cflayer *layr, enum caif_modemcmd ctrl)
static void cfsrvl_release(struct cflayer *layer)
void cfsrvl_init(struct cfsrvl *service,
u8 channel_id,
struct dev_info *dev_info,
bool supports_flowctrl
)
bool cfsrvl_ready(struct cfsrvl *service, int *err)
u8 cfsrvl_getphyid(struct cflayer *layer)
bool cfsrvl_phyid_match(struct cflayer *layer, int phyid)
void caif_free_client(struct cflayer *adap_layer)
EXPORT_SYMBOL(caif_free_client);
void caif_client_register_refcnt(struct cflayer *adapt_layer,
void (*hold)(struct cflayer *lyr),
void (*put)(struct cflayer *lyr))
EXPORT_SYMBOL(caif_client_register_refcnt);
