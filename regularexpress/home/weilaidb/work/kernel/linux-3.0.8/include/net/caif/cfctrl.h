#define CFCTRL_H_
enum cfctrl_cmd ;
enum cfctrl_srv ;
#define CFCTRL_RSP_BIT 0x20
#define CFCTRL_ERR_BIT 0x10
struct cfctrl_rsp ;
struct cfctrl_link_param ;
struct cfctrl_request_info ;
struct cfctrl ;
void cfctrl_enum_req(struct cflayer *cfctrl, u8 physlinkid);
int cfctrl_linkup_request(struct cflayer *cfctrl,
struct cfctrl_link_param *param,
struct cflayer *user_layer);
int  cfctrl_linkdown_req(struct cflayer *cfctrl, u8 linkid,
struct cflayer *client);
struct cflayer *cfctrl_create(void);
struct cfctrl_rsp *cfctrl_get_respfuncs(struct cflayer *layer);
int cfctrl_cancel_req(struct cflayer *layr, struct cflayer *adap_layer);
void cfctrl_remove(struct cflayer *layr);
