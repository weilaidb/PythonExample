#define _TIPC_MSG_H
#define TIPC_VERSION              2
#define TIPC_CONN_MSG		0
#define TIPC_MCAST_MSG		1
#define TIPC_NAMED_MSG		2
#define TIPC_DIRECT_MSG		3
#define SHORT_H_SIZE              24
#define DIR_MSG_H_SIZE            32
#define LONG_H_SIZE               40
#define MCAST_H_SIZE              44
#define INT_H_SIZE                40
#define MIN_H_SIZE                24
#define MAX_H_SIZE                60
#define MAX_MSG_SIZE (MAX_H_SIZE + TIPC_MAX_USER_MSG_SIZE)
struct tipc_msg ;
static inline u32 msg_word(struct tipc_msg *m, u32 pos)
static inline void msg_set_word(struct tipc_msg *m, u32 w, u32 val)
static inline u32 msg_bits(struct tipc_msg *m, u32 w, u32 pos, u32 mask)
static inline void msg_set_bits(struct tipc_msg *m, u32 w,
u32 pos, u32 mask, u32 val)
static inline void msg_swap_words(struct tipc_msg *msg, u32 a, u32 b)
static inline u32 msg_version(struct tipc_msg *m)
static inline void msg_set_version(struct tipc_msg *m)
static inline u32 msg_user(struct tipc_msg *m)
static inline u32 msg_isdata(struct tipc_msg *m)
static inline void msg_set_user(struct tipc_msg *m, u32 n)
static inline u32 msg_importance(struct tipc_msg *m)
static inline void msg_set_importance(struct tipc_msg *m, u32 i)
static inline u32 msg_hdr_sz(struct tipc_msg *m)
static inline void msg_set_hdr_sz(struct tipc_msg *m, u32 n)
static inline u32 msg_size(struct tipc_msg *m)
static inline u32 msg_data_sz(struct tipc_msg *m)
static inline int msg_non_seq(struct tipc_msg *m)
static inline void msg_set_non_seq(struct tipc_msg *m, u32 n)
static inline int msg_dest_droppable(struct tipc_msg *m)
static inline void msg_set_dest_droppable(struct tipc_msg *m, u32 d)
static inline int msg_src_droppable(struct tipc_msg *m)
static inline void msg_set_src_droppable(struct tipc_msg *m, u32 d)
static inline void msg_set_size(struct tipc_msg *m, u32 sz)
static inline u32 msg_type(struct tipc_msg *m)
static inline void msg_set_type(struct tipc_msg *m, u32 n)
static inline u32 msg_named(struct tipc_msg *m)
static inline u32 msg_mcast(struct tipc_msg *m)
static inline u32 msg_connected(struct tipc_msg *m)
static inline u32 msg_errcode(struct tipc_msg *m)
static inline void msg_set_errcode(struct tipc_msg *m, u32 err)
static inline u32 msg_reroute_cnt(struct tipc_msg *m)
static inline void msg_incr_reroute_cnt(struct tipc_msg *m)
static inline void msg_reset_reroute_cnt(struct tipc_msg *m)
static inline u32 msg_lookup_scope(struct tipc_msg *m)
static inline void msg_set_lookup_scope(struct tipc_msg *m, u32 n)
static inline u32 msg_bcast_ack(struct tipc_msg *m)
static inline void msg_set_bcast_ack(struct tipc_msg *m, u32 n)
static inline u32 msg_ack(struct tipc_msg *m)
static inline void msg_set_ack(struct tipc_msg *m, u32 n)
static inline u32 msg_seqno(struct tipc_msg *m)
static inline void msg_set_seqno(struct tipc_msg *m, u32 n)
static inline u32 msg_destnode_cache(struct tipc_msg *m)
static inline void msg_set_destnode_cache(struct tipc_msg *m, u32 dnode)
static inline u32 msg_prevnode(struct tipc_msg *m)
static inline void msg_set_prevnode(struct tipc_msg *m, u32 a)
static inline u32 msg_origport(struct tipc_msg *m)
static inline void msg_set_origport(struct tipc_msg *m, u32 p)
static inline u32 msg_destport(struct tipc_msg *m)
static inline void msg_set_destport(struct tipc_msg *m, u32 p)
static inline u32 msg_mc_netid(struct tipc_msg *m)
static inline void msg_set_mc_netid(struct tipc_msg *m, u32 p)
static inline int msg_short(struct tipc_msg *m)
static inline u32 msg_orignode(struct tipc_msg *m)
static inline void msg_set_orignode(struct tipc_msg *m, u32 a)
static inline u32 msg_destnode(struct tipc_msg *m)
static inline void msg_set_destnode(struct tipc_msg *m, u32 a)
static inline int msg_is_dest(struct tipc_msg *m, u32 d)
static inline u32 msg_nametype(struct tipc_msg *m)
static inline void msg_set_nametype(struct tipc_msg *m, u32 n)
static inline u32 msg_nameinst(struct tipc_msg *m)
static inline u32 msg_namelower(struct tipc_msg *m)
static inline void msg_set_namelower(struct tipc_msg *m, u32 n)
static inline void msg_set_nameinst(struct tipc_msg *m, u32 n)
static inline u32 msg_nameupper(struct tipc_msg *m)
static inline void msg_set_nameupper(struct tipc_msg *m, u32 n)
static inline unchar *msg_data(struct tipc_msg *m)
static inline struct tipc_msg *msg_get_wrapped(struct tipc_msg *m)
#define  BCAST_PROTOCOL       5
#define  MSG_BUNDLER          6
#define  LINK_PROTOCOL        7
#define  CONN_MANAGER         8
#define  ROUTE_DISTRIBUTOR    9
#define  CHANGEOVER_PROTOCOL  10
#define  NAME_DISTRIBUTOR     11
#define  MSG_FRAGMENTER       12
#define  LINK_CONFIG          13
#define CONN_PROBE        0
#define CONN_PROBE_REPLY  1
#define CONN_ACK          2
#define PUBLICATION       0
#define WITHDRAWAL        1
#define FIRST_FRAGMENT		0
#define FRAGMENT		1
#define LAST_FRAGMENT		2
#define STATE_MSG		0
#define RESET_MSG		1
#define ACTIVATE_MSG		2
#define DUPLICATE_MSG		0
#define ORIGINAL_MSG		1
#define DSC_REQ_MSG		0
#define DSC_RESP_MSG		1
static inline u32 msg_seq_gap(struct tipc_msg *m)
static inline void msg_set_seq_gap(struct tipc_msg *m, u32 n)
static inline u32 msg_dest_domain(struct tipc_msg *m)
static inline void msg_set_dest_domain(struct tipc_msg *m, u32 n)
static inline u32 msg_bcgap_after(struct tipc_msg *m)
static inline void msg_set_bcgap_after(struct tipc_msg *m, u32 n)
static inline u32 msg_bcgap_to(struct tipc_msg *m)
static inline void msg_set_bcgap_to(struct tipc_msg *m, u32 n)
static inline u32 msg_last_bcast(struct tipc_msg *m)
static inline void msg_set_last_bcast(struct tipc_msg *m, u32 n)
static inline u32 msg_fragm_no(struct tipc_msg *m)
static inline void msg_set_fragm_no(struct tipc_msg *m, u32 n)
static inline u32 msg_next_sent(struct tipc_msg *m)
static inline void msg_set_next_sent(struct tipc_msg *m, u32 n)
static inline u32 msg_long_msgno(struct tipc_msg *m)
static inline void msg_set_long_msgno(struct tipc_msg *m, u32 n)
static inline u32 msg_bc_netid(struct tipc_msg *m)
static inline void msg_set_bc_netid(struct tipc_msg *m, u32 id)
static inline u32 msg_link_selector(struct tipc_msg *m)
static inline void msg_set_link_selector(struct tipc_msg *m, u32 n)
static inline u32 msg_session(struct tipc_msg *m)
static inline void msg_set_session(struct tipc_msg *m, u32 n)
static inline u32 msg_probe(struct tipc_msg *m)
static inline void msg_set_probe(struct tipc_msg *m, u32 val)
static inline char msg_net_plane(struct tipc_msg *m)
static inline void msg_set_net_plane(struct tipc_msg *m, char n)
static inline u32 msg_linkprio(struct tipc_msg *m)
static inline void msg_set_linkprio(struct tipc_msg *m, u32 n)
static inline u32 msg_bearer_id(struct tipc_msg *m)
static inline void msg_set_bearer_id(struct tipc_msg *m, u32 n)
static inline u32 msg_redundant_link(struct tipc_msg *m)
static inline void msg_set_redundant_link(struct tipc_msg *m, u32 r)
static inline u32 msg_msgcnt(struct tipc_msg *m)
static inline void msg_set_msgcnt(struct tipc_msg *m, u32 n)
static inline u32 msg_bcast_tag(struct tipc_msg *m)
static inline void msg_set_bcast_tag(struct tipc_msg *m, u32 n)
static inline u32 msg_max_pkt(struct tipc_msg *m)
static inline void msg_set_max_pkt(struct tipc_msg *m, u32 n)
static inline u32 msg_link_tolerance(struct tipc_msg *m)
static inline void msg_set_link_tolerance(struct tipc_msg *m, u32 n)
u32 tipc_msg_tot_importance(struct tipc_msg *m);
void tipc_msg_init(struct tipc_msg *m, u32 user, u32 type,
u32 hsize, u32 destnode);
int tipc_msg_build(struct tipc_msg *hdr, struct iovec const *msg_sect,
u32 num_sect, unsigned int total_len,
int max_size, int usrmem, struct sk_buff **buf);
static inline void msg_set_media_addr(struct tipc_msg *m, struct tipc_media_addr *a)
static inline void msg_get_media_addr(struct tipc_msg *m, struct tipc_media_addr *a)
