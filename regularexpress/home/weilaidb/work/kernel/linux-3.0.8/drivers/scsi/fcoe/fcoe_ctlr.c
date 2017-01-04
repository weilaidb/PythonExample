#define	FCOE_CTLR_MIN_FKA	500
#define	FCOE_CTLR_DEF_FKA	FIP_DEF_FKA
static void fcoe_ctlr_timeout(unsigned long);
static void fcoe_ctlr_timer_work(struct work_struct *);
static void fcoe_ctlr_recv_work(struct work_struct *);
static int fcoe_ctlr_flogi_retry(struct fcoe_ctlr *);
static void fcoe_ctlr_vn_start(struct fcoe_ctlr *);
static int fcoe_ctlr_vn_recv(struct fcoe_ctlr *, struct sk_buff *);
static void fcoe_ctlr_vn_timeout(struct fcoe_ctlr *);
static int fcoe_ctlr_vn_lookup(struct fcoe_ctlr *, u32, u8 *);
static u8 fcoe_all_fcfs[ETH_ALEN] = FIP_ALL_FCF_MACS;
static u8 fcoe_all_enode[ETH_ALEN] = FIP_ALL_ENODE_MACS;
static u8 fcoe_all_vn2vn[ETH_ALEN] = FIP_ALL_VN2VN_MACS;
static u8 fcoe_all_p2p[ETH_ALEN] = FIP_ALL_P2P_MACS;
static const char * const fcoe_ctlr_states[] = ;
static const char *fcoe_ctlr_state(enum fip_state state)
static void fcoe_ctlr_set_state(struct fcoe_ctlr *fip, enum fip_state state)
static inline int fcoe_ctlr_mtu_valid(const struct fcoe_fcf *fcf)
static inline int fcoe_ctlr_fcf_usable(struct fcoe_fcf *fcf)
static void fcoe_ctlr_map_dest(struct fcoe_ctlr *fip)
void fcoe_ctlr_init(struct fcoe_ctlr *fip, enum fip_state mode)
EXPORT_SYMBOL(fcoe_ctlr_init);
static void fcoe_ctlr_reset_fcfs(struct fcoe_ctlr *fip)
void fcoe_ctlr_destroy(struct fcoe_ctlr *fip)
EXPORT_SYMBOL(fcoe_ctlr_destroy);
static void fcoe_ctlr_announce(struct fcoe_ctlr *fip)
static inline u32 fcoe_ctlr_fcoe_size(struct fcoe_ctlr *fip)
static void fcoe_ctlr_solicit(struct fcoe_ctlr *fip, struct fcoe_fcf *fcf)
void fcoe_ctlr_link_up(struct fcoe_ctlr *fip)
EXPORT_SYMBOL(fcoe_ctlr_link_up);
static void fcoe_ctlr_reset(struct fcoe_ctlr *fip)
int fcoe_ctlr_link_down(struct fcoe_ctlr *fip)
EXPORT_SYMBOL(fcoe_ctlr_link_down);
static void fcoe_ctlr_send_keep_alive(struct fcoe_ctlr *fip,
struct fc_lport *lport,
int ports, u8 *sa)
static int fcoe_ctlr_encaps(struct fcoe_ctlr *fip, struct fc_lport *lport,
u8 dtype, struct sk_buff *skb, u32 d_id)
int fcoe_ctlr_els_send(struct fcoe_ctlr *fip, struct fc_lport *lport,
struct sk_buff *skb)
EXPORT_SYMBOL(fcoe_ctlr_els_send);
static unsigned long fcoe_ctlr_age_fcfs(struct fcoe_ctlr *fip)
static int fcoe_ctlr_parse_adv(struct fcoe_ctlr *fip,
struct sk_buff *skb, struct fcoe_fcf *fcf)
static void fcoe_ctlr_recv_adv(struct fcoe_ctlr *fip, struct sk_buff *skb)
static void fcoe_ctlr_recv_els(struct fcoe_ctlr *fip, struct sk_buff *skb)
static void fcoe_ctlr_recv_clr_vlink(struct fcoe_ctlr *fip,
struct fip_header *fh)
void fcoe_ctlr_recv(struct fcoe_ctlr *fip, struct sk_buff *skb)
EXPORT_SYMBOL(fcoe_ctlr_recv);
static int fcoe_ctlr_recv_handler(struct fcoe_ctlr *fip, struct sk_buff *skb)
static struct fcoe_fcf *fcoe_ctlr_select(struct fcoe_ctlr *fip)
static int fcoe_ctlr_flogi_send_locked(struct fcoe_ctlr *fip)
static int fcoe_ctlr_flogi_retry(struct fcoe_ctlr *fip)
static void fcoe_ctlr_flogi_send(struct fcoe_ctlr *fip)
static void fcoe_ctlr_timeout(unsigned long arg)
static void fcoe_ctlr_timer_work(struct work_struct *work)
static void fcoe_ctlr_recv_work(struct work_struct *recv_work)
int fcoe_ctlr_recv_flogi(struct fcoe_ctlr *fip, struct fc_lport *lport,
struct fc_frame *fp)
EXPORT_SYMBOL(fcoe_ctlr_recv_flogi);
u64 fcoe_wwn_from_mac(unsigned char mac[MAX_ADDR_LEN],
unsigned int scheme, unsigned int port)
EXPORT_SYMBOL_GPL(fcoe_wwn_from_mac);
static inline struct fcoe_rport *fcoe_ctlr_rport(struct fc_rport_priv *rdata)
static void fcoe_ctlr_vn_send(struct fcoe_ctlr *fip,
enum fip_vn2vn_subcode sub,
const u8 *dest, size_t min_len)
static void fcoe_ctlr_vn_rport_callback(struct fc_lport *lport,
struct fc_rport_priv *rdata,
enum fc_rport_event event)
static struct fc_rport_operations fcoe_ctlr_vn_rport_ops = ;
static void fcoe_ctlr_disc_stop_locked(struct fc_lport *lport)
static void fcoe_ctlr_disc_stop(struct fc_lport *lport)
static void fcoe_ctlr_disc_stop_final(struct fc_lport *lport)
static void fcoe_ctlr_vn_restart(struct fcoe_ctlr *fip)
static void fcoe_ctlr_vn_start(struct fcoe_ctlr *fip)
static int fcoe_ctlr_vn_parse(struct fcoe_ctlr *fip,
struct sk_buff *skb,
struct fc_rport_priv *rdata)
static void fcoe_ctlr_vn_send_claim(struct fcoe_ctlr *fip)
static void fcoe_ctlr_vn_probe_req(struct fcoe_ctlr *fip,
struct fc_rport_priv *rdata)
static void fcoe_ctlr_vn_probe_reply(struct fcoe_ctlr *fip,
struct fc_rport_priv *rdata)
static void fcoe_ctlr_vn_add(struct fcoe_ctlr *fip, struct fc_rport_priv *new)
static int fcoe_ctlr_vn_lookup(struct fcoe_ctlr *fip, u32 port_id, u8 *mac)
static void fcoe_ctlr_vn_claim_notify(struct fcoe_ctlr *fip,
struct fc_rport_priv *new)
static void fcoe_ctlr_vn_claim_resp(struct fcoe_ctlr *fip,
struct fc_rport_priv *new)
static void fcoe_ctlr_vn_beacon(struct fcoe_ctlr *fip,
struct fc_rport_priv *new)
static unsigned long fcoe_ctlr_vn_age(struct fcoe_ctlr *fip)
static int fcoe_ctlr_vn_recv(struct fcoe_ctlr *fip, struct sk_buff *skb)
static void fcoe_ctlr_disc_recv(struct fc_lport *lport, struct fc_frame *fp)
static void fcoe_ctlr_disc_start(void (*callback)(struct fc_lport *,
enum fc_disc_event),
struct fc_lport *lport)
static void fcoe_ctlr_vn_disc(struct fcoe_ctlr *fip)
static void fcoe_ctlr_vn_timeout(struct fcoe_ctlr *fip)
int fcoe_libfc_config(struct fc_lport *lport, struct fcoe_ctlr *fip,
const struct libfc_function_template *tt, int init_fcp)
EXPORT_SYMBOL_GPL(fcoe_libfc_config);
