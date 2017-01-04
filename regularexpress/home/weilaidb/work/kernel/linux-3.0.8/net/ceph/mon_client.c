static const struct ceph_connection_operations mon_con_ops;
static int __validate_auth(struct ceph_mon_client *monc);
struct ceph_monmap *ceph_monmap_decode(void *p, void *end)
int ceph_monmap_contains(struct ceph_monmap *m, struct ceph_entity_addr *addr)
static void __send_prepared_auth_request(struct ceph_mon_client *monc, int len)
static void __close_session(struct ceph_mon_client *monc)
static int __open_session(struct ceph_mon_client *monc)
static bool __sub_expired(struct ceph_mon_client *monc)
static void __schedule_delayed(struct ceph_mon_client *monc)
static void __send_subscribe(struct ceph_mon_client *monc)
static void handle_subscribe_ack(struct ceph_mon_client *monc,
struct ceph_msg *msg)
int ceph_monc_got_mdsmap(struct ceph_mon_client *monc, u32 got)
EXPORT_SYMBOL(ceph_monc_got_mdsmap);
int ceph_monc_got_osdmap(struct ceph_mon_client *monc, u32 got)
void ceph_monc_request_next_osdmap(struct ceph_mon_client *monc)
int ceph_monc_open_session(struct ceph_mon_client *monc)
EXPORT_SYMBOL(ceph_monc_open_session);
static void ceph_monc_handle_map(struct ceph_mon_client *monc,
struct ceph_msg *msg)
static struct ceph_mon_generic_request *__lookup_generic_req(
struct ceph_mon_client *monc, u64 tid)
static void __insert_generic_request(struct ceph_mon_client *monc,
struct ceph_mon_generic_request *new)
static void release_generic_request(struct kref *kref)
static void put_generic_request(struct ceph_mon_generic_request *req)
static void get_generic_request(struct ceph_mon_generic_request *req)
static struct ceph_msg *get_generic_reply(struct ceph_connection *con,
struct ceph_msg_header *hdr,
int *skip)
static int do_generic_request(struct ceph_mon_client *monc,
struct ceph_mon_generic_request *req)
static void handle_statfs_reply(struct ceph_mon_client *monc,
struct ceph_msg *msg)
int ceph_monc_do_statfs(struct ceph_mon_client *monc, struct ceph_statfs *buf)
EXPORT_SYMBOL(ceph_monc_do_statfs);
static int get_poolop_reply_buf(const char *src, size_t src_len,
char *dst, size_t dst_len)
static void handle_poolop_reply(struct ceph_mon_client *monc,
struct ceph_msg *msg)
int ceph_monc_do_poolop(struct ceph_mon_client *monc, u32 op,
u32 pool, u64 snapid,
char *buf, int len)
int ceph_monc_create_snapid(struct ceph_mon_client *monc,
u32 pool, u64 *snapid)
EXPORT_SYMBOL(ceph_monc_create_snapid);
int ceph_monc_delete_snapid(struct ceph_mon_client *monc,
u32 pool, u64 snapid)
static void __resend_generic_request(struct ceph_mon_client *monc)
static void delayed_work(struct work_struct *work)
static int build_initial_monmap(struct ceph_mon_client *monc)
int ceph_monc_init(struct ceph_mon_client *monc, struct ceph_client *cl)
EXPORT_SYMBOL(ceph_monc_init);
void ceph_monc_stop(struct ceph_mon_client *monc)
EXPORT_SYMBOL(ceph_monc_stop);
static void handle_auth_reply(struct ceph_mon_client *monc,
struct ceph_msg *msg)
static int __validate_auth(struct ceph_mon_client *monc)
int ceph_monc_validate_auth(struct ceph_mon_client *monc)
EXPORT_SYMBOL(ceph_monc_validate_auth);
static void dispatch(struct ceph_connection *con, struct ceph_msg *msg)
static struct ceph_msg *mon_alloc_msg(struct ceph_connection *con,
struct ceph_msg_header *hdr,
int *skip)
static void mon_fault(struct ceph_connection *con)
static const struct ceph_connection_operations mon_con_ops = ;
