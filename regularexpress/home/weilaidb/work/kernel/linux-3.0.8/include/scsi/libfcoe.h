#define _LIBFCOE_H
#define FCOE_MAX_CMD_LEN	16
#define FCOE_MTU	2158
#define FCOE_CTLR_START_DELAY	2000
#define FCOE_CTRL_SOL_TOV	2000
#define FCOE_CTLR_FCF_LIMIT	20
#define FCOE_CTLR_VN2VN_LOGIN_LIMIT 3
enum fip_state ;
#define FIP_MODE_AUTO		FIP_ST_AUTO
#define FIP_MODE_NON_FIP	FIP_ST_NON_FIP
#define FIP_MODE_FABRIC		FIP_ST_ENABLED
#define FIP_MODE_VN2VN		FIP_ST_VNMP_START
struct fcoe_ctlr ;
struct fcoe_fcf ;
struct fcoe_rport ;
void fcoe_ctlr_init(struct fcoe_ctlr *, enum fip_state);
void fcoe_ctlr_destroy(struct fcoe_ctlr *);
void fcoe_ctlr_link_up(struct fcoe_ctlr *);
int fcoe_ctlr_link_down(struct fcoe_ctlr *);
int fcoe_ctlr_els_send(struct fcoe_ctlr *, struct fc_lport *, struct sk_buff *);
void fcoe_ctlr_recv(struct fcoe_ctlr *, struct sk_buff *);
int fcoe_ctlr_recv_flogi(struct fcoe_ctlr *, struct fc_lport *,
struct fc_frame *);
u64 fcoe_wwn_from_mac(unsigned char mac[], unsigned int, unsigned int);
int fcoe_libfc_config(struct fc_lport *, struct fcoe_ctlr *,
const struct libfc_function_template *, int init_fcp);
u32 fcoe_fc_crc(struct fc_frame *fp);
int fcoe_start_io(struct sk_buff *skb);
static inline bool is_fip_mode(struct fcoe_ctlr *fip)
#define MODULE_ALIAS_FCOE_PCI(ven, dev) \
MODULE_ALIAS("fcoe-pci:"	\
"v" __stringify(ven)	\
"d" __stringify(dev) "sv*sd*bc*sc*i*")
#define FCOE_TRANSPORT_DEFAULT	"fcoe"
struct fcoe_transport ;
struct fcoe_percpu_s ;
struct fcoe_port ;
void fcoe_clean_pending_queue(struct fc_lport *);
void fcoe_check_wait_queue(struct fc_lport *lport, struct sk_buff *skb);
void fcoe_queue_timer(ulong lport);
int fcoe_get_paged_crc_eof(struct sk_buff *skb, int tlen,
struct fcoe_percpu_s *fps);
struct fcoe_netdev_mapping ;
int fcoe_transport_attach(struct fcoe_transport *ft);
int fcoe_transport_detach(struct fcoe_transport *ft);
