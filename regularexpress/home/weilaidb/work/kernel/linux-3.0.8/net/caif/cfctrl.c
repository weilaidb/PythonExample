#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) container_of(layr, struct cfctrl, serv.layer)
#define UTILITY_NAME_LENGTH 16
#define CFPKT_CTRL_PKT_LEN 20
static int handle_loop(struct cfctrl *ctrl,
int cmd, struct cfpkt *pkt)
static int handle_loop(struct cfctrl *ctrl,
int cmd, struct cfpkt *pkt);
static int cfctrl_recv(struct cflayer *layr, struct cfpkt *pkt);
static void cfctrl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid);
struct cflayer *cfctrl_create(void)
void cfctrl_remove(struct cflayer *layer)
static bool param_eq(const struct cfctrl_link_param *p1,
const struct cfctrl_link_param *p2)
static bool cfctrl_req_eq(const struct cfctrl_request_info *r1,
const struct cfctrl_request_info *r2)
static void cfctrl_insert_req(struct cfctrl *ctrl,
struct cfctrl_request_info *req)
static struct cfctrl_request_info *cfctrl_remove_req(struct cfctrl *ctrl,
struct cfctrl_request_info *req)
struct cfctrl_rsp *cfctrl_get_respfuncs(struct cflayer *layer)
static void init_info(struct caif_payload_info *info, struct cfctrl *cfctrl)
void cfctrl_enum_req(struct cflayer *layer, u8 physlinkid)
int cfctrl_linkup_request(struct cflayer *layer,
struct cfctrl_link_param *param,
struct cflayer *user_layer)
int cfctrl_linkdown_req(struct cflayer *layer, u8 channelid,
struct cflayer *client)
int cfctrl_cancel_req(struct cflayer *layr, struct cflayer *adap_layer)
static int cfctrl_recv(struct cflayer *layer, struct cfpkt *pkt)
static void cfctrl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid)
static int handle_loop(struct cfctrl *ctrl, int cmd, struct cfpkt *pkt)
