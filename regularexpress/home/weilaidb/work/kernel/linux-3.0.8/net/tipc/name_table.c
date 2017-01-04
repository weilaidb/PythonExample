static int tipc_nametbl_size = 1024;
struct sub_seq ;
struct name_seq ;
struct name_table ;
static struct name_table table;
static atomic_t rsv_publ_ok = ATOMIC_INIT(0);
DEFINE_RWLOCK(tipc_nametbl_lock);
static int hash(int x)
static struct publication *publ_create(u32 type, u32 lower, u32 upper,
u32 scope, u32 node, u32 port_ref,
u32 key)
static struct sub_seq *tipc_subseq_alloc(u32 cnt)
static struct name_seq *tipc_nameseq_create(u32 type, struct hlist_head *seq_head)
static struct sub_seq *nameseq_find_subseq(struct name_seq *nseq,
u32 instance)
static u32 nameseq_locate_subseq(struct name_seq *nseq, u32 instance)
static struct publication *tipc_nameseq_insert_publ(struct name_seq *nseq,
u32 type, u32 lower, u32 upper,
u32 scope, u32 node, u32 port, u32 key)
static struct publication *tipc_nameseq_remove_publ(struct name_seq *nseq, u32 inst,
u32 node, u32 ref, u32 key)
static void tipc_nameseq_subscribe(struct name_seq *nseq, struct subscription *s)
static struct name_seq *nametbl_find_seq(u32 type)
;
struct publication *tipc_nametbl_insert_publ(u32 type, u32 lower, u32 upper,
u32 scope, u32 node, u32 port, u32 key)
struct publication *tipc_nametbl_remove_publ(u32 type, u32 lower,
u32 node, u32 ref, u32 key)
u32 tipc_nametbl_translate(u32 type, u32 instance, u32 *destnode)
int tipc_nametbl_mc_translate(u32 type, u32 lower, u32 upper, u32 limit,
struct port_list *dports)
int tipc_nametbl_publish_rsv(u32 ref, unsigned int scope,
struct tipc_name_seq const *seq)
struct publication *tipc_nametbl_publish(u32 type, u32 lower, u32 upper,
u32 scope, u32 port_ref, u32 key)
int tipc_nametbl_withdraw(u32 type, u32 lower, u32 ref, u32 key)
void tipc_nametbl_subscribe(struct subscription *s)
void tipc_nametbl_unsubscribe(struct subscription *s)
static void subseq_list(struct sub_seq *sseq, struct print_buf *buf, u32 depth,
u32 index)
static void nameseq_list(struct name_seq *seq, struct print_buf *buf, u32 depth,
u32 type, u32 lowbound, u32 upbound, u32 index)
static void nametbl_header(struct print_buf *buf, u32 depth)
static void nametbl_list(struct print_buf *buf, u32 depth_info,
u32 type, u32 lowbound, u32 upbound)
#define MAX_NAME_TBL_QUERY 32768
struct sk_buff *tipc_nametbl_get(const void *req_tlv_area, int req_tlv_space)
int tipc_nametbl_init(void)
void tipc_nametbl_stop(void)
