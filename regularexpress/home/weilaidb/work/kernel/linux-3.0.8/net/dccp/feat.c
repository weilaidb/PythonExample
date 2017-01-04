unsigned long	sysctl_dccp_sequence_window __read_mostly = 100;
int		sysctl_dccp_rx_ccid	    __read_mostly = 2,
sysctl_dccp_tx_ccid	    __read_mostly = 2;
static int dccp_hdlr_ccid(struct sock *sk, u64 ccid, bool rx)
static int dccp_hdlr_seq_win(struct sock *sk, u64 seq_win, bool rx)
static int dccp_hdlr_ack_ratio(struct sock *sk, u64 ratio, bool rx)
static int dccp_hdlr_ackvec(struct sock *sk, u64 enable, bool rx)
static int dccp_hdlr_ndp(struct sock *sk, u64 enable, bool rx)
static int dccp_hdlr_min_cscov(struct sock *sk, u64 cscov, bool rx)
static const struct  dccp_feat_table[] = ;
#define DCCP_FEAT_SUPPORTED_MAX		ARRAY_SIZE(dccp_feat_table)
static int dccp_feat_index(u8 feat_num)
static u8 dccp_feat_type(u8 feat_num)
static int dccp_feat_default_value(u8 feat_num)
static const char *dccp_feat_fname(const u8 feat)
static const char *const dccp_feat_sname[] = ;
static const char *dccp_feat_oname(const u8 opt)
static void dccp_feat_printval(u8 feat_num, dccp_feat_val const *val)
static void dccp_feat_printvals(u8 feat_num, u8 *list, u8 len)
static void dccp_feat_print_entry(struct dccp_feat_entry const *entry)
#define dccp_feat_print_opt(opt, feat, val, len, mandatory)	do  while (0)
#define dccp_feat_print_fnlist(fn_list)
#define dccp_feat_print_opt(opt, feat, val, len, mandatory)
#define dccp_feat_print_fnlist(fn_list)
static int __dccp_feat_activate(struct sock *sk, const int idx,
const bool is_local, dccp_feat_val const *fval)
static inline int dccp_feat_must_be_understood(u8 feat_num)
static int dccp_feat_clone_sp_val(dccp_feat_val *fval, u8 const *val, u8 len)
static void dccp_feat_val_destructor(u8 feat_num, dccp_feat_val *val)
static struct dccp_feat_entry *
dccp_feat_clone_entry(struct dccp_feat_entry const *original)
static void dccp_feat_entry_destructor(struct dccp_feat_entry *entry)
static struct dccp_feat_entry *dccp_feat_list_lookup(struct list_head *fn_list,
u8 feat_num, bool is_local)
static struct dccp_feat_entry *
dccp_feat_entry_new(struct list_head *head, u8 feat, bool local)
static int dccp_feat_push_change(struct list_head *fn_list, u8 feat, u8 local,
u8 mandatory, dccp_feat_val *fval)
static int dccp_feat_push_confirm(struct list_head *fn_list, u8 feat, u8 local,
dccp_feat_val *fval)
static int dccp_push_empty_confirm(struct list_head *fn_list, u8 feat, u8 local)
static inline void dccp_feat_list_pop(struct dccp_feat_entry *entry)
void dccp_feat_list_purge(struct list_head *fn_list)
EXPORT_SYMBOL_GPL(dccp_feat_list_purge);
int dccp_feat_clone_list(struct list_head const *from, struct list_head *to)
static u8 dccp_feat_valid_nn_length(u8 feat_num)
static u8 dccp_feat_is_valid_nn_val(u8 feat_num, u64 val)
static u8 dccp_feat_is_valid_sp_val(u8 feat_num, u8 val)
static u8 dccp_feat_sp_list_ok(u8 feat_num, u8 const *sp_list, u8 sp_len)
int dccp_feat_insert_opts(struct dccp_sock *dp, struct dccp_request_sock *dreq,
struct sk_buff *skb)
static int __feat_register_nn(struct list_head *fn, u8 feat,
u8 mandatory, u64 nn_val)
static int __feat_register_sp(struct list_head *fn, u8 feat, u8 is_local,
u8 mandatory, u8 const *sp_val, u8 sp_len)
int dccp_feat_register_sp(struct sock *sk, u8 feat, u8 is_local,
u8 const *list, u8 len)
static const struct ccid_dependency *dccp_feat_ccid_deps(u8 ccid, bool is_local)
static int dccp_feat_propagate_ccid(struct list_head *fn, u8 id, bool is_local)
int dccp_feat_finalise_settings(struct dccp_sock *dp)
int dccp_feat_server_ccid_dependencies(struct dccp_request_sock *dreq)
static int dccp_feat_preflist_match(u8 *servlist, u8 slen, u8 *clilist, u8 clen)
static u8 dccp_feat_prefer(u8 preferred_value, u8 *array, u8 array_len)
static int dccp_feat_reconcile(dccp_feat_val *fv, u8 *arr, u8 len,
bool is_server, bool reorder)
static u8 dccp_feat_change_recv(struct list_head *fn, u8 is_mandatory, u8 opt,
u8 feat, u8 *val, u8 len, const bool server)
static u8 dccp_feat_confirm_recv(struct list_head *fn, u8 is_mandatory, u8 opt,
u8 feat, u8 *val, u8 len, const bool server)
int dccp_feat_parse_options(struct sock *sk, struct dccp_request_sock *dreq,
u8 mandatory, u8 opt, u8 feat, u8 *val, u8 len)
int dccp_feat_init(struct sock *sk)
int dccp_feat_activate_values(struct sock *sk, struct list_head *fn_list)
